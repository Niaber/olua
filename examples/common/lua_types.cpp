//
// AUTO BUILD, DON'T MODIFY!
//
#include "lua_types.h"
#include "olua-custom.h"

static int _olua_bool___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;

    olua_to_object(L, 1, &self, "olua.bool");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_bool___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_integer(L, 2, &arg1);

    // bool __index(unsigned int idx)
    bool ret = self->__index(arg1);
    int num_ret = olua_push_bool(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    bool arg2 = false;       /** v */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_integer(L, 2, &arg1);
    olua_check_bool(L, 3, &arg2);

    // void __newindex(unsigned int idx, const bool &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_bool___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_bool *)olua_toobj(L, 1, "olua.bool");
    olua_push_object(L, self, "olua.bool");

    olua_endinvoke(L);

    return 1;
}

static int _olua_bool_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_bool_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;

    olua_to_object(L, 1, &self, "olua.bool");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_bool_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_bool_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_bool_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_bool::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_bool_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_bool *create(@optional size_t len)
    olua_bool *ret = olua_bool::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.bool");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_bool *create()
    olua_bool *ret = olua_bool::create();
    int num_ret = olua_push_object(L, ret, "olua.bool");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_bool *create()
        return _olua_bool_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_bool *create(@optional size_t len)
            return _olua_bool_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_bool::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_bool_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;

    olua_to_object(L, 1, &self, "olua.bool");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;

    olua_to_object(L, 1, &self, "olua.bool");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_bool *slice(size_t from, @optional size_t to)
    olua_bool *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.bool");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_bool *slice(size_t from)
    olua_bool *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.bool");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_bool *slice(size_t from)
            return _olua_bool_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_bool *slice(size_t from, @optional size_t to)
            return _olua_bool_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_bool::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_bool_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_bool *sub(size_t from, @optional size_t to)
    olua_bool *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.bool");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_bool *sub(size_t from)
    olua_bool *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.bool");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_bool *sub(size_t from)
            return _olua_bool_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_bool *sub(size_t from, @optional size_t to)
            return _olua_bool_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_bool::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_bool_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;

    olua_to_object(L, 1, &self, "olua.bool");

    // olua_bool *take()
    olua_bool *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.bool");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_bool_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;

    olua_to_object(L, 1, &self, "olua.bool");

    // @getter @name(value) const bool &value()
    const bool &ret = self->value();
    int num_ret = olua_push_bool(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_bool_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_bool *self = nullptr;
    bool arg1 = false;       /** v */

    olua_to_object(L, 1, &self, "olua.bool");
    olua_check_bool(L, 2, &arg1);

    // @setter @name(value) void value(const bool &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_bool_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const bool &value()
        return _olua_bool_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_bool(L, 2))) {
            // @setter @name(value) void value(const bool &v)
            return _olua_bool_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_bool::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_bool(lua_State *L)
{
    oluacls_class<olua_bool>(L, "olua.bool");
    oluacls_func(L, "__gc", _olua_bool___gc);
    oluacls_func(L, "__index", _olua_bool___index);
    oluacls_func(L, "__newindex", _olua_bool___newindex);
    oluacls_func(L, "__olua_move", _olua_bool___olua_move);
    oluacls_func(L, "assign", _olua_bool_assign);
    oluacls_func(L, "new", _olua_bool_create);
    oluacls_func(L, "slice", _olua_bool_slice);
    oluacls_func(L, "sub", _olua_bool_sub);
    oluacls_func(L, "take", _olua_bool_take);
    oluacls_func(L, "tostring", _olua_bool_tostring);
    oluacls_prop(L, "length", _olua_bool_length, _olua_bool_length);
    oluacls_prop(L, "rawdata", _olua_bool_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_bool_size, nullptr);
    oluacls_prop(L, "value", _olua_bool_value, _olua_bool_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_string___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;

    olua_to_object(L, 1, &self, "olua.string");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_string___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_integer(L, 2, &arg1);

    // std::string __index(unsigned int idx)
    std::string ret = self->__index(arg1);
    int num_ret = olua_push_string(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    std::string arg2;       /** v */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_integer(L, 2, &arg1);
    olua_check_string(L, 3, &arg2);

    // void __newindex(unsigned int idx, const std::string &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_string___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_string *)olua_toobj(L, 1, "olua.string");
    olua_push_object(L, self, "olua.string");

    olua_endinvoke(L);

    return 1;
}

static int _olua_string_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_string_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;

    olua_to_object(L, 1, &self, "olua.string");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_string_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_string_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_string_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_string::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_string_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_string *create(@optional size_t len)
    olua_string *ret = olua_string::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.string");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_string *create()
    olua_string *ret = olua_string::create();
    int num_ret = olua_push_object(L, ret, "olua.string");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_string *create()
        return _olua_string_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_string *create(@optional size_t len)
            return _olua_string_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_string::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_string_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;

    olua_to_object(L, 1, &self, "olua.string");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;

    olua_to_object(L, 1, &self, "olua.string");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_string *slice(size_t from, @optional size_t to)
    olua_string *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.string");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_string *slice(size_t from)
    olua_string *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.string");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_string *slice(size_t from)
            return _olua_string_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_string *slice(size_t from, @optional size_t to)
            return _olua_string_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_string::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_string_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_string *sub(size_t from, @optional size_t to)
    olua_string *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.string");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_string *sub(size_t from)
    olua_string *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.string");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_string *sub(size_t from)
            return _olua_string_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_string *sub(size_t from, @optional size_t to)
            return _olua_string_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_string::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_string_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;

    olua_to_object(L, 1, &self, "olua.string");

    // olua_string *take()
    olua_string *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.string");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_string_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;

    olua_to_object(L, 1, &self, "olua.string");

    // @getter @name(value) const std::string &value()
    const std::string &ret = self->value();
    int num_ret = olua_push_string(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_string_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_string *self = nullptr;
    std::string arg1;       /** v */

    olua_to_object(L, 1, &self, "olua.string");
    olua_check_string(L, 2, &arg1);

    // @setter @name(value) void value(const std::string &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_string_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const std::string &value()
        return _olua_string_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_string(L, 2))) {
            // @setter @name(value) void value(const std::string &v)
            return _olua_string_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_string::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_string(lua_State *L)
{
    oluacls_class<olua_string>(L, "olua.string");
    oluacls_func(L, "__gc", _olua_string___gc);
    oluacls_func(L, "__index", _olua_string___index);
    oluacls_func(L, "__newindex", _olua_string___newindex);
    oluacls_func(L, "__olua_move", _olua_string___olua_move);
    oluacls_func(L, "assign", _olua_string_assign);
    oluacls_func(L, "new", _olua_string_create);
    oluacls_func(L, "slice", _olua_string_slice);
    oluacls_func(L, "sub", _olua_string_sub);
    oluacls_func(L, "take", _olua_string_take);
    oluacls_func(L, "tostring", _olua_string_tostring);
    oluacls_prop(L, "length", _olua_string_length, _olua_string_length);
    oluacls_prop(L, "rawdata", _olua_string_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_string_size, nullptr);
    oluacls_prop(L, "value", _olua_string_value, _olua_string_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_int8___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int8");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int8___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg1);

    // int8_t __index(unsigned int idx)
    int8_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    int8_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const int8_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int8___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_int8 *)olua_toobj(L, 1, "olua.int8");
    olua_push_object(L, self, "olua.int8");

    olua_endinvoke(L);

    return 1;
}

static int _olua_int8_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int8_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int8");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int8_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_int8_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_int8_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int8::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int8_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_int8 *create(@optional size_t len)
    olua_int8 *ret = olua_int8::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_int8 *create()
    olua_int8 *ret = olua_int8::create();
    int num_ret = olua_push_object(L, ret, "olua.int8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_int8 *create()
        return _olua_int8_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_int8 *create(@optional size_t len)
            return _olua_int8_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int8::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int8_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int8");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int8");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int8 *slice(size_t from, @optional size_t to)
    olua_int8 *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int8 *slice(size_t from)
    olua_int8 *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int8 *slice(size_t from)
            return _olua_int8_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int8 *slice(size_t from, @optional size_t to)
            return _olua_int8_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int8::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int8_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int8 *sub(size_t from, @optional size_t to)
    olua_int8 *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int8 *sub(size_t from)
    olua_int8 *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int8 *sub(size_t from)
            return _olua_int8_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int8 *sub(size_t from, @optional size_t to)
            return _olua_int8_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int8::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int8_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int8");

    // olua_int8 *take()
    olua_int8 *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.int8");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int8_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int8");

    // @getter @name(value) const int8_t &value()
    const int8_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int8_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int8 *self = nullptr;
    int8_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int8");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const int8_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int8_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const int8_t &value()
        return _olua_int8_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const int8_t &v)
            return _olua_int8_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int8::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_int8(lua_State *L)
{
    oluacls_class<olua_int8>(L, "olua.int8");
    oluacls_func(L, "__gc", _olua_int8___gc);
    oluacls_func(L, "__index", _olua_int8___index);
    oluacls_func(L, "__newindex", _olua_int8___newindex);
    oluacls_func(L, "__olua_move", _olua_int8___olua_move);
    oluacls_func(L, "assign", _olua_int8_assign);
    oluacls_func(L, "new", _olua_int8_create);
    oluacls_func(L, "slice", _olua_int8_slice);
    oluacls_func(L, "sub", _olua_int8_sub);
    oluacls_func(L, "take", _olua_int8_take);
    oluacls_func(L, "tostring", _olua_int8_tostring);
    oluacls_prop(L, "length", _olua_int8_length, _olua_int8_length);
    oluacls_prop(L, "rawdata", _olua_int8_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_int8_size, nullptr);
    oluacls_prop(L, "value", _olua_int8_value, _olua_int8_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_int16___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int16");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int16___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg1);

    // int16_t __index(unsigned int idx)
    int16_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    int16_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const int16_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int16___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_int16 *)olua_toobj(L, 1, "olua.int16");
    olua_push_object(L, self, "olua.int16");

    olua_endinvoke(L);

    return 1;
}

static int _olua_int16_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int16_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int16");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int16_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_int16_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_int16_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int16::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int16_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_int16 *create(@optional size_t len)
    olua_int16 *ret = olua_int16::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_int16 *create()
    olua_int16 *ret = olua_int16::create();
    int num_ret = olua_push_object(L, ret, "olua.int16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_int16 *create()
        return _olua_int16_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_int16 *create(@optional size_t len)
            return _olua_int16_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int16::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int16_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int16");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int16");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int16 *slice(size_t from, @optional size_t to)
    olua_int16 *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int16 *slice(size_t from)
    olua_int16 *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int16 *slice(size_t from)
            return _olua_int16_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int16 *slice(size_t from, @optional size_t to)
            return _olua_int16_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int16::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int16_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int16 *sub(size_t from, @optional size_t to)
    olua_int16 *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int16 *sub(size_t from)
    olua_int16 *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int16 *sub(size_t from)
            return _olua_int16_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int16 *sub(size_t from, @optional size_t to)
            return _olua_int16_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int16::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int16_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int16");

    // olua_int16 *take()
    olua_int16 *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.int16");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int16_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int16");

    // @getter @name(value) const int16_t &value()
    const int16_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int16_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int16 *self = nullptr;
    int16_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int16");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const int16_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int16_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const int16_t &value()
        return _olua_int16_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const int16_t &v)
            return _olua_int16_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int16::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_int16(lua_State *L)
{
    oluacls_class<olua_int16>(L, "olua.int16");
    oluacls_func(L, "__gc", _olua_int16___gc);
    oluacls_func(L, "__index", _olua_int16___index);
    oluacls_func(L, "__newindex", _olua_int16___newindex);
    oluacls_func(L, "__olua_move", _olua_int16___olua_move);
    oluacls_func(L, "assign", _olua_int16_assign);
    oluacls_func(L, "new", _olua_int16_create);
    oluacls_func(L, "slice", _olua_int16_slice);
    oluacls_func(L, "sub", _olua_int16_sub);
    oluacls_func(L, "take", _olua_int16_take);
    oluacls_func(L, "tostring", _olua_int16_tostring);
    oluacls_prop(L, "length", _olua_int16_length, _olua_int16_length);
    oluacls_prop(L, "rawdata", _olua_int16_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_int16_size, nullptr);
    oluacls_prop(L, "value", _olua_int16_value, _olua_int16_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_int32___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int32");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int32___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg1);

    // int32_t __index(unsigned int idx)
    int32_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    int32_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const int32_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int32___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_int32 *)olua_toobj(L, 1, "olua.int32");
    olua_push_object(L, self, "olua.int32");

    olua_endinvoke(L);

    return 1;
}

