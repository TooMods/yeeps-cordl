#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AutoScalingPolicyDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AutoScalingTargetTrackingScalingPolicyConfigurationDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription.get_PolicyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::get_PolicyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1225024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(), "get_PolicyName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription.set_PolicyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::set_PolicyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122502c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(), "set_PolicyName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription.IsSetPolicyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::IsSetPolicyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1225034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(), "IsSetPolicyName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription.get_TargetTrackingScalingPolicyConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription* (
    ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::*)()>(&::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::get_TargetTrackingScalingPolicyConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1225044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                                 "get_TargetTrackingScalingPolicyConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription.set_TargetTrackingScalingPolicyConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::*)(::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription*)>(
        &::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::set_TargetTrackingScalingPolicyConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122504c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                    "set_TargetTrackingScalingPolicyConfiguration", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription.IsSetTargetTrackingScalingPolicyConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::IsSetTargetTrackingScalingPolicyConfiguration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1225054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                                 "IsSetTargetTrackingScalingPolicyConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1225064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::__cordl_internal_get__policyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____policyName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::__cordl_internal_get__policyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____policyName;
}
constexpr void Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::__cordl_internal_set__policyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____policyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription*&
Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::__cordl_internal_get__targetTrackingScalingPolicyConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTrackingScalingPolicyConfiguration;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription*> const&
Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::__cordl_internal_get__targetTrackingScalingPolicyConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTrackingScalingPolicyConfiguration;
}
constexpr void Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::__cordl_internal_set__targetTrackingScalingPolicyConfiguration(
    ::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetTrackingScalingPolicyConfiguration)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::get_PolicyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                                                             "get_PolicyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::set_PolicyName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(), "set_PolicyName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::IsSetPolicyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                                                             "IsSetPolicyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription*
Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::get_TargetTrackingScalingPolicyConfiguration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                               "get_TargetTrackingScalingPolicyConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::set_TargetTrackingScalingPolicyConfiguration(
    ::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                  "set_TargetTrackingScalingPolicyConfiguration", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingTargetTrackingScalingPolicyConfigurationDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::IsSetTargetTrackingScalingPolicyConfiguration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                               "IsSetTargetTrackingScalingPolicyConfiguration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription* Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>());
}
inline void Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingPolicyDescription::AutoScalingPolicyDescription() {}
