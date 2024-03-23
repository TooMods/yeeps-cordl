#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIInputModule)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct MouseModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct NavigationModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TouchModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIInputModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule);
// Type: UnityEngine.XR.Interaction.Toolkit.UI::UIInputModule
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::UIInputModule*
class CORDL_TYPE UIInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
  // Declarations
  /// @brief Field beginDrag, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_beginDrag,
                      put = __cordl_internal_set_beginDrag))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* beginDrag;

  /// @brief Field cancel, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_cancel,
                      put = __cordl_internal_set_cancel))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* cancel;

  __declspec(property(get = get_clickSpeed, put = set_clickSpeed)) float_t clickSpeed;

  /// @brief Field drag, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_drag, put = __cordl_internal_set_drag))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* drag;

  /// @brief Field drop, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_drop, put = __cordl_internal_set_drop))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* drop;

  /// @brief Field endDrag, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_endDrag,
                      put = __cordl_internal_set_endDrag))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* endDrag;

  /// @brief Field finalizeRaycastResults, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_finalizeRaycastResults, put = __cordl_internal_set_finalizeRaycastResults))::System::Action_2<
      ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>* finalizeRaycastResults;

  /// @brief Field initializePotentialDrag, offset 0xc8, size 0x8
  __declspec(
      property(get = __cordl_internal_get_initializePotentialDrag,
               put = __cordl_internal_set_initializePotentialDrag))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* initializePotentialDrag;

  /// @brief Field m_CachedAxisEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedAxisEvent, put = __cordl_internal_set_m_CachedAxisEvent))::UnityEngine::EventSystems::AxisEventData* m_CachedAxisEvent;

  /// @brief Field m_ClickSpeed, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClickSpeed, put = __cordl_internal_set_m_ClickSpeed)) float_t m_ClickSpeed;

  /// @brief Field m_MainCameraCache, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MainCameraCache, put = __cordl_internal_set_m_MainCameraCache))::UnityW<::UnityEngine::Camera> m_MainCameraCache;

  /// @brief Field m_MoveDeadzone, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveDeadzone, put = __cordl_internal_set_m_MoveDeadzone)) float_t m_MoveDeadzone;

  /// @brief Field m_PointerEventByPointerId, offset 0x80, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_PointerEventByPointerId,
               put = __cordl_internal_set_m_PointerEventByPointerId))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* m_PointerEventByPointerId;

  /// @brief Field m_RepeatDelay, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RepeatDelay, put = __cordl_internal_set_m_RepeatDelay)) float_t m_RepeatDelay;

  /// @brief Field m_RepeatRate, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RepeatRate, put = __cordl_internal_set_m_RepeatRate)) float_t m_RepeatRate;

  /// @brief Field m_TrackedDeviceDragThresholdMultiplier, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier,
                      put = __cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier)) float_t m_TrackedDeviceDragThresholdMultiplier;

  /// @brief Field m_TrackedDeviceEventByPointerId, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackedDeviceEventByPointerId, put = __cordl_internal_set_m_TrackedDeviceEventByPointerId))::System::Collections::Generic::Dictionary_2<
      int32_t, ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>* m_TrackedDeviceEventByPointerId;

  /// @brief Field m_UICamera, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UICamera, put = __cordl_internal_set_m_UICamera))::UnityW<::UnityEngine::Camera> m_UICamera;

  /// @brief Field move, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_move, put = __cordl_internal_set_move))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::AxisEventData*>* move;

  __declspec(property(get = get_moveDeadzone, put = set_moveDeadzone)) float_t moveDeadzone;

  /// @brief Field pointerClick, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerClick,
                      put = __cordl_internal_set_pointerClick))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* pointerClick;

  /// @brief Field pointerDown, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerDown,
                      put = __cordl_internal_set_pointerDown))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* pointerDown;

  /// @brief Field pointerEnter, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerEnter,
                      put = __cordl_internal_set_pointerEnter))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* pointerEnter;

  /// @brief Field pointerExit, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerExit,
                      put = __cordl_internal_set_pointerExit))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* pointerExit;

  /// @brief Field pointerMove, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerMove,
                      put = __cordl_internal_set_pointerMove))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* pointerMove;

  /// @brief Field pointerUp, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerUp,
                      put = __cordl_internal_set_pointerUp))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* pointerUp;

  __declspec(property(get = get_repeatDelay, put = set_repeatDelay)) float_t repeatDelay;

  __declspec(property(get = get_repeatRate, put = set_repeatRate)) float_t repeatRate;

  /// @brief Field scroll, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_scroll,
                      put = __cordl_internal_set_scroll))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* scroll;

  /// @brief Field submit, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_submit,
                      put = __cordl_internal_set_submit))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* submit;

  __declspec(property(get = get_trackedDeviceDragThresholdMultiplier, put = set_trackedDeviceDragThresholdMultiplier)) float_t trackedDeviceDragThresholdMultiplier;

  __declspec(property(get = get_uiCamera, put = set_uiCamera))::UnityW<::UnityEngine::Camera> uiCamera;

  /// @brief Field updateSelected, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_updateSelected,
                      put = __cordl_internal_set_updateSelected))::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* updateSelected;

  /// @brief Method ActivateModule, addr 0x2fe4f84, size 0xb4, virtual true, abstract: false, final false
  inline void ActivateModule();

  /// @brief Method DoProcess, addr 0x2fe4e20, size 0x4, virtual true, abstract: false, final false
  inline void DoProcess();

  /// @brief Method GetOrCreateCachedAxisEvent, addr 0x2fe75c0, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::AxisEventData* GetOrCreateCachedAxisEvent();

  /// @brief Method GetOrCreateCachedPointerEvent, addr 0x2fe5770, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetOrCreateCachedPointerEvent(int32_t pointerId);

  /// @brief Method GetOrCreateCachedTrackedDeviceEvent, addr 0x2fe6f64, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* GetOrCreateCachedTrackedDeviceEvent(int32_t pointerId);

  /// @brief Method IsPointerOverGameObject, addr 0x2fe5038, size 0x3c8, virtual true, abstract: false, final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule* New_ctor();

  /// @brief Method PerformRaycast, addr 0x2fe5400, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult PerformRaycast(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method Process, addr 0x2fe4f80, size 0x4, virtual true, abstract: false, final false
  inline void Process();

  /// @brief Method ProcessMouseState, addr 0x2fe5528, size 0x248, virtual false, abstract: false, final false
  inline void ProcessMouseState(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel> mouseState);

  /// @brief Method ProcessNavigationState, addr 0x2fe7148, size 0x478, virtual false, abstract: false, final false
  inline void ProcessNavigationState(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel> navigationState);

  /// @brief Method ProcessPointerButton, addr 0x2fe5848, size 0x6b8, virtual false, abstract: false, final false
  inline void ProcessPointerButton(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState mouseButtonChanges, ::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method ProcessPointerButtonDrag, addr 0x2fe6910, size 0x32c, virtual false, abstract: false, final false
  inline void ProcessPointerButtonDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::InputSystem::UI::UIPointerType pointerType, float_t pixelDragThresholdMultiplier);

  /// @brief Method ProcessPointerMovement, addr 0x2fe5f00, size 0x860, virtual false, abstract: false, final false
  inline void ProcessPointerMovement(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method ProcessScrollWheel, addr 0x2fe6760, size 0x1b0, virtual false, abstract: false, final false
  inline void ProcessScrollWheel(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method ProcessTouch, addr 0x2fe6c3c, size 0xfc, virtual false, abstract: false, final false
  inline void ProcessTouch(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel> touchState);

  /// @brief Method ProcessTrackedDevice, addr 0x2fe6d38, size 0x22c, virtual false, abstract: false, final false
  inline void ProcessTrackedDevice(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> deviceState, bool force);

  /// @brief Method RemovePointerEventData, addr 0x2fe7634, size 0x90, virtual false, abstract: false, final false
  inline void RemovePointerEventData(int32_t pointerId);

  /// @brief Method SendUpdateEventToSelectedObject, addr 0x2fe4e24, size 0x15c, virtual false, abstract: false, final false
  inline bool SendUpdateEventToSelectedObject();

  /// @brief Method TryGetCamera, addr 0x2fe703c, size 0x10c, virtual false, abstract: false, final false
  inline bool TryGetCamera(::UnityEngine::EventSystems::PointerEventData* eventData, ByRef<::UnityEngine::Camera*> screenPointCamera);

  /// @brief Method Update, addr 0x2fe4d1c, size 0x104, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_beginDrag();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const& __cordl_internal_get_beginDrag() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>*& __cordl_internal_get_cancel();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>*> const& __cordl_internal_get_cancel() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_drag();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const& __cordl_internal_get_drag() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_drop();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const& __cordl_internal_get_drop() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_endDrag();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const& __cordl_internal_get_endDrag() const;

  constexpr ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*&
  __cordl_internal_get_finalizeRaycastResults();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*> const&
  __cordl_internal_get_finalizeRaycastResults() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_initializePotentialDrag();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get_initializePotentialDrag() const;

  constexpr ::UnityEngine::EventSystems::AxisEventData*& __cordl_internal_get_m_CachedAxisEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::AxisEventData*> const& __cordl_internal_get_m_CachedAxisEvent() const;

  constexpr float_t const& __cordl_internal_get_m_ClickSpeed() const;

  constexpr float_t& __cordl_internal_get_m_ClickSpeed();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_MainCameraCache() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_MainCameraCache();

  constexpr float_t const& __cordl_internal_get_m_MoveDeadzone() const;

  constexpr float_t& __cordl_internal_get_m_MoveDeadzone();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_m_PointerEventByPointerId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get_m_PointerEventByPointerId() const;

  constexpr float_t const& __cordl_internal_get_m_RepeatDelay() const;

  constexpr float_t& __cordl_internal_get_m_RepeatDelay();

  constexpr float_t const& __cordl_internal_get_m_RepeatRate() const;

  constexpr float_t& __cordl_internal_get_m_RepeatRate();

  constexpr float_t const& __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() const;

  constexpr float_t& __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>*& __cordl_internal_get_m_TrackedDeviceEventByPointerId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>*> const&
  __cordl_internal_get_m_TrackedDeviceEventByPointerId() const;

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_UICamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_UICamera();

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::AxisEventData*>*& __cordl_internal_get_move();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::AxisEventData*>*> const& __cordl_internal_get_move() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerClick();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get_pointerClick() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerDown();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get_pointerDown() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerEnter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get_pointerEnter() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerExit();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get_pointerExit() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerMove();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const&
  __cordl_internal_get_pointerMove() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerUp();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const& __cordl_internal_get_pointerUp() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_scroll();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>*> const& __cordl_internal_get_scroll() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>*& __cordl_internal_get_submit();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>*> const& __cordl_internal_get_submit() const;

  constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>*& __cordl_internal_get_updateSelected();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>*> const&
  __cordl_internal_get_updateSelected() const;

  constexpr void __cordl_internal_set_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  constexpr void __cordl_internal_set_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_finalizeRaycastResults(
      ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>* value);

  constexpr void __cordl_internal_set_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_m_CachedAxisEvent(::UnityEngine::EventSystems::AxisEventData* value);

  constexpr void __cordl_internal_set_m_ClickSpeed(float_t value);

  constexpr void __cordl_internal_set_m_MainCameraCache(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_MoveDeadzone(float_t value);

  constexpr void __cordl_internal_set_m_PointerEventByPointerId(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_m_RepeatDelay(float_t value);

  constexpr void __cordl_internal_set_m_RepeatRate(float_t value);

  constexpr void __cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier(float_t value);

  constexpr void
  __cordl_internal_set_m_TrackedDeviceEventByPointerId(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>* value);

  constexpr void __cordl_internal_set_m_UICamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::AxisEventData*>* value);

  constexpr void __cordl_internal_set_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  constexpr void __cordl_internal_set_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  /// @brief Method .ctor, addr 0x2fe8e3c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_beginDrag, addr 0x2fe81c4, size 0xb0, virtual false, abstract: false, final false
  inline void add_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_cancel, addr 0x2fe8cd4, size 0xb4, virtual false, abstract: false, final false
  inline void add_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  /// @brief Method add_drag, addr 0x2fe8324, size 0xb0, virtual false, abstract: false, final false
  inline void add_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_drop, addr 0x2fe85e4, size 0xb0, virtual false, abstract: false, final false
  inline void add_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_endDrag, addr 0x2fe8484, size 0xb0, virtual false, abstract: false, final false
  inline void add_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_finalizeRaycastResults, addr 0x2fe76c4, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_finalizeRaycastResults(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>* value);

  /// @brief Method add_initializePotentialDrag, addr 0x2fe8064, size 0xb0, virtual false, abstract: false, final false
  inline void add_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_move, addr 0x2fe8a04, size 0xb4, virtual false, abstract: false, final false
  inline void add_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::AxisEventData*>* value);

  /// @brief Method add_pointerClick, addr 0x2fe7da4, size 0xb0, virtual false, abstract: false, final false
  inline void add_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_pointerDown, addr 0x2fe7ae4, size 0xb0, virtual false, abstract: false, final false
  inline void add_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_pointerEnter, addr 0x2fe7824, size 0xb0, virtual false, abstract: false, final false
  inline void add_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_pointerExit, addr 0x2fe7984, size 0xb0, virtual false, abstract: false, final false
  inline void add_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_pointerMove, addr 0x2fe7f04, size 0xb0, virtual false, abstract: false, final false
  inline void add_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_pointerUp, addr 0x2fe7c44, size 0xb0, virtual false, abstract: false, final false
  inline void add_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_scroll, addr 0x2fe8744, size 0xb0, virtual false, abstract: false, final false
  inline void add_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method add_submit, addr 0x2fe8b6c, size 0xb4, virtual false, abstract: false, final false
  inline void add_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  /// @brief Method add_updateSelected, addr 0x2fe88a4, size 0xb0, virtual false, abstract: false, final false
  inline void add_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  /// @brief Method get_clickSpeed, addr 0x2fe4bfc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_clickSpeed();

  /// @brief Method get_moveDeadzone, addr 0x2fe4c0c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveDeadzone();

  /// @brief Method get_repeatDelay, addr 0x2fe4c1c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_repeatDelay();

  /// @brief Method get_repeatRate, addr 0x2fe4c2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_repeatRate();

  /// @brief Method get_trackedDeviceDragThresholdMultiplier, addr 0x2fe4c3c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_trackedDeviceDragThresholdMultiplier();

  /// @brief Method get_uiCamera, addr 0x2fe4c4c, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_uiCamera();

  /// @brief Method remove_beginDrag, addr 0x2fe8274, size 0xb0, virtual false, abstract: false, final false
  inline void remove_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_cancel, addr 0x2fe8d88, size 0xb4, virtual false, abstract: false, final false
  inline void remove_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  /// @brief Method remove_drag, addr 0x2fe83d4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_drop, addr 0x2fe8694, size 0xb0, virtual false, abstract: false, final false
  inline void remove_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_endDrag, addr 0x2fe8534, size 0xb0, virtual false, abstract: false, final false
  inline void remove_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_finalizeRaycastResults, addr 0x2fe7774, size 0xb0, virtual false, abstract: false, final false
  inline void
  remove_finalizeRaycastResults(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>* value);

  /// @brief Method remove_initializePotentialDrag, addr 0x2fe8114, size 0xb0, virtual false, abstract: false, final false
  inline void remove_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_move, addr 0x2fe8ab8, size 0xb4, virtual false, abstract: false, final false
  inline void remove_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::AxisEventData*>* value);

  /// @brief Method remove_pointerClick, addr 0x2fe7e54, size 0xb0, virtual false, abstract: false, final false
  inline void remove_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_pointerDown, addr 0x2fe7b94, size 0xb0, virtual false, abstract: false, final false
  inline void remove_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_pointerEnter, addr 0x2fe78d4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_pointerExit, addr 0x2fe7a34, size 0xb0, virtual false, abstract: false, final false
  inline void remove_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_pointerMove, addr 0x2fe7fb4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_pointerUp, addr 0x2fe7cf4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_scroll, addr 0x2fe87f4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* value);

  /// @brief Method remove_submit, addr 0x2fe8c20, size 0xb4, virtual false, abstract: false, final false
  inline void remove_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  /// @brief Method remove_updateSelected, addr 0x2fe8954, size 0xb0, virtual false, abstract: false, final false
  inline void remove_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* value);

  /// @brief Method set_clickSpeed, addr 0x2fe4c04, size 0x8, virtual false, abstract: false, final false
  inline void set_clickSpeed(float_t value);

  /// @brief Method set_moveDeadzone, addr 0x2fe4c14, size 0x8, virtual false, abstract: false, final false
  inline void set_moveDeadzone(float_t value);

  /// @brief Method set_repeatDelay, addr 0x2fe4c24, size 0x8, virtual false, abstract: false, final false
  inline void set_repeatDelay(float_t value);

  /// @brief Method set_repeatRate, addr 0x2fe4c34, size 0x8, virtual false, abstract: false, final false
  inline void set_repeatRate(float_t value);

  /// @brief Method set_trackedDeviceDragThresholdMultiplier, addr 0x2fe4c44, size 0x8, virtual false, abstract: false, final false
  inline void set_trackedDeviceDragThresholdMultiplier(float_t value);

  /// @brief Method set_uiCamera, addr 0x2fe4d14, size 0x8, virtual false, abstract: false, final false
  inline void set_uiCamera(::UnityEngine::Camera* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIInputModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIInputModule(UIInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIInputModule(UIInputModule const&) = delete;

  /// @brief Field m_ClickSpeed, offset: 0x50, size: 0x4, def value: None
  float_t ___m_ClickSpeed;

  /// @brief Field m_MoveDeadzone, offset: 0x54, size: 0x4, def value: None
  float_t ___m_MoveDeadzone;

  /// @brief Field m_RepeatDelay, offset: 0x58, size: 0x4, def value: None
  float_t ___m_RepeatDelay;

  /// @brief Field m_RepeatRate, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_RepeatRate;

  /// @brief Field m_TrackedDeviceDragThresholdMultiplier, offset: 0x60, size: 0x4, def value: None
  float_t ___m_TrackedDeviceDragThresholdMultiplier;

  /// @brief Field m_UICamera, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_UICamera;

  /// @brief Field m_MainCameraCache, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_MainCameraCache;

  /// @brief Field m_CachedAxisEvent, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::EventSystems::AxisEventData* ___m_CachedAxisEvent;

  /// @brief Field m_PointerEventByPointerId, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* ___m_PointerEventByPointerId;

  /// @brief Field m_TrackedDeviceEventByPointerId, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>* ___m_TrackedDeviceEventByPointerId;

  /// @brief Field finalizeRaycastResults, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>* ___finalizeRaycastResults;

  /// @brief Field pointerEnter, offset: 0x98, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___pointerEnter;

  /// @brief Field pointerExit, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___pointerExit;

  /// @brief Field pointerDown, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___pointerDown;

  /// @brief Field pointerUp, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___pointerUp;

  /// @brief Field pointerClick, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___pointerClick;

  /// @brief Field pointerMove, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___pointerMove;

  /// @brief Field initializePotentialDrag, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___initializePotentialDrag;

  /// @brief Field beginDrag, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___beginDrag;

  /// @brief Field drag, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___drag;

  /// @brief Field endDrag, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___endDrag;

  /// @brief Field drop, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___drop;

  /// @brief Field scroll, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::PointerEventData*>* ___scroll;

  /// @brief Field updateSelected, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* ___updateSelected;

  /// @brief Field move, offset: 0x100, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::AxisEventData*>* ___move;

  /// @brief Field submit, offset: 0x108, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* ___submit;

  /// @brief Field cancel, offset: 0x110, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::UnityEngine::GameObject>, ::UnityEngine::EventSystems::BaseEventData*>* ___cancel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, 0x118>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_ClickSpeed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_MoveDeadzone) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_RepeatDelay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_RepeatRate) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_TrackedDeviceDragThresholdMultiplier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_UICamera) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_MainCameraCache) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_CachedAxisEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_PointerEventByPointerId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_TrackedDeviceEventByPointerId) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___finalizeRaycastResults) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerEnter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerExit) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerDown) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerUp) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerClick) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerMove) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___initializePotentialDrag) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___beginDrag) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___drag) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___endDrag) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___drop) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___scroll) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___updateSelected) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___move) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___submit) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___cancel) == 0x110, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*, "UnityEngine.XR.Interaction.Toolkit.UI", "UIInputModule");