static int _olua_int32_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int32_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int32");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int32_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_int32_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_int32_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int32::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int32_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_int32 *create(@optional size_t len)
    olua_int32 *ret = olua_int32::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_int32 *create()
    olua_int32 *ret = olua_int32::create();
    int num_ret = olua_push_object(L, ret, "olua.int32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_int32 *create()
        return _olua_int32_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_int32 *create(@optional size_t len)
            return _olua_int32_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int32::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int32_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int32");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int32");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int32 *slice(size_t from, @optional size_t to)
    olua_int32 *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int32 *slice(size_t from)
    olua_int32 *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int32 *slice(size_t from)
            return _olua_int32_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int32 *slice(size_t from, @optional size_t to)
            return _olua_int32_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int32::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int32_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int32 *sub(size_t from, @optional size_t to)
    olua_int32 *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int32 *sub(size_t from)
    olua_int32 *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int32 *sub(size_t from)
            return _olua_int32_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int32 *sub(size_t from, @optional size_t to)
            return _olua_int32_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int32::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int32_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int32");

    // olua_int32 *take()
    olua_int32 *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.int32");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int32_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int32");

    // @getter @name(value) const int32_t &value()
    const int32_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int32_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int32 *self = nullptr;
    int32_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int32");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const int32_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int32_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const int32_t &value()
        return _olua_int32_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const int32_t &v)
            return _olua_int32_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int32::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_int32(lua_State *L)
{
    oluacls_class<olua_int32>(L, "olua.int32");
    oluacls_func(L, "__gc", _olua_int32___gc);
    oluacls_func(L, "__index", _olua_int32___index);
    oluacls_func(L, "__newindex", _olua_int32___newindex);
    oluacls_func(L, "__olua_move", _olua_int32___olua_move);
    oluacls_func(L, "assign", _olua_int32_assign);
    oluacls_func(L, "new", _olua_int32_create);
    oluacls_func(L, "slice", _olua_int32_slice);
    oluacls_func(L, "sub", _olua_int32_sub);
    oluacls_func(L, "take", _olua_int32_take);
    oluacls_func(L, "tostring", _olua_int32_tostring);
    oluacls_prop(L, "length", _olua_int32_length, _olua_int32_length);
    oluacls_prop(L, "rawdata", _olua_int32_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_int32_size, nullptr);
    oluacls_prop(L, "value", _olua_int32_value, _olua_int32_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_int64___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int64");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int64___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg1);

    // int64_t __index(unsigned int idx)
    int64_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    int64_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const int64_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int64___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_int64 *)olua_toobj(L, 1, "olua.int64");
    olua_push_object(L, self, "olua.int64");

    olua_endinvoke(L);

    return 1;
}

static int _olua_int64_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int64_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int64");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int64_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_int64_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_int64_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int64::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int64_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_int64 *create(@optional size_t len)
    olua_int64 *ret = olua_int64::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_int64 *create()
    olua_int64 *ret = olua_int64::create();
    int num_ret = olua_push_object(L, ret, "olua.int64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_int64 *create()
        return _olua_int64_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_int64 *create(@optional size_t len)
            return _olua_int64_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int64::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int64_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int64");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int64");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int64 *slice(size_t from, @optional size_t to)
    olua_int64 *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int64 *slice(size_t from)
    olua_int64 *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int64 *slice(size_t from)
            return _olua_int64_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int64 *slice(size_t from, @optional size_t to)
            return _olua_int64_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int64::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int64_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int64 *sub(size_t from, @optional size_t to)
    olua_int64 *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int64 *sub(size_t from)
    olua_int64 *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int64 *sub(size_t from)
            return _olua_int64_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int64 *sub(size_t from, @optional size_t to)
            return _olua_int64_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int64::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int64_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int64");

    // olua_int64 *take()
    olua_int64 *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.int64");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int64_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int64");

    // @getter @name(value) const int64_t &value()
    const int64_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int64_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int64 *self = nullptr;
    int64_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int64");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const int64_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int64_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const int64_t &value()
        return _olua_int64_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const int64_t &v)
            return _olua_int64_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int64::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_int64(lua_State *L)
{
    oluacls_class<olua_int64>(L, "olua.int64");
    oluacls_func(L, "__gc", _olua_int64___gc);
    oluacls_func(L, "__index", _olua_int64___index);
    oluacls_func(L, "__newindex", _olua_int64___newindex);
    oluacls_func(L, "__olua_move", _olua_int64___olua_move);
    oluacls_func(L, "assign", _olua_int64_assign);
    oluacls_func(L, "new", _olua_int64_create);
    oluacls_func(L, "slice", _olua_int64_slice);
    oluacls_func(L, "sub", _olua_int64_sub);
    oluacls_func(L, "take", _olua_int64_take);
    oluacls_func(L, "tostring", _olua_int64_tostring);
    oluacls_prop(L, "length", _olua_int64_length, _olua_int64_length);
    oluacls_prop(L, "rawdata", _olua_int64_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_int64_size, nullptr);
    oluacls_prop(L, "value", _olua_int64_value, _olua_int64_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_uint8___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint8");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint8___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg1);

    // uint8_t __index(unsigned int idx)
    uint8_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    uint8_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const uint8_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint8___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_uint8 *)olua_toobj(L, 1, "olua.uint8");
    olua_push_object(L, self, "olua.uint8");

    olua_endinvoke(L);

    return 1;
}

static int _olua_uint8_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint8_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint8");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint8_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_uint8_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_uint8_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint8::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint8_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_uint8 *create(@optional size_t len)
    olua_uint8 *ret = olua_uint8::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_uint8 *create()
    olua_uint8 *ret = olua_uint8::create();
    int num_ret = olua_push_object(L, ret, "olua.uint8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_uint8 *create()
        return _olua_uint8_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_uint8 *create(@optional size_t len)
            return _olua_uint8_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint8::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint8_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint8");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint8");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint8 *slice(size_t from, @optional size_t to)
    olua_uint8 *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint8 *slice(size_t from)
    olua_uint8 *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint8 *slice(size_t from)
            return _olua_uint8_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint8 *slice(size_t from, @optional size_t to)
            return _olua_uint8_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint8::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint8_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint8 *sub(size_t from, @optional size_t to)
    olua_uint8 *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint8 *sub(size_t from)
    olua_uint8 *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint8");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint8 *sub(size_t from)
            return _olua_uint8_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint8 *sub(size_t from, @optional size_t to)
            return _olua_uint8_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint8::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint8_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint8");

    // olua_uint8 *take()
    olua_uint8 *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.uint8");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint8_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint8");

    // @getter @name(value) const uint8_t &value()
    const uint8_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint8_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint8 *self = nullptr;
    uint8_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint8");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const uint8_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint8_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const uint8_t &value()
        return _olua_uint8_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const uint8_t &v)
            return _olua_uint8_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint8::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_uint8(lua_State *L)
{
    oluacls_class<olua_uint8>(L, "olua.uint8");
    oluacls_func(L, "__gc", _olua_uint8___gc);
    oluacls_func(L, "__index", _olua_uint8___index);
    oluacls_func(L, "__newindex", _olua_uint8___newindex);
    oluacls_func(L, "__olua_move", _olua_uint8___olua_move);
    oluacls_func(L, "assign", _olua_uint8_assign);
    oluacls_func(L, "new", _olua_uint8_create);
    oluacls_func(L, "slice", _olua_uint8_slice);
    oluacls_func(L, "sub", _olua_uint8_sub);
    oluacls_func(L, "take", _olua_uint8_take);
    oluacls_func(L, "tostring", _olua_uint8_tostring);
    oluacls_prop(L, "length", _olua_uint8_length, _olua_uint8_length);
    oluacls_prop(L, "rawdata", _olua_uint8_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_uint8_size, nullptr);
    oluacls_prop(L, "value", _olua_uint8_value, _olua_uint8_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_uint16___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint16");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint16___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg1);

    // uint16_t __index(unsigned int idx)
    uint16_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    uint16_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const uint16_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint16___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_uint16 *)olua_toobj(L, 1, "olua.uint16");
    olua_push_object(L, self, "olua.uint16");

    olua_endinvoke(L);

    return 1;
}

