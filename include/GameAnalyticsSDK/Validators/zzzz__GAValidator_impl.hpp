#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GameAnalyticsSDK/Validators/zzzz__GAValidator_def.hpp"
#include "GameAnalyticsSDK/zzzz__GAAdAction_def.hpp"
#include "GameAnalyticsSDK/zzzz__GAAdType_def.hpp"
#include "GameAnalyticsSDK/zzzz__GAErrorSeverity_def.hpp"
#include "GameAnalyticsSDK/zzzz__GAProgressionStatus_def.hpp"
#include "GameAnalyticsSDK/zzzz__GAResourceFlowType_def.hpp"
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.StringMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::StringMatch)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1083fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "StringMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateBusinessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t, ::StringW, ::StringW, ::StringW)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateBusinessEvent)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1084028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateBusinessEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateResourceEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GameAnalyticsSDK::GAResourceFlowType, ::StringW, float_t, ::StringW, ::StringW)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateResourceEvent)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x1084310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateResourceEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAResourceFlowType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateProgressionEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GameAnalyticsSDK::GAProgressionStatus, ::StringW, ::StringW, ::StringW)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateProgressionEvent)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x108457c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateProgressionEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAProgressionStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateDesignEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateDesignEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x108481c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateDesignEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GameAnalyticsSDK::GAErrorSeverity, ::StringW)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateErrorEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x10849b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateErrorEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAErrorSeverity>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateAdEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GameAnalyticsSDK::GAAdAction, ::GameAnalyticsSDK::GAAdType, ::StringW, ::StringW)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateAdEvent)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1084ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateAdEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAAdAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAAdType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateSdkErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::GameAnalyticsSDK::GAErrorSeverity)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateSdkErrorEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1084c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateSdkErrorEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAErrorSeverity>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateKeys)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1084cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateKeys", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateCurrency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateCurrency)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x10841b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateCurrency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateEventPartLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateEventPartLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1084270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateEventPartLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateEventPartCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateEventPartCharacters)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x10842c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateEventPartCharacters",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateEventIdLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateEventIdLength)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x10848e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateEventIdLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateEventIdCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateEventIdCharacters)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1084948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateEventIdCharacters",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1084d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateBuild",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateUserId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1084d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateUserId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateShortString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateShortString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1084218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateShortString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1084bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateLongString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateLongString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1084a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateLongString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateConnectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateConnectionType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1084e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateConnectionType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateCustomDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateCustomDimensions)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1082da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateCustomDimensions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateResourceCurrencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateResourceCurrencies)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1082fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateResourceCurrencies", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateResourceItemTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateResourceItemTypes)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x10831bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateResourceItemTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateDimension01
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateDimension01)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x10852a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateDimension01",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateDimension02
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateDimension02)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1085384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateDimension02",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateDimension03
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateDimension03)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1085460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateDimension03",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateArrayOfStrings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t, int64_t, bool, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GameAnalyticsSDK::Validators::GAValidator::ValidateArrayOfStrings)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x1084e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateArrayOfStrings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Validators::GAValidator.ValidateClientTs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t)>(&::GameAnalyticsSDK::Validators::GAValidator::ValidateClientTs)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x108553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateClientTs",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
inline bool GameAnalyticsSDK::Validators::GAValidator::StringMatch(::StringW s, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "StringMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, pattern);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateBusinessEvent(::StringW currency, int32_t amount, ::StringW cartType, ::StringW itemType, ::StringW itemId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateBusinessEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currency, amount, cartType, itemType, itemId);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateResourceEvent(::GameAnalyticsSDK::GAResourceFlowType flowType, ::StringW currency, float_t amount, ::StringW itemType,
                                                                             ::StringW itemId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateResourceEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAResourceFlowType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, flowType, currency, amount, itemType, itemId);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02,
                                                                                ::StringW progression03) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateProgressionEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAProgressionStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, progressionStatus, progression01, progression02, progression03);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateDesignEvent(::StringW eventId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateDesignEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventId);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateErrorEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateErrorEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAErrorSeverity>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, severity, message);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateAdEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAAdAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAAdType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, adAction, adType, adSdkName, adPlacement);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateSdkErrorEvent(::StringW gameKey, ::StringW gameSecret, ::GameAnalyticsSDK::GAErrorSeverity type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateSdkErrorEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GameAnalyticsSDK::GAErrorSeverity>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, gameKey, gameSecret, type);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateKeys(::StringW gameKey, ::StringW gameSecret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateKeys", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, gameKey, gameSecret);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateCurrency(::StringW currency) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateCurrency",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currency);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateEventPartLength(::StringW eventPart, bool allowNull) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateEventPartLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventPart, allowNull);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateEventPartCharacters(::StringW eventPart) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateEventPartCharacters",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventPart);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateEventIdLength(::StringW eventId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateEventIdLength",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventId);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateEventIdCharacters(::StringW eventId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateEventIdCharacters",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventId);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateBuild(::StringW build) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateBuild",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, build);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateUserId(::StringW uId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateUserId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uId);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateShortString(::StringW shortString, bool canBeEmpty) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateShortString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shortString, canBeEmpty);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateString(::StringW s, bool canBeEmpty) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, canBeEmpty);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateLongString(::StringW longString, bool canBeEmpty) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateLongString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, longString, canBeEmpty);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateConnectionType(::StringW connectionType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateConnectionType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, connectionType);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateCustomDimensions(::ArrayW<::StringW, ::Array<::StringW>*> customDimensions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateCustomDimensions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, customDimensions);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateResourceCurrencies(::ArrayW<::StringW, ::Array<::StringW>*> resourceCurrencies) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateResourceCurrencies", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, resourceCurrencies);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateResourceItemTypes(::ArrayW<::StringW, ::Array<::StringW>*> resourceItemTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateResourceItemTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, resourceItemTypes);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateDimension01(::StringW dimension01) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateDimension01",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dimension01);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateDimension02(::StringW dimension02) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateDimension02",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dimension02);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateDimension03(::StringW dimension03) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateDimension03",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dimension03);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateArrayOfStrings(int64_t maxCount, int64_t maxStringLength, bool allowNoValues, ::StringW logTag,
                                                                              ::ArrayW<::StringW, ::Array<::StringW>*> arrayOfStrings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateArrayOfStrings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, maxCount, maxStringLength, allowNoValues, logTag, arrayOfStrings);
}
inline bool GameAnalyticsSDK::Validators::GAValidator::ValidateClientTs(int64_t clientTs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Validators::GAValidator*>::get(), "ValidateClientTs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clientTs);
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Validators::GAValidator::GAValidator() {}
