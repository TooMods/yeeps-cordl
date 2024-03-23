#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Unity/Services/Vivox/zzzz__KeyEventArg_1_def.hpp"
template <typename TK> constexpr TK& Unity::Services::Vivox::KeyEventArg_1<TK>::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
template <typename TK> constexpr TK const& Unity::Services::Vivox::KeyEventArg_1<TK>::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
template <typename TK> constexpr void Unity::Services::Vivox::KeyEventArg_1<TK>::__cordl_internal_set__Key_k__BackingField(TK value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Key_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TK> inline ::Unity::Services::Vivox::KeyEventArg_1<TK>* Unity::Services::Vivox::KeyEventArg_1<TK>::New_ctor(TK key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::KeyEventArg_1<TK>*>(key));
}
template <typename TK> inline void Unity::Services::Vivox::KeyEventArg_1<TK>::_ctor(TK key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::KeyEventArg_1<TK>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename TK> inline TK Unity::Services::Vivox::KeyEventArg_1<TK>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::KeyEventArg_1<TK>*>::get(), "get_Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TK, false>(this, ___internal_method);
}
template <typename TK> inline void Unity::Services::Vivox::KeyEventArg_1<TK>::set_Key(TK value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::KeyEventArg_1<TK>*>::get(), "set_Key",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
template <typename TK> constexpr ::Unity::Services::Vivox::KeyEventArg_1<TK>::KeyEventArg_1() {}