static int _olua_uint16_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint16_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint16");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint16_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_uint16_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_uint16_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint16::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint16_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_uint16 *create(@optional size_t len)
    olua_uint16 *ret = olua_uint16::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_uint16 *create()
    olua_uint16 *ret = olua_uint16::create();
    int num_ret = olua_push_object(L, ret, "olua.uint16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_uint16 *create()
        return _olua_uint16_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_uint16 *create(@optional size_t len)
            return _olua_uint16_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint16::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint16_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint16");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint16");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint16 *slice(size_t from, @optional size_t to)
    olua_uint16 *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint16 *slice(size_t from)
    olua_uint16 *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint16 *slice(size_t from)
            return _olua_uint16_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint16 *slice(size_t from, @optional size_t to)
            return _olua_uint16_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint16::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint16_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint16 *sub(size_t from, @optional size_t to)
    olua_uint16 *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint16 *sub(size_t from)
    olua_uint16 *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint16");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint16 *sub(size_t from)
            return _olua_uint16_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint16 *sub(size_t from, @optional size_t to)
            return _olua_uint16_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint16::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint16_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint16");

    // olua_uint16 *take()
    olua_uint16 *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.uint16");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint16_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint16");

    // @getter @name(value) const uint16_t &value()
    const uint16_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint16_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint16 *self = nullptr;
    uint16_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint16");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const uint16_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint16_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const uint16_t &value()
        return _olua_uint16_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const uint16_t &v)
            return _olua_uint16_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint16::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_uint16(lua_State *L)
{
    oluacls_class<olua_uint16>(L, "olua.uint16");
    oluacls_func(L, "__gc", _olua_uint16___gc);
    oluacls_func(L, "__index", _olua_uint16___index);
    oluacls_func(L, "__newindex", _olua_uint16___newindex);
    oluacls_func(L, "__olua_move", _olua_uint16___olua_move);
    oluacls_func(L, "assign", _olua_uint16_assign);
    oluacls_func(L, "new", _olua_uint16_create);
    oluacls_func(L, "slice", _olua_uint16_slice);
    oluacls_func(L, "sub", _olua_uint16_sub);
    oluacls_func(L, "take", _olua_uint16_take);
    oluacls_func(L, "tostring", _olua_uint16_tostring);
    oluacls_prop(L, "length", _olua_uint16_length, _olua_uint16_length);
    oluacls_prop(L, "rawdata", _olua_uint16_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_uint16_size, nullptr);
    oluacls_prop(L, "value", _olua_uint16_value, _olua_uint16_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_uint32___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint32");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint32___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg1);

    // uint32_t __index(unsigned int idx)
    uint32_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    uint32_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const uint32_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint32___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_uint32 *)olua_toobj(L, 1, "olua.uint32");
    olua_push_object(L, self, "olua.uint32");

    olua_endinvoke(L);

    return 1;
}

static int _olua_uint32_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint32_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint32");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint32_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_uint32_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_uint32_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint32::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint32_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_uint32 *create(@optional size_t len)
    olua_uint32 *ret = olua_uint32::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_uint32 *create()
    olua_uint32 *ret = olua_uint32::create();
    int num_ret = olua_push_object(L, ret, "olua.uint32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_uint32 *create()
        return _olua_uint32_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_uint32 *create(@optional size_t len)
            return _olua_uint32_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint32::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint32_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint32");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint32");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint32 *slice(size_t from, @optional size_t to)
    olua_uint32 *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint32 *slice(size_t from)
    olua_uint32 *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint32 *slice(size_t from)
            return _olua_uint32_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint32 *slice(size_t from, @optional size_t to)
            return _olua_uint32_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint32::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint32_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint32 *sub(size_t from, @optional size_t to)
    olua_uint32 *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint32 *sub(size_t from)
    olua_uint32 *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint32");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint32 *sub(size_t from)
            return _olua_uint32_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint32 *sub(size_t from, @optional size_t to)
            return _olua_uint32_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint32::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint32_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint32");

    // olua_uint32 *take()
    olua_uint32 *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.uint32");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint32_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint32");

    // @getter @name(value) const uint32_t &value()
    const uint32_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint32_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint32 *self = nullptr;
    uint32_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint32");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const uint32_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint32_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const uint32_t &value()
        return _olua_uint32_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const uint32_t &v)
            return _olua_uint32_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint32::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_uint32(lua_State *L)
{
    oluacls_class<olua_uint32>(L, "olua.uint32");
    oluacls_func(L, "__gc", _olua_uint32___gc);
    oluacls_func(L, "__index", _olua_uint32___index);
    oluacls_func(L, "__newindex", _olua_uint32___newindex);
    oluacls_func(L, "__olua_move", _olua_uint32___olua_move);
    oluacls_func(L, "assign", _olua_uint32_assign);
    oluacls_func(L, "new", _olua_uint32_create);
    oluacls_func(L, "slice", _olua_uint32_slice);
    oluacls_func(L, "sub", _olua_uint32_sub);
    oluacls_func(L, "take", _olua_uint32_take);
    oluacls_func(L, "tostring", _olua_uint32_tostring);
    oluacls_prop(L, "length", _olua_uint32_length, _olua_uint32_length);
    oluacls_prop(L, "rawdata", _olua_uint32_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_uint32_size, nullptr);
    oluacls_prop(L, "value", _olua_uint32_value, _olua_uint32_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_uint64___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint64");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint64___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg1);

    // uint64_t __index(unsigned int idx)
    uint64_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    uint64_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const uint64_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint64___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_uint64 *)olua_toobj(L, 1, "olua.uint64");
    olua_push_object(L, self, "olua.uint64");

    olua_endinvoke(L);

    return 1;
}

static int _olua_uint64_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint64_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint64");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint64_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_uint64_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_uint64_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint64::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint64_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_uint64 *create(@optional size_t len)
    olua_uint64 *ret = olua_uint64::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_uint64 *create()
    olua_uint64 *ret = olua_uint64::create();
    int num_ret = olua_push_object(L, ret, "olua.uint64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_uint64 *create()
        return _olua_uint64_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_uint64 *create(@optional size_t len)
            return _olua_uint64_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint64::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint64_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint64");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint64");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint64 *slice(size_t from, @optional size_t to)
    olua_uint64 *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint64 *slice(size_t from)
    olua_uint64 *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint64 *slice(size_t from)
            return _olua_uint64_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint64 *slice(size_t from, @optional size_t to)
            return _olua_uint64_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint64::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint64_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint64 *sub(size_t from, @optional size_t to)
    olua_uint64 *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint64 *sub(size_t from)
    olua_uint64 *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint64");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint64 *sub(size_t from)
            return _olua_uint64_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint64 *sub(size_t from, @optional size_t to)
            return _olua_uint64_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint64::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint64_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint64");

    // olua_uint64 *take()
    olua_uint64 *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.uint64");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint64_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint64");

    // @getter @name(value) const uint64_t &value()
    const uint64_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint64_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint64 *self = nullptr;
    uint64_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint64");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const uint64_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint64_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const uint64_t &value()
        return _olua_uint64_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const uint64_t &v)
            return _olua_uint64_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint64::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_uint64(lua_State *L)
{
    oluacls_class<olua_uint64>(L, "olua.uint64");
    oluacls_func(L, "__gc", _olua_uint64___gc);
    oluacls_func(L, "__index", _olua_uint64___index);
    oluacls_func(L, "__newindex", _olua_uint64___newindex);
    oluacls_func(L, "__olua_move", _olua_uint64___olua_move);
    oluacls_func(L, "assign", _olua_uint64_assign);
    oluacls_func(L, "new", _olua_uint64_create);
    oluacls_func(L, "slice", _olua_uint64_slice);
    oluacls_func(L, "sub", _olua_uint64_sub);
    oluacls_func(L, "take", _olua_uint64_take);
    oluacls_func(L, "tostring", _olua_uint64_tostring);
    oluacls_prop(L, "length", _olua_uint64_length, _olua_uint64_length);
    oluacls_prop(L, "rawdata", _olua_uint64_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_uint64_size, nullptr);
    oluacls_prop(L, "value", _olua_uint64_value, _olua_uint64_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_char___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;

    olua_to_object(L, 1, &self, "olua.char");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_char___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg1);

    // olua_char_t __index(unsigned int idx)
    olua_char_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_char_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_char_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_char___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_char *)olua_toobj(L, 1, "olua.char");
    olua_push_object(L, self, "olua.char");

    olua_endinvoke(L);

    return 1;
}

