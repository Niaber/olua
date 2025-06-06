> [English(Translated by ChatGPT)](./README.md) | [中文](./README_zh.md)

> olua is a code generation-based Lua binding library. It can generate Lua binding code for C++ classes, enums, lambda functions, operator functions, instantiated templates, etc. You can customize the generated details, such as inserting code before and after function calls, generating code blocks with exception handling, creating iterators, generating [Lua comments](https://luals.github.io), and more.

### Usage Examples

- [clang](https://github.com/zhongfq/lua-clang)
- [cocoslua](https://github.com/zhongfq/cocos-lua)
- [c++17 filesystem](https://github.com/zhongfq/lua-filesystem)
- [openxlsx](https://github.com/zhongfq/lua-openxlsx)
- [pugixml](https://github.com/zhongfq/lua-pugixml)
- [luacmake](https://github.com/zhongfq/luacmake)

#### Creation

Create a new directory to store the configuration and olua script with the following structure:

```
tree -L 2 .
.
├── build.lua
└── olua -> git@github.com:zhongfq/olua.git
```

#### Clang Parameters Configuration

```lua
clang {
    '-DOLUA_DEBUG',
    '-Isrc',
    '-I../common',
    '-I../..',
}
```

#### Build Script

```lua
require "olua"

OLUA_AUTO_EXPORT_PARENT = true

clang {
    'std=c++17'
}

module "example"

output_dir "src"

headers [[
#include "Example.h"
#include "xlua.h"
]]

include "../common/lua-object.lua"

typeconf "example::Hello"
```

#### Generation

Once the required classes for export are configured, you can run the following command to export the bindings:

```bash
lua build.lua
```

### Optional Configurations

You can adjust the scanning behavior by setting variables in the `build.lua` file:

- `olua.AUTO_BUILD`: Default `true`. Automatically exports the binding code after scanning.
- `olua.AUTO_GEN_PROP`: Default `true`. Automatically generates `name` and `visible` properties for `getName` and `isVisible`.
- `olua.AUTO_EXPORT_PARENT`: Default `false`. Automatically exports the parent class if it is not explicitly specified using `typeconf`.
- `olua.ENABLE_DEPRECATED`: Default `false`. Exports deprecated methods or variables.
- `olua.ENABLE_WITH_UNDERSCORE`: Default `false`. Exports variables or methods starting with `_`.
- `olua.MAX_VARIADIC_ARGS`: Default 16. Specifies the maximum number of arguments for generating overloaded methods.
- `olua.ENABLE_EXCEPTION`: Default `false`. Generates code with exception handling.
- `olua.CAPTURE_MAINTHREAD`: Default `false`. Captures the `L` main thread.
- `olua.PARSE_ALL_COMMENTS`: Default `false`. Parses all comments.

### Configuration Directives

#### module

Specifies the module name, which is also part of the exported file name.

```lua
module "example"
```

Exported information:

- Exported file names: `lua_example.h` and `lua_example.cpp`
- Module function: `luaopen_example`

#### output_dir

Specifies the directory for the exported files, which can be either an absolute path or a relative path.

```lua
output_dir '../../src'
```

#### headers

Specifies the required header files. These are prerequisites for successful compilation.

```lua
headers [[
#include "lua-bindings/lua_conv.h"
#include "lua-bindings/lua_conv_manual.h"
#include "cclua/xlua.h"
#include "Example.h"
]]
```

#### codeblock

If handwritten code needs to be included, it can be specified using `codeblock`. This code is copied as-is into the exported file.

```lua
codeblock [[
static const std::string makeScheduleCallbackTag(const std::string &key)
{
    return "schedule." + key;
}]]
```

#### luaopen

Inserts code into the `luaopen` function.

```lua
module 'example'

luaopen 'printf("hello luaopen!");'
```

Generated code:

```c++
static int luaopen_example(lua_State *L)
{
    olua_require(L, "Hello", luaopen_Hello);
    ...
    printf("hello luaopen!");
    return 1;
}
```

#### api_dir

Specifies the directory for the generated [Lua annotation API](https://luals.github.io).

```lua
api_dir '../../addons/example'
```

#### entry

Specifies the class returned by the `luaopen` function.

```lua
entry 'example::Hello'
```

Generated code:

```c++
OLUA_LIB int luaopen_example(lua_State *L)
{
    olua_require(L, ".olua.module.example",  _olua_module_example);
    if (!olua_getclass(L, "example.Hello")) {
        luaL_error(L, "class not found: example::Hello");
    }
    return 1;
}
```

#### exclude_type

Specifies types that should not be exported. If a type is excluded, any methods or variables involving this type are also ignored.

```lua
-- exclude example::Command and example::Command *
exclude_type 'example::Command'

-- exclude example::Command * and example::Command **
exclude_type 'example::Command *'
```

#### import

Imports another configuration file.

```lua
import 'olua/lua-types.lua'
```

#### luacls

Customizes the Lua class name generation function.

```lua
luacls(function (cppname)
    return string.gsub(cppname, "::", ".")
end)
```

#### macro

`macro` is typically used for conditional compilation.

```lua
macro '#ifdef CCLUA_BUILD_EXAMPLE'
typeconf "Object"
macro '#endif'
```

Code generated for `Object` will be wrapped with `CCLUA_BUILD_EXAMPLE`.

```c++
#ifdef CCLUA_BUILD_EXAMPLE
// Code generated for Object
#endif
```

#### typedef

The `typedef` directive defines a type, usually when you've manually implemented the type's convertor. It links the type with the configuration through `typedef`.

##### Syntax

```lua
typedef 'ClassName'
    [.luacls]
    [.conv]
    [.packable]
    [.packvars]
    [.smartptr]
    [.override]
    [.default]
    [.luatype]
    [.from_string]
    [.from_table]
```

##### .luacls

Specifies the Lua class name.

##### .conv

Specifies the converter. If the type or converter is not explicitly declared, the default is `olua_$$_ClassName`.

##### .packable

Indicates whether the type supports `@pack` and `@unpack`.

##### .packvars

Specifies how many member variables the type comprises.

##### .smartptr

Specifies whether the type is a smart pointer. If true, for example, `std::shared_ptr<Node *>` is treated as a whole rather than as a template container.

##### .override

Replaces existing type information.

##### .default

Specifies the default value for the type.

##### .luatype

Specifies the Lua type.

##### .from_string

Indicates whether the class's constructor supports initialization from a string. Defaults to `false`.

Example:

```c++
static int _olua_fun_std_filesystem_ls$1(lua_State *L)
{
    try {
        olua_startinvoke(L);

        std::filesystem::path *arg1;       /** dir */
        std::filesystem::path arg1_from_string;       /** dir */
        bool arg2 = false;       /** recursive */

        if (olua_isstring(L, 1)) {
            olua_check_string(L, 1, &arg1_from_string);
            arg1 = &arg1_from_string;
        } else {
            olua_check_object(L, 1, &arg1, "fs.path");
        }
        olua_check_bool(L, 2, &arg2);

        // @extend(fs::fs_extend) static olua_Return ls(lua_State *L, std::filesystem::path dir, @optional bool recursive)
        olua_Return ret = fs::fs_extend::ls(L, *arg1, arg2);

        olua_endinvoke(L);

        return (int)ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::ls(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}
```

##### .from_table

Indicates whether instances of the class can be created using a table. Defaults to `false`.

Example:

```c++
OLUA_LIB void olua_check_table(lua_State *L, int idx, example::Point *value)
{
    float arg1 = 0;       /** x */
    float arg2 = 0;       /** y */

    olua_getfield(L, idx, "x");
    olua_check_number(L, -1, &arg1);
    value->x = arg1;
    lua_pop(L, 1);

    olua_getfield(L, idx, "y");
    olua_check_number(L, -1, &arg2);
    value->y = arg2;
    lua_pop(L, 1);
}

static int _olua_fun_example_Point___add$1(lua_State *L)
{
    olua_startinvoke(L);

    example::Point *self = nullptr;
    example::Point *arg1;       /** p */
    example::Point arg1_from_table;       /** p */

    olua_to_object(L, 1, &self, "example.Point");
    if (olua_istable(L, 2)) {
        olua_check_table(L, 2, &arg1_from_table);
        arg1 = &arg1_from_table;
    } else {
        olua_check_object(L, 2, &arg1, "example.Point");
    }

    // @operator(operator+) example::Point operator+(const example::Point &p)
    example::Point ret = (*self) + (*arg1);
    int num_ret = olua_copy_object(L, ret, "example.Point");

    olua_endinvoke(L);

    return num_ret;
}
```

##### Examples

```lua
typedef 'example::vector'

typedef 'example::Color'
    .packable 'true'
    .packvars '4'

typedef 'Uint'
    .conv 'olua_$$_integer'

typedef 'Uint *'
    .conv 'olua_$$_array'
    .luacls 'olua.uint'
```

#### typeconf

`typeconf` is used to specify the export of a class or enum, including static methods, static variables, object methods, and object variables. It also generates `typedef` information based on the scanned data, equivalent to:

```lua
-- C++ object
typedef 'Object'
    .conv 'olua_$$_object'
    .luacls 'Object'

-- Enum
typedef 'Object'
    .conv 'olua_$$_enum'
    .luacls 'Object'
```

##### Syntax

```lua
typeconf 'ClassName'
    [.codeblock]
    [.luaname]
    [.supercls]
    [.packable]
    [.packvars]
    [.luaopen]
    [.indexerror]
    [.from_string]
    [.from_table]
    [.exclude]
    [.include]
    [.macro]
    [.iterator]
        [.once]
    [.extend]
    [.var]
        [.attr]
        [.index]
        [.tag_scope]
        [.tag_store]
        [.tag_maker]
        [.tag_mode]
        [.tag_usepool]
        [.insert_before]
        [.insert_after]
        [.insert_cbefore]
        [.insert_cafter]
    [.func]
        [.body]
        [.inst]
        [.luafn]
        [.tag_scope]
        [.tag_store]
        [.tag_maker]
        [.tag_mode]
        [.tag_usepool]
        [.insert_before]
        [.insert_after]
        [.insert_cbefore]
        [.insert_cafter]
        [.ret]
        [.arg1...N]
    [.prop]
        [.get]
        [.set]
```

##### .codeblock

Specifies handwritten code for export.

```lua
typeconf 'Object'
    .codeblock [[
        static std::string makeForeachTag(int value)
        {
            return "foreach" + std::to_string(value);
        }
    ]]
```

##### .luaname

Customizes the Lua name for methods or variables.

```lua
typeconf 'Object'
    .luaname(function (name)
        if name == 'print' then
            name = 'dump'
        end
        return name
    end)
```

```c++
static int luaopen_Object(lua_State *L)
{
    oluacls_class<Object>(L, "Object");
    oluacls_func(L, "dump", _Hello_print);
    ...
    return 1;
}
```

##### .supercls

Specifies the parent class name. Defaults to `nil` and is determined by the export tool based on scanned data.

```lua
typeconf 'Hello'
    .supercls 'Object'
```

##### .packable

Indicates that this class supports `@pack` and `@unpack`. Automatically generates the following functions:

```c++
OLUA_LIB void olua_pack_object(lua_State *L, int idx, Object *value);
OLUA_LIB int olua_unpack_object(lua_State *L, const Object *value);
OLUA_LIB bool olua_canpack_object(lua_State *L, int idx, const Object *);
```

##### .packvars

Specifies the number of member variables for this type. If set, you must manually provide the above functions.

##### .luaopen

Inserts code into the `luaopen_Hello` function.

```lua
typeconf 'Hello'
    .luaopen 'printf("hello luaopen!");'
```

```c++
static int luaopen_Hello(lua_State *L)
{
    oluacls_class<Hello, Object>("Hello");
    ...
    printf("hello luaopen!");
    return 1;
}
```

##### .indexerror

Specifies the accessibility of class properties.

```lua
typeconf 'Object'
    .indexerror 'rw'
```

- `r`: Throws an error when accessing non-existent properties.
- `w`: Throws an error when writing new properties.

##### .from_string

Indicates whether the class constructor supports string initialization. Defaults to `false`.

```lua
typeconf "std::filesystem::path"
    .extend "fs::path_extend"
    .from_string "true"
    .iterator "std::filesystem::path::iterator"
```

##### .from_table

Indicates whether the class supports creating instances using a table. Defaults to `false`.

##### .exclude

Exports all methods and variables by default, except those specified.

```lua
typeconf 'Object'
    .exclude 'visible'
    .exclude 'retain'
```

Supports wildcard patterns: `.exclude '^m_.*'`

##### .include

Exports no methods and variables by default, except those specified.

```lua
typeconf 'Object'
    .include 'visible'
    .include 'retain'
```

##### .macro

Specifies methods that should be conditionally compiled using macros.

```lua
typeconf 'Object'
    .macro '#ifdef CCLUA_OS_ANDROID'
    .func 'pay'
    .macro '#endif'
```

```c++
#ifdef CCLUA_OS_ANDROID
static _Object_pay(lua_State *L)
{
    ...
    return 0;
}
#endif

static int luaopen_Object(lua_State *L)
{
    oluacls_class<Object>(L, "Object");
#ifdef CCLUA_OS_ANDROID
    oluacls_func("pay", _Object_pay);
#endif
    ...
    return 1;
}
```

##### .iterator

Generates an iterator.

```lua
typeconf "std::filesystem::path"
    .iterator "std::filesystem::path::iterator"
```

```c++
static int _olua_fun_std_filesystem_path___pairs(lua_State *L)
{
    try {
        olua_startinvoke(L);
        auto self = olua_toobj<std::filesystem::path>(L, 1);
        int ret = olua_pairs<std::filesystem::path, std::filesystem::path::iterator>(L, self, false);
        olua_endinvoke(L);
        return ret;
    } catch (std::exception &e) {
        lua_pushfstring(L, "std::filesystem::path::__pairs(): %s", e.what());
        luaL_error(L, olua_tostring(L, -1));
        return 0;
    }
}
```

##### .extend

Extends the specified class.

```lua
typeconf 'Object'
    .extend 'ObjectExtend'
```

Merges all static methods of `ObjectExtend` into `Object`.

##### .var

`.ret` and `.arg1...N` provide details on how to handle return values and arguments during function export. For detailed usage instructions, refer to [**Parameter Tags**](#Parameter-Tags).

`.insert_before`, `.insert_after`, `.insert_cbefore`, and `.insert_cafter` specify code insertion points during function execution. For detailed usage, refer to [**Code Insertion**](#Code-Insertion).

`.tag_scope`, `.tag_store`, `.tag_maker`, `.tag_mode`, and `.tag_usepool` define how to configure callback functions. For detailed instructions, refer to [**Callback Function Configuration**](#Callback-Function-Configuration).

##### .func

Defines a method.

```lua
typeconf 'Object'
    .func 'dump'
        .body [[
            printf("call dump!");
            return 0;
        ]]
```

```c++
...
static int _Object_dump(lua_State *L)
{
    printf("call dump!");
    return 0;
}
...

static int luaopen_Object(lua_State *L)
{
    oluacls_class<Object>(L, "Object");
    oluacls_func(L, "dump", _Object_dump);
    ...
    return 1;
}
```

`.inst` Instantiate the template function.

```lua
typeconf "OpenXLSX::XLQuery"
    .func "setParam"
        .inst "setParamString<std::string>"
        .inst "setParamInt<uint64_t>"
        .inst "setParamNumber<double>"
        .inst "setParamBool<bool>"
    .func "getParam"
        .inst "getParamString<std::string>"
        .inst "getParamInt<uint64_t>"
        .inst "getParamNumber<double>"
        .inst "getParamBool<bool>"
```

`.ret` and `.arg1...N` provide details on how to handle return values and arguments during function export. For detailed usage instructions, refer to [**Parameter Tags**](#Parameter-Tags).

`.insert_before`, `.insert_after`, `.insert_cbefore`, and `.insert_cafter` specify code insertion points during function execution. For detailed usage, refer to [**Code Insertion**](#Code-Insertion).

`.tag_scope`, `.tag_store`, `.tag_maker`, `.tag_mode`, and `.tag_usepool` define how to configure callback functions. For detailed instructions, refer to [**Callback Function Configuration**](#Callback-Function-Configuration).

##### .prop

Defines a property.

```lua
typeconf 'Object'
    .prop 'visible'
        .get 'bool isVisible()'
    .prop 'y'
        .get 'int getY()'
        .set 'void setY(int value)'
    .prop 'z'
        .get [[
            Object *obj = olua_toobj<Object>(L, 1);
            int ret = self->getZ();
            lua_pushinteger(L, ret);
            return 1;
        ]]
        .set [[
            Object *obj = olua_toobj<Object>(L, 1);
            int arg1 = (int)olua_checkinteger(L, 2);
            self->setZ(arg1);
            return 0;
        ]]
```

```c++
...
static int _Object_get_z(lua_State *L)
{
    Object *obj = olua_toobj<Object>(L, 1);
    int ret = self->getZ();
    lua_pushinteger(L, ret);
    return 1;
}
...

static int luaopen_Object(lua_State *L)
{
    oluacls_class<Object>(L, "Object");
    oluacls_prop(L, "visible", _Object_isVisible, NULL);
    oluacls_prop(L, "y", _Object_getY, _Object_setY);
    oluacls_prop(L, "z", _Object_get_z, _Object_set_z);
    ...
    return 1;
}
```

#### typeonly

Exports only type information without any methods or variables, equivalent to:

```lua
typeconf 'Object'
    .exclude '*'
```

#### Code Insertion

Allows code insertion at specific points during export. There are four insertion points:

- `insert_before`: Before the function call.
- `insert_after`: After the function call.
- `insert_cbefore`: Before the callback function call.
- `insert_cafter`: After the callback function call.

```lua
typeconf 'Object'
    .func 'pay'
        .insert_before [[
            printf("hello before!");
        ]]
        .insert_after [[
            printf("hello after!");
        ]]
        .insert_cbefore [[
            printf("hello callback_before!");
        ]]
        .insert_cafter [[
            printf("hello callback_after!");
        ]]
```

Generated code:

```c++
static int _Object_pay(lua_State *L)
{
    ...
    printf("hello before!");
    self->pay([cb_store, cb_name, cb_ctx]() {
        ...
        printf("hello callback_before!");
        olua_callback(L, cb_store, cb_name.c_str(), 0);
        printf("hello callback_after!");
        ...
    });
    printf("hello after!");
    ...
    return 0;
}
```

#### Callback Function Configuration

Defines the details of `std::function` callbacks. Refer to: [olua Callback Function Design](https://codetypes.com/posts/5890848b/#回调函数)

```lua
typeconf 'Object'
    .func 'onClick'
        .tag_usepool 'true'
        .tag_mode 'replace|new|startwith|equal'
        .tag_store '0'
        .tag_maker 'click'
        .tag_scope 'object|once|invoker'
```

**Callback Storage Details:**

```lua
callback functions
obj.uservalue {
    |---id----|--class--|--tag--|
    .olua.cb#1$classname@onClick = lua_func
    .olua.cb#2$classname@onClick = lua_func
    .olua.cb#3$classname@update = lua_func
    .olua.cb#4$classname@onRemoved = lua_func
    ...
}
```

- **`tag_usepool`**: Specifies whether the callback's arguments use the [object pool](https://codetypes.com/posts/5890848b/#临时对象池). Default: `true`.
- **`tag_mode`**: Specifies the tag matching mode. Defaults:
  - `replace`: Replaces existing callback if the tag matches, otherwise creates a new tag.
  - `new`: Always creates a new tag for storing the callback.
  - `startwith`: Deletes callbacks whose tags start with the specified value.
  - `equal`: Deletes callbacks with matching tags.
- **`tag_store`**: Specifies where the callback is stored. Default: `0`. Possible values:
  - `0`: For static methods, stored in `.classobj`. For object methods, stored in `userdata`.
  - `-1`: Stored in the return value.
  - `1, 2...N`: Stored in the N-th argument from left to right.
- **`tag_maker`**: Specifies the key for storing the callback. Two forms:
  - `string`: A literal string.
  - `makeTag(#N)` or `makeTag(#-N)`: Uses the N-th argument to generate the key via `makeTag`.
- **`tag_scope`**: Specifies the callback's lifecycle. Default: `object`. Possible values:
  - `object`: Managed by the object.
  - `once`: Removed after a single invocation.
  - `invoker`: Removed after the underlying function call.

Example generated code:

```c++
static int _Object_onClick(lua_State *L)
{
    ...
    void *cb_store = (void *)self;
    std::string cb_tag = "click";
    std::string cb_name;
    if (olua_isfunction(L, 2)) {
        cb_name = olua_setcallback(L, cb_store,  2, cb_tag.c_str(), OLUA_TAG_REPLACE);
        olua_Context cb_ctx = olua_context(L);
        arg1 = [cb_store, cb_name, cb_ctx](Object *arg1) {
            lua_State *L = olua_mainthread(NULL);
            olua_checkhostthread();
            if (olua_contextequal(L, cb_ctx)) {
                int top = lua_gettop(L);
                size_t last = olua_push_objpool(L);
                olua_enable_objpool(L);
                olua_push_obj(L, arg1, "Object");
                olua_disable_objpool(L);
                olua_callback(L, cb_store, cb_name.c_str(), 1);
                olua_pop_objpool(L, last);
                lua_settop(L, top);
            }
        };
    } else {
        olua_removecallback(L, cb_store, cb_tag.c_str(), OLUA_TAG_equal);
        arg1 = nullptr;
    }

    // void onClick(@nullable const Object::ClickCallback &callback)
    self->onClick(arg1);

    return 0;
}
```

#### Parameter Tags

Both `.ret` and `.arg1...N` support the `@` keyword to add additional behaviors to parameters.

---

##### @postnew

Marks the return value as newly created and applies `olua_postnew`.

```lua
typeconf 'Object'
    .func 'create' .ret '@postnew'
```

```c++
static int _Object_create(lua_State *L)
{
    ...
    Object ret = Object::create();
    // Insert code after the call
    olua_postnew(L, ret);
    ...
    return 0;
}
```

---

##### @nullable

Marks the parameter as nullable (can be `nil`).

```lua
-- void onClick(const ClickCallback &callback);
typeconf 'Object'
    .func 'onClick' .arg1 '@nullable'
```

```c++
static int _Object_onClick(lua_State *L)
{
    if (olua_isfunction(L, 2)) {
        arg1 = ...
    } else {
        arg1 = nullptr;
    }
    // void onClick(@nullable const ClickCallback &callback);
    self->onClick(arg1);
    return 0;
}
```

---

##### @addref

Adds a reference to a parameter: `@addref(name mode [where])`.

- **`name`**: Reference name.
- **`mode`**: Reference storage mode:
  - `^`: Exists independently.
  - `|`: Coexists with others.

Example with `^` (independent existence):

```lua
-- void setScene(Object *scene);
typeconf 'Object'
    .func 'setScene' .arg1 '@addref(scene ^) @nullable'
```

```c++
static int _Object_setScene(lua_State *L)
{
    ...
    self->setScene(arg1);
    ...
    olua_addref(L, 1, "scene", -1, OLUA_REF_ALONE);
    ...
}
```

Example with `|` (coexistence):

```lua
-- void addChild(Object *child);
typeconf 'Object'
    .func 'addChild' .arg1 '@addref(children |)' .ret '@delref(children ~)'
```

```c++
static int _Object_addChild(lua_State *L)
{
    ...
    olua_startcmpref(L, 1, "children");
    self->addChild(arg1);
    olua_addref(L, 1, "children", -1, OLUA_REF_MULTI);
    olua_endcmpref(L, 1, "children");
    ...
}
```

If a `where` is specified, you must include insertion code to retrieve it.

```lua
-- void show();
typeconf 'Object'
    .func 'show' .ret '@addref(children | parent)'
        .insert_before [[
            olua_pushobj<Object>(L, Object::getRoot());
            int parent = lua_gettop(L);
        ]]
```

```c++
static int _Object_show(lua_State *L)
{
    ...
    olua_pushobj<Object>(L, Object::getRoot());
    int parent = lua_gettop(L);
    self->show();
    olua_addref(L, parent, "children", 1, OLUA_REF_MULTI);
    ...
}
```

---

##### @delref

Removes a reference: `@delref(name mode [where])`.

- **`mode`**: Reference storage modes:
  - `^`: Independent existence.
  - `|`: Coexistence.
  - `~`: Removes references using comparison.
  - `*`: Removes all references.

Example with `^`:

```lua
-- void setScene(Object *scene);
typeconf 'Object'
    .func 'setScene' .arg1 '@delref(scene ^) @nullable'
```

```c++
static int _Object_setScene(lua_State *L)
{
    ...
    self->setScene(arg1);
    olua_delref(L, 1, "scene", -1, OLUA_REF_ALONE);
    ...
}
```

Example with `~`:

```lua
-- void removeChildByName(const std::string &name);
typeconf 'Object'
    .func 'removeChildByName' .ret '@delref(children ~)'
```

```c++
static int _Object_removeChildByName(lua_State *L)
{
    ...
    olua_startcmpref(L, 1, "children");
    self->removeChildByName(arg1);
    olua_endcmpref(L, 1, "children");
    ...
}
```

---

##### @optional

Marks a parameter as optional. Primarily used with `.var` and `.func`.

Example for `.var`:

```lua
typeconv 'Object'
    .var 'x' .optional 'true'
```

```c++
void olua_check_Object(lua_State *L, int idx, Object *value)
{
    ...
    olua_getfield(L, idx, "x");
    if (!olua_isnoneornil(L, -1)) {
        olua_check_integer(L, -1, &arg1);
        value->x = arg1;
    }
    lua_pop(L, 1);
}
```

---

##### @pack

Packs multiple parameters into a single object.

```lua
-- void setPosition(const Point &p);
-- Point convert(const Point &p);
typeconf 'Object'
    .func 'setPosition' .arg1 '@pack'
    .func 'convert' .arg1 '@pack'
```

```lua
local obj = Object.new()

obj:setPosition(1, 1)
obj:setPosition({x = 1, y = 1})

local p = obj:convert({x = 1, y = 1})
local x, y = obj:convert(1, 1)
```

---

##### @unpack

Unpacks an object into multiple values.

```lua
-- const Point &getPosition();
typeconf 'Object'
    .func 'getPosition' .ret '@unpack'
```

```lua
local obj = Object.new()
local x, y = obj:getPosition()
```

---

##### @readonly

Marks a variable as read-only, generating only a getter function.

---

##### @type

Specifies an alternative type for a parameter.

```c++
void read(char *buf, size_t *len);
```

Normal behavior treats `buf` as a string, but if it's a writable buffer, `@type` can clarify the intention.

```lua
typeconf 'Object'
    .func 'read'
        .arg1 '@type(olua_char_t *)'
```

---

##### Header File Annotations

Use macro commands to directly annotate parameters or methods. The `autoconf` script parses these annotations during the scanning phase.

Macro commands:

```c++
#define OLUA_EXCLUDE        __attribute__((annotate("@exclude")))
#define OLUA_TYPE(name)     __attribute__((annotate("@type("#name")")))
#define OLUA_NAME(name)     __attribute__((annotate("@name("#name")")))
#define OLUA_ADDREF(...)    __attribute__((annotate("@addref("#__VA_ARGS__")")))
#define OLUA_DEFREF(...)    __attribute__((annotate("@delref("#__VA_ARGS__")")))
#define OLUA_PACK           __attribute__((annotate("@pack")))
#define OLUA_UNPACK         __attribute__((annotate("@unpack")))
#define OLUA_NULLABLE       __attribute__((annotate("@nullable")))
#define OLUA_POSTNEW        __attribute__((annotate("@postnew")))
#define OLUA_READONLY       __attribute__((annotate("@readonly")))
#define OLUA_OPTIONAL       __attribute__((annotate("@optional")))
#define OLUA_GETTER         __attribute__((annotate("@getter")))
#define OLUA_SETTER         __attribute__((annotate("@setter")))
```

Example:

```c++
class Object {
public:
    static OLUA_POSTNEW Object *create();

    void setScene(OLUA_ADDREF(^) OLUA_NULLABLE Scene *v);
    OLUA_ADDREF(^) Scene *getScene();

    OLUA_ADDREF(root ^) Scene *getRoot();

    void addChild(OLUA_ADDREF(children |) Object *child);
    OLUA_DELREF(children |) void removeChild(Object *child);

    Point localToGlobal(OLUA_PACK const Point &p);

    OLUA_READONLY int id;
};
```
