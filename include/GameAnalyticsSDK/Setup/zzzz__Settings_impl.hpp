#pragma once
#include "GameAnalyticsSDK/Setup/zzzz__Settings_impl.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GameAnalyticsSDK/Setup/zzzz__Settings_def.hpp"
#include "GameAnalyticsSDK/Setup/zzzz__Organization_def.hpp"
#include "GameAnalyticsSDK/Setup/zzzz__Settings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::Setup::__Settings__HelpTypes::__Settings__HelpTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Setup::__Settings__HelpTypes::__Settings__HelpTypes() {}
constexpr ::GameAnalyticsSDK::Setup::__Settings__HelpTypes GameAnalyticsSDK::Setup::__Settings__HelpTypes::None{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::Setup::__Settings__HelpTypes GameAnalyticsSDK::Setup::__Settings__HelpTypes::IncludeSystemSpecsHelp{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::Setup::__Settings__HelpTypes GameAnalyticsSDK::Setup::__Settings__HelpTypes::ProvideCustomUserID{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::Setup::__Settings__MessageTypes::__Settings__MessageTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Setup::__Settings__MessageTypes::__Settings__MessageTypes() {}
constexpr ::GameAnalyticsSDK::Setup::__Settings__MessageTypes GameAnalyticsSDK::Setup::__Settings__MessageTypes::None{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::Setup::__Settings__MessageTypes GameAnalyticsSDK::Setup::__Settings__MessageTypes::Error{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::Setup::__Settings__MessageTypes GameAnalyticsSDK::Setup::__Settings__MessageTypes::Info{ static_cast<int32_t>(0x2) };
constexpr ::GameAnalyticsSDK::Setup::__Settings__MessageTypes GameAnalyticsSDK::Setup::__Settings__MessageTypes::Warning{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "MsgType", ty: "::GameAnalyticsSDK::Setup::__Settings__MessageTypes",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "HelpType", ty: "::GameAnalyticsSDK::Setup::__Settings__HelpTypes", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::Setup::__Settings__HelpInfo::__Settings__HelpInfo(::StringW Message, ::GameAnalyticsSDK::Setup::__Settings__MessageTypes MsgType,
                                                                                ::GameAnalyticsSDK::Setup::__Settings__HelpTypes HelpType) noexcept {
  this->Message = Message;
  this->MsgType = MsgType;
  this->HelpType = HelpType;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Setup::__Settings__HelpInfo::__Settings__HelpInfo() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates::__Settings__InspectorStates(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates::__Settings__InspectorStates() {}
constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates GameAnalyticsSDK::Setup::__Settings__InspectorStates::Account{ static_cast<int32_t>(0x0) };
constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates GameAnalyticsSDK::Setup::__Settings__InspectorStates::Basic{ static_cast<int32_t>(0x1) };
constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates GameAnalyticsSDK::Setup::__Settings__InspectorStates::Debugging{ static_cast<int32_t>(0x2) };
constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates GameAnalyticsSDK::Setup::__Settings__InspectorStates::Pref{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.SetCustomUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Setup::Settings::*)(::StringW)>(&::GameAnalyticsSDK::Setup::Settings::SetCustomUserID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1080318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "SetCustomUserID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.RemovePlatformAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Setup::Settings::*)(int32_t)>(
    &::GameAnalyticsSDK::Setup::Settings::RemovePlatformAtIndex)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x108036c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "RemovePlatformAtIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.AddPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Setup::Settings::*)(::UnityEngine::RuntimePlatform)>(
    &::GameAnalyticsSDK::Setup::Settings::AddPlatform)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x108050c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "AddPlatform", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.GetAvailablePlatforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::GameAnalyticsSDK::Setup::Settings::*)()>(
    &::GameAnalyticsSDK::Setup::Settings::GetAvailablePlatforms)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1080a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(),
                                                                               "GetAvailablePlatforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.IsGameKeyValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GameAnalyticsSDK::Setup::Settings::*)(int32_t, ::StringW)>(
    &::GameAnalyticsSDK::Setup::Settings::IsGameKeyValid)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1080d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "IsGameKeyValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.IsSecretKeyValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GameAnalyticsSDK::Setup::Settings::*)(int32_t, ::StringW)>(
    &::GameAnalyticsSDK::Setup::Settings::IsSecretKeyValid)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1080de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "IsSecretKeyValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.UpdateKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::StringW, ::StringW)>(&::GameAnalyticsSDK::Setup::Settings::UpdateKeys)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1080ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "UpdateKeys", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.UpdateGameKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Setup::Settings::*)(int32_t, ::StringW)>(
    &::GameAnalyticsSDK::Setup::Settings::UpdateGameKey)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1080f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "UpdateGameKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.UpdateSecretKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Setup::Settings::*)(int32_t, ::StringW)>(
    &::GameAnalyticsSDK::Setup::Settings::UpdateSecretKey)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1081044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "UpdateSecretKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.GetGameKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GameAnalyticsSDK::Setup::Settings::*)(int32_t)>(&::GameAnalyticsSDK::Setup::Settings::GetGameKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1081148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "GetGameKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.GetSecretKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GameAnalyticsSDK::Setup::Settings::*)(int32_t)>(&::GameAnalyticsSDK::Setup::Settings::GetSecretKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10811a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "GetSecretKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.SetCustomArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Setup::Settings::*)(::StringW)>(&::GameAnalyticsSDK::Setup::Settings::SetCustomArea)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x10811f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "SetCustomArea", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings.SetKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Setup::Settings::*)(::StringW, ::StringW)>(&::GameAnalyticsSDK::Setup::Settings::SetKeys)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x10811fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "SetKeys", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameAnalyticsSDK::Setup::Settings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GameAnalyticsSDK::Setup::Settings::*)()>(&::GameAnalyticsSDK::Setup::Settings::_ctor)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x1081200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_TotalMessagesSubmitted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalMessagesSubmitted;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_TotalMessagesSubmitted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalMessagesSubmitted;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_TotalMessagesSubmitted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalMessagesSubmitted = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_TotalMessagesFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalMessagesFailed;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_TotalMessagesFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalMessagesFailed;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_TotalMessagesFailed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalMessagesFailed = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DesignMessagesSubmitted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DesignMessagesSubmitted;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DesignMessagesSubmitted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DesignMessagesSubmitted;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_DesignMessagesSubmitted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DesignMessagesSubmitted = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DesignMessagesFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DesignMessagesFailed;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DesignMessagesFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DesignMessagesFailed;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_DesignMessagesFailed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DesignMessagesFailed = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_QualityMessagesSubmitted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QualityMessagesSubmitted;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_QualityMessagesSubmitted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QualityMessagesSubmitted;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_QualityMessagesSubmitted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___QualityMessagesSubmitted = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_QualityMessagesFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QualityMessagesFailed;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_QualityMessagesFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QualityMessagesFailed;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_QualityMessagesFailed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___QualityMessagesFailed = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ErrorMessagesSubmitted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ErrorMessagesSubmitted;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ErrorMessagesSubmitted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ErrorMessagesSubmitted;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_ErrorMessagesSubmitted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ErrorMessagesSubmitted = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ErrorMessagesFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ErrorMessagesFailed;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ErrorMessagesFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ErrorMessagesFailed;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_ErrorMessagesFailed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ErrorMessagesFailed = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_BusinessMessagesSubmitted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BusinessMessagesSubmitted;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_BusinessMessagesSubmitted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BusinessMessagesSubmitted;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_BusinessMessagesSubmitted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BusinessMessagesSubmitted = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_BusinessMessagesFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BusinessMessagesFailed;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_BusinessMessagesFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BusinessMessagesFailed;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_BusinessMessagesFailed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BusinessMessagesFailed = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UserMessagesSubmitted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserMessagesSubmitted;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UserMessagesSubmitted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserMessagesSubmitted;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_UserMessagesSubmitted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserMessagesSubmitted = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UserMessagesFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserMessagesFailed;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UserMessagesFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserMessagesFailed;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_UserMessagesFailed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserMessagesFailed = value;
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomArea() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomArea;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomArea() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomArea;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_CustomArea(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomArea)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_gameKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameKey;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_gameKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameKey;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_gameKey(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_secretKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secretKey;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_secretKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secretKey;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_secretKey(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secretKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Build() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Build;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Build() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Build;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_Build(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Build)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedPlatformOrganization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedPlatformOrganization;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedPlatformOrganization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedPlatformOrganization;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SelectedPlatformOrganization(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedPlatformOrganization)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedPlatformStudio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedPlatformStudio;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedPlatformStudio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedPlatformStudio;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SelectedPlatformStudio(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedPlatformStudio)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedPlatformGame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedPlatformGame;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedPlatformGame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedPlatformGame;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SelectedPlatformGame(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedPlatformGame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedPlatformGameID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedPlatformGameID;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedPlatformGameID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedPlatformGameID;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SelectedPlatformGameID(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedPlatformGameID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedOrganization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedOrganization;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedOrganization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedOrganization;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SelectedOrganization(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedOrganization)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedStudio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedStudio;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedStudio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedStudio;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SelectedStudio(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedStudio)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedGame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedGame;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SelectedGame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SelectedGame;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SelectedGame(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedGame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_NewVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NewVersion;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_NewVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NewVersion;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_NewVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NewVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Changes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Changes;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Changes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Changes;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_Changes(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Changes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SignUpOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SignUpOpen;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SignUpOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SignUpOpen;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SignUpOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SignUpOpen = value;
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_StudioName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StudioName;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_StudioName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StudioName;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_StudioName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StudioName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_GameName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GameName;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_GameName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GameName;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_GameName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GameName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_OrganizationName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OrganizationName;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_OrganizationName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OrganizationName;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_OrganizationName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OrganizationName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_OrganizationIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OrganizationIdentifier;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_OrganizationIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OrganizationIdentifier;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_OrganizationIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OrganizationIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_EmailGA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EmailGA;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_EmailGA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EmailGA;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_EmailGA(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EmailGA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_PasswordGA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PasswordGA;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_PasswordGA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PasswordGA;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_PasswordGA(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PasswordGA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_TokenGA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TokenGA;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_TokenGA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TokenGA;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_TokenGA(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TokenGA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ExpireTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpireTime;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ExpireTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpireTime;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_ExpireTime(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExpireTime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_LoginStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LoginStatus;
}
constexpr ::StringW const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_LoginStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LoginStatus;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_LoginStatus(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LoginStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_JustSignedUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___JustSignedUp;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_JustSignedUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___JustSignedUp;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_JustSignedUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___JustSignedUp = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_HideSignupWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HideSignupWarning;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_HideSignupWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HideSignupWarning;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_HideSignupWarning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HideSignupWarning = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_IntroScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IntroScreen;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_IntroScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IntroScreen;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_IntroScreen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IntroScreen = value;
}
constexpr ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Organizations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Organizations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>*> const&
GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Organizations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Organizations;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_Organizations(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Organizations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InfoLogEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InfoLogEditor;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InfoLogEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InfoLogEditor;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_InfoLogEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InfoLogEditor = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InfoLogBuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InfoLogBuild;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InfoLogBuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InfoLogBuild;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_InfoLogBuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InfoLogBuild = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_VerboseLogBuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VerboseLogBuild;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_VerboseLogBuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VerboseLogBuild;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_VerboseLogBuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VerboseLogBuild = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UseManualSessionHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseManualSessionHandling;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UseManualSessionHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseManualSessionHandling;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_UseManualSessionHandling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseManualSessionHandling = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SendExampleGameDataToMyGame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SendExampleGameDataToMyGame;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SendExampleGameDataToMyGame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SendExampleGameDataToMyGame;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SendExampleGameDataToMyGame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SendExampleGameDataToMyGame = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InternetConnectivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternetConnectivity;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InternetConnectivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InternetConnectivity;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_InternetConnectivity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InternetConnectivity = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions01() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions01;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions01() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions01;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_CustomDimensions01(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomDimensions01)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions02() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions02;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions02() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions02;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_CustomDimensions02(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomDimensions02)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions03() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions03;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions03() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions03;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_CustomDimensions03(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomDimensions03)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ResourceItemTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceItemTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ResourceItemTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceItemTypes;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_ResourceItemTypes(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ResourceItemTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ResourceCurrencies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceCurrencies;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ResourceCurrencies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceCurrencies;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_ResourceCurrencies(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ResourceCurrencies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RuntimePlatform& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_LastCreatedGamePlatform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LastCreatedGamePlatform;
}
constexpr ::UnityEngine::RuntimePlatform const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_LastCreatedGamePlatform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LastCreatedGamePlatform;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_LastCreatedGamePlatform(::UnityEngine::RuntimePlatform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LastCreatedGamePlatform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Platforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Platforms;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*> const&
GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Platforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Platforms;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_Platforms(::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Platforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CurrentInspectorState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentInspectorState;
}
constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CurrentInspectorState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentInspectorState;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_CurrentInspectorState(::GameAnalyticsSDK::Setup::__Settings__InspectorStates value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentInspectorState = value;
}
constexpr ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::__Settings__HelpTypes>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ClosedHints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClosedHints;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::__Settings__HelpTypes>*> const&
GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ClosedHints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClosedHints;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_ClosedHints(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::__Settings__HelpTypes>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ClosedHints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DisplayHints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayHints;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DisplayHints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayHints;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_DisplayHints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisplayHints = value;
}
constexpr ::UnityEngine::Vector2& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DisplayHintsScrollState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayHintsScrollState;
}
constexpr ::UnityEngine::Vector2 const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DisplayHintsScrollState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayHintsScrollState;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_DisplayHintsScrollState(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisplayHintsScrollState = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Logo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Logo;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_Logo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Logo;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_Logo(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Logo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UpdateIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UpdateIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UpdateIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UpdateIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_UpdateIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UpdateIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InfoIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InfoIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InfoIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InfoIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_InfoIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InfoIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DeleteIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeleteIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_DeleteIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeleteIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_DeleteIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeleteIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_GameIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GameIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_GameIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GameIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_GameIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GameIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_HomeIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HomeIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_HomeIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HomeIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_HomeIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HomeIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InstrumentIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstrumentIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_InstrumentIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstrumentIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_InstrumentIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InstrumentIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_QuestionIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QuestionIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_QuestionIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___QuestionIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_QuestionIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___QuestionIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UserIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UserIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_UserIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_AmazonIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AmazonIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_AmazonIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AmazonIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_AmazonIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AmazonIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_GooglePlayIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GooglePlayIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_GooglePlayIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GooglePlayIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_GooglePlayIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GooglePlayIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_iosIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iosIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_iosIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iosIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_iosIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___iosIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_macIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_macIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_macIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___macIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_windowsPhoneIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowsPhoneIcon;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_windowsPhoneIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowsPhoneIcon;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_windowsPhoneIcon(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___windowsPhoneIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GUIStyle*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SignupButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SignupButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SignupButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SignupButton;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SignupButton(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SignupButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UsePlayerSettingsBuildNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsePlayerSettingsBuildNumber;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_UsePlayerSettingsBuildNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsePlayerSettingsBuildNumber;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_UsePlayerSettingsBuildNumber(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UsePlayerSettingsBuildNumber = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SubmitErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubmitErrors;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SubmitErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubmitErrors;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SubmitErrors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SubmitErrors = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_NativeErrorReporting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NativeErrorReporting;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_NativeErrorReporting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NativeErrorReporting;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_NativeErrorReporting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NativeErrorReporting = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_MaxErrorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxErrorCount;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_MaxErrorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxErrorCount;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_MaxErrorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxErrorCount = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SubmitFpsAverage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubmitFpsAverage;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SubmitFpsAverage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubmitFpsAverage;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SubmitFpsAverage(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SubmitFpsAverage = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SubmitFpsCritical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubmitFpsCritical;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_SubmitFpsCritical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubmitFpsCritical;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_SubmitFpsCritical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SubmitFpsCritical = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_IncludeGooglePlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IncludeGooglePlay;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_IncludeGooglePlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IncludeGooglePlay;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_IncludeGooglePlay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IncludeGooglePlay = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_FpsCriticalThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FpsCriticalThreshold;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_FpsCriticalThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FpsCriticalThreshold;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_FpsCriticalThreshold(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FpsCriticalThreshold = value;
}
constexpr int32_t& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_FpsCirticalSubmitInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FpsCirticalSubmitInterval;
}
constexpr int32_t const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_FpsCirticalSubmitInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FpsCirticalSubmitInterval;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_FpsCirticalSubmitInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FpsCirticalSubmitInterval = value;
}
constexpr ::System::Collections::Generic::List_1<bool>*& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_PlatformFoldOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlatformFoldOut;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_PlatformFoldOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlatformFoldOut;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_PlatformFoldOut(::System::Collections::Generic::List_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlatformFoldOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions01FoldOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions01FoldOut;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions01FoldOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions01FoldOut;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_CustomDimensions01FoldOut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CustomDimensions01FoldOut = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions02FoldOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions02FoldOut;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions02FoldOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions02FoldOut;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_CustomDimensions02FoldOut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CustomDimensions02FoldOut = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions03FoldOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions03FoldOut;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_CustomDimensions03FoldOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CustomDimensions03FoldOut;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_CustomDimensions03FoldOut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CustomDimensions03FoldOut = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ResourceItemTypesFoldOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceItemTypesFoldOut;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ResourceItemTypesFoldOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceItemTypesFoldOut;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_ResourceItemTypesFoldOut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ResourceItemTypesFoldOut = value;
}
constexpr bool& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ResourceCurrenciesFoldOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceCurrenciesFoldOut;
}
constexpr bool const& GameAnalyticsSDK::Setup::Settings::__cordl_internal_get_ResourceCurrenciesFoldOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceCurrenciesFoldOut;
}
constexpr void GameAnalyticsSDK::Setup::Settings::__cordl_internal_set_ResourceCurrenciesFoldOut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ResourceCurrenciesFoldOut = value;
}
inline void GameAnalyticsSDK::Setup::Settings::setStaticF__cordl_VERSION(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "VERSION", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GameAnalyticsSDK::Setup::Settings::getStaticF__cordl_VERSION() {
  return ::cordl_internals::getStaticField<::StringW, "VERSION", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get>();
}
inline void GameAnalyticsSDK::Setup::Settings::setStaticF_CheckingForUpdates(bool value) {
  ::cordl_internals::setStaticField<bool, "CheckingForUpdates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get>(std::forward<bool>(value));
}
inline bool GameAnalyticsSDK::Setup::Settings::getStaticF_CheckingForUpdates() {
  return ::cordl_internals::getStaticField<bool, "CheckingForUpdates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get>();
}
inline void GameAnalyticsSDK::Setup::Settings::setStaticF_AvailablePlatforms(::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>, "AvailablePlatforms",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get>(
      std::forward<::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>>(value));
}
inline ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> GameAnalyticsSDK::Setup::Settings::getStaticF_AvailablePlatforms() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>, "AvailablePlatforms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get>();
}
inline void GameAnalyticsSDK::Setup::Settings::SetCustomUserID(::StringW customID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "SetCustomUserID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customID);
}
inline void GameAnalyticsSDK::Setup::Settings::RemovePlatformAtIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "RemovePlatformAtIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void GameAnalyticsSDK::Setup::Settings::AddPlatform(::UnityEngine::RuntimePlatform platform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "AddPlatform", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RuntimePlatform>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platform);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GameAnalyticsSDK::Setup::Settings::GetAvailablePlatforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(),
                                                                             "GetAvailablePlatforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline bool GameAnalyticsSDK::Setup::Settings::IsGameKeyValid(int32_t index, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "IsGameKeyValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, value);
}
inline bool GameAnalyticsSDK::Setup::Settings::IsSecretKeyValid(int32_t index, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "IsSecretKeyValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, value);
}
inline void GameAnalyticsSDK::Setup::Settings::UpdateKeys(int32_t index, ::StringW gameKey, ::StringW secretKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "UpdateKeys", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index, gameKey, secretKey);
}
inline void GameAnalyticsSDK::Setup::Settings::UpdateGameKey(int32_t index, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "UpdateGameKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void GameAnalyticsSDK::Setup::Settings::UpdateSecretKey(int32_t index, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "UpdateSecretKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline ::StringW GameAnalyticsSDK::Setup::Settings::GetGameKey(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "GetGameKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline ::StringW GameAnalyticsSDK::Setup::Settings::GetSecretKey(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "GetSecretKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline void GameAnalyticsSDK::Setup::Settings::SetCustomArea(::StringW customArea) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "SetCustomArea", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customArea);
}
inline void GameAnalyticsSDK::Setup::Settings::SetKeys(::StringW gamekey, ::StringW secretkey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), "SetKeys", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gamekey, secretkey);
}
inline ::GameAnalyticsSDK::Setup::Settings* GameAnalyticsSDK::Setup::Settings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GameAnalyticsSDK::Setup::Settings*>());
}
inline void GameAnalyticsSDK::Setup::Settings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GameAnalyticsSDK::Setup::Settings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GameAnalyticsSDK::Setup::Settings::Settings() {}
