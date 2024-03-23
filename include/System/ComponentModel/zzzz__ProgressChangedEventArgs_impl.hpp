#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__ProgressChangedEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ProgressChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ProgressChangedEventArgs::*)(int32_t, ::System::Object*)>(
    &::System::ComponentModel::ProgressChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1b17a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProgressChangedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProgressChangedEventArgs.get_ProgressPercentage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::ProgressChangedEventArgs::*)()>(
    &::System::ComponentModel::ProgressChangedEventArgs::get_ProgressPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1b17a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProgressChangedEventArgs*>::get(),
                                                                               "get_ProgressPercentage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProgressChangedEventArgs.get_UserState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::ProgressChangedEventArgs::*)()>(
    &::System::ComponentModel::ProgressChangedEventArgs::get_UserState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1b17a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProgressChangedEventArgs*>::get(),
                                                                               "get_UserState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_get_progressPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressPercentage;
}
constexpr int32_t const& System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_get_progressPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___progressPercentage;
}
constexpr void System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_set_progressPercentage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___progressPercentage = value;
}
constexpr ::System::Object*& System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_get_userState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userState;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_get_userState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userState;
}
constexpr void System::ComponentModel::ProgressChangedEventArgs::__cordl_internal_set_userState(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::ProgressChangedEventArgs* System::ComponentModel::ProgressChangedEventArgs::New_ctor(int32_t progressPercentage, ::System::Object* userState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ProgressChangedEventArgs*>(progressPercentage, userState));
}
inline void System::ComponentModel::ProgressChangedEventArgs::_ctor(int32_t progressPercentage, ::System::Object* userState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProgressChangedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progressPercentage, userState);
}
inline int32_t System::ComponentModel::ProgressChangedEventArgs::get_ProgressPercentage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProgressChangedEventArgs*>::get(),
                                                                             "get_ProgressPercentage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ProgressChangedEventArgs::get_UserState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProgressChangedEventArgs*>::get(),
                                                                             "get_UserState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ProgressChangedEventArgs::ProgressChangedEventArgs() {}
