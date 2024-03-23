#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(
    &::System::ComponentModel::AsyncCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1b0fcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AsyncCompletedEventArgs::*)(::System::Exception*, bool, ::System::Object*)>(
    &::System::ComponentModel::AsyncCompletedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1b0fd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs.get_Cancelled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(
    &::System::ComponentModel::AsyncCompletedEventArgs::get_Cancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1b0fdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                               "get_Cancelled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs.get_Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(
    &::System::ComponentModel::AsyncCompletedEventArgs::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1b0fdb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                               "get_Error", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs.get_UserState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(
    &::System::ComponentModel::AsyncCompletedEventArgs::get_UserState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1b0fdbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                               "get_UserState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncCompletedEventArgs.RaiseExceptionIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AsyncCompletedEventArgs::*)()>(
    &::System::ComponentModel::AsyncCompletedEventArgs::RaiseExceptionIfNecessary)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1b0fdc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                               "RaiseExceptionIfNecessary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_set_error(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_cancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelled;
}
constexpr bool const& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_cancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelled;
}
constexpr void System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_set_cancelled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelled = value;
}
constexpr ::System::Object*& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_userState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userState;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_get_userState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userState;
}
constexpr void System::ComponentModel::AsyncCompletedEventArgs::__cordl_internal_set_userState(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::AsyncCompletedEventArgs* System::ComponentModel::AsyncCompletedEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::AsyncCompletedEventArgs*>());
}
inline void System::ComponentModel::AsyncCompletedEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::AsyncCompletedEventArgs* System::ComponentModel::AsyncCompletedEventArgs::New_ctor(::System::Exception* error, bool cancelled, ::System::Object* userState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::AsyncCompletedEventArgs*>(error, cancelled, userState));
}
inline void System::ComponentModel::AsyncCompletedEventArgs::_ctor(::System::Exception* error, bool cancelled, ::System::Object* userState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error, cancelled, userState);
}
inline bool System::ComponentModel::AsyncCompletedEventArgs::get_Cancelled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                             "get_Cancelled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Exception* System::ComponentModel::AsyncCompletedEventArgs::get_Error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                             "get_Error", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::AsyncCompletedEventArgs::get_UserState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                             "get_UserState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::ComponentModel::AsyncCompletedEventArgs::RaiseExceptionIfNecessary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AsyncCompletedEventArgs*>::get(),
                                                                             "RaiseExceptionIfNecessary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AsyncCompletedEventArgs::AsyncCompletedEventArgs() {}