static int _olua_char_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_char_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;

    olua_to_object(L, 1, &self, "olua.char");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_char_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_char_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_char_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_char::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_char_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_char *create(@optional size_t len)
    olua_char *ret = olua_char::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.char");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_char *create()
    olua_char *ret = olua_char::create();
    int num_ret = olua_push_object(L, ret, "olua.char");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_char *create()
        return _olua_char_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_char *create(@optional size_t len)
            return _olua_char_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_char::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_char_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;

    olua_to_object(L, 1, &self, "olua.char");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;

    olua_to_object(L, 1, &self, "olua.char");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_char *slice(size_t from, @optional size_t to)
    olua_char *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.char");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_char *slice(size_t from)
    olua_char *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.char");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_char *slice(size_t from)
            return _olua_char_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_char *slice(size_t from, @optional size_t to)
            return _olua_char_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_char::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_char_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_char *sub(size_t from, @optional size_t to)
    olua_char *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.char");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_char *sub(size_t from)
    olua_char *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.char");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_char *sub(size_t from)
            return _olua_char_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_char *sub(size_t from, @optional size_t to)
            return _olua_char_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_char::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_char_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;

    olua_to_object(L, 1, &self, "olua.char");

    // olua_char *take()
    olua_char *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.char");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_char_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;

    olua_to_object(L, 1, &self, "olua.char");

    // @getter @name(value) const olua_char_t &value()
    const olua_char_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_char_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_char *self = nullptr;
    olua_char_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.char");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_char_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_char_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_char_t &value()
        return _olua_char_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_char_t &v)
            return _olua_char_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_char::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_char(lua_State *L)
{
    oluacls_class<olua_char>(L, "olua.char");
    oluacls_func(L, "__gc", _olua_char___gc);
    oluacls_func(L, "__index", _olua_char___index);
    oluacls_func(L, "__newindex", _olua_char___newindex);
    oluacls_func(L, "__olua_move", _olua_char___olua_move);
    oluacls_func(L, "assign", _olua_char_assign);
    oluacls_func(L, "new", _olua_char_create);
    oluacls_func(L, "slice", _olua_char_slice);
    oluacls_func(L, "sub", _olua_char_sub);
    oluacls_func(L, "take", _olua_char_take);
    oluacls_func(L, "tostring", _olua_char_tostring);
    oluacls_prop(L, "length", _olua_char_length, _olua_char_length);
    oluacls_prop(L, "rawdata", _olua_char_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_char_size, nullptr);
    oluacls_prop(L, "value", _olua_char_value, _olua_char_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_short___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;

    olua_to_object(L, 1, &self, "olua.short");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_short___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg1);

    // olua_short_t __index(unsigned int idx)
    olua_short_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_short_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_short_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_short___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_short *)olua_toobj(L, 1, "olua.short");
    olua_push_object(L, self, "olua.short");

    olua_endinvoke(L);

    return 1;
}

static int _olua_short_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_short_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;

    olua_to_object(L, 1, &self, "olua.short");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_short_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_short_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_short_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_short::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_short_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_short *create(@optional size_t len)
    olua_short *ret = olua_short::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.short");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_short *create()
    olua_short *ret = olua_short::create();
    int num_ret = olua_push_object(L, ret, "olua.short");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_short *create()
        return _olua_short_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_short *create(@optional size_t len)
            return _olua_short_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_short::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_short_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;

    olua_to_object(L, 1, &self, "olua.short");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;

    olua_to_object(L, 1, &self, "olua.short");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_short *slice(size_t from, @optional size_t to)
    olua_short *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.short");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_short *slice(size_t from)
    olua_short *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.short");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_short *slice(size_t from)
            return _olua_short_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_short *slice(size_t from, @optional size_t to)
            return _olua_short_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_short::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_short_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_short *sub(size_t from, @optional size_t to)
    olua_short *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.short");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_short *sub(size_t from)
    olua_short *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.short");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_short *sub(size_t from)
            return _olua_short_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_short *sub(size_t from, @optional size_t to)
            return _olua_short_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_short::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_short_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;

    olua_to_object(L, 1, &self, "olua.short");

    // olua_short *take()
    olua_short *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.short");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_short_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;

    olua_to_object(L, 1, &self, "olua.short");

    // @getter @name(value) const olua_short_t &value()
    const olua_short_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_short_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_short *self = nullptr;
    olua_short_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.short");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_short_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_short_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_short_t &value()
        return _olua_short_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_short_t &v)
            return _olua_short_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_short::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_short(lua_State *L)
{
    oluacls_class<olua_short>(L, "olua.short");
    oluacls_func(L, "__gc", _olua_short___gc);
    oluacls_func(L, "__index", _olua_short___index);
    oluacls_func(L, "__newindex", _olua_short___newindex);
    oluacls_func(L, "__olua_move", _olua_short___olua_move);
    oluacls_func(L, "assign", _olua_short_assign);
    oluacls_func(L, "new", _olua_short_create);
    oluacls_func(L, "slice", _olua_short_slice);
    oluacls_func(L, "sub", _olua_short_sub);
    oluacls_func(L, "take", _olua_short_take);
    oluacls_func(L, "tostring", _olua_short_tostring);
    oluacls_prop(L, "length", _olua_short_length, _olua_short_length);
    oluacls_prop(L, "rawdata", _olua_short_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_short_size, nullptr);
    oluacls_prop(L, "value", _olua_short_value, _olua_short_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_int___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg1);

    // olua_int_t __index(unsigned int idx)
    olua_int_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_int_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_int_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_int *)olua_toobj(L, 1, "olua.int");
    olua_push_object(L, self, "olua.int");

    olua_endinvoke(L);

    return 1;
}

static int _olua_int_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_int_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_int_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_int *create(@optional size_t len)
    olua_int *ret = olua_int::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_int *create()
    olua_int *ret = olua_int::create();
    int num_ret = olua_push_object(L, ret, "olua.int");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_int *create()
        return _olua_int_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_int *create(@optional size_t len)
            return _olua_int_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int *slice(size_t from, @optional size_t to)
    olua_int *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int *slice(size_t from)
    olua_int *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int *slice(size_t from)
            return _olua_int_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int *slice(size_t from, @optional size_t to)
            return _olua_int_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_int *sub(size_t from, @optional size_t to)
    olua_int *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.int");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_int *sub(size_t from)
    olua_int *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.int");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_int *sub(size_t from)
            return _olua_int_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_int *sub(size_t from, @optional size_t to)
            return _olua_int_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_int::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_int_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int");

    // olua_int *take()
    olua_int *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.int");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_int_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;

    olua_to_object(L, 1, &self, "olua.int");

    // @getter @name(value) const olua_int_t &value()
    const olua_int_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_int_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_int *self = nullptr;
    olua_int_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.int");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_int_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_int_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_int_t &value()
        return _olua_int_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_int_t &v)
            return _olua_int_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_int::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_int(lua_State *L)
{
    oluacls_class<olua_int>(L, "olua.int");
    oluacls_func(L, "__gc", _olua_int___gc);
    oluacls_func(L, "__index", _olua_int___index);
    oluacls_func(L, "__newindex", _olua_int___newindex);
    oluacls_func(L, "__olua_move", _olua_int___olua_move);
    oluacls_func(L, "assign", _olua_int_assign);
    oluacls_func(L, "new", _olua_int_create);
    oluacls_func(L, "slice", _olua_int_slice);
    oluacls_func(L, "sub", _olua_int_sub);
    oluacls_func(L, "take", _olua_int_take);
    oluacls_func(L, "tostring", _olua_int_tostring);
    oluacls_prop(L, "length", _olua_int_length, _olua_int_length);
    oluacls_prop(L, "rawdata", _olua_int_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_int_size, nullptr);
    oluacls_prop(L, "value", _olua_int_value, _olua_int_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_long___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;

    olua_to_object(L, 1, &self, "olua.long");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_long___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg1);

    // olua_long_t __index(unsigned int idx)
    olua_long_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_long_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_long_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_long___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_long *)olua_toobj(L, 1, "olua.long");
    olua_push_object(L, self, "olua.long");

    olua_endinvoke(L);

    return 1;
}

static int _olua_long_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_long_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;

    olua_to_object(L, 1, &self, "olua.long");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_long_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_long_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_long_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_long::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_long_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_long *create(@optional size_t len)
    olua_long *ret = olua_long::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.long");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_long *create()
    olua_long *ret = olua_long::create();
    int num_ret = olua_push_object(L, ret, "olua.long");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_long *create()
        return _olua_long_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_long *create(@optional size_t len)
            return _olua_long_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_long::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_long_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;

    olua_to_object(L, 1, &self, "olua.long");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;

    olua_to_object(L, 1, &self, "olua.long");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_long *slice(size_t from, @optional size_t to)
    olua_long *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.long");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_long *slice(size_t from)
    olua_long *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.long");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_long *slice(size_t from)
            return _olua_long_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_long *slice(size_t from, @optional size_t to)
            return _olua_long_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_long::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_long_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_long *sub(size_t from, @optional size_t to)
    olua_long *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.long");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_long *sub(size_t from)
    olua_long *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.long");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_long *sub(size_t from)
            return _olua_long_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_long *sub(size_t from, @optional size_t to)
            return _olua_long_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_long::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_long_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;

    olua_to_object(L, 1, &self, "olua.long");

    // olua_long *take()
    olua_long *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.long");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_long_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;

    olua_to_object(L, 1, &self, "olua.long");

    // @getter @name(value) const olua_long_t &value()
    const olua_long_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_long_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_long *self = nullptr;
    olua_long_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.long");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_long_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_long_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_long_t &value()
        return _olua_long_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_long_t &v)
            return _olua_long_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_long::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_long(lua_State *L)
{
    oluacls_class<olua_long>(L, "olua.long");
    oluacls_func(L, "__gc", _olua_long___gc);
    oluacls_func(L, "__index", _olua_long___index);
    oluacls_func(L, "__newindex", _olua_long___newindex);
    oluacls_func(L, "__olua_move", _olua_long___olua_move);
    oluacls_func(L, "assign", _olua_long_assign);
    oluacls_func(L, "new", _olua_long_create);
    oluacls_func(L, "slice", _olua_long_slice);
    oluacls_func(L, "sub", _olua_long_sub);
    oluacls_func(L, "take", _olua_long_take);
    oluacls_func(L, "tostring", _olua_long_tostring);
    oluacls_prop(L, "length", _olua_long_length, _olua_long_length);
    oluacls_prop(L, "rawdata", _olua_long_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_long_size, nullptr);
    oluacls_prop(L, "value", _olua_long_value, _olua_long_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_llong___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.llong");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_llong___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg1);

    // olua_llong_t __index(unsigned int idx)
    olua_llong_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_llong_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_llong_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_llong___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_llong *)olua_toobj(L, 1, "olua.llong");
    olua_push_object(L, self, "olua.llong");

    olua_endinvoke(L);

    return 1;
}

