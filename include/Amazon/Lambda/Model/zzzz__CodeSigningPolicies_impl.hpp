#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__CodeSigningPolicies_def.hpp"
#include "Amazon/Lambda/zzzz__CodeSigningPolicy_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::CodeSigningPolicies.get_UntrustedArtifactOnDeployment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::CodeSigningPolicy* (::Amazon::Lambda::Model::CodeSigningPolicies::*)()>(
    &::Amazon::Lambda::Model::CodeSigningPolicies::get_UntrustedArtifactOnDeployment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc47b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CodeSigningPolicies*>::get(), "get_UntrustedArtifactOnDeployment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CodeSigningPolicies.set_UntrustedArtifactOnDeployment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CodeSigningPolicies::*)(::Amazon::Lambda::CodeSigningPolicy*)>(
    &::Amazon::Lambda::Model::CodeSigningPolicies::set_UntrustedArtifactOnDeployment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc47bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CodeSigningPolicies*>::get(), "set_UntrustedArtifactOnDeployment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::CodeSigningPolicy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CodeSigningPolicies.IsSetUntrustedArtifactOnDeployment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::CodeSigningPolicies::*)()>(
    &::Amazon::Lambda::Model::CodeSigningPolicies::IsSetUntrustedArtifactOnDeployment)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bc47c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CodeSigningPolicies*>::get(), "IsSetUntrustedArtifactOnDeployment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::CodeSigningPolicies._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::CodeSigningPolicies::*)()>(&::Amazon::Lambda::Model::CodeSigningPolicies::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc4824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CodeSigningPolicies*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Lambda::CodeSigningPolicy*& Amazon::Lambda::Model::CodeSigningPolicies::__cordl_internal_get__untrustedArtifactOnDeployment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____untrustedArtifactOnDeployment;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::CodeSigningPolicy*> const& Amazon::Lambda::Model::CodeSigningPolicies::__cordl_internal_get__untrustedArtifactOnDeployment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____untrustedArtifactOnDeployment;
}
constexpr void Amazon::Lambda::Model::CodeSigningPolicies::__cordl_internal_set__untrustedArtifactOnDeployment(::Amazon::Lambda::CodeSigningPolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____untrustedArtifactOnDeployment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Lambda::CodeSigningPolicy* Amazon::Lambda::Model::CodeSigningPolicies::get_UntrustedArtifactOnDeployment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CodeSigningPolicies*>::get(), "get_UntrustedArtifactOnDeployment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::CodeSigningPolicy*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::CodeSigningPolicies::set_UntrustedArtifactOnDeployment(::Amazon::Lambda::CodeSigningPolicy* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CodeSigningPolicies*>::get(), "set_UntrustedArtifactOnDeployment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::CodeSigningPolicy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::CodeSigningPolicies::IsSetUntrustedArtifactOnDeployment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CodeSigningPolicies*>::get(), "IsSetUntrustedArtifactOnDeployment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::CodeSigningPolicies* Amazon::Lambda::Model::CodeSigningPolicies::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::CodeSigningPolicies*>());
}
inline void Amazon::Lambda::Model::CodeSigningPolicies::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::CodeSigningPolicies*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::CodeSigningPolicies::CodeSigningPolicies() {}
