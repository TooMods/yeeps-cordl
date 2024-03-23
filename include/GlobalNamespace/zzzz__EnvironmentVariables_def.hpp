#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentVariables_def.hpp"
#include "GlobalNamespace/zzzz__FatalErrorTestType_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentVariables)
namespace GlobalNamespace {
struct __EnvironmentVariables__BuildType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EnvironmentVariables__BuildType;
}
namespace GlobalNamespace {
class EnvironmentVariables;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EnvironmentVariables__BuildType);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentVariables);
// Type: ::BuildType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentVariables::BuildType
struct CORDL_TYPE __EnvironmentVariables__BuildType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentVariables__BuildType_Unwrapped
  enum struct ____EnvironmentVariables__BuildType_Unwrapped : int32_t {
    __E_VR = static_cast<int32_t>(0x0),
    __E_MobilePhone = static_cast<int32_t>(0x1),
    __E_MobilePC = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentVariables__BuildType_Unwrapped() const noexcept {
    return static_cast<____EnvironmentVariables__BuildType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentVariables__BuildType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentVariables__BuildType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MobilePC value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__EnvironmentVariables__BuildType const MobilePC;

  /// @brief Field MobilePhone value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EnvironmentVariables__BuildType const MobilePhone;

  /// @brief Field VR value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EnvironmentVariables__BuildType const VR;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentVariables__BuildType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentVariables__BuildType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentVariables
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentVariables*
class CORDL_TYPE EnvironmentVariables : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::EnvironmentVariables>> {
public:
  // Declarations
  using BuildType = ::GlobalNamespace::__EnvironmentVariables__BuildType;

  /// @brief Field autoCraftPatternKey, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_autoCraftPatternKey, put = __cordl_internal_set_autoCraftPatternKey))::StringW autoCraftPatternKey;

  /// @brief Field autoExpandClusterKey, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_autoExpandClusterKey, put = __cordl_internal_set_autoExpandClusterKey))::StringW autoExpandClusterKey;

  /// @brief Field autoTrackMetPlayers, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get_autoTrackMetPlayers, put = __cordl_internal_set_autoTrackMetPlayers)) bool autoTrackMetPlayers;

  /// @brief Field bodyVelocityFalloffCurve, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_bodyVelocityFalloffCurve, put = __cordl_internal_set_bodyVelocityFalloffCurve))::UnityEngine::AnimationCurve* bodyVelocityFalloffCurve;

  /// @brief Field buildType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_buildType, put = __cordl_internal_set_buildType))::GlobalNamespace::__EnvironmentVariables__BuildType buildType;

  /// @brief Field bypassPrivateRoomPermissionInEditor, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_bypassPrivateRoomPermissionInEditor, put = __cordl_internal_set_bypassPrivateRoomPermissionInEditor)) bool bypassPrivateRoomPermissionInEditor;

  /// @brief Field canEditorOpenLinks, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_canEditorOpenLinks, put = __cordl_internal_set_canEditorOpenLinks)) bool canEditorOpenLinks;

  /// @brief Field clearAccountOnStartInEditor, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get_clearAccountOnStartInEditor, put = __cordl_internal_set_clearAccountOnStartInEditor)) bool clearAccountOnStartInEditor;

  /// @brief Field clearMobileCacheInEditor, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_clearMobileCacheInEditor, put = __cordl_internal_set_clearMobileCacheInEditor)) bool clearMobileCacheInEditor;

  /// @brief Field compatabilityVersion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_compatabilityVersion, put = __cordl_internal_set_compatabilityVersion))::StringW compatabilityVersion;

  /// @brief Field debugTargetPrivateRoomAccountID, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_debugTargetPrivateRoomAccountID, put = __cordl_internal_set_debugTargetPrivateRoomAccountID))::StringW debugTargetPrivateRoomAccountID;

  /// @brief Field distanceToTargetMultiplier, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceToTargetMultiplier, put = __cordl_internal_set_distanceToTargetMultiplier)) float_t distanceToTargetMultiplier;

  /// @brief Field distanceToTargetPOW, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceToTargetPOW, put = __cordl_internal_set_distanceToTargetPOW)) float_t distanceToTargetPOW;

  /// @brief Field doFakeStashRedeemingInEditor, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_doFakeStashRedeemingInEditor, put = __cordl_internal_set_doFakeStashRedeemingInEditor)) bool doFakeStashRedeemingInEditor;

  /// @brief Field editorAccountID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_editorAccountID, put = __cordl_internal_set_editorAccountID))::StringW editorAccountID;

  /// @brief Field editorInitiallyTrackedAccountIDs, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_editorInitiallyTrackedAccountIDs,
                      put = __cordl_internal_set_editorInitiallyTrackedAccountIDs))::System::Collections::Generic::List_1<::StringW>* editorInitiallyTrackedAccountIDs;

  /// @brief Field editorInitiallyTrackedFriends, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_editorInitiallyTrackedFriends,
                      put = __cordl_internal_set_editorInitiallyTrackedFriends))::System::Collections::Generic::List_1<::StringW>* editorInitiallyTrackedFriends;

  /// @brief Field fatalErrorTestTypeInEditor, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_fatalErrorTestTypeInEditor, put = __cordl_internal_set_fatalErrorTestTypeInEditor))::GlobalNamespace::FatalErrorTestType fatalErrorTestTypeInEditor;

  /// @brief Field forceCosmeticsInEditor, offset 0xb2, size 0x1
  __declspec(property(get = __cordl_internal_get_forceCosmeticsInEditor, put = __cordl_internal_set_forceCosmeticsInEditor)) bool forceCosmeticsInEditor;

  /// @brief Field forceStartingRoomInEditor, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_forceStartingRoomInEditor, put = __cordl_internal_set_forceStartingRoomInEditor)) bool forceStartingRoomInEditor;

  /// @brief Field forcedCosmeticKeys, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_forcedCosmeticKeys, put = __cordl_internal_set_forcedCosmeticKeys))::System::Collections::Generic::List_1<::StringW>* forcedCosmeticKeys;

  /// @brief Field forcedStartingRoomKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_forcedStartingRoomKey, put = __cordl_internal_set_forcedStartingRoomKey))::StringW forcedStartingRoomKey;

  /// @brief Field forcedStartingRoomMapKey, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_forcedStartingRoomMapKey, put = __cordl_internal_set_forcedStartingRoomMapKey))::StringW forcedStartingRoomMapKey;

  /// @brief Field giveAllPlayersThrowingWeapons, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_giveAllPlayersThrowingWeapons, put = __cordl_internal_set_giveAllPlayersThrowingWeapons)) bool giveAllPlayersThrowingWeapons;

  /// @brief Field handVelocitySmoothing, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_handVelocitySmoothing, put = __cordl_internal_set_handVelocitySmoothing)) float_t handVelocitySmoothing;

  /// @brief Field isExperimental, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isExperimental, put = __cordl_internal_set_isExperimental)) bool isExperimental;

  __declspec(property(get = get_isMobile)) bool isMobile;

  __declspec(property(get = get_isMobilePC)) bool isMobilePC;

  __declspec(property(get = get_isMobilePhone)) bool isMobilePhone;

  __declspec(property(get = get_isVR)) bool isVR;

  /// @brief Field keepCraftedItemInHand, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_keepCraftedItemInHand, put = __cordl_internal_set_keepCraftedItemInHand)) bool keepCraftedItemInHand;

  /// @brief Field mobileSpawnRoomKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileSpawnRoomKey, put = __cordl_internal_set_mobileSpawnRoomKey))::StringW mobileSpawnRoomKey;

  /// @brief Field privateRoomTransitionRoomKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_privateRoomTransitionRoomKey, put = __cordl_internal_set_privateRoomTransitionRoomKey))::StringW privateRoomTransitionRoomKey;

  /// @brief Field resetTutorialProgressInEditor, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_resetTutorialProgressInEditor, put = __cordl_internal_set_resetTutorialProgressInEditor)) bool resetTutorialProgressInEditor;

  /// @brief Field roomMapVersion, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_roomMapVersion, put = __cordl_internal_set_roomMapVersion))::StringW roomMapVersion;

  /// @brief Field spawnRoomKey, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_spawnRoomKey, put = __cordl_internal_set_spawnRoomKey))::StringW spawnRoomKey;

  /// @brief Field startInSpectatorModeInEditor, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_startInSpectatorModeInEditor, put = __cordl_internal_set_startInSpectatorModeInEditor)) bool startInSpectatorModeInEditor;

  /// @brief Field targetFrameRate, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_targetFrameRate, put = setStaticF_targetFrameRate)) float_t targetFrameRate;

  /// @brief Field targetFrameRateDeltaTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_targetFrameRateDeltaTime, put = setStaticF_targetFrameRateDeltaTime)) float_t targetFrameRateDeltaTime;

  /// @brief Field throwAssistLayerMask, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_throwAssistLayerMask, put = __cordl_internal_set_throwAssistLayerMask))::UnityEngine::LayerMask throwAssistLayerMask;

  /// @brief Field throwBodyVelocityMultiplier, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_throwBodyVelocityMultiplier, put = __cordl_internal_set_throwBodyVelocityMultiplier)) float_t throwBodyVelocityMultiplier;

  /// @brief Field throwHandVelocityMultiplier, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_throwHandVelocityMultiplier, put = __cordl_internal_set_throwHandVelocityMultiplier)) float_t throwHandVelocityMultiplier;

  /// @brief Field throwSpeedMultiplier, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_throwSpeedMultiplier, put = __cordl_internal_set_throwSpeedMultiplier)) float_t throwSpeedMultiplier;

  /// @brief Field throwSpeedPOW, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_throwSpeedPOW, put = __cordl_internal_set_throwSpeedPOW)) float_t throwSpeedPOW;

  /// @brief Field useHardcodedStoreCosmeticsInEditor, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get_useHardcodedStoreCosmeticsInEditor, put = __cordl_internal_set_useHardcodedStoreCosmeticsInEditor)) bool useHardcodedStoreCosmeticsInEditor;

  /// @brief Field useLocalDatabase, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_useLocalDatabase, put = __cordl_internal_set_useLocalDatabase)) bool useLocalDatabase;

  /// @brief Field useMobileControlsInEditor, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_useMobileControlsInEditor, put = __cordl_internal_set_useMobileControlsInEditor)) bool useMobileControlsInEditor;

  /// @brief Field usingHeadsetInEditor, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_usingHeadsetInEditor, put = __cordl_internal_set_usingHeadsetInEditor)) bool usingHeadsetInEditor;

  /// @brief Method GetApplicationVersion, addr 0x29c7d24, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetApplicationVersion();

  /// @brief Method GetCompatabilityVersion, addr 0x29c7bcc, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW GetCompatabilityVersion();

  static inline ::GlobalNamespace::EnvironmentVariables* New_ctor();

  /// @brief Method SetRefreshRate, addr 0x29c7b20, size 0x6c, virtual false, abstract: false, final false
  static inline void SetRefreshRate(float_t newRefreshRate);

  constexpr ::StringW const& __cordl_internal_get_autoCraftPatternKey() const;

  constexpr ::StringW& __cordl_internal_get_autoCraftPatternKey();

  constexpr ::StringW const& __cordl_internal_get_autoExpandClusterKey() const;

  constexpr ::StringW& __cordl_internal_get_autoExpandClusterKey();

  constexpr bool const& __cordl_internal_get_autoTrackMetPlayers() const;

  constexpr bool& __cordl_internal_get_autoTrackMetPlayers();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bodyVelocityFalloffCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_bodyVelocityFalloffCurve() const;

  constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType const& __cordl_internal_get_buildType() const;

  constexpr ::GlobalNamespace::__EnvironmentVariables__BuildType& __cordl_internal_get_buildType();

  constexpr bool const& __cordl_internal_get_bypassPrivateRoomPermissionInEditor() const;

  constexpr bool& __cordl_internal_get_bypassPrivateRoomPermissionInEditor();

  constexpr bool const& __cordl_internal_get_canEditorOpenLinks() const;

  constexpr bool& __cordl_internal_get_canEditorOpenLinks();

  constexpr bool const& __cordl_internal_get_clearAccountOnStartInEditor() const;

  constexpr bool& __cordl_internal_get_clearAccountOnStartInEditor();

  constexpr bool const& __cordl_internal_get_clearMobileCacheInEditor() const;

  constexpr bool& __cordl_internal_get_clearMobileCacheInEditor();

  constexpr ::StringW const& __cordl_internal_get_compatabilityVersion() const;

  constexpr ::StringW& __cordl_internal_get_compatabilityVersion();

  constexpr ::StringW const& __cordl_internal_get_debugTargetPrivateRoomAccountID() const;

  constexpr ::StringW& __cordl_internal_get_debugTargetPrivateRoomAccountID();

  constexpr float_t const& __cordl_internal_get_distanceToTargetMultiplier() const;

  constexpr float_t& __cordl_internal_get_distanceToTargetMultiplier();

  constexpr float_t const& __cordl_internal_get_distanceToTargetPOW() const;

  constexpr float_t& __cordl_internal_get_distanceToTargetPOW();

  constexpr bool const& __cordl_internal_get_doFakeStashRedeemingInEditor() const;

  constexpr bool& __cordl_internal_get_doFakeStashRedeemingInEditor();

  constexpr ::StringW const& __cordl_internal_get_editorAccountID() const;

  constexpr ::StringW& __cordl_internal_get_editorAccountID();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_editorInitiallyTrackedAccountIDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_editorInitiallyTrackedAccountIDs() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_editorInitiallyTrackedFriends();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_editorInitiallyTrackedFriends() const;

  constexpr ::GlobalNamespace::FatalErrorTestType const& __cordl_internal_get_fatalErrorTestTypeInEditor() const;

  constexpr ::GlobalNamespace::FatalErrorTestType& __cordl_internal_get_fatalErrorTestTypeInEditor();

  constexpr bool const& __cordl_internal_get_forceCosmeticsInEditor() const;

  constexpr bool& __cordl_internal_get_forceCosmeticsInEditor();

  constexpr bool const& __cordl_internal_get_forceStartingRoomInEditor() const;

  constexpr bool& __cordl_internal_get_forceStartingRoomInEditor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_forcedCosmeticKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_forcedCosmeticKeys() const;

  constexpr ::StringW const& __cordl_internal_get_forcedStartingRoomKey() const;

  constexpr ::StringW& __cordl_internal_get_forcedStartingRoomKey();

  constexpr ::StringW const& __cordl_internal_get_forcedStartingRoomMapKey() const;

  constexpr ::StringW& __cordl_internal_get_forcedStartingRoomMapKey();

  constexpr bool const& __cordl_internal_get_giveAllPlayersThrowingWeapons() const;

  constexpr bool& __cordl_internal_get_giveAllPlayersThrowingWeapons();

  constexpr float_t const& __cordl_internal_get_handVelocitySmoothing() const;

  constexpr float_t& __cordl_internal_get_handVelocitySmoothing();

  constexpr bool const& __cordl_internal_get_isExperimental() const;

  constexpr bool& __cordl_internal_get_isExperimental();

  constexpr bool const& __cordl_internal_get_keepCraftedItemInHand() const;

  constexpr bool& __cordl_internal_get_keepCraftedItemInHand();

  constexpr ::StringW const& __cordl_internal_get_mobileSpawnRoomKey() const;

  constexpr ::StringW& __cordl_internal_get_mobileSpawnRoomKey();

  constexpr ::StringW const& __cordl_internal_get_privateRoomTransitionRoomKey() const;

  constexpr ::StringW& __cordl_internal_get_privateRoomTransitionRoomKey();

  constexpr bool const& __cordl_internal_get_resetTutorialProgressInEditor() const;

  constexpr bool& __cordl_internal_get_resetTutorialProgressInEditor();

  constexpr ::StringW const& __cordl_internal_get_roomMapVersion() const;

  constexpr ::StringW& __cordl_internal_get_roomMapVersion();

  constexpr ::StringW const& __cordl_internal_get_spawnRoomKey() const;

  constexpr ::StringW& __cordl_internal_get_spawnRoomKey();

  constexpr bool const& __cordl_internal_get_startInSpectatorModeInEditor() const;

  constexpr bool& __cordl_internal_get_startInSpectatorModeInEditor();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_throwAssistLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_throwAssistLayerMask();

  constexpr float_t const& __cordl_internal_get_throwBodyVelocityMultiplier() const;

  constexpr float_t& __cordl_internal_get_throwBodyVelocityMultiplier();

  constexpr float_t const& __cordl_internal_get_throwHandVelocityMultiplier() const;

  constexpr float_t& __cordl_internal_get_throwHandVelocityMultiplier();

  constexpr float_t const& __cordl_internal_get_throwSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get_throwSpeedMultiplier();

  constexpr float_t const& __cordl_internal_get_throwSpeedPOW() const;

  constexpr float_t& __cordl_internal_get_throwSpeedPOW();

  constexpr bool const& __cordl_internal_get_useHardcodedStoreCosmeticsInEditor() const;

  constexpr bool& __cordl_internal_get_useHardcodedStoreCosmeticsInEditor();

  constexpr bool const& __cordl_internal_get_useLocalDatabase() const;

  constexpr bool& __cordl_internal_get_useLocalDatabase();

  constexpr bool const& __cordl_internal_get_useMobileControlsInEditor() const;

  constexpr bool& __cordl_internal_get_useMobileControlsInEditor();

  constexpr bool const& __cordl_internal_get_usingHeadsetInEditor() const;

  constexpr bool& __cordl_internal_get_usingHeadsetInEditor();

  constexpr void __cordl_internal_set_autoCraftPatternKey(::StringW value);

  constexpr void __cordl_internal_set_autoExpandClusterKey(::StringW value);

  constexpr void __cordl_internal_set_autoTrackMetPlayers(bool value);

  constexpr void __cordl_internal_set_bodyVelocityFalloffCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_buildType(::GlobalNamespace::__EnvironmentVariables__BuildType value);

  constexpr void __cordl_internal_set_bypassPrivateRoomPermissionInEditor(bool value);

  constexpr void __cordl_internal_set_canEditorOpenLinks(bool value);

  constexpr void __cordl_internal_set_clearAccountOnStartInEditor(bool value);

  constexpr void __cordl_internal_set_clearMobileCacheInEditor(bool value);

  constexpr void __cordl_internal_set_compatabilityVersion(::StringW value);

  constexpr void __cordl_internal_set_debugTargetPrivateRoomAccountID(::StringW value);

  constexpr void __cordl_internal_set_distanceToTargetMultiplier(float_t value);

  constexpr void __cordl_internal_set_distanceToTargetPOW(float_t value);

  constexpr void __cordl_internal_set_doFakeStashRedeemingInEditor(bool value);

  constexpr void __cordl_internal_set_editorAccountID(::StringW value);

  constexpr void __cordl_internal_set_editorInitiallyTrackedAccountIDs(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_editorInitiallyTrackedFriends(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_fatalErrorTestTypeInEditor(::GlobalNamespace::FatalErrorTestType value);

  constexpr void __cordl_internal_set_forceCosmeticsInEditor(bool value);

  constexpr void __cordl_internal_set_forceStartingRoomInEditor(bool value);

  constexpr void __cordl_internal_set_forcedCosmeticKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_forcedStartingRoomKey(::StringW value);

  constexpr void __cordl_internal_set_forcedStartingRoomMapKey(::StringW value);

  constexpr void __cordl_internal_set_giveAllPlayersThrowingWeapons(bool value);

  constexpr void __cordl_internal_set_handVelocitySmoothing(float_t value);

  constexpr void __cordl_internal_set_isExperimental(bool value);

  constexpr void __cordl_internal_set_keepCraftedItemInHand(bool value);

  constexpr void __cordl_internal_set_mobileSpawnRoomKey(::StringW value);

  constexpr void __cordl_internal_set_privateRoomTransitionRoomKey(::StringW value);

  constexpr void __cordl_internal_set_resetTutorialProgressInEditor(bool value);

  constexpr void __cordl_internal_set_roomMapVersion(::StringW value);

  constexpr void __cordl_internal_set_spawnRoomKey(::StringW value);

  constexpr void __cordl_internal_set_startInSpectatorModeInEditor(bool value);

  constexpr void __cordl_internal_set_throwAssistLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_throwBodyVelocityMultiplier(float_t value);

  constexpr void __cordl_internal_set_throwHandVelocityMultiplier(float_t value);

  constexpr void __cordl_internal_set_throwSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set_throwSpeedPOW(float_t value);

  constexpr void __cordl_internal_set_useHardcodedStoreCosmeticsInEditor(bool value);

  constexpr void __cordl_internal_set_useLocalDatabase(bool value);

  constexpr void __cordl_internal_set_useMobileControlsInEditor(bool value);

  constexpr void __cordl_internal_set_usingHeadsetInEditor(bool value);

  /// @brief Method .ctor, addr 0x29c7d2c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF_targetFrameRate();

  static inline float_t getStaticF_targetFrameRateDeltaTime();

  /// @brief Method get_isMobile, addr 0x29c7b8c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isMobile();

  /// @brief Method get_isMobilePC, addr 0x29c7bbc, size 0x10, virtual false, abstract: false, final false
  inline bool get_isMobilePC();

  /// @brief Method get_isMobilePhone, addr 0x29c7bac, size 0x10, virtual false, abstract: false, final false
  inline bool get_isMobilePhone();

  /// @brief Method get_isVR, addr 0x29c7b9c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isVR();

  static inline void setStaticF_targetFrameRate(float_t value);

  static inline void setStaticF_targetFrameRateDeltaTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariables();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariables", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariables(EnvironmentVariables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariables(EnvironmentVariables const&) = delete;

  /// @brief Field compatabilityVersion, offset: 0x18, size: 0x8, def value: None
  ::StringW ___compatabilityVersion;

  /// @brief Field buildType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__EnvironmentVariables__BuildType ___buildType;

  /// @brief Field isExperimental, offset: 0x24, size: 0x1, def value: None
  bool ___isExperimental;

  /// @brief Field useMobileControlsInEditor, offset: 0x25, size: 0x1, def value: None
  bool ___useMobileControlsInEditor;

  /// @brief Field clearMobileCacheInEditor, offset: 0x26, size: 0x1, def value: None
  bool ___clearMobileCacheInEditor;

  /// @brief Field editorAccountID, offset: 0x28, size: 0x8, def value: None
  ::StringW ___editorAccountID;

  /// @brief Field usingHeadsetInEditor, offset: 0x30, size: 0x1, def value: None
  bool ___usingHeadsetInEditor;

  /// @brief Field giveAllPlayersThrowingWeapons, offset: 0x31, size: 0x1, def value: None
  bool ___giveAllPlayersThrowingWeapons;

  /// @brief Field startInSpectatorModeInEditor, offset: 0x32, size: 0x1, def value: None
  bool ___startInSpectatorModeInEditor;

  /// @brief Field clearAccountOnStartInEditor, offset: 0x33, size: 0x1, def value: None
  bool ___clearAccountOnStartInEditor;

  /// @brief Field spawnRoomKey, offset: 0x38, size: 0x8, def value: None
  ::StringW ___spawnRoomKey;

  /// @brief Field mobileSpawnRoomKey, offset: 0x40, size: 0x8, def value: None
  ::StringW ___mobileSpawnRoomKey;

  /// @brief Field privateRoomTransitionRoomKey, offset: 0x48, size: 0x8, def value: None
  ::StringW ___privateRoomTransitionRoomKey;

  /// @brief Field forceStartingRoomInEditor, offset: 0x50, size: 0x1, def value: None
  bool ___forceStartingRoomInEditor;

  /// @brief Field forcedStartingRoomKey, offset: 0x58, size: 0x8, def value: None
  ::StringW ___forcedStartingRoomKey;

  /// @brief Field forcedStartingRoomMapKey, offset: 0x60, size: 0x8, def value: None
  ::StringW ___forcedStartingRoomMapKey;

  /// @brief Field resetTutorialProgressInEditor, offset: 0x68, size: 0x1, def value: None
  bool ___resetTutorialProgressInEditor;

  /// @brief Field roomMapVersion, offset: 0x70, size: 0x8, def value: None
  ::StringW ___roomMapVersion;

  /// @brief Field debugTargetPrivateRoomAccountID, offset: 0x78, size: 0x8, def value: None
  ::StringW ___debugTargetPrivateRoomAccountID;

  /// @brief Field bypassPrivateRoomPermissionInEditor, offset: 0x80, size: 0x1, def value: None
  bool ___bypassPrivateRoomPermissionInEditor;

  /// @brief Field autoExpandClusterKey, offset: 0x88, size: 0x8, def value: None
  ::StringW ___autoExpandClusterKey;

  /// @brief Field autoCraftPatternKey, offset: 0x90, size: 0x8, def value: None
  ::StringW ___autoCraftPatternKey;

  /// @brief Field keepCraftedItemInHand, offset: 0x98, size: 0x1, def value: None
  bool ___keepCraftedItemInHand;

  /// @brief Field autoTrackMetPlayers, offset: 0x99, size: 0x1, def value: None
  bool ___autoTrackMetPlayers;

  /// @brief Field editorInitiallyTrackedAccountIDs, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___editorInitiallyTrackedAccountIDs;

  /// @brief Field editorInitiallyTrackedFriends, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___editorInitiallyTrackedFriends;

  /// @brief Field canEditorOpenLinks, offset: 0xb0, size: 0x1, def value: None
  bool ___canEditorOpenLinks;

  /// @brief Field useHardcodedStoreCosmeticsInEditor, offset: 0xb1, size: 0x1, def value: None
  bool ___useHardcodedStoreCosmeticsInEditor;

  /// @brief Field forceCosmeticsInEditor, offset: 0xb2, size: 0x1, def value: None
  bool ___forceCosmeticsInEditor;

  /// @brief Field forcedCosmeticKeys, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___forcedCosmeticKeys;

  /// @brief Field handVelocitySmoothing, offset: 0xc0, size: 0x4, def value: None
  float_t ___handVelocitySmoothing;

  /// @brief Field throwHandVelocityMultiplier, offset: 0xc4, size: 0x4, def value: None
  float_t ___throwHandVelocityMultiplier;

  /// @brief Field throwBodyVelocityMultiplier, offset: 0xc8, size: 0x4, def value: None
  float_t ___throwBodyVelocityMultiplier;

  /// @brief Field bodyVelocityFalloffCurve, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___bodyVelocityFalloffCurve;

  /// @brief Field doFakeStashRedeemingInEditor, offset: 0xd8, size: 0x1, def value: None
  bool ___doFakeStashRedeemingInEditor;

  /// @brief Field distanceToTargetPOW, offset: 0xdc, size: 0x4, def value: None
  float_t ___distanceToTargetPOW;

  /// @brief Field distanceToTargetMultiplier, offset: 0xe0, size: 0x4, def value: None
  float_t ___distanceToTargetMultiplier;

  /// @brief Field throwSpeedPOW, offset: 0xe4, size: 0x4, def value: None
  float_t ___throwSpeedPOW;

  /// @brief Field throwSpeedMultiplier, offset: 0xe8, size: 0x4, def value: None
  float_t ___throwSpeedMultiplier;

  /// @brief Field throwAssistLayerMask, offset: 0xec, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___throwAssistLayerMask;

  /// @brief Field useLocalDatabase, offset: 0xf0, size: 0x1, def value: None
  bool ___useLocalDatabase;

  /// @brief Field fatalErrorTestTypeInEditor, offset: 0xf4, size: 0x4, def value: None
  ::GlobalNamespace::FatalErrorTestType ___fatalErrorTestTypeInEditor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentVariables, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___compatabilityVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___buildType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___isExperimental) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___useMobileControlsInEditor) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___clearMobileCacheInEditor) == 0x26, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___editorAccountID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___usingHeadsetInEditor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___giveAllPlayersThrowingWeapons) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___startInSpectatorModeInEditor) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___clearAccountOnStartInEditor) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___spawnRoomKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___mobileSpawnRoomKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___privateRoomTransitionRoomKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___forceStartingRoomInEditor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___forcedStartingRoomKey) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___forcedStartingRoomMapKey) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___resetTutorialProgressInEditor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___roomMapVersion) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___debugTargetPrivateRoomAccountID) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___bypassPrivateRoomPermissionInEditor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___autoExpandClusterKey) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___autoCraftPatternKey) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___keepCraftedItemInHand) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___autoTrackMetPlayers) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___editorInitiallyTrackedAccountIDs) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___editorInitiallyTrackedFriends) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___canEditorOpenLinks) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___useHardcodedStoreCosmeticsInEditor) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___forceCosmeticsInEditor) == 0xb2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___forcedCosmeticKeys) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___handVelocitySmoothing) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___throwHandVelocityMultiplier) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___throwBodyVelocityMultiplier) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___bodyVelocityFalloffCurve) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___doFakeStashRedeemingInEditor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___distanceToTargetPOW) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___distanceToTargetMultiplier) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___throwSpeedPOW) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___throwSpeedMultiplier) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___throwAssistLayerMask) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___useLocalDatabase) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentVariables, ___fatalErrorTestTypeInEditor) == 0xf4, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentVariables__BuildType, "", "EnvironmentVariables/BuildType");
NEED_NO_BOX(::GlobalNamespace::EnvironmentVariables);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentVariables*, "", "EnvironmentVariables");