static int _olua_llong_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_llong_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.llong");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_llong_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_llong_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_llong_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_llong::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_llong_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_llong *create(@optional size_t len)
    olua_llong *ret = olua_llong::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.llong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_llong *create()
    olua_llong *ret = olua_llong::create();
    int num_ret = olua_push_object(L, ret, "olua.llong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_llong *create()
        return _olua_llong_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_llong *create(@optional size_t len)
            return _olua_llong_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_llong::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_llong_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.llong");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.llong");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_llong *slice(size_t from, @optional size_t to)
    olua_llong *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.llong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_llong *slice(size_t from)
    olua_llong *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.llong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_llong *slice(size_t from)
            return _olua_llong_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_llong *slice(size_t from, @optional size_t to)
            return _olua_llong_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_llong::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_llong_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_llong *sub(size_t from, @optional size_t to)
    olua_llong *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.llong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_llong *sub(size_t from)
    olua_llong *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.llong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_llong *sub(size_t from)
            return _olua_llong_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_llong *sub(size_t from, @optional size_t to)
            return _olua_llong_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_llong::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_llong_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.llong");

    // olua_llong *take()
    olua_llong *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.llong");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_llong_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.llong");

    // @getter @name(value) const olua_llong_t &value()
    const olua_llong_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_llong_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_llong *self = nullptr;
    olua_llong_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.llong");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_llong_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_llong_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_llong_t &value()
        return _olua_llong_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_llong_t &v)
            return _olua_llong_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_llong::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_llong(lua_State *L)
{
    oluacls_class<olua_llong>(L, "olua.llong");
    oluacls_func(L, "__gc", _olua_llong___gc);
    oluacls_func(L, "__index", _olua_llong___index);
    oluacls_func(L, "__newindex", _olua_llong___newindex);
    oluacls_func(L, "__olua_move", _olua_llong___olua_move);
    oluacls_func(L, "assign", _olua_llong_assign);
    oluacls_func(L, "new", _olua_llong_create);
    oluacls_func(L, "slice", _olua_llong_slice);
    oluacls_func(L, "sub", _olua_llong_sub);
    oluacls_func(L, "take", _olua_llong_take);
    oluacls_func(L, "tostring", _olua_llong_tostring);
    oluacls_prop(L, "length", _olua_llong_length, _olua_llong_length);
    oluacls_prop(L, "rawdata", _olua_llong_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_llong_size, nullptr);
    oluacls_prop(L, "value", _olua_llong_value, _olua_llong_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_uchar___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uchar");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uchar___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg1);

    // olua_uchar_t __index(unsigned int idx)
    olua_uchar_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_uchar_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_uchar_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uchar___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_uchar *)olua_toobj(L, 1, "olua.uchar");
    olua_push_object(L, self, "olua.uchar");

    olua_endinvoke(L);

    return 1;
}

static int _olua_uchar_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uchar_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uchar");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uchar_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_uchar_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_uchar_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uchar::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uchar_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_uchar *create(@optional size_t len)
    olua_uchar *ret = olua_uchar::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uchar");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_uchar *create()
    olua_uchar *ret = olua_uchar::create();
    int num_ret = olua_push_object(L, ret, "olua.uchar");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_uchar *create()
        return _olua_uchar_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_uchar *create(@optional size_t len)
            return _olua_uchar_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uchar::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uchar_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uchar");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uchar");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uchar *slice(size_t from, @optional size_t to)
    olua_uchar *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uchar");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uchar *slice(size_t from)
    olua_uchar *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uchar");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uchar *slice(size_t from)
            return _olua_uchar_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uchar *slice(size_t from, @optional size_t to)
            return _olua_uchar_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uchar::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uchar_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uchar *sub(size_t from, @optional size_t to)
    olua_uchar *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uchar");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uchar *sub(size_t from)
    olua_uchar *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uchar");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uchar *sub(size_t from)
            return _olua_uchar_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uchar *sub(size_t from, @optional size_t to)
            return _olua_uchar_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uchar::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uchar_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uchar");

    // olua_uchar *take()
    olua_uchar *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.uchar");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uchar_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uchar");

    // @getter @name(value) const olua_uchar_t &value()
    const olua_uchar_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uchar_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uchar *self = nullptr;
    olua_uchar_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uchar");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_uchar_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uchar_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_uchar_t &value()
        return _olua_uchar_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_uchar_t &v)
            return _olua_uchar_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uchar::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_uchar(lua_State *L)
{
    oluacls_class<olua_uchar>(L, "olua.uchar");
    oluacls_func(L, "__gc", _olua_uchar___gc);
    oluacls_func(L, "__index", _olua_uchar___index);
    oluacls_func(L, "__newindex", _olua_uchar___newindex);
    oluacls_func(L, "__olua_move", _olua_uchar___olua_move);
    oluacls_func(L, "assign", _olua_uchar_assign);
    oluacls_func(L, "new", _olua_uchar_create);
    oluacls_func(L, "slice", _olua_uchar_slice);
    oluacls_func(L, "sub", _olua_uchar_sub);
    oluacls_func(L, "take", _olua_uchar_take);
    oluacls_func(L, "tostring", _olua_uchar_tostring);
    oluacls_prop(L, "length", _olua_uchar_length, _olua_uchar_length);
    oluacls_prop(L, "rawdata", _olua_uchar_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_uchar_size, nullptr);
    oluacls_prop(L, "value", _olua_uchar_value, _olua_uchar_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_ushort___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ushort");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ushort___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg1);

    // olua_ushort_t __index(unsigned int idx)
    olua_ushort_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_ushort_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_ushort_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ushort___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_ushort *)olua_toobj(L, 1, "olua.ushort");
    olua_push_object(L, self, "olua.ushort");

    olua_endinvoke(L);

    return 1;
}

static int _olua_ushort_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ushort_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ushort");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ushort_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_ushort_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_ushort_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ushort::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ushort_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_ushort *create(@optional size_t len)
    olua_ushort *ret = olua_ushort::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ushort");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_ushort *create()
    olua_ushort *ret = olua_ushort::create();
    int num_ret = olua_push_object(L, ret, "olua.ushort");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_ushort *create()
        return _olua_ushort_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_ushort *create(@optional size_t len)
            return _olua_ushort_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ushort::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ushort_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ushort");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ushort");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ushort *slice(size_t from, @optional size_t to)
    olua_ushort *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ushort");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ushort *slice(size_t from)
    olua_ushort *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ushort");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ushort *slice(size_t from)
            return _olua_ushort_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ushort *slice(size_t from, @optional size_t to)
            return _olua_ushort_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ushort::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ushort_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ushort *sub(size_t from, @optional size_t to)
    olua_ushort *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ushort");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ushort *sub(size_t from)
    olua_ushort *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ushort");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ushort *sub(size_t from)
            return _olua_ushort_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ushort *sub(size_t from, @optional size_t to)
            return _olua_ushort_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ushort::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ushort_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ushort");

    // olua_ushort *take()
    olua_ushort *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.ushort");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ushort_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ushort");

    // @getter @name(value) const olua_ushort_t &value()
    const olua_ushort_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ushort_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ushort *self = nullptr;
    olua_ushort_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ushort");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_ushort_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ushort_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_ushort_t &value()
        return _olua_ushort_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_ushort_t &v)
            return _olua_ushort_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ushort::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_ushort(lua_State *L)
{
    oluacls_class<olua_ushort>(L, "olua.ushort");
    oluacls_func(L, "__gc", _olua_ushort___gc);
    oluacls_func(L, "__index", _olua_ushort___index);
    oluacls_func(L, "__newindex", _olua_ushort___newindex);
    oluacls_func(L, "__olua_move", _olua_ushort___olua_move);
    oluacls_func(L, "assign", _olua_ushort_assign);
    oluacls_func(L, "new", _olua_ushort_create);
    oluacls_func(L, "slice", _olua_ushort_slice);
    oluacls_func(L, "sub", _olua_ushort_sub);
    oluacls_func(L, "take", _olua_ushort_take);
    oluacls_func(L, "tostring", _olua_ushort_tostring);
    oluacls_prop(L, "length", _olua_ushort_length, _olua_ushort_length);
    oluacls_prop(L, "rawdata", _olua_ushort_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_ushort_size, nullptr);
    oluacls_prop(L, "value", _olua_ushort_value, _olua_ushort_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_uint___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg1);

    // olua_uint_t __index(unsigned int idx)
    olua_uint_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_uint_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_uint_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_uint *)olua_toobj(L, 1, "olua.uint");
    olua_push_object(L, self, "olua.uint");

    olua_endinvoke(L);

    return 1;
}

