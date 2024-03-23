#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__EnvironmentVariableAWSEndpointDiscoveryEnabled_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled.get_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::*)()>(
    &::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::get_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff53c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*>::get(), "get_Enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled.set_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::*)(bool)>(
    &::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::set_Enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1ff53c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*>::get(), "set_Enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::*)()>(
    &::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::_ctor)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x1ff53d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::__cordl_internal_get__Enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr bool const& Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::__cordl_internal_get__Enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr void Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::__cordl_internal_set__Enabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Enabled_k__BackingField = value;
}
inline bool Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::get_Enabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*>::get(), "get_Enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::set_Enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*>::get(), "set_Enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled* Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*>());
}
inline void Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EnvironmentVariableAWSEndpointDiscoveryEnabled::EnvironmentVariableAWSEndpointDiscoveryEnabled() {}
