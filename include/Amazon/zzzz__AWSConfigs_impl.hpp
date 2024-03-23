#pragma once
#include "Amazon/zzzz__LoggingOptions_impl.hpp"
#include "Amazon/zzzz__ResponseLoggingOption_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/zzzz__AWSConfigs_def.hpp"
#include "Amazon/Runtime/zzzz__HttpClientFactory_def.hpp"
#include "Amazon/Util/Internal/zzzz__RootConfig_def.hpp"
#include "Amazon/Util/zzzz__CSMConfig_def.hpp"
#include "Amazon/Util/zzzz__LoggingConfig_def.hpp"
#include "Amazon/Util/zzzz__ProxyConfig_def.hpp"
#include "Amazon/zzzz__LoggingOptions_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "Amazon/zzzz__ResponseLoggingOption_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/Diagnostics/zzzz__TraceListener_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Amazon::AWSConfigs.get_ManualClockCorrection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (*)()>(&::Amazon::AWSConfigs::get_ManualClockCorrection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21f1ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_ManualClockCorrection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_ManualClockCorrection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Nullable_1<::System::TimeSpan>)>(&::Amazon::AWSConfigs::set_ManualClockCorrection)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f1b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_ManualClockCorrection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_CorrectForClockSkew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::AWSConfigs::get_CorrectForClockSkew)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f1b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_CorrectForClockSkew",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_CorrectForClockSkew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Amazon::AWSConfigs::set_CorrectForClockSkew)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f1be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_CorrectForClockSkew",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_ClockOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)()>(&::Amazon::AWSConfigs::get_ClockOffset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f1c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_ClockOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_ClockOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::TimeSpan)>(&::Amazon::AWSConfigs::set_ClockOffset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21f1ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_ClockOffset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_AWSRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::AWSConfigs::get_AWSRegion)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f1d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_AWSRegion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_AWSRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::AWSConfigs::set_AWSRegion)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f1d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_AWSRegion", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_AWSProfileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::AWSConfigs::get_AWSProfileName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f1dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_AWSProfileName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_AWSProfileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::AWSConfigs::set_AWSProfileName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f1e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_AWSProfileName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_AWSProfilesLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::AWSConfigs::get_AWSProfilesLocation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f1e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_AWSProfilesLocation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_AWSProfilesLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::AWSConfigs::set_AWSProfilesLocation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f1f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_AWSProfilesLocation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_Logging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::LoggingOptions (*)()>(&::Amazon::AWSConfigs::get_Logging)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f1f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_Logging",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_Logging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::LoggingOptions)>(&::Amazon::AWSConfigs::set_Logging)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21f1fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_Logging", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::LoggingOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.GetLoggingSetting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::LoggingOptions (*)()>(&::Amazon::AWSConfigs::GetLoggingSetting)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x21f20bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetLoggingSetting",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_ResponseLogging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::ResponseLoggingOption (*)()>(&::Amazon::AWSConfigs::get_ResponseLogging)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f2150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_ResponseLogging",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_ResponseLogging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::ResponseLoggingOption)>(&::Amazon::AWSConfigs::set_ResponseLogging)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21f21bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_ResponseLogging", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::ResponseLoggingOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_LogMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::AWSConfigs::get_LogMetrics)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f222c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_LogMetrics",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_LogMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Amazon::AWSConfigs::set_LogMetrics)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21f2298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_LogMetrics", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_EndpointDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::AWSConfigs::get_EndpointDefinition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f230c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_EndpointDefinition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_EndpointDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::AWSConfigs::set_EndpointDefinition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f2370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_EndpointDefinition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_UseSdkCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::AWSConfigs::get_UseSdkCache)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f23d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_UseSdkCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_UseSdkCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Amazon::AWSConfigs::set_UseSdkCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f243c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_UseSdkCache", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_LoggingConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::LoggingConfig* (*)()>(&::Amazon::AWSConfigs::get_LoggingConfig)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f24a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_LoggingConfig",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_ProxyConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::ProxyConfig* (*)()>(&::Amazon::AWSConfigs::get_ProxyConfig)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f250c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_ProxyConfig",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_UseAlternateUserAgentHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::AWSConfigs::get_UseAlternateUserAgentHeader)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f2570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_UseAlternateUserAgentHeader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_UseAlternateUserAgentHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Amazon::AWSConfigs::set_UseAlternateUserAgentHeader)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f25d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_UseAlternateUserAgentHeader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_RegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (*)()>(&::Amazon::AWSConfigs::get_RegionEndpoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f2640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_RegionEndpoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_RegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::RegionEndpoint*)>(&::Amazon::AWSConfigs::set_RegionEndpoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21f26a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_RegionEndpoint", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_CSMConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::CSMConfig* (*)()>(&::Amazon::AWSConfigs::get_CSMConfig)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f2710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_CSMConfig",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_CSMConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Util::CSMConfig*)>(&::Amazon::AWSConfigs::set_CSMConfig)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f2774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_CSMConfig", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::CSMConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.add_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&::Amazon::AWSConfigs::add_PropertyChanged)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x21f27dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.remove_PropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&::Amazon::AWSConfigs::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x21f295c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.OnPropertyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::AWSConfigs::OnPropertyChanged)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21f2adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "OnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.GetConfigBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool)>(&::Amazon::AWSConfigs::GetConfigBool)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21f2b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetConfigBool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.GetUtcNow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)()>(&::Amazon::AWSConfigs::GetUtcNow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21f2c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetUtcNow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.GetConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::AWSConfigs::GetConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f2148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetConfig", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.XmlSectionExists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Amazon::AWSConfigs::XmlSectionExists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f2c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "XmlSectionExists", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.get_HttpClientFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::HttpClientFactory* (*)()>(&::Amazon::AWSConfigs::get_HttpClientFactory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f2c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_HttpClientFactory",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.set_HttpClientFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::HttpClientFactory*)>(&::Amazon::AWSConfigs::set_HttpClientFactory)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21f2ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_HttpClientFactory", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::HttpClientFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.AddTraceListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Diagnostics::TraceListener*)>(&::Amazon::AWSConfigs::AddTraceListener)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x21f2d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "AddTraceListener", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.RemoveTraceListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::Amazon::AWSConfigs::RemoveTraceListener)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x21f30e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "RemoveTraceListener", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigs.TraceListeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Diagnostics::TraceListener*, ::Array<::System::Diagnostics::TraceListener*>*> (*)(::StringW)>(
    &::Amazon::AWSConfigs::TraceListeners)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x21f3550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "TraceListeners", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::AWSConfigs::setStaticF_validSeparators(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "validSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> Amazon::AWSConfigs::getStaticF_validSeparators() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "validSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF_utcNowSource(::System::Func_1<::System::DateTime>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::DateTime>*, "utcNowSource", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::System::Func_1<::System::DateTime>*>(value));
}
inline ::System::Func_1<::System::DateTime>* Amazon::AWSConfigs::getStaticF_utcNowSource() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::DateTime>*, "utcNowSource", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__awsRegion(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_awsRegion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::AWSConfigs::getStaticF__awsRegion() {
  return ::cordl_internals::getStaticField<::StringW, "_awsRegion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__logging(::Amazon::LoggingOptions value) {
  ::cordl_internals::setStaticField<::Amazon::LoggingOptions, "_logging", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::Amazon::LoggingOptions>(value));
}
inline ::Amazon::LoggingOptions Amazon::AWSConfigs::getStaticF__logging() {
  return ::cordl_internals::getStaticField<::Amazon::LoggingOptions, "_logging", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__responseLogging(::Amazon::ResponseLoggingOption value) {
  ::cordl_internals::setStaticField<::Amazon::ResponseLoggingOption, "_responseLogging", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::Amazon::ResponseLoggingOption>(value));
}
inline ::Amazon::ResponseLoggingOption Amazon::AWSConfigs::getStaticF__responseLogging() {
  return ::cordl_internals::getStaticField<::Amazon::ResponseLoggingOption, "_responseLogging", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__logMetrics(bool value) {
  ::cordl_internals::setStaticField<bool, "_logMetrics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(std::forward<bool>(value));
}
inline bool Amazon::AWSConfigs::getStaticF__logMetrics() {
  return ::cordl_internals::getStaticField<bool, "_logMetrics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__endpointDefinition(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_endpointDefinition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::AWSConfigs::getStaticF__endpointDefinition() {
  return ::cordl_internals::getStaticField<::StringW, "_endpointDefinition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__awsProfileName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_awsProfileName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::AWSConfigs::getStaticF__awsProfileName() {
  return ::cordl_internals::getStaticField<::StringW, "_awsProfileName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__awsAccountsLocation(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_awsAccountsLocation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::AWSConfigs::getStaticF__awsAccountsLocation() {
  return ::cordl_internals::getStaticField<::StringW, "_awsAccountsLocation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__useSdkCache(bool value) {
  ::cordl_internals::setStaticField<bool, "_useSdkCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(std::forward<bool>(value));
}
inline bool Amazon::AWSConfigs::getStaticF__useSdkCache() {
  return ::cordl_internals::getStaticField<bool, "_useSdkCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::AWSConfigs::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF_standardConfigs(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "standardConfigs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::AWSConfigs::getStaticF_standardConfigs() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "standardConfigs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF_configPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "configPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(std::forward<bool>(value));
}
inline bool Amazon::AWSConfigs::getStaticF_configPresent() {
  return ::cordl_internals::getStaticField<bool, "configPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__rootConfig(::Amazon::Util::Internal::RootConfig* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Internal::RootConfig*, "_rootConfig", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::Amazon::Util::Internal::RootConfig*>(value));
}
inline ::Amazon::Util::Internal::RootConfig* Amazon::AWSConfigs::getStaticF__rootConfig() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Internal::RootConfig*, "_rootConfig", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__ClockOffset_k__BackingField(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "<ClockOffset>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::AWSConfigs::getStaticF__ClockOffset_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "<ClockOffset>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF_mPropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::PropertyChangedEventHandler*, "mPropertyChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::System::ComponentModel::PropertyChangedEventHandler*>(value));
}
inline ::System::ComponentModel::PropertyChangedEventHandler* Amazon::AWSConfigs::getStaticF_mPropertyChanged() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::PropertyChangedEventHandler*, "mPropertyChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF_propertyChangedLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "propertyChangedLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::AWSConfigs::getStaticF_propertyChangedLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "propertyChangedLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void Amazon::AWSConfigs::setStaticF__HttpClientFactory_k__BackingField(::Amazon::Runtime::HttpClientFactory* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::HttpClientFactory*, "<HttpClientFactory>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::Amazon::Runtime::HttpClientFactory*>(value));
}
inline ::Amazon::Runtime::HttpClientFactory* Amazon::AWSConfigs::getStaticF__HttpClientFactory_k__BackingField() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::HttpClientFactory*, "<HttpClientFactory>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline void
Amazon::AWSConfigs::setStaticF__traceListeners(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Diagnostics::TraceListener*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Diagnostics::TraceListener*>*>*, "_traceListeners",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Diagnostics::TraceListener*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Diagnostics::TraceListener*>*>* Amazon::AWSConfigs::getStaticF__traceListeners() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Diagnostics::TraceListener*>*>*, "_traceListeners",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get>();
}
inline ::System::Nullable_1<::System::TimeSpan> Amazon::AWSConfigs::get_ManualClockCorrection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_ManualClockCorrection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_ManualClockCorrection(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_ManualClockCorrection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Amazon::AWSConfigs::get_CorrectForClockSkew() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_CorrectForClockSkew",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_CorrectForClockSkew(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_CorrectForClockSkew",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan Amazon::AWSConfigs::get_ClockOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_ClockOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_ClockOffset(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_ClockOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Amazon::AWSConfigs::get_AWSRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_AWSRegion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_AWSRegion(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_AWSRegion", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Amazon::AWSConfigs::get_AWSProfileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_AWSProfileName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_AWSProfileName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_AWSProfileName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Amazon::AWSConfigs::get_AWSProfilesLocation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_AWSProfilesLocation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_AWSProfilesLocation(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_AWSProfilesLocation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::LoggingOptions Amazon::AWSConfigs::get_Logging() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_Logging",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::LoggingOptions, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_Logging(::Amazon::LoggingOptions value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_Logging", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::LoggingOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::LoggingOptions Amazon::AWSConfigs::GetLoggingSetting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetLoggingSetting",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::LoggingOptions, false>(nullptr, ___internal_method);
}
inline ::Amazon::ResponseLoggingOption Amazon::AWSConfigs::get_ResponseLogging() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_ResponseLogging",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::ResponseLoggingOption, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_ResponseLogging(::Amazon::ResponseLoggingOption value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_ResponseLogging", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::ResponseLoggingOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Amazon::AWSConfigs::get_LogMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_LogMetrics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_LogMetrics(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_LogMetrics", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Amazon::AWSConfigs::get_EndpointDefinition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_EndpointDefinition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_EndpointDefinition(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_EndpointDefinition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Amazon::AWSConfigs::get_UseSdkCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_UseSdkCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_UseSdkCache(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_UseSdkCache", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Util::LoggingConfig* Amazon::AWSConfigs::get_LoggingConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_LoggingConfig",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::LoggingConfig*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Util::ProxyConfig* Amazon::AWSConfigs::get_ProxyConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_ProxyConfig",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::ProxyConfig*, false>(nullptr, ___internal_method);
}
inline bool Amazon::AWSConfigs::get_UseAlternateUserAgentHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_UseAlternateUserAgentHeader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_UseAlternateUserAgentHeader(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_UseAlternateUserAgentHeader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::RegionEndpoint* Amazon::AWSConfigs::get_RegionEndpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_RegionEndpoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_RegionEndpoint(::Amazon::RegionEndpoint* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_RegionEndpoint", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Util::CSMConfig* Amazon::AWSConfigs::get_CSMConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_CSMConfig",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::CSMConfig*, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_CSMConfig(::Amazon::Util::CSMConfig* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_CSMConfig", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::CSMConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Amazon::AWSConfigs::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "add_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Amazon::AWSConfigs::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "remove_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Amazon::AWSConfigs::OnPropertyChanged(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "OnPropertyChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
/// @param defaultValue: bool (default: false)
inline bool Amazon::AWSConfigs::GetConfigBool(::StringW name, bool defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetConfigBool", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, defaultValue);
}
template <typename T> inline T Amazon::AWSConfigs::GetConfigEnum(::StringW name) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetConfigEnum",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, name);
}
template <typename T> inline T Amazon::AWSConfigs::ParseEnum(::StringW value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "ParseEnum",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, value);
}
template <typename T> inline bool Amazon::AWSConfigs::TryParseEnum(::StringW value, ByRef<T> result) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "TryParseEnum",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, result);
}
inline ::System::DateTime Amazon::AWSConfigs::GetUtcNow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetUtcNow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::AWSConfigs::GetConfig(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "GetConfig", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
inline bool Amazon::AWSConfigs::XmlSectionExists(::StringW sectionName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "XmlSectionExists", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sectionName);
}
inline ::Amazon::Runtime::HttpClientFactory* Amazon::AWSConfigs::get_HttpClientFactory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "get_HttpClientFactory",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::HttpClientFactory*, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigs::set_HttpClientFactory(::Amazon::Runtime::HttpClientFactory* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "set_HttpClientFactory", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::HttpClientFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Amazon::AWSConfigs::AddTraceListener(::StringW source, ::System::Diagnostics::TraceListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "AddTraceListener", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, listener);
}
inline void Amazon::AWSConfigs::RemoveTraceListener(::StringW source, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "RemoveTraceListener", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, name);
}
inline ::ArrayW<::System::Diagnostics::TraceListener*, ::Array<::System::Diagnostics::TraceListener*>*> Amazon::AWSConfigs::TraceListeners(::StringW source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigs*>::get(), "TraceListeners", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Diagnostics::TraceListener*, ::Array<::System::Diagnostics::TraceListener*>*>, false>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Amazon::AWSConfigs::AWSConfigs() {}
