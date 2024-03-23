#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Unity/Services/Vivox/zzzz__ValueEventArg_2_def.hpp"
template <typename TK, typename TV> constexpr TK& Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
template <typename TK, typename TV> constexpr TK const& Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
template <typename TK, typename TV> constexpr void Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_set__Key_k__BackingField(TK value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Key_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TK, typename TV> constexpr TV& Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
template <typename TK, typename TV> constexpr TV const& Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
template <typename TK, typename TV> constexpr void Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_set__Value_k__BackingField(TV value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Value_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TK, typename TV> constexpr ::StringW& Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_get__PropertyName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyName_k__BackingField;
}
template <typename TK, typename TV> constexpr ::StringW const& Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_get__PropertyName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyName_k__BackingField;
}
template <typename TK, typename TV> constexpr void Unity::Services::Vivox::ValueEventArg_2<TK, TV>::__cordl_internal_set__PropertyName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PropertyName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TK, typename TV> inline ::Unity::Services::Vivox::ValueEventArg_2<TK, TV>* Unity::Services::Vivox::ValueEventArg_2<TK, TV>::New_ctor(TK key, TV value, ::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::ValueEventArg_2<TK, TV>*>(key, value, name));
}
template <typename TK, typename TV> inline void Unity::Services::Vivox::ValueEventArg_2<TK, TV>::_ctor(TK key, TV value, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ValueEventArg_2<TK, TV>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TV>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value, name);
}
template <typename TK, typename TV> inline TK Unity::Services::Vivox::ValueEventArg_2<TK, TV>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ValueEventArg_2<TK, TV>*>::get(),
                                                                             "get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TK, false>(this, ___internal_method);
}
template <typename TK, typename TV> inline void Unity::Services::Vivox::ValueEventArg_2<TK, TV>::set_Key(TK value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ValueEventArg_2<TK, TV>*>::get(), "set_Key",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename TV> inline TV Unity::Services::Vivox::ValueEventArg_2<TK, TV>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ValueEventArg_2<TK, TV>*>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TV, false>(this, ___internal_method);
}
template <typename TK, typename TV> inline void Unity::Services::Vivox::ValueEventArg_2<TK, TV>::set_Value(TV value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ValueEventArg_2<TK, TV>*>::get(), "set_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TV>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename TV> inline ::StringW Unity::Services::Vivox::ValueEventArg_2<TK, TV>::get_PropertyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ValueEventArg_2<TK, TV>*>::get(),
                                                                             "get_PropertyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TK, typename TV> inline void Unity::Services::Vivox::ValueEventArg_2<TK, TV>::set_PropertyName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ValueEventArg_2<TK, TV>*>::get(), "set_PropertyName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
template <typename TK, typename TV> constexpr ::Unity::Services::Vivox::ValueEventArg_2<TK, TV>::ValueEventArg_2() {}
