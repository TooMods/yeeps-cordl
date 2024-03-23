#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__DeterminedCSMConfiguration_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CSMConfiguration_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::DeterminedCSMConfiguration.get_CSMConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::CSMConfiguration* (::Amazon::Runtime::Internal::DeterminedCSMConfiguration::*)()>(
    &::Amazon::Runtime::Internal::DeterminedCSMConfiguration::get_CSMConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d4f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get(),
                                                                               "get_CSMConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DeterminedCSMConfiguration.set_CSMConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DeterminedCSMConfiguration::*)(::Amazon::Runtime::Internal::CSMConfiguration*)>(
    &::Amazon::Runtime::Internal::DeterminedCSMConfiguration::set_CSMConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d4f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get(), "set_CSMConfiguration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DeterminedCSMConfiguration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::DeterminedCSMConfiguration::*)()>(
    &::Amazon::Runtime::Internal::DeterminedCSMConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23d4f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::DeterminedCSMConfiguration.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::DeterminedCSMConfiguration* (*)()>(
    &::Amazon::Runtime::Internal::DeterminedCSMConfiguration::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23d5010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::CSMConfiguration*& Amazon::Runtime::Internal::DeterminedCSMConfiguration::__cordl_internal_get__CSMConfiguration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMConfiguration_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::CSMConfiguration*> const&
Amazon::Runtime::Internal::DeterminedCSMConfiguration::__cordl_internal_get__CSMConfiguration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CSMConfiguration_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::DeterminedCSMConfiguration::__cordl_internal_set__CSMConfiguration_k__BackingField(::Amazon::Runtime::Internal::CSMConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CSMConfiguration_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::Internal::DeterminedCSMConfiguration::setStaticF_instance(::Amazon::Runtime::Internal::DeterminedCSMConfiguration* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*, "instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get>(
      std::forward<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>(value));
}
inline ::Amazon::Runtime::Internal::DeterminedCSMConfiguration* Amazon::Runtime::Internal::DeterminedCSMConfiguration::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get>();
}
inline ::Amazon::Runtime::Internal::CSMConfiguration* Amazon::Runtime::Internal::DeterminedCSMConfiguration::get_CSMConfiguration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get(),
                                                                             "get_CSMConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::CSMConfiguration*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::DeterminedCSMConfiguration::set_CSMConfiguration(::Amazon::Runtime::Internal::CSMConfiguration* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get(), "set_CSMConfiguration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::DeterminedCSMConfiguration* Amazon::Runtime::Internal::DeterminedCSMConfiguration::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>());
}
inline void Amazon::Runtime::Internal::DeterminedCSMConfiguration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::DeterminedCSMConfiguration* Amazon::Runtime::Internal::DeterminedCSMConfiguration::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::DeterminedCSMConfiguration*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::DeterminedCSMConfiguration::DeterminedCSMConfiguration() {}
