#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__ConditionFactory_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__ConditionFactory_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Condition_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType::__ConditionFactory__ArnComparisonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType::__ConditionFactory__ArnComparisonType() {}
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType::ArnEquals{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType::ArnLike{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType::ArnNotEquals{ static_cast<int32_t>(
    0x2) };
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType::ArnNotLike{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType::__ConditionFactory__DateComparisonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType::__ConditionFactory__DateComparisonType() {}
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType::DateEquals{ static_cast<int32_t>(
    0x0) };
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType::DateGreaterThan{ static_cast<int32_t>(
    0x1) };
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType::DateGreaterThanEquals{
  static_cast<int32_t>(0x2)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType::DateLessThan{ static_cast<int32_t>(
    0x3) };
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType::DateLessThanEquals{
  static_cast<int32_t>(0x4)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType::DateNotEquals{ static_cast<int32_t>(
    0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType::__ConditionFactory__IpAddressComparisonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType::__ConditionFactory__IpAddressComparisonType() {}
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType::IpAddress{
  static_cast<int32_t>(0x0)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType::NotIpAddress{
  static_cast<int32_t>(0x1)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType::__ConditionFactory__NumericComparisonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType::__ConditionFactory__NumericComparisonType() {}
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType::NumericEquals{
  static_cast<int32_t>(0x0)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType::NumericGreaterThan{
  static_cast<int32_t>(0x1)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType::NumericGreaterThanEquals{
  static_cast<int32_t>(0x2)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType::NumericLessThan{
  static_cast<int32_t>(0x3)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType::NumericLessThanEquals{
  static_cast<int32_t>(0x4)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType::NumericNotEquals{
  static_cast<int32_t>(0x5)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType::__ConditionFactory__StringComparisonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType::__ConditionFactory__StringComparisonType() {}
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType::StringEquals{ static_cast<int32_t>(
    0x0) };
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType::StringEqualsIgnoreCase{
  static_cast<int32_t>(0x1)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType::StringLike{ static_cast<int32_t>(
    0x2) };
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType::StringNotEquals{
  static_cast<int32_t>(0x3)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType::StringNotEqualsIgnoreCase{
  static_cast<int32_t>(0x4)
};
constexpr ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType::StringNotLike{
  static_cast<int32_t>(0x5)
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType, ::StringW, ::StringW)>(
        &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25e9154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::StringW, bool)>(
    &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x25e9270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType, ::System::DateTime)>(
        &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x25e9378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewConditionUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType, ::System::DateTime)>(
        &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewConditionUtc)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x25e94fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewConditionUtc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewIpAddressCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewIpAddressCondition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25e9690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewIpAddressCondition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType, ::StringW)>(
        &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x25e969c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType, ::StringW, ::StringW)>(
        &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25e97c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType, ::StringW, ::StringW)>(
        &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25e98e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewSourceArnCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewSourceArnCondition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25e99fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewSourceArnCondition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewSecureTransportCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)()>(
    &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewSecureTransportCondition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x25e9a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(),
                                                                               "NewSecureTransportCondition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewCannedACLCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCannedACLCondition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25e9a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCannedACLCondition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewEndpointCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewEndpointCondition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25e9ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewEndpointCondition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ConditionFactory.NewProtocolCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Condition* (*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ConditionFactory::NewProtocolCondition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25e9b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewProtocolCondition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Auth::AccessControlPolicy::Condition*
Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType type, ::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, type, key, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition* Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition(::StringW key, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, key, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition*
Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType type, ::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, type, date);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition*
Amazon::Auth::AccessControlPolicy::ConditionFactory::NewConditionUtc(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType type, ::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewConditionUtc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, type, date);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition* Amazon::Auth::AccessControlPolicy::ConditionFactory::NewIpAddressCondition(::StringW ipAddressRange) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewIpAddressCondition",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, ipAddressRange);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition*
Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType type, ::StringW ipAddressRange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, type, ipAddressRange);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition*
Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType type, ::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, type, key, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition*
Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType type, ::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, type, key, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition* Amazon::Auth::AccessControlPolicy::ConditionFactory::NewSourceArnCondition(::StringW arnPattern) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewSourceArnCondition",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, arnPattern);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition* Amazon::Auth::AccessControlPolicy::ConditionFactory::NewSecureTransportCondition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(),
                                                                             "NewSecureTransportCondition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition* Amazon::Auth::AccessControlPolicy::ConditionFactory::NewCannedACLCondition(::StringW cannedAcl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewCannedACLCondition",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, cannedAcl);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition* Amazon::Auth::AccessControlPolicy::ConditionFactory::NewEndpointCondition(::StringW endpointPattern) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewEndpointCondition",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, endpointPattern);
}
inline ::Amazon::Auth::AccessControlPolicy::Condition* Amazon::Auth::AccessControlPolicy::ConditionFactory::NewProtocolCondition(::StringW protocol) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ConditionFactory*>::get(), "NewProtocolCondition",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Condition*, false>(nullptr, ___internal_method, protocol);
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::ConditionFactory::ConditionFactory() {}