static int _olua_uint_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_uint_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_uint_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_uint *create(@optional size_t len)
    olua_uint *ret = olua_uint::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_uint *create()
    olua_uint *ret = olua_uint::create();
    int num_ret = olua_push_object(L, ret, "olua.uint");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_uint *create()
        return _olua_uint_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_uint *create(@optional size_t len)
            return _olua_uint_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint *slice(size_t from, @optional size_t to)
    olua_uint *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint *slice(size_t from)
    olua_uint *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint *slice(size_t from)
            return _olua_uint_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint *slice(size_t from, @optional size_t to)
            return _olua_uint_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_uint *sub(size_t from, @optional size_t to)
    olua_uint *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.uint");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_uint *sub(size_t from)
    olua_uint *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.uint");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_uint *sub(size_t from)
            return _olua_uint_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_uint *sub(size_t from, @optional size_t to)
            return _olua_uint_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_uint::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_uint_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint");

    // olua_uint *take()
    olua_uint *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.uint");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_uint_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;

    olua_to_object(L, 1, &self, "olua.uint");

    // @getter @name(value) const olua_uint_t &value()
    const olua_uint_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_uint_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_uint *self = nullptr;
    olua_uint_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.uint");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_uint_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_uint_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_uint_t &value()
        return _olua_uint_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_uint_t &v)
            return _olua_uint_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_uint::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_uint(lua_State *L)
{
    oluacls_class<olua_uint>(L, "olua.uint");
    oluacls_func(L, "__gc", _olua_uint___gc);
    oluacls_func(L, "__index", _olua_uint___index);
    oluacls_func(L, "__newindex", _olua_uint___newindex);
    oluacls_func(L, "__olua_move", _olua_uint___olua_move);
    oluacls_func(L, "assign", _olua_uint_assign);
    oluacls_func(L, "new", _olua_uint_create);
    oluacls_func(L, "slice", _olua_uint_slice);
    oluacls_func(L, "sub", _olua_uint_sub);
    oluacls_func(L, "take", _olua_uint_take);
    oluacls_func(L, "tostring", _olua_uint_tostring);
    oluacls_prop(L, "length", _olua_uint_length, _olua_uint_length);
    oluacls_prop(L, "rawdata", _olua_uint_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_uint_size, nullptr);
    oluacls_prop(L, "value", _olua_uint_value, _olua_uint_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_ulong___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ulong");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ulong___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg1);

    // olua_ulong_t __index(unsigned int idx)
    olua_ulong_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_ulong_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_ulong_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ulong___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_ulong *)olua_toobj(L, 1, "olua.ulong");
    olua_push_object(L, self, "olua.ulong");

    olua_endinvoke(L);

    return 1;
}

static int _olua_ulong_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ulong_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ulong");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ulong_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_ulong_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_ulong_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ulong::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ulong_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_ulong *create(@optional size_t len)
    olua_ulong *ret = olua_ulong::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ulong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_ulong *create()
    olua_ulong *ret = olua_ulong::create();
    int num_ret = olua_push_object(L, ret, "olua.ulong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_ulong *create()
        return _olua_ulong_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_ulong *create(@optional size_t len)
            return _olua_ulong_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ulong::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ulong_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ulong");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ulong");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ulong *slice(size_t from, @optional size_t to)
    olua_ulong *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ulong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ulong *slice(size_t from)
    olua_ulong *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ulong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ulong *slice(size_t from)
            return _olua_ulong_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ulong *slice(size_t from, @optional size_t to)
            return _olua_ulong_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ulong::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ulong_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ulong *sub(size_t from, @optional size_t to)
    olua_ulong *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ulong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ulong *sub(size_t from)
    olua_ulong *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ulong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ulong *sub(size_t from)
            return _olua_ulong_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ulong *sub(size_t from, @optional size_t to)
            return _olua_ulong_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ulong::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ulong_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ulong");

    // olua_ulong *take()
    olua_ulong *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.ulong");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ulong_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ulong");

    // @getter @name(value) const olua_ulong_t &value()
    const olua_ulong_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ulong_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ulong *self = nullptr;
    olua_ulong_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ulong");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_ulong_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ulong_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_ulong_t &value()
        return _olua_ulong_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_ulong_t &v)
            return _olua_ulong_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ulong::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_ulong(lua_State *L)
{
    oluacls_class<olua_ulong>(L, "olua.ulong");
    oluacls_func(L, "__gc", _olua_ulong___gc);
    oluacls_func(L, "__index", _olua_ulong___index);
    oluacls_func(L, "__newindex", _olua_ulong___newindex);
    oluacls_func(L, "__olua_move", _olua_ulong___olua_move);
    oluacls_func(L, "assign", _olua_ulong_assign);
    oluacls_func(L, "new", _olua_ulong_create);
    oluacls_func(L, "slice", _olua_ulong_slice);
    oluacls_func(L, "sub", _olua_ulong_sub);
    oluacls_func(L, "take", _olua_ulong_take);
    oluacls_func(L, "tostring", _olua_ulong_tostring);
    oluacls_prop(L, "length", _olua_ulong_length, _olua_ulong_length);
    oluacls_prop(L, "rawdata", _olua_ulong_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_ulong_size, nullptr);
    oluacls_prop(L, "value", _olua_ulong_value, _olua_ulong_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_ullong___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ullong");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ullong___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg1);

    // olua_ullong_t __index(unsigned int idx)
    olua_ullong_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_ullong_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_ullong_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ullong___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_ullong *)olua_toobj(L, 1, "olua.ullong");
    olua_push_object(L, self, "olua.ullong");

    olua_endinvoke(L);

    return 1;
}

