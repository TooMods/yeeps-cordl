#pragma once
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatus_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatusEventArgs_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__NetworkStatus_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs.get_Status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::PlatformServices::NetworkStatus (
    ::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::*)()>(&::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fda2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>::get(), "get_Status",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs.set_Status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::*)(
    ::Amazon::Util::Internal::PlatformServices::NetworkStatus)>(&::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fda2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>::get(), "set_Status", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::NetworkStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::*)(
    ::Amazon::Util::Internal::PlatformServices::NetworkStatus)>(&::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1fda2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::NetworkStatus>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus& Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::__cordl_internal_get__Status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Status_k__BackingField;
}
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatus const& Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::__cordl_internal_get__Status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Status_k__BackingField;
}
constexpr void Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::__cordl_internal_set__Status_k__BackingField(::Amazon::Util::Internal::PlatformServices::NetworkStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Status_k__BackingField = value;
}
inline ::Amazon::Util::Internal::PlatformServices::NetworkStatus Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::get_Status() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>::get(), "get_Status",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::PlatformServices::NetworkStatus, false>(this, ___internal_method);
}
inline void Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::set_Status(::Amazon::Util::Internal::PlatformServices::NetworkStatus value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>::get(), "set_Status", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::NetworkStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*
Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::New_ctor(::Amazon::Util::Internal::PlatformServices::NetworkStatus status) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>(status));
}
inline void Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::_ctor(::Amazon::Util::Internal::PlatformServices::NetworkStatus status) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::NetworkStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs::NetworkStatusEventArgs() {}
