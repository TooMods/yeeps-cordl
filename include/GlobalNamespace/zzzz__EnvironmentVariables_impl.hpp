#pragma once
#include "GlobalNamespace/zzzz__EnvironmentVariables_impl.hpp"
#include "GlobalNamespace/zzzz__FatalErrorTestType_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentVariables_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentVariables_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType::__EnvironmentVariables__BuildType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType::__EnvironmentVariables__BuildType() {}
constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType GlobalNamespace::__EnvironmentVariables__BuildType::VR{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType GlobalNamespace::__EnvironmentVariables__BuildType::MobilePhone{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType GlobalNamespace::__EnvironmentVariables__BuildType::MobilePC{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::EnvironmentVariables.SetRefreshRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::GlobalNamespace::EnvironmentVariables::SetRefreshRate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29c7b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), "SetRefreshRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentVariables.get_isMobile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentVariables::*)()>(&::GlobalNamespace::EnvironmentVariables::get_isMobile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29c7b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), "get_isMobile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentVariables.get_isVR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentVariables::*)()>(&::GlobalNamespace::EnvironmentVariables::get_isVR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29c7b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), "get_isVR",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentVariables.get_isMobilePhone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentVariables::*)()>(&::GlobalNamespace::EnvironmentVariables::get_isMobilePhone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29c7bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(),
                                                                               "get_isMobilePhone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentVariables.get_isMobilePC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentVariables::*)()>(&::GlobalNamespace::EnvironmentVariables::get_isMobilePC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29c7bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(),
                                                                               "get_isMobilePC", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentVariables.GetCompatabilityVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::EnvironmentVariables::GetCompatabilityVersion)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x29c7bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(),
                                                                               "GetCompatabilityVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentVariables.GetApplicationVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::EnvironmentVariables::GetApplicationVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c7d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(),
                                                                               "GetApplicationVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentVariables._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentVariables::*)()>(&::GlobalNamespace::EnvironmentVariables::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29c7d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_compatabilityVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compatabilityVersion;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_compatabilityVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compatabilityVersion;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_compatabilityVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___compatabilityVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_buildType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildType;
}
constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_buildType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildType;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_buildType(::GlobalNamespace::__EnvironmentVariables__BuildType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildType = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_isExperimental() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isExperimental;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_isExperimental() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isExperimental;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_isExperimental(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isExperimental = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_useMobileControlsInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useMobileControlsInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_useMobileControlsInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useMobileControlsInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_useMobileControlsInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useMobileControlsInEditor = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_clearMobileCacheInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearMobileCacheInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_clearMobileCacheInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearMobileCacheInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_clearMobileCacheInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearMobileCacheInEditor = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_editorAccountID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorAccountID;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_editorAccountID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorAccountID;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_editorAccountID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___editorAccountID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_usingHeadsetInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usingHeadsetInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_usingHeadsetInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usingHeadsetInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_usingHeadsetInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usingHeadsetInEditor = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_giveAllPlayersThrowingWeapons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___giveAllPlayersThrowingWeapons;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_giveAllPlayersThrowingWeapons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___giveAllPlayersThrowingWeapons;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_giveAllPlayersThrowingWeapons(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___giveAllPlayersThrowingWeapons = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_startInSpectatorModeInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInSpectatorModeInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_startInSpectatorModeInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInSpectatorModeInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_startInSpectatorModeInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startInSpectatorModeInEditor = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_clearAccountOnStartInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearAccountOnStartInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_clearAccountOnStartInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearAccountOnStartInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_clearAccountOnStartInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearAccountOnStartInEditor = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_spawnRoomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnRoomKey;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_spawnRoomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnRoomKey;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_spawnRoomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spawnRoomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_mobileSpawnRoomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileSpawnRoomKey;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_mobileSpawnRoomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileSpawnRoomKey;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_mobileSpawnRoomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mobileSpawnRoomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_privateRoomTransitionRoomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomTransitionRoomKey;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_privateRoomTransitionRoomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomTransitionRoomKey;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_privateRoomTransitionRoomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomTransitionRoomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forceStartingRoomInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceStartingRoomInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forceStartingRoomInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceStartingRoomInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_forceStartingRoomInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceStartingRoomInEditor = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forcedStartingRoomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forcedStartingRoomKey;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forcedStartingRoomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forcedStartingRoomKey;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_forcedStartingRoomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forcedStartingRoomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forcedStartingRoomMapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forcedStartingRoomMapKey;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forcedStartingRoomMapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forcedStartingRoomMapKey;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_forcedStartingRoomMapKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forcedStartingRoomMapKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_resetTutorialProgressInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetTutorialProgressInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_resetTutorialProgressInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetTutorialProgressInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_resetTutorialProgressInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetTutorialProgressInEditor = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_roomMapVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomMapVersion;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_roomMapVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomMapVersion;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_roomMapVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomMapVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_debugTargetPrivateRoomAccountID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugTargetPrivateRoomAccountID;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_debugTargetPrivateRoomAccountID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugTargetPrivateRoomAccountID;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_debugTargetPrivateRoomAccountID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugTargetPrivateRoomAccountID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_bypassPrivateRoomPermissionInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bypassPrivateRoomPermissionInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_bypassPrivateRoomPermissionInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bypassPrivateRoomPermissionInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_bypassPrivateRoomPermissionInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bypassPrivateRoomPermissionInEditor = value;
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_autoExpandClusterKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoExpandClusterKey;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_autoExpandClusterKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoExpandClusterKey;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_autoExpandClusterKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___autoExpandClusterKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_autoCraftPatternKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoCraftPatternKey;
}
constexpr ::StringW const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_autoCraftPatternKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoCraftPatternKey;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_autoCraftPatternKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___autoCraftPatternKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_keepCraftedItemInHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keepCraftedItemInHand;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_keepCraftedItemInHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keepCraftedItemInHand;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_keepCraftedItemInHand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keepCraftedItemInHand = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_autoTrackMetPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTrackMetPlayers;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_autoTrackMetPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoTrackMetPlayers;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_autoTrackMetPlayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoTrackMetPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_editorInitiallyTrackedAccountIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorInitiallyTrackedAccountIDs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::EnvironmentVariables::__cordl_internal_get_editorInitiallyTrackedAccountIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorInitiallyTrackedAccountIDs;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_editorInitiallyTrackedAccountIDs(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___editorInitiallyTrackedAccountIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_editorInitiallyTrackedFriends() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorInitiallyTrackedFriends;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::EnvironmentVariables::__cordl_internal_get_editorInitiallyTrackedFriends() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorInitiallyTrackedFriends;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_editorInitiallyTrackedFriends(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___editorInitiallyTrackedFriends)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_canEditorOpenLinks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canEditorOpenLinks;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_canEditorOpenLinks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canEditorOpenLinks;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_canEditorOpenLinks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canEditorOpenLinks = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_useHardcodedStoreCosmeticsInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useHardcodedStoreCosmeticsInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_useHardcodedStoreCosmeticsInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useHardcodedStoreCosmeticsInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_useHardcodedStoreCosmeticsInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useHardcodedStoreCosmeticsInEditor = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forceCosmeticsInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceCosmeticsInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forceCosmeticsInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceCosmeticsInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_forceCosmeticsInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceCosmeticsInEditor = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forcedCosmeticKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forcedCosmeticKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_forcedCosmeticKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forcedCosmeticKeys;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_forcedCosmeticKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forcedCosmeticKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_handVelocitySmoothing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handVelocitySmoothing;
}
constexpr float_t const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_handVelocitySmoothing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handVelocitySmoothing;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_handVelocitySmoothing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handVelocitySmoothing = value;
}
constexpr float_t& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwHandVelocityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwHandVelocityMultiplier;
}
constexpr float_t const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwHandVelocityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwHandVelocityMultiplier;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_throwHandVelocityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throwHandVelocityMultiplier = value;
}
constexpr float_t& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwBodyVelocityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwBodyVelocityMultiplier;
}
constexpr float_t const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwBodyVelocityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwBodyVelocityMultiplier;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_throwBodyVelocityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throwBodyVelocityMultiplier = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_bodyVelocityFalloffCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyVelocityFalloffCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_bodyVelocityFalloffCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyVelocityFalloffCurve;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_bodyVelocityFalloffCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bodyVelocityFalloffCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_doFakeStashRedeemingInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doFakeStashRedeemingInEditor;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_doFakeStashRedeemingInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doFakeStashRedeemingInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_doFakeStashRedeemingInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doFakeStashRedeemingInEditor = value;
}
constexpr float_t& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_distanceToTargetPOW() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceToTargetPOW;
}
constexpr float_t const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_distanceToTargetPOW() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceToTargetPOW;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_distanceToTargetPOW(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distanceToTargetPOW = value;
}
constexpr float_t& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_distanceToTargetMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceToTargetMultiplier;
}
constexpr float_t const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_distanceToTargetMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceToTargetMultiplier;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_distanceToTargetMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distanceToTargetMultiplier = value;
}
constexpr float_t& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwSpeedPOW() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwSpeedPOW;
}
constexpr float_t const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwSpeedPOW() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwSpeedPOW;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_throwSpeedPOW(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throwSpeedPOW = value;
}
constexpr float_t& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwSpeedMultiplier;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_throwSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throwSpeedMultiplier = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwAssistLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwAssistLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_throwAssistLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___throwAssistLayerMask;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_throwAssistLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___throwAssistLayerMask = value;
}
constexpr bool& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_useLocalDatabase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useLocalDatabase;
}
constexpr bool const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_useLocalDatabase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useLocalDatabase;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_useLocalDatabase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useLocalDatabase = value;
}
constexpr ::GlobalNamespace::FatalErrorTestType& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_fatalErrorTestTypeInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fatalErrorTestTypeInEditor;
}
constexpr ::GlobalNamespace::FatalErrorTestType const& GlobalNamespace::EnvironmentVariables::__cordl_internal_get_fatalErrorTestTypeInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fatalErrorTestTypeInEditor;
}
constexpr void GlobalNamespace::EnvironmentVariables::__cordl_internal_set_fatalErrorTestTypeInEditor(::GlobalNamespace::FatalErrorTestType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fatalErrorTestTypeInEditor = value;
}
inline void GlobalNamespace::EnvironmentVariables::setStaticF_targetFrameRate(float_t value) {
  ::cordl_internals::setStaticField<float_t, "targetFrameRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::EnvironmentVariables::getStaticF_targetFrameRate() {
  return ::cordl_internals::getStaticField<float_t, "targetFrameRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get>();
}
inline void GlobalNamespace::EnvironmentVariables::setStaticF_targetFrameRateDeltaTime(float_t value) {
  ::cordl_internals::setStaticField<float_t, "targetFrameRateDeltaTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::EnvironmentVariables::getStaticF_targetFrameRateDeltaTime() {
  return ::cordl_internals::getStaticField<float_t, "targetFrameRateDeltaTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get>();
}
inline void GlobalNamespace::EnvironmentVariables::SetRefreshRate(float_t newRefreshRate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), "SetRefreshRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newRefreshRate);
}
inline bool GlobalNamespace::EnvironmentVariables::get_isMobile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), "get_isMobile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EnvironmentVariables::get_isVR() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), "get_isVR",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EnvironmentVariables::get_isMobilePhone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(),
                                                                             "get_isMobilePhone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EnvironmentVariables::get_isMobilePC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), "get_isMobilePC",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentVariables::GetCompatabilityVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(),
                                                                             "GetCompatabilityVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::EnvironmentVariables::GetApplicationVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(),
                                                                             "GetApplicationVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentVariables* GlobalNamespace::EnvironmentVariables::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentVariables*>());
}
inline void GlobalNamespace::EnvironmentVariables::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentVariables*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentVariables::EnvironmentVariables() {}
