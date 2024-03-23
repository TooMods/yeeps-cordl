#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__EnvironmentVariableCSMConfigs_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CSMFallbackConfigChain_def.hpp"
#include "Amazon/Util/Internal/zzzz__IEnvironmentVariableRetriever_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs.get_environmentRetriever
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::IEnvironmentVariableRetriever* (
    ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::*)()>(&::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::get_environmentRetriever)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d326c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), "get_environmentRetriever",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs.set_environmentRetriever
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::*)(
    ::Amazon::Util::Internal::IEnvironmentVariableRetriever*)>(&::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::set_environmentRetriever)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d3274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), "set_environmentRetriever",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::IEnvironmentVariableRetriever*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::*)(
    ::Amazon::Util::Internal::IEnvironmentVariableRetriever*, ::Amazon::Runtime::Internal::CSMFallbackConfigChain*)>(&::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23d327c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::IEnvironmentVariableRetriever*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::*)(
    ::Amazon::Runtime::Internal::CSMFallbackConfigChain*)>(&::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23d3950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs.SetupConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::*)(
    ::Amazon::Runtime::Internal::CSMFallbackConfigChain*)>(&::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::SetupConfiguration)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x23d3340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), "SetupConfiguration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Util::Internal::IEnvironmentVariableRetriever*& Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::__cordl_internal_get__environmentRetriever_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentRetriever_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::IEnvironmentVariableRetriever*> const&
Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::__cordl_internal_get__environmentRetriever_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentRetriever_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::__cordl_internal_set__environmentRetriever_k__BackingField(::Amazon::Util::Internal::IEnvironmentVariableRetriever* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentRetriever_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Util::Internal::IEnvironmentVariableRetriever* Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::get_environmentRetriever() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(),
                                                                             "get_environmentRetriever", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::IEnvironmentVariableRetriever*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::set_environmentRetriever(::Amazon::Util::Internal::IEnvironmentVariableRetriever* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), "set_environmentRetriever", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::IEnvironmentVariableRetriever*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*
Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::New_ctor(::Amazon::Util::Internal::IEnvironmentVariableRetriever* environmentRetriever,
                                                                   ::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>(environmentRetriever, cSMFallbackConfigChain));
}
inline void Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::_ctor(::Amazon::Util::Internal::IEnvironmentVariableRetriever* environmentRetriever,
                                                                            ::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::IEnvironmentVariableRetriever*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environmentRetriever, cSMFallbackConfigChain);
}
inline ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*
Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::New_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>(cSMFallbackConfigChain));
}
inline void Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cSMFallbackConfigChain);
}
inline void Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::SetupConfiguration(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs*>::get(), "SetupConfiguration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cSMFallbackConfigChain);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::EnvironmentVariableCSMConfigs::EnvironmentVariableCSMConfigs() {}