static int _olua_ullong_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ullong_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ullong");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ullong_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_ullong_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_ullong_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ullong::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ullong_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_ullong *create(@optional size_t len)
    olua_ullong *ret = olua_ullong::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ullong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_ullong *create()
    olua_ullong *ret = olua_ullong::create();
    int num_ret = olua_push_object(L, ret, "olua.ullong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_ullong *create()
        return _olua_ullong_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_ullong *create(@optional size_t len)
            return _olua_ullong_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ullong::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ullong_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ullong");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ullong");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ullong *slice(size_t from, @optional size_t to)
    olua_ullong *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ullong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ullong *slice(size_t from)
    olua_ullong *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ullong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ullong *slice(size_t from)
            return _olua_ullong_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ullong *slice(size_t from, @optional size_t to)
            return _olua_ullong_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ullong::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ullong_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ullong *sub(size_t from, @optional size_t to)
    olua_ullong *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ullong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ullong *sub(size_t from)
    olua_ullong *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ullong");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ullong *sub(size_t from)
            return _olua_ullong_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ullong *sub(size_t from, @optional size_t to)
            return _olua_ullong_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ullong::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ullong_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ullong");

    // olua_ullong *take()
    olua_ullong *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.ullong");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ullong_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ullong");

    // @getter @name(value) const olua_ullong_t &value()
    const olua_ullong_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ullong_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ullong *self = nullptr;
    olua_ullong_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ullong");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const olua_ullong_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ullong_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_ullong_t &value()
        return _olua_ullong_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const olua_ullong_t &v)
            return _olua_ullong_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ullong::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_ullong(lua_State *L)
{
    oluacls_class<olua_ullong>(L, "olua.ullong");
    oluacls_func(L, "__gc", _olua_ullong___gc);
    oluacls_func(L, "__index", _olua_ullong___index);
    oluacls_func(L, "__newindex", _olua_ullong___newindex);
    oluacls_func(L, "__olua_move", _olua_ullong___olua_move);
    oluacls_func(L, "assign", _olua_ullong_assign);
    oluacls_func(L, "new", _olua_ullong_create);
    oluacls_func(L, "slice", _olua_ullong_slice);
    oluacls_func(L, "sub", _olua_ullong_sub);
    oluacls_func(L, "take", _olua_ullong_take);
    oluacls_func(L, "tostring", _olua_ullong_tostring);
    oluacls_prop(L, "length", _olua_ullong_length, _olua_ullong_length);
    oluacls_prop(L, "rawdata", _olua_ullong_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_ullong_size, nullptr);
    oluacls_prop(L, "value", _olua_ullong_value, _olua_ullong_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_float___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;

    olua_to_object(L, 1, &self, "olua.float");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_float___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_integer(L, 2, &arg1);

    // olua_float_t __index(unsigned int idx)
    olua_float_t ret = self->__index(arg1);
    int num_ret = olua_push_number(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_float_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_integer(L, 2, &arg1);
    olua_check_number(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_float_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_float___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_float *)olua_toobj(L, 1, "olua.float");
    olua_push_object(L, self, "olua.float");

    olua_endinvoke(L);

    return 1;
}

static int _olua_float_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_float_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;

    olua_to_object(L, 1, &self, "olua.float");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_float_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_float_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_float_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_float::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_float_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_float *create(@optional size_t len)
    olua_float *ret = olua_float::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.float");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_float *create()
    olua_float *ret = olua_float::create();
    int num_ret = olua_push_object(L, ret, "olua.float");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_float *create()
        return _olua_float_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_float *create(@optional size_t len)
            return _olua_float_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_float::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_float_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;

    olua_to_object(L, 1, &self, "olua.float");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;

    olua_to_object(L, 1, &self, "olua.float");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_float *slice(size_t from, @optional size_t to)
    olua_float *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.float");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_float *slice(size_t from)
    olua_float *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.float");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_float *slice(size_t from)
            return _olua_float_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_float *slice(size_t from, @optional size_t to)
            return _olua_float_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_float::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_float_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_float *sub(size_t from, @optional size_t to)
    olua_float *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.float");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_float *sub(size_t from)
    olua_float *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.float");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_float *sub(size_t from)
            return _olua_float_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_float *sub(size_t from, @optional size_t to)
            return _olua_float_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_float::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_float_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;

    olua_to_object(L, 1, &self, "olua.float");

    // olua_float *take()
    olua_float *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.float");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_float_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;

    olua_to_object(L, 1, &self, "olua.float");

    // @getter @name(value) const olua_float_t &value()
    const olua_float_t &ret = self->value();
    int num_ret = olua_push_number(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_float_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_float *self = nullptr;
    olua_float_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.float");
    olua_check_number(L, 2, &arg1);

    // @setter @name(value) void value(const olua_float_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_float_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_float_t &value()
        return _olua_float_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_number(L, 2))) {
            // @setter @name(value) void value(const olua_float_t &v)
            return _olua_float_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_float::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_float(lua_State *L)
{
    oluacls_class<olua_float>(L, "olua.float");
    oluacls_func(L, "__gc", _olua_float___gc);
    oluacls_func(L, "__index", _olua_float___index);
    oluacls_func(L, "__newindex", _olua_float___newindex);
    oluacls_func(L, "__olua_move", _olua_float___olua_move);
    oluacls_func(L, "assign", _olua_float_assign);
    oluacls_func(L, "new", _olua_float_create);
    oluacls_func(L, "slice", _olua_float_slice);
    oluacls_func(L, "sub", _olua_float_sub);
    oluacls_func(L, "take", _olua_float_take);
    oluacls_func(L, "tostring", _olua_float_tostring);
    oluacls_prop(L, "length", _olua_float_length, _olua_float_length);
    oluacls_prop(L, "rawdata", _olua_float_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_float_size, nullptr);
    oluacls_prop(L, "value", _olua_float_value, _olua_float_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_double___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;

    olua_to_object(L, 1, &self, "olua.double");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_double___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_integer(L, 2, &arg1);

    // olua_double_t __index(unsigned int idx)
    olua_double_t ret = self->__index(arg1);
    int num_ret = olua_push_number(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_double_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_integer(L, 2, &arg1);
    olua_check_number(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_double_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_double___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_double *)olua_toobj(L, 1, "olua.double");
    olua_push_object(L, self, "olua.double");

    olua_endinvoke(L);

    return 1;
}

static int _olua_double_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_double_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;

    olua_to_object(L, 1, &self, "olua.double");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_double_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_double_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_double_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_double::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_double_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_double *create(@optional size_t len)
    olua_double *ret = olua_double::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.double");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_double *create()
    olua_double *ret = olua_double::create();
    int num_ret = olua_push_object(L, ret, "olua.double");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_double *create()
        return _olua_double_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_double *create(@optional size_t len)
            return _olua_double_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_double::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_double_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;

    olua_to_object(L, 1, &self, "olua.double");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;

    olua_to_object(L, 1, &self, "olua.double");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_double *slice(size_t from, @optional size_t to)
    olua_double *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.double");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_double *slice(size_t from)
    olua_double *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.double");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_double *slice(size_t from)
            return _olua_double_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_double *slice(size_t from, @optional size_t to)
            return _olua_double_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_double::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_double_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_double *sub(size_t from, @optional size_t to)
    olua_double *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.double");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_double *sub(size_t from)
    olua_double *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.double");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_double *sub(size_t from)
            return _olua_double_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_double *sub(size_t from, @optional size_t to)
            return _olua_double_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_double::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_double_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;

    olua_to_object(L, 1, &self, "olua.double");

    // olua_double *take()
    olua_double *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.double");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_double_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;

    olua_to_object(L, 1, &self, "olua.double");

    // @getter @name(value) const olua_double_t &value()
    const olua_double_t &ret = self->value();
    int num_ret = olua_push_number(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_double_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_double *self = nullptr;
    olua_double_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.double");
    olua_check_number(L, 2, &arg1);

    // @setter @name(value) void value(const olua_double_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_double_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_double_t &value()
        return _olua_double_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_number(L, 2))) {
            // @setter @name(value) void value(const olua_double_t &v)
            return _olua_double_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_double::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_double(lua_State *L)
{
    oluacls_class<olua_double>(L, "olua.double");
    oluacls_func(L, "__gc", _olua_double___gc);
    oluacls_func(L, "__index", _olua_double___index);
    oluacls_func(L, "__newindex", _olua_double___newindex);
    oluacls_func(L, "__olua_move", _olua_double___olua_move);
    oluacls_func(L, "assign", _olua_double_assign);
    oluacls_func(L, "new", _olua_double_create);
    oluacls_func(L, "slice", _olua_double_slice);
    oluacls_func(L, "sub", _olua_double_sub);
    oluacls_func(L, "take", _olua_double_take);
    oluacls_func(L, "tostring", _olua_double_tostring);
    oluacls_prop(L, "length", _olua_double_length, _olua_double_length);
    oluacls_prop(L, "rawdata", _olua_double_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_double_size, nullptr);
    oluacls_prop(L, "value", _olua_double_value, _olua_double_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_ldouble___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ldouble");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ldouble___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_integer(L, 2, &arg1);

    // olua_ldouble_t __index(unsigned int idx)
    olua_ldouble_t ret = self->__index(arg1);
    int num_ret = olua_push_number(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    olua_ldouble_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_integer(L, 2, &arg1);
    olua_check_number(L, 3, &arg2);

    // void __newindex(unsigned int idx, const olua_ldouble_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ldouble___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_ldouble *)olua_toobj(L, 1, "olua.ldouble");
    olua_push_object(L, self, "olua.ldouble");

    olua_endinvoke(L);

    return 1;
}

static int _olua_ldouble_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ldouble_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ldouble");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ldouble_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_ldouble_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_ldouble_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ldouble::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ldouble_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_ldouble *create(@optional size_t len)
    olua_ldouble *ret = olua_ldouble::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ldouble");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_ldouble *create()
    olua_ldouble *ret = olua_ldouble::create();
    int num_ret = olua_push_object(L, ret, "olua.ldouble");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_ldouble *create()
        return _olua_ldouble_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_ldouble *create(@optional size_t len)
            return _olua_ldouble_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ldouble::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ldouble_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ldouble");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ldouble");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ldouble *slice(size_t from, @optional size_t to)
    olua_ldouble *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ldouble");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ldouble *slice(size_t from)
    olua_ldouble *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ldouble");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ldouble *slice(size_t from)
            return _olua_ldouble_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ldouble *slice(size_t from, @optional size_t to)
            return _olua_ldouble_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ldouble::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ldouble_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ldouble *sub(size_t from, @optional size_t to)
    olua_ldouble *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ldouble");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ldouble *sub(size_t from)
    olua_ldouble *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ldouble");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ldouble *sub(size_t from)
            return _olua_ldouble_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ldouble *sub(size_t from, @optional size_t to)
            return _olua_ldouble_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ldouble::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ldouble_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ldouble");

    // olua_ldouble *take()
    olua_ldouble *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.ldouble");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ldouble_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ldouble");

    // @getter @name(value) const olua_ldouble_t &value()
    const olua_ldouble_t &ret = self->value();
    int num_ret = olua_push_number(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ldouble_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ldouble *self = nullptr;
    olua_ldouble_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ldouble");
    olua_check_number(L, 2, &arg1);

    // @setter @name(value) void value(const olua_ldouble_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ldouble_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const olua_ldouble_t &value()
        return _olua_ldouble_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_number(L, 2))) {
            // @setter @name(value) void value(const olua_ldouble_t &v)
            return _olua_ldouble_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ldouble::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_ldouble(lua_State *L)
{
    oluacls_class<olua_ldouble>(L, "olua.ldouble");
    oluacls_func(L, "__gc", _olua_ldouble___gc);
    oluacls_func(L, "__index", _olua_ldouble___index);
    oluacls_func(L, "__newindex", _olua_ldouble___newindex);
    oluacls_func(L, "__olua_move", _olua_ldouble___olua_move);
    oluacls_func(L, "assign", _olua_ldouble_assign);
    oluacls_func(L, "new", _olua_ldouble_create);
    oluacls_func(L, "slice", _olua_ldouble_slice);
    oluacls_func(L, "sub", _olua_ldouble_sub);
    oluacls_func(L, "take", _olua_ldouble_take);
    oluacls_func(L, "tostring", _olua_ldouble_tostring);
    oluacls_prop(L, "length", _olua_ldouble_length, _olua_ldouble_length);
    oluacls_prop(L, "rawdata", _olua_ldouble_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_ldouble_size, nullptr);
    oluacls_prop(L, "value", _olua_ldouble_value, _olua_ldouble_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_size_t___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.size_t");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_size_t___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg1);

    // size_t __index(unsigned int idx)
    size_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    size_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const size_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_size_t___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_size_t *)olua_toobj(L, 1, "olua.size_t");
    olua_push_object(L, self, "olua.size_t");

    olua_endinvoke(L);

    return 1;
}

static int _olua_size_t_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_size_t_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.size_t");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_size_t_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_size_t_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_size_t_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_size_t::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_size_t_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_size_t *create(@optional size_t len)
    olua_size_t *ret = olua_size_t::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.size_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_size_t *create()
    olua_size_t *ret = olua_size_t::create();
    int num_ret = olua_push_object(L, ret, "olua.size_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_size_t *create()
        return _olua_size_t_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_size_t *create(@optional size_t len)
            return _olua_size_t_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_size_t::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_size_t_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.size_t");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.size_t");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_size_t *slice(size_t from, @optional size_t to)
    olua_size_t *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.size_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_size_t *slice(size_t from)
    olua_size_t *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.size_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_size_t *slice(size_t from)
            return _olua_size_t_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_size_t *slice(size_t from, @optional size_t to)
            return _olua_size_t_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_size_t::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_size_t_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_size_t *sub(size_t from, @optional size_t to)
    olua_size_t *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.size_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_size_t *sub(size_t from)
    olua_size_t *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.size_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_size_t *sub(size_t from)
            return _olua_size_t_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_size_t *sub(size_t from, @optional size_t to)
            return _olua_size_t_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_size_t::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_size_t_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.size_t");

    // olua_size_t *take()
    olua_size_t *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.size_t");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_size_t_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.size_t");

    // @getter @name(value) const size_t &value()
    const size_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_size_t_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_size_t *self = nullptr;
    size_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.size_t");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const size_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_size_t_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const size_t &value()
        return _olua_size_t_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const size_t &v)
            return _olua_size_t_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_size_t::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_size_t(lua_State *L)
{
    oluacls_class<olua_size_t>(L, "olua.size_t");
    oluacls_func(L, "__gc", _olua_size_t___gc);
    oluacls_func(L, "__index", _olua_size_t___index);
    oluacls_func(L, "__newindex", _olua_size_t___newindex);
    oluacls_func(L, "__olua_move", _olua_size_t___olua_move);
    oluacls_func(L, "assign", _olua_size_t_assign);
    oluacls_func(L, "new", _olua_size_t_create);
    oluacls_func(L, "slice", _olua_size_t_slice);
    oluacls_func(L, "sub", _olua_size_t_sub);
    oluacls_func(L, "take", _olua_size_t_take);
    oluacls_func(L, "tostring", _olua_size_t_tostring);
    oluacls_prop(L, "length", _olua_size_t_length, _olua_size_t_length);
    oluacls_prop(L, "rawdata", _olua_size_t_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_size_t_size, nullptr);
    oluacls_prop(L, "value", _olua_size_t_value, _olua_size_t_value);

    return 1;
}
OLUA_END_DECLS

static int _olua_ssize_t___gc(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ssize_t");

    // olua_Return __gc(lua_State *L)
    olua_Return ret = self->__gc(L);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ssize_t___index(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    unsigned int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg1);

    // ssize_t __index(unsigned int idx)
    ssize_t ret = self->__index(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t___newindex(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    unsigned int arg1 = 0;       /** idx */
    ssize_t arg2 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void __newindex(unsigned int idx, const ssize_t &v)
    self->__newindex(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ssize_t___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (olua_ssize_t *)olua_toobj(L, 1, "olua.ssize_t");
    olua_push_object(L, self, "olua.ssize_t");

    olua_endinvoke(L);

    return 1;
}

static int _olua_ssize_t_assign(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    const char *arg1 = nullptr;       /** data */
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_string(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // void assign(const char *data, size_t len)
    self->assign(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ssize_t_length$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ssize_t");

    // @getter @name(length) size_t length()
    size_t ret = self->length();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_length$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    size_t arg1 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(length) void length(size_t len)
    self->length(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ssize_t_length(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(length) size_t length()
        return _olua_ssize_t_length$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(length) void length(size_t len)
            return _olua_ssize_t_length$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ssize_t::length' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ssize_t_create$1(lua_State *L)
{
    olua_startinvoke(L);

    size_t arg1 = 0;       /** len */

    olua_check_integer(L, 1, &arg1);

    // @postnew @name(new) static olua_ssize_t *create(@optional size_t len)
    olua_ssize_t *ret = olua_ssize_t::create(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ssize_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_create$2(lua_State *L)
{
    olua_startinvoke(L);

    // @postnew @name(new) static olua_ssize_t *create()
    olua_ssize_t *ret = olua_ssize_t::create();
    int num_ret = olua_push_object(L, ret, "olua.ssize_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // @postnew @name(new) static olua_ssize_t *create()
        return _olua_ssize_t_create$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 1))) {
            // @postnew @name(new) static olua_ssize_t *create(@optional size_t len)
            return _olua_ssize_t_create$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ssize_t::create' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ssize_t_rawdata(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ssize_t");

    // @getter @name(rawdata) void *rawdata()
    void *ret = self->rawdata();
    int num_ret = olua_push_object(L, ret, "void *");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_size(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ssize_t");

    // @getter @name(sizeof) size_t size()
    size_t ret = self->size();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_slice$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ssize_t *slice(size_t from, @optional size_t to)
    olua_ssize_t *ret = self->slice(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ssize_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_slice$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ssize_t *slice(size_t from)
    olua_ssize_t *ret = self->slice(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ssize_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_slice(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ssize_t *slice(size_t from)
            return _olua_ssize_t_slice$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ssize_t *slice(size_t from, @optional size_t to)
            return _olua_ssize_t_slice$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ssize_t::slice' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ssize_t_sub$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    size_t arg1 = 0;       /** from */
    size_t arg2 = 0;       /** to */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg1);
    olua_check_integer(L, 3, &arg2);

    // @postnew olua_ssize_t *sub(size_t from, @optional size_t to)
    olua_ssize_t *ret = self->sub(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "olua.ssize_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_sub$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    size_t arg1 = 0;       /** from */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg1);

    // @postnew olua_ssize_t *sub(size_t from)
    olua_ssize_t *ret = self->sub(arg1);
    int num_ret = olua_push_object(L, ret, "olua.ssize_t");

    // insert code after call
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_sub(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @postnew olua_ssize_t *sub(size_t from)
            return _olua_ssize_t_sub$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_integer(L, 2)) && (olua_is_integer(L, 3))) {
            // @postnew olua_ssize_t *sub(size_t from, @optional size_t to)
            return _olua_ssize_t_sub$1(L);
        // }
    }

    luaL_error(L, "method 'olua_ssize_t::sub' not support '%d' arguments", num_args);

    return 0;
}

static int _olua_ssize_t_take(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ssize_t");

    // olua_ssize_t *take()
    olua_ssize_t *ret = self->take();
    int num_ret = olua_push_object(L, ret, "olua.ssize_t");

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_tostring(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    size_t arg2 = 0;       /** len */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg2);

    // olua_Return tostring(lua_State *L, size_t len)
    olua_Return ret = self->tostring(L, arg2);

    olua_endinvoke(L);

    return (int)ret;
}

static int _olua_ssize_t_value$1(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;

    olua_to_object(L, 1, &self, "olua.ssize_t");

    // @getter @name(value) const ssize_t &value()
    const ssize_t &ret = self->value();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _olua_ssize_t_value$2(lua_State *L)
{
    olua_startinvoke(L);

    olua_ssize_t *self = nullptr;
    ssize_t arg1 = 0;       /** v */

    olua_to_object(L, 1, &self, "olua.ssize_t");
    olua_check_integer(L, 2, &arg1);

    // @setter @name(value) void value(const ssize_t &v)
    self->value(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _olua_ssize_t_value(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // @getter @name(value) const ssize_t &value()
        return _olua_ssize_t_value$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_integer(L, 2))) {
            // @setter @name(value) void value(const ssize_t &v)
            return _olua_ssize_t_value$2(L);
        // }
    }

    luaL_error(L, "method 'olua_ssize_t::value' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_olua_ssize_t(lua_State *L)
{
    oluacls_class<olua_ssize_t>(L, "olua.ssize_t");
    oluacls_func(L, "__gc", _olua_ssize_t___gc);
    oluacls_func(L, "__index", _olua_ssize_t___index);
    oluacls_func(L, "__newindex", _olua_ssize_t___newindex);
    oluacls_func(L, "__olua_move", _olua_ssize_t___olua_move);
    oluacls_func(L, "assign", _olua_ssize_t_assign);
    oluacls_func(L, "new", _olua_ssize_t_create);
    oluacls_func(L, "slice", _olua_ssize_t_slice);
    oluacls_func(L, "sub", _olua_ssize_t_sub);
    oluacls_func(L, "take", _olua_ssize_t_take);
    oluacls_func(L, "tostring", _olua_ssize_t_tostring);
    oluacls_prop(L, "length", _olua_ssize_t_length, _olua_ssize_t_length);
    oluacls_prop(L, "rawdata", _olua_ssize_t_rawdata, nullptr);
    oluacls_prop(L, "sizeof", _olua_ssize_t_size, nullptr);
    oluacls_prop(L, "value", _olua_ssize_t_value, _olua_ssize_t_value);

    return 1;
}
OLUA_END_DECLS

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_types(lua_State *L)
{
    olua_require(L, "olua.bool", luaopen_olua_bool);
    olua_require(L, "olua.string", luaopen_olua_string);
    olua_require(L, "olua.int8", luaopen_olua_int8);
    olua_require(L, "olua.int16", luaopen_olua_int16);
    olua_require(L, "olua.int32", luaopen_olua_int32);
    olua_require(L, "olua.int64", luaopen_olua_int64);
    olua_require(L, "olua.uint8", luaopen_olua_uint8);
    olua_require(L, "olua.uint16", luaopen_olua_uint16);
    olua_require(L, "olua.uint32", luaopen_olua_uint32);
    olua_require(L, "olua.uint64", luaopen_olua_uint64);
    olua_require(L, "olua.char", luaopen_olua_char);
    olua_require(L, "olua.short", luaopen_olua_short);
    olua_require(L, "olua.int", luaopen_olua_int);
    olua_require(L, "olua.long", luaopen_olua_long);
    olua_require(L, "olua.llong", luaopen_olua_llong);
    olua_require(L, "olua.uchar", luaopen_olua_uchar);
    olua_require(L, "olua.ushort", luaopen_olua_ushort);
    olua_require(L, "olua.uint", luaopen_olua_uint);
    olua_require(L, "olua.ulong", luaopen_olua_ulong);
    olua_require(L, "olua.ullong", luaopen_olua_ullong);
    olua_require(L, "olua.float", luaopen_olua_float);
    olua_require(L, "olua.double", luaopen_olua_double);
    olua_require(L, "olua.ldouble", luaopen_olua_ldouble);
    olua_require(L, "olua.size_t", luaopen_olua_size_t);
    olua_require(L, "olua.ssize_t", luaopen_olua_ssize_t);

    return 0;
}
OLUA_END_DECLS
