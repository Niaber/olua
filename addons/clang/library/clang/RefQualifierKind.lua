---AUTO GENERATED, DO NOT MODIFY!
---@meta clang.RefQualifierKind

---@type clang.RefQualifierKind
local VALUE

---
---@enum clang.RefQualifierKind
local RefQualifierKind = {
    ---An lvalue ref-qualifier was provided (`&)`.
    LValue = 1,
    ---No ref-qualifier was provided.
    None = 0,
    ---An rvalue ref-qualifier was provided (`&&)`.
    RValue = 2,
}

return RefQualifierKind