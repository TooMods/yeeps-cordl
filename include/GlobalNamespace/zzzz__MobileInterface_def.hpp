#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileInterface)
namespace GlobalNamespace {
class FollowPlayerMenu;
}
namespace GlobalNamespace {
class Joystick2D;
}
namespace GlobalNamespace {
class MobileCreatorPackMenu;
}
namespace GlobalNamespace {
class MobileLoginMenu;
}
namespace GlobalNamespace {
class MobilePromptDisplay;
}
namespace GlobalNamespace {
class MobileSlidingPage;
}
namespace GlobalNamespace {
class PanZone2D;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
class __ImaginationPrompt__OnActionTaken;
}
namespace GlobalNamespace {
class __MobileInterface___ShowPCControlsRoutine_d__75;
}
namespace GlobalNamespace {
class __MobileInterface____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox::AudioTaps {
class VivoxAudioTap;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileInterface;
}
namespace GlobalNamespace {
class __MobileInterface___ShowPCControlsRoutine_d__75;
}
namespace GlobalNamespace {
class __MobileInterface____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileInterface);
MARK_REF_PTR_T(::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75);
MARK_REF_PTR_T(::GlobalNamespace::__MobileInterface____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileInterface::<>c*
class CORDL_TYPE __MobileInterface____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MobileInterface____c* __9;

  /// @brief Field <>9__61_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__61_0, put = setStaticF___9__61_0))::GlobalNamespace::__ImaginationPrompt__OnActionTaken* __9__61_0;

  static inline ::GlobalNamespace::__MobileInterface____c* New_ctor();

  /// @brief Method <OnPCQuitButtonPressed>b__61_0, addr 0x2dfaff4, size 0x14, virtual false, abstract: false, final false
  inline void _OnPCQuitButtonPressed_b__61_0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  /// @brief Method .ctor, addr 0x2dfafec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MobileInterface____c* getStaticF___9();

  static inline ::GlobalNamespace::__ImaginationPrompt__OnActionTaken* getStaticF___9__61_0();

  static inline void setStaticF___9(::GlobalNamespace::__MobileInterface____c* value);

  static inline void setStaticF___9__61_0(::GlobalNamespace::__ImaginationPrompt__OnActionTaken* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileInterface____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileInterface____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileInterface____c(__MobileInterface____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileInterface____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileInterface____c(__MobileInterface____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileInterface____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ShowPCControlsRoutine>d__75
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileInterface::<ShowPCControlsRoutine>d__75*
class CORDL_TYPE __MobileInterface___ShowPCControlsRoutine_d__75 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobileInterface> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2dfb034, size 0x114, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2dfb3b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2dfb3c0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2dfb400, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2dfb030, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MobileInterface> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobileInterface>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobileInterface> value);

  /// @brief Method .ctor, addr 0x2dfb008, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileInterface___ShowPCControlsRoutine_d__75();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobileInterface___ShowPCControlsRoutine_d__75", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobileInterface___ShowPCControlsRoutine_d__75(__MobileInterface___ShowPCControlsRoutine_d__75&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobileInterface___ShowPCControlsRoutine_d__75", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobileInterface___ShowPCControlsRoutine_d__75(__MobileInterface___ShowPCControlsRoutine_d__75 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileInterface> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileInterface
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileInterface*
class CORDL_TYPE MobileInterface : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ShowPCControlsRoutine_d__75 = ::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75;

  using __c = ::GlobalNamespace::__MobileInterface____c;

  /// @brief Field <mobileLookInput>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__mobileLookInput_k__BackingField, put = setStaticF__mobileLookInput_k__BackingField))::UnityEngine::Vector2 _mobileLookInput_k__BackingField;

  /// @brief Field <mobileMoveInput>k__BackingField, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF__mobileMoveInput_k__BackingField, put = setStaticF__mobileMoveInput_k__BackingField))::UnityEngine::Vector3 _mobileMoveInput_k__BackingField;

  /// @brief Field audioTap, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_audioTap, put = __cordl_internal_set_audioTap))::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> audioTap;

  /// @brief Field audioTapObject, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_audioTapObject, put = __cordl_internal_set_audioTapObject))::UnityW<::UnityEngine::GameObject> audioTapObject;

  /// @brief Field basicOverlay, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_basicOverlay, put = __cordl_internal_set_basicOverlay))::UnityW<::UnityEngine::GameObject> basicOverlay;

  /// @brief Field canUseHotkeys, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_canUseHotkeys, put = setStaticF_canUseHotkeys)) bool canUseHotkeys;

  /// @brief Field creatorPackContainers, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_creatorPackContainers,
                      put = __cordl_internal_set_creatorPackContainers))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> creatorPackContainers;

  /// @brief Field creatorPackMenu, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_creatorPackMenu, put = __cordl_internal_set_creatorPackMenu))::UnityW<::GlobalNamespace::MobileCreatorPackMenu> creatorPackMenu;

  /// @brief Field creatorPackSuccessPage, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_creatorPackSuccessPage, put = __cordl_internal_set_creatorPackSuccessPage))::UnityW<::GlobalNamespace::MobileSlidingPage> creatorPackSuccessPage;

  /// @brief Field curChannelName, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_curChannelName, put = __cordl_internal_set_curChannelName))::StringW curChannelName;

  /// @brief Field editorPanSensitivity, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_editorPanSensitivity, put = __cordl_internal_set_editorPanSensitivity)) float_t editorPanSensitivity;

  /// @brief Field followPlayerMenu, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_followPlayerMenu, put = __cordl_internal_set_followPlayerMenu))::UnityW<::GlobalNamespace::FollowPlayerMenu> followPlayerMenu;

  /// @brief Field hasCreatorPack, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_hasCreatorPack, put = __cordl_internal_set_hasCreatorPack)) bool hasCreatorPack;

  /// @brief Field isLinkedPopupVisible, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_isLinkedPopupVisible, put = __cordl_internal_set_isLinkedPopupVisible)) bool isLinkedPopupVisible;

  /// @brief Field isLinkedToMobileAccount, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_isLinkedToMobileAccount, put = __cordl_internal_set_isLinkedToMobileAccount)) bool isLinkedToMobileAccount;

  /// @brief Field linkSuccessPage, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_linkSuccessPage, put = __cordl_internal_set_linkSuccessPage))::UnityW<::GlobalNamespace::MobileSlidingPage> linkSuccessPage;

  /// @brief Field linkedPage, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_linkedPage, put = __cordl_internal_set_linkedPage))::UnityW<::UnityEngine::GameObject> linkedPage;

  /// @brief Field linkedPageAutoHideTime, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_linkedPageAutoHideTime, put = __cordl_internal_set_linkedPageAutoHideTime)) float_t linkedPageAutoHideTime;

  /// @brief Field linkedPagePopup, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_linkedPagePopup, put = __cordl_internal_set_linkedPagePopup))::UnityW<::GlobalNamespace::MobileSlidingPage> linkedPagePopup;

  /// @brief Field linkedPromptDisplay, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_linkedPromptDisplay, put = __cordl_internal_set_linkedPromptDisplay))::UnityW<::GlobalNamespace::MobilePromptDisplay> linkedPromptDisplay;

  /// @brief Field loggedOutMenu, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_loggedOutMenu, put = __cordl_internal_set_loggedOutMenu))::UnityW<::GlobalNamespace::MobileSlidingPage> loggedOutMenu;

  /// @brief Field loginContainer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_loginContainer, put = __cordl_internal_set_loginContainer))::UnityW<::UnityEngine::GameObject> loginContainer;

  /// @brief Field loginMenu, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_loginMenu, put = __cordl_internal_set_loginMenu))::UnityW<::GlobalNamespace::MobileLoginMenu> loginMenu;

  /// @brief Field logoutContainers, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_logoutContainers,
                      put = __cordl_internal_set_logoutContainers))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> logoutContainers;

  /// @brief Field lookPanZone, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lookPanZone, put = __cordl_internal_set_lookPanZone))::UnityW<::GlobalNamespace::PanZone2D> lookPanZone;

  /// @brief Field masterPlayerCurrencyDisplay, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayerCurrencyDisplay, put = __cordl_internal_set_masterPlayerCurrencyDisplay))::UnityW<::UnityEngine::GameObject> masterPlayerCurrencyDisplay;

  /// @brief Field maxTapMoveDistance, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxTapMoveDistance, put = __cordl_internal_set_maxTapMoveDistance)) float_t maxTapMoveDistance;

  /// @brief Field mobileInteractionLayerMask, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_mobileInteractionLayerMask, put = __cordl_internal_set_mobileInteractionLayerMask))::UnityEngine::LayerMask mobileInteractionLayerMask;

  /// @brief Field mobileOverlayCamera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileOverlayCamera, put = __cordl_internal_set_mobileOverlayCamera))::UnityW<::UnityEngine::Camera> mobileOverlayCamera;

  /// @brief Field mobilePanSensitivity, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_mobilePanSensitivity, put = __cordl_internal_set_mobilePanSensitivity)) float_t mobilePanSensitivity;

  /// @brief Field moveJoystick, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_moveJoystick, put = __cordl_internal_set_moveJoystick))::UnityW<::GlobalNamespace::Joystick2D> moveJoystick;

  /// @brief Field nextLinkedPageTapTime, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_nextLinkedPageTapTime, put = __cordl_internal_set_nextLinkedPageTapTime)) float_t nextLinkedPageTapTime;

  /// @brief Field pcControls, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_pcControls, put = __cordl_internal_set_pcControls))::UnityW<::GlobalNamespace::MobileSlidingPage> pcControls;

  /// @brief Field safeAreaContainers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_safeAreaContainers,
                      put = __cordl_internal_set_safeAreaContainers))::ArrayW<::UnityW<::UnityEngine::RectTransform>, ::Array<::UnityW<::UnityEngine::RectTransform>>*> safeAreaContainers;

  /// @brief Field showPCControlDuration, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_showPCControlDuration, put = __cordl_internal_set_showPCControlDuration)) float_t showPCControlDuration;

  /// @brief Field tapMoveDistanceRatio, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_tapMoveDistanceRatio, put = __cordl_internal_set_tapMoveDistanceRatio)) float_t tapMoveDistanceRatio;

  /// @brief Method HideCreatorPackSuccessPage, addr 0x30890c4, size 0x24, virtual false, abstract: false, final false
  inline void HideCreatorPackSuccessPage();

  /// @brief Method Initialize, addr 0x30874f0, size 0xee8, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::MobileInterface* New_ctor();

  /// @brief Method OnAnyPageOpened, addr 0x3088f20, size 0x4, virtual false, abstract: false, final false
  inline void OnAnyPageOpened(bool newActive);

  /// @brief Method OnChannelJoined, addr 0x30888a8, size 0x228, virtual false, abstract: false, final false
  inline void OnChannelJoined(::StringW channelName);

  /// @brief Method OnChannelLeft, addr 0x3089648, size 0x220, virtual false, abstract: false, final false
  inline void OnChannelLeft(::StringW channelName);

  /// @brief Method OnCreatorPackFlowComplete, addr 0x3089070, size 0x54, virtual false, abstract: false, final false
  inline void OnCreatorPackFlowComplete();

  /// @brief Method OnCreatorPackMenuSetActive, addr 0x3088fcc, size 0x8c, virtual false, abstract: false, final false
  inline void OnCreatorPackMenuSetActive(bool newActive);

  /// @brief Method OnHasCreatorPackUpdated, addr 0x3089058, size 0x18, virtual false, abstract: false, final false
  inline void OnHasCreatorPackUpdated(bool newHasCreatorPack);

  /// @brief Method OnIsCameraLinkedUpdated, addr 0x30886cc, size 0x10c, virtual false, abstract: false, final false
  inline void OnIsCameraLinkedUpdated(bool newIsCameraLinked);

  /// @brief Method OnIsOccupyingCurrencyAnchorUpdated, addr 0x30886ac, size 0x20, virtual false, abstract: false, final false
  inline void OnIsOccupyingCurrencyAnchorUpdated(bool newIsOccupyingCurrencyAnchor);

  /// @brief Method OnLinkFlowComplete, addr 0x3088f5c, size 0x54, virtual false, abstract: false, final false
  inline void OnLinkFlowComplete();

  /// @brief Method OnLinkedPageTapped, addr 0x3089544, size 0x80, virtual false, abstract: false, final false
  inline void OnLinkedPageTapped();

  /// @brief Method OnLinkedToMobileAccount, addr 0x3088f24, size 0x38, virtual false, abstract: false, final false
  inline void OnLinkedToMobileAccount();

  /// @brief Method OnLoginMenuSetActive, addr 0x3088edc, size 0x44, virtual false, abstract: false, final false
  inline void OnLoginMenuSetActive(bool newActive);

  /// @brief Method OnLogoutButtonPressed, addr 0x30891dc, size 0x124, virtual false, abstract: false, final false
  inline void OnLogoutButtonPressed();

  /// @brief Method OnLookPanDeltaUpdated, addr 0x30885fc, size 0xb0, virtual false, abstract: false, final false
  inline void OnLookPanDeltaUpdated(::UnityEngine::Vector2 newDelta);

  /// @brief Method OnMoveJoystickValueUpdated, addr 0x308855c, size 0xa0, virtual false, abstract: false, final false
  inline void OnMoveJoystickValueUpdated(::UnityEngine::Vector2 newValue);

  /// @brief Method OnOrientationChanged, addr 0x3089868, size 0x4, virtual false, abstract: false, final false
  inline void OnOrientationChanged(bool newIsLandscape);

  /// @brief Method OnPCQuitButtonPressed, addr 0x3089300, size 0x18c, virtual false, abstract: false, final false
  inline void OnPCQuitButtonPressed();

  /// @brief Method OnPanZoneTapped, addr 0x3088b38, size 0x32c, virtual false, abstract: false, final false
  inline void OnPanZoneTapped(::UnityEngine::Vector2 screenPosition);

  /// @brief Method OnRestartButtonPressed, addr 0x3089130, size 0xac, virtual false, abstract: false, final false
  inline void OnRestartButtonPressed();

  /// @brief Method OpenCreatorPackPage, addr 0x308910c, size 0x24, virtual false, abstract: false, final false
  inline void OpenCreatorPackPage();

  /// @brief Method OpenLoggedOutPage, addr 0x30890e8, size 0x24, virtual false, abstract: false, final false
  inline void OpenLoggedOutPage();

  /// @brief Method RefreshCanUseControls, addr 0x308948c, size 0xb8, virtual false, abstract: false, final false
  inline void RefreshCanUseControls();

  /// @brief Method SetCreatorPackContainersActive, addr 0x3088840, size 0x68, virtual false, abstract: false, final false
  inline void SetCreatorPackContainersActive(bool newActive);

  /// @brief Method SetLinkedPageVisible, addr 0x3088e80, size 0x40, virtual false, abstract: false, final false
  inline void SetLinkedPageVisible(bool newVisible);

  /// @brief Method SetLogoutContainersActive, addr 0x30887d8, size 0x68, virtual false, abstract: false, final false
  inline void SetLogoutContainersActive(bool newActive);

  /// @brief Method SetupSafeArea, addr 0x30883d8, size 0x184, virtual false, abstract: false, final false
  inline void SetupSafeArea();

  /// @brief Method ShowPCControlsRoutine, addr 0x3088ad0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ShowPCControlsRoutine();

  /// @brief Method ToggleCreatorPackMenu, addr 0x3088fb0, size 0x1c, virtual false, abstract: false, final false
  inline void ToggleCreatorPackMenu();

  /// @brief Method ToggleFollowPlayerMenu, addr 0x3088e64, size 0x1c, virtual false, abstract: false, final false
  inline void ToggleFollowPlayerMenu();

  /// @brief Method ToggleLoginMenu, addr 0x3088ec0, size 0x1c, virtual false, abstract: false, final false
  inline void ToggleLoginMenu();

  /// @brief Method Update, addr 0x30895c4, size 0x84, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <OnLogoutButtonPressed>b__60_0, addr 0x30898d8, size 0x1c748, virtual false, abstract: false, final false
  inline void _OnLogoutButtonPressed_b__60_0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> const& __cordl_internal_get_audioTap() const;

  constexpr ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap>& __cordl_internal_get_audioTap();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_audioTapObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_audioTapObject();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_basicOverlay() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_basicOverlay();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_creatorPackContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_creatorPackContainers();

  constexpr ::UnityW<::GlobalNamespace::MobileCreatorPackMenu> const& __cordl_internal_get_creatorPackMenu() const;

  constexpr ::UnityW<::GlobalNamespace::MobileCreatorPackMenu>& __cordl_internal_get_creatorPackMenu();

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& __cordl_internal_get_creatorPackSuccessPage() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& __cordl_internal_get_creatorPackSuccessPage();

  constexpr ::StringW const& __cordl_internal_get_curChannelName() const;

  constexpr ::StringW& __cordl_internal_get_curChannelName();

  constexpr float_t const& __cordl_internal_get_editorPanSensitivity() const;

  constexpr float_t& __cordl_internal_get_editorPanSensitivity();

  constexpr ::UnityW<::GlobalNamespace::FollowPlayerMenu> const& __cordl_internal_get_followPlayerMenu() const;

  constexpr ::UnityW<::GlobalNamespace::FollowPlayerMenu>& __cordl_internal_get_followPlayerMenu();

  constexpr bool const& __cordl_internal_get_hasCreatorPack() const;

  constexpr bool& __cordl_internal_get_hasCreatorPack();

  constexpr bool const& __cordl_internal_get_isLinkedPopupVisible() const;

  constexpr bool& __cordl_internal_get_isLinkedPopupVisible();

  constexpr bool const& __cordl_internal_get_isLinkedToMobileAccount() const;

  constexpr bool& __cordl_internal_get_isLinkedToMobileAccount();

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& __cordl_internal_get_linkSuccessPage() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& __cordl_internal_get_linkSuccessPage();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_linkedPage() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_linkedPage();

  constexpr float_t const& __cordl_internal_get_linkedPageAutoHideTime() const;

  constexpr float_t& __cordl_internal_get_linkedPageAutoHideTime();

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& __cordl_internal_get_linkedPagePopup() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& __cordl_internal_get_linkedPagePopup();

  constexpr ::UnityW<::GlobalNamespace::MobilePromptDisplay> const& __cordl_internal_get_linkedPromptDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::MobilePromptDisplay>& __cordl_internal_get_linkedPromptDisplay();

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& __cordl_internal_get_loggedOutMenu() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& __cordl_internal_get_loggedOutMenu();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_loginContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_loginContainer();

  constexpr ::UnityW<::GlobalNamespace::MobileLoginMenu> const& __cordl_internal_get_loginMenu() const;

  constexpr ::UnityW<::GlobalNamespace::MobileLoginMenu>& __cordl_internal_get_loginMenu();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_logoutContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_logoutContainers();

  constexpr ::UnityW<::GlobalNamespace::PanZone2D> const& __cordl_internal_get_lookPanZone() const;

  constexpr ::UnityW<::GlobalNamespace::PanZone2D>& __cordl_internal_get_lookPanZone();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_masterPlayerCurrencyDisplay() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_masterPlayerCurrencyDisplay();

  constexpr float_t const& __cordl_internal_get_maxTapMoveDistance() const;

  constexpr float_t& __cordl_internal_get_maxTapMoveDistance();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mobileInteractionLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mobileInteractionLayerMask();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mobileOverlayCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mobileOverlayCamera();

  constexpr float_t const& __cordl_internal_get_mobilePanSensitivity() const;

  constexpr float_t& __cordl_internal_get_mobilePanSensitivity();

  constexpr ::UnityW<::GlobalNamespace::Joystick2D> const& __cordl_internal_get_moveJoystick() const;

  constexpr ::UnityW<::GlobalNamespace::Joystick2D>& __cordl_internal_get_moveJoystick();

  constexpr float_t const& __cordl_internal_get_nextLinkedPageTapTime() const;

  constexpr float_t& __cordl_internal_get_nextLinkedPageTapTime();

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage> const& __cordl_internal_get_pcControls() const;

  constexpr ::UnityW<::GlobalNamespace::MobileSlidingPage>& __cordl_internal_get_pcControls();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>, ::Array<::UnityW<::UnityEngine::RectTransform>>*> const& __cordl_internal_get_safeAreaContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>, ::Array<::UnityW<::UnityEngine::RectTransform>>*>& __cordl_internal_get_safeAreaContainers();

  constexpr float_t const& __cordl_internal_get_showPCControlDuration() const;

  constexpr float_t& __cordl_internal_get_showPCControlDuration();

  constexpr float_t const& __cordl_internal_get_tapMoveDistanceRatio() const;

  constexpr float_t& __cordl_internal_get_tapMoveDistanceRatio();

  constexpr void __cordl_internal_set_audioTap(::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> value);

  constexpr void __cordl_internal_set_audioTapObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_basicOverlay(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_creatorPackContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_creatorPackMenu(::UnityW<::GlobalNamespace::MobileCreatorPackMenu> value);

  constexpr void __cordl_internal_set_creatorPackSuccessPage(::UnityW<::GlobalNamespace::MobileSlidingPage> value);

  constexpr void __cordl_internal_set_curChannelName(::StringW value);

  constexpr void __cordl_internal_set_editorPanSensitivity(float_t value);

  constexpr void __cordl_internal_set_followPlayerMenu(::UnityW<::GlobalNamespace::FollowPlayerMenu> value);

  constexpr void __cordl_internal_set_hasCreatorPack(bool value);

  constexpr void __cordl_internal_set_isLinkedPopupVisible(bool value);

  constexpr void __cordl_internal_set_isLinkedToMobileAccount(bool value);

  constexpr void __cordl_internal_set_linkSuccessPage(::UnityW<::GlobalNamespace::MobileSlidingPage> value);

  constexpr void __cordl_internal_set_linkedPage(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_linkedPageAutoHideTime(float_t value);

  constexpr void __cordl_internal_set_linkedPagePopup(::UnityW<::GlobalNamespace::MobileSlidingPage> value);

  constexpr void __cordl_internal_set_linkedPromptDisplay(::UnityW<::GlobalNamespace::MobilePromptDisplay> value);

  constexpr void __cordl_internal_set_loggedOutMenu(::UnityW<::GlobalNamespace::MobileSlidingPage> value);

  constexpr void __cordl_internal_set_loginContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_loginMenu(::UnityW<::GlobalNamespace::MobileLoginMenu> value);

  constexpr void __cordl_internal_set_logoutContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_lookPanZone(::UnityW<::GlobalNamespace::PanZone2D> value);

  constexpr void __cordl_internal_set_masterPlayerCurrencyDisplay(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_maxTapMoveDistance(float_t value);

  constexpr void __cordl_internal_set_mobileInteractionLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_mobileOverlayCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_mobilePanSensitivity(float_t value);

  constexpr void __cordl_internal_set_moveJoystick(::UnityW<::GlobalNamespace::Joystick2D> value);

  constexpr void __cordl_internal_set_nextLinkedPageTapTime(float_t value);

  constexpr void __cordl_internal_set_pcControls(::UnityW<::GlobalNamespace::MobileSlidingPage> value);

  constexpr void __cordl_internal_set_safeAreaContainers(::ArrayW<::UnityW<::UnityEngine::RectTransform>, ::Array<::UnityW<::UnityEngine::RectTransform>>*> value);

  constexpr void __cordl_internal_set_showPCControlDuration(float_t value);

  constexpr void __cordl_internal_set_tapMoveDistanceRatio(float_t value);

  /// @brief Method .ctor, addr 0x308986c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Vector2 getStaticF__mobileLookInput_k__BackingField();

  static inline ::UnityEngine::Vector3 getStaticF__mobileMoveInput_k__BackingField();

  static inline bool getStaticF_canUseHotkeys();

  /// @brief Method get_mobileLookInput, addr 0x3087430, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_mobileLookInput();

  /// @brief Method get_mobileMoveInput, addr 0x308735c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_mobileMoveInput();

  static inline void setStaticF__mobileLookInput_k__BackingField(::UnityEngine::Vector2 value);

  static inline void setStaticF__mobileMoveInput_k__BackingField(::UnityEngine::Vector3 value);

  static inline void setStaticF_canUseHotkeys(bool value);

  /// @brief Method set_mobileLookInput, addr 0x3087488, size 0x68, virtual false, abstract: false, final false
  static inline void set_mobileLookInput(::UnityEngine::Vector2 value);

  /// @brief Method set_mobileMoveInput, addr 0x30873b8, size 0x78, virtual false, abstract: false, final false
  static inline void set_mobileMoveInput(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileInterface(MobileInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileInterface(MobileInterface const&) = delete;

  /// @brief Field mobileOverlayCamera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___mobileOverlayCamera;

  /// @brief Field safeAreaContainers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RectTransform>, ::Array<::UnityW<::UnityEngine::RectTransform>>*> ___safeAreaContainers;

  /// @brief Field basicOverlay, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___basicOverlay;

  /// @brief Field moveJoystick, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Joystick2D> ___moveJoystick;

  /// @brief Field lookPanZone, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PanZone2D> ___lookPanZone;

  /// @brief Field mobilePanSensitivity, offset: 0x40, size: 0x4, def value: None
  float_t ___mobilePanSensitivity;

  /// @brief Field editorPanSensitivity, offset: 0x44, size: 0x4, def value: None
  float_t ___editorPanSensitivity;

  /// @brief Field mobileInteractionLayerMask, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___mobileInteractionLayerMask;

  /// @brief Field maxTapMoveDistance, offset: 0x4c, size: 0x4, def value: None
  float_t ___maxTapMoveDistance;

  /// @brief Field tapMoveDistanceRatio, offset: 0x50, size: 0x4, def value: None
  float_t ___tapMoveDistanceRatio;

  /// @brief Field masterPlayerCurrencyDisplay, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___masterPlayerCurrencyDisplay;

  /// @brief Field followPlayerMenu, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FollowPlayerMenu> ___followPlayerMenu;

  /// @brief Field loggedOutMenu, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileSlidingPage> ___loggedOutMenu;

  /// @brief Field loginContainer, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___loginContainer;

  /// @brief Field logoutContainers, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___logoutContainers;

  /// @brief Field loginMenu, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileLoginMenu> ___loginMenu;

  /// @brief Field linkSuccessPage, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileSlidingPage> ___linkSuccessPage;

  /// @brief Field isLinkedToMobileAccount, offset: 0x90, size: 0x1, def value: None
  bool ___isLinkedToMobileAccount;

  /// @brief Field creatorPackContainers, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___creatorPackContainers;

  /// @brief Field creatorPackMenu, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileCreatorPackMenu> ___creatorPackMenu;

  /// @brief Field creatorPackSuccessPage, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileSlidingPage> ___creatorPackSuccessPage;

  /// @brief Field hasCreatorPack, offset: 0xb0, size: 0x1, def value: None
  bool ___hasCreatorPack;

  /// @brief Field linkedPage, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___linkedPage;

  /// @brief Field linkedPagePopup, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileSlidingPage> ___linkedPagePopup;

  /// @brief Field linkedPromptDisplay, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobilePromptDisplay> ___linkedPromptDisplay;

  /// @brief Field pcControls, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileSlidingPage> ___pcControls;

  /// @brief Field showPCControlDuration, offset: 0xd8, size: 0x4, def value: None
  float_t ___showPCControlDuration;

  /// @brief Field audioTapObject, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___audioTapObject;

  /// @brief Field isLinkedPopupVisible, offset: 0xe8, size: 0x1, def value: None
  bool ___isLinkedPopupVisible;

  /// @brief Field nextLinkedPageTapTime, offset: 0xec, size: 0x4, def value: None
  float_t ___nextLinkedPageTapTime;

  /// @brief Field linkedPageAutoHideTime, offset: 0xf0, size: 0x4, def value: None
  float_t ___linkedPageAutoHideTime;

  /// @brief Field audioTap, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::Unity::Services::Vivox::AudioTaps::VivoxAudioTap> ___audioTap;

  /// @brief Field curChannelName, offset: 0x100, size: 0x8, def value: None
  ::StringW ___curChannelName;

  /// @brief Field LINKED_PAGE_AUTO_HIDE_TIME offset 0xffffffff size 0x4
  static constexpr float_t LINKED_PAGE_AUTO_HIDE_TIME{ 5.0 };

  /// @brief Field LINKED_PAGE_TAP_COOLDOWN offset 0xffffffff size 0x4
  static constexpr float_t LINKED_PAGE_TAP_COOLDOWN{ 0.5 };

  /// @brief Field mobileInteractionLayer offset 0xffffffff size 0x4
  static constexpr int32_t mobileInteractionLayer{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileInterface, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___mobileOverlayCamera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___safeAreaContainers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___basicOverlay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___moveJoystick) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___lookPanZone) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___mobilePanSensitivity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___editorPanSensitivity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___mobileInteractionLayerMask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___maxTapMoveDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___tapMoveDistanceRatio) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___masterPlayerCurrencyDisplay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___followPlayerMenu) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___loggedOutMenu) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___loginContainer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___logoutContainers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___loginMenu) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___linkSuccessPage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___isLinkedToMobileAccount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___creatorPackContainers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___creatorPackMenu) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___creatorPackSuccessPage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___hasCreatorPack) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___linkedPage) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___linkedPagePopup) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___linkedPromptDisplay) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___pcControls) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___showPCControlDuration) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___audioTapObject) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___isLinkedPopupVisible) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___nextLinkedPageTapTime) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___linkedPageAutoHideTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___audioTap) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInterface, ___curChannelName) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileInterface);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileInterface*, "", "MobileInterface");
NEED_NO_BOX(::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileInterface___ShowPCControlsRoutine_d__75*, "", "MobileInterface/<ShowPCControlsRoutine>d__75");
NEED_NO_BOX(::GlobalNamespace::__MobileInterface____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileInterface____c*, "", "MobileInterface/<>c");
