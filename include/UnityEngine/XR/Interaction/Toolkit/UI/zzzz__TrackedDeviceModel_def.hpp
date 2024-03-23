#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInteractionType_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDeviceModel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct UIInteractionType;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __TrackedDeviceModel__ImplementationData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __TrackedDeviceModel__ImplementationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData);
// Type: ::ImplementationData
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::TrackedDeviceModel::ImplementationData
struct CORDL_TYPE __TrackedDeviceModel__ImplementationData {
public:
  // Declarations
  __declspec(property(get = get_draggedGameObject, put = set_draggedGameObject))::UnityW<::UnityEngine::GameObject> draggedGameObject;

  __declspec(property(get = get_hoverTargets, put = set_hoverTargets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* hoverTargets;

  __declspec(property(get = get_isDragging, put = set_isDragging)) bool isDragging;

  __declspec(property(get = get_pointerTarget, put = set_pointerTarget))::UnityW<::UnityEngine::GameObject> pointerTarget;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector2 position;

  __declspec(property(get = get_pressedGameObject, put = set_pressedGameObject))::UnityW<::UnityEngine::GameObject> pressedGameObject;

  __declspec(property(get = get_pressedGameObjectRaw, put = set_pressedGameObjectRaw))::UnityW<::UnityEngine::GameObject> pressedGameObjectRaw;

  __declspec(property(get = get_pressedPosition, put = set_pressedPosition))::UnityEngine::Vector2 pressedPosition;

  __declspec(property(get = get_pressedRaycast, put = set_pressedRaycast))::UnityEngine::EventSystems::RaycastResult pressedRaycast;

  __declspec(property(get = get_pressedTime, put = set_pressedTime)) float_t pressedTime;

  /// @brief Method Reset, addr 0x2fe3968, size 0x120, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_draggedGameObject, addr 0x2fe3e6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_draggedGameObject();

  /// @brief Method get_hoverTargets, addr 0x2fe3dc0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_hoverTargets();

  /// @brief Method get_isDragging, addr 0x2fe3de0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDragging();

  /// @brief Method get_pointerTarget, addr 0x2fe3dd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pointerTarget();

  /// @brief Method get_position, addr 0x2fe3e04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_pressedGameObject, addr 0x2fe3e4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObject();

  /// @brief Method get_pressedGameObjectRaw, addr 0x2fe3e5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObjectRaw();

  /// @brief Method get_pressedPosition, addr 0x2fe3e14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pressedPosition();

  /// @brief Method get_pressedRaycast, addr 0x2fe3e24, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult get_pressedRaycast();

  /// @brief Method get_pressedTime, addr 0x2fe3df4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressedTime();

  /// @brief Method set_draggedGameObject, addr 0x2fe3e74, size 0x8, virtual false, abstract: false, final false
  inline void set_draggedGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_hoverTargets, addr 0x2fe3dc8, size 0x8, virtual false, abstract: false, final false
  inline void set_hoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method set_isDragging, addr 0x2fe3de8, size 0xc, virtual false, abstract: false, final false
  inline void set_isDragging(bool value);

  /// @brief Method set_pointerTarget, addr 0x2fe3dd8, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerTarget(::UnityEngine::GameObject* value);

  /// @brief Method set_position, addr 0x2fe3e0c, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method set_pressedGameObject, addr 0x2fe3e54, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_pressedGameObjectRaw, addr 0x2fe3e64, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedGameObjectRaw(::UnityEngine::GameObject* value);

  /// @brief Method set_pressedPosition, addr 0x2fe3e1c, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_pressedRaycast, addr 0x2fe3e34, size 0x18, virtual false, abstract: false, final false
  inline void set_pressedRaycast(::UnityEngine::EventSystems::RaycastResult value);

  /// @brief Method set_pressedTime, addr 0x2fe3dfc, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedTime(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDeviceModel__ImplementationData();

  // Ctor Parameters [CppParam { name: "_hoverTargets_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None }, CppParam {
  // name: "_pointerTarget_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "_isDragging_k__BackingField", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "_pressedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector2",
  // modifiers: "", def_value: None }, CppParam { name: "_pressedPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name:
  // "_pressedRaycast_k__BackingField", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None }, CppParam { name: "_pressedGameObject_k__BackingField", ty:
  // "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "_pressedGameObjectRaw_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
  // def_value: None }, CppParam { name: "_draggedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }]
  constexpr __TrackedDeviceModel__ImplementationData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _hoverTargets_k__BackingField,
                                                     ::UnityW<::UnityEngine::GameObject> _pointerTarget_k__BackingField, bool _isDragging_k__BackingField, float_t _pressedTime_k__BackingField,
                                                     ::UnityEngine::Vector2 _position_k__BackingField, ::UnityEngine::Vector2 _pressedPosition_k__BackingField,
                                                     ::UnityEngine::EventSystems::RaycastResult _pressedRaycast_k__BackingField, ::UnityW<::UnityEngine::GameObject> _pressedGameObject_k__BackingField,
                                                     ::UnityW<::UnityEngine::GameObject> _pressedGameObjectRaw_k__BackingField,
                                                     ::UnityW<::UnityEngine::GameObject> _draggedGameObject_k__BackingField) noexcept;

  /// @brief Field <hoverTargets>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _hoverTargets_k__BackingField;

  /// @brief Field <pointerTarget>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pointerTarget_k__BackingField;

  /// @brief Field <isDragging>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool _isDragging_k__BackingField;

  /// @brief Field <pressedTime>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t _pressedTime_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 _position_k__BackingField;

  /// @brief Field <pressedPosition>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 _pressedPosition_k__BackingField;

  /// @brief Field <pressedRaycast>k__BackingField, offset: 0x28, size: 0x50, def value: None
  ::UnityEngine::EventSystems::RaycastResult _pressedRaycast_k__BackingField;

  /// @brief Field <pressedGameObject>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pressedGameObject_k__BackingField;

  /// @brief Field <pressedGameObjectRaw>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pressedGameObjectRaw_k__BackingField;

  /// @brief Field <draggedGameObject>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _draggedGameObject_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _hoverTargets_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _pointerTarget_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _isDragging_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _pressedTime_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _position_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _pressedPosition_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _pressedRaycast_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _pressedGameObject_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _pressedGameObjectRaw_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, _draggedGameObject_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: UnityEngine.XR.Interaction.Toolkit.UI::TrackedDeviceModel
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 332, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::TrackedDeviceModel
struct CORDL_TYPE TrackedDeviceModel {
public:
  // Declarations
  using ImplementationData = ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData;

  /// @brief Field <invalid>k__BackingField, offset 0xffffffff, size 0x140
  static __declspec(property(get = getStaticF__invalid_k__BackingField,
                             put = setStaticF__invalid_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel _invalid_k__BackingField;

  __declspec(property(get = get_changedThisFrame, put = set_changedThisFrame)) bool changedThisFrame;

  __declspec(property(get = get_currentRaycast, put = set_currentRaycast))::UnityEngine::EventSystems::RaycastResult currentRaycast;

  __declspec(property(get = get_currentRaycastEndpointIndex, put = set_currentRaycastEndpointIndex)) int32_t currentRaycastEndpointIndex;

  __declspec(property(get = get_implementationData))::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData implementationData;

  __declspec(property(get = get_interactionType, put = set_interactionType))::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType interactionType;

  __declspec(property(get = get_maxRaycastDistance, put = set_maxRaycastDistance)) float_t maxRaycastDistance;

  __declspec(property(get = get_orientation, put = set_orientation))::UnityEngine::Quaternion orientation;

  __declspec(property(get = get_pointerId)) int32_t pointerId;

  __declspec(property(get = get_pokeDepth, put = set_pokeDepth)) float_t pokeDepth;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_positionGetter, put = set_positionGetter))::System::Func_1<::UnityEngine::Vector3>* positionGetter;

  __declspec(property(get = get_raycastLayerMask, put = set_raycastLayerMask))::UnityEngine::LayerMask raycastLayerMask;

  __declspec(property(get = get_raycastPoints, put = set_raycastPoints))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* raycastPoints;

  __declspec(property(get = get_scrollDelta, put = set_scrollDelta))::UnityEngine::Vector2 scrollDelta;

  __declspec(property(get = get_select, put = set_select)) bool select;

  __declspec(property(get = get_selectDelta, put = set_selectDelta))::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState selectDelta;

  /// @brief Method CopyFrom, addr 0x2fe3be4, size 0xf8, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* eventData);

  /// @brief Method CopyTo, addr 0x2fe3ae0, size 0x104, virtual false, abstract: false, final false
  inline void CopyTo(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* eventData);

  /// @brief Method OnFrameFinished, addr 0x2fe3a88, size 0x58, virtual false, abstract: false, final false
  inline void OnFrameFinished();

  /// @brief Method Reset, addr 0x2fe3830, size 0x138, virtual false, abstract: false, final false
  inline void Reset(bool resetImplementation);

  /// @brief Method .ctor, addr 0x2fe377c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(int32_t pointerId);

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel getStaticF__invalid_k__BackingField();

  /// @brief Method get_changedThisFrame, addr 0x2fe34f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_changedThisFrame();

  /// @brief Method get_currentRaycast, addr 0x2fe365c, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult get_currentRaycast();

  /// @brief Method get_currentRaycastEndpointIndex, addr 0x2fe3684, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentRaycastEndpointIndex();

  /// @brief Method get_implementationData, addr 0x2fe3490, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData get_implementationData();

  /// @brief Method get_interactionType, addr 0x2fe3758, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType get_interactionType();

  /// @brief Method get_invalid, addr 0x2fe3cdc, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel get_invalid();

  /// @brief Method get_maxRaycastDistance, addr 0x2fe3d3c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxRaycastDistance();

  /// @brief Method get_orientation, addr 0x2fe3594, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_orientation();

  /// @brief Method get_pointerId, addr 0x2fe34a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pointerId();

  /// @brief Method get_pokeDepth, addr 0x2fe3734, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pokeDepth();

  /// @brief Method get_position, addr 0x2fe3508, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_positionGetter, addr 0x2fe3584, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::Vector3>* get_positionGetter();

  /// @brief Method get_raycastLayerMask, addr 0x2fe3694, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_raycastLayerMask();

  /// @brief Method get_raycastPoints, addr 0x2fe35e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_raycastPoints();

  /// @brief Method get_scrollDelta, addr 0x2fe36e8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scrollDelta();

  /// @brief Method get_select, addr 0x2fe34a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_select();

  /// @brief Method get_selectDelta, addr 0x2fe34e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_selectDelta();

  static inline void setStaticF__invalid_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel value);

  /// @brief Method set_changedThisFrame, addr 0x2fe34fc, size 0xc, virtual false, abstract: false, final false
  inline void set_changedThisFrame(bool value);

  /// @brief Method set_currentRaycast, addr 0x2fe366c, size 0x18, virtual false, abstract: false, final false
  inline void set_currentRaycast(::UnityEngine::EventSystems::RaycastResult value);

  /// @brief Method set_currentRaycastEndpointIndex, addr 0x2fe368c, size 0x8, virtual false, abstract: false, final false
  inline void set_currentRaycastEndpointIndex(int32_t value);

  /// @brief Method set_interactionType, addr 0x2fe3760, size 0x1c, virtual false, abstract: false, final false
  inline void set_interactionType(::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType value);

  /// @brief Method set_maxRaycastDistance, addr 0x2fe3d44, size 0x8, virtual false, abstract: false, final false
  inline void set_maxRaycastDistance(float_t value);

  /// @brief Method set_orientation, addr 0x2fe35a0, size 0x48, virtual false, abstract: false, final false
  inline void set_orientation(::UnityEngine::Quaternion value);

  /// @brief Method set_pokeDepth, addr 0x2fe373c, size 0x1c, virtual false, abstract: false, final false
  inline void set_pokeDepth(float_t value);

  /// @brief Method set_position, addr 0x2fe3538, size 0x4c, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_positionGetter, addr 0x2fe358c, size 0x8, virtual false, abstract: false, final false
  inline void set_positionGetter(::System::Func_1<::UnityEngine::Vector3>* value);

  /// @brief Method set_raycastLayerMask, addr 0x2fe369c, size 0x4c, virtual false, abstract: false, final false
  inline void set_raycastLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_raycastPoints, addr 0x2fe35f0, size 0x6c, virtual false, abstract: false, final false
  inline void set_raycastPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method set_scrollDelta, addr 0x2fe36f4, size 0x40, virtual false, abstract: false, final false
  inline void set_scrollDelta(::UnityEngine::Vector2 value);

  /// @brief Method set_select, addr 0x2fe34b0, size 0x34, virtual false, abstract: false, final false
  inline void set_select(bool value);

  /// @brief Method set_selectDelta, addr 0x2fe34ec, size 0x8, virtual false, abstract: false, final false
  inline void set_selectDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedDeviceModel();

  // Ctor Parameters [CppParam { name: "m_ImplementationData", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData", modifiers: "", def_value: None }, CppParam {
  // name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SelectDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "_selectDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_positionGetter_k__BackingField", ty:
  // "::System::Func_1<::UnityEngine::Vector3>*", modifiers: "", def_value: None }, CppParam { name: "m_Orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam {
  // name: "m_RaycastPoints", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector3>*", modifiers: "", def_value: None }, CppParam { name: "_currentRaycast_k__BackingField", ty:
  // "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None }, CppParam { name: "_currentRaycastEndpointIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_RaycastLayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }, CppParam { name: "m_PokeDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionType", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType", modifiers: "", def_value: None }, CppParam { name: "m_MaxRaycastDistance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TrackedDeviceModel(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData m_ImplementationData, int32_t _pointerId_k__BackingField, bool m_SelectDown,
                               ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _selectDelta_k__BackingField, bool _changedThisFrame_k__BackingField, ::UnityEngine::Vector3 m_Position,
                               ::System::Func_1<::UnityEngine::Vector3>* _positionGetter_k__BackingField, ::UnityEngine::Quaternion m_Orientation,
                               ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_RaycastPoints, ::UnityEngine::EventSystems::RaycastResult _currentRaycast_k__BackingField,
                               int32_t _currentRaycastEndpointIndex_k__BackingField, ::UnityEngine::LayerMask m_RaycastLayerMask, ::UnityEngine::Vector2 m_ScrollDelta, float_t m_PokeDepth,
                               ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType m_InteractionType, float_t m_MaxRaycastDistance) noexcept;

  /// @brief Field m_ImplementationData, offset: 0x0, size: 0x90, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData m_ImplementationData;

  /// @brief Field <pointerId>k__BackingField, offset: 0x90, size: 0x4, def value: None
  int32_t _pointerId_k__BackingField;

  /// @brief Field m_SelectDown, offset: 0x94, size: 0x1, def value: None
  bool m_SelectDown;

  /// @brief Field <selectDelta>k__BackingField, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _selectDelta_k__BackingField;

  /// @brief Field <changedThisFrame>k__BackingField, offset: 0x9c, size: 0x1, def value: None
  bool _changedThisFrame_k__BackingField;

  /// @brief Field m_Position, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field <positionGetter>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::Vector3>* _positionGetter_k__BackingField;

  /// @brief Field m_Orientation, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_Orientation;

  /// @brief Field m_RaycastPoints, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_RaycastPoints;

  /// @brief Field <currentRaycast>k__BackingField, offset: 0xd0, size: 0x50, def value: None
  ::UnityEngine::EventSystems::RaycastResult _currentRaycast_k__BackingField;

  /// @brief Field <currentRaycastEndpointIndex>k__BackingField, offset: 0x120, size: 0x4, def value: None
  int32_t _currentRaycastEndpointIndex_k__BackingField;

  /// @brief Field m_RaycastLayerMask, offset: 0x124, size: 0x4, def value: None
  ::UnityEngine::LayerMask m_RaycastLayerMask;

  /// @brief Field m_ScrollDelta, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_ScrollDelta;

  /// @brief Field m_PokeDepth, offset: 0x130, size: 0x4, def value: None
  float_t m_PokeDepth;

  /// @brief Field m_InteractionType, offset: 0x134, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType m_InteractionType;

  /// @brief Field m_MaxRaycastDistance, offset: 0x138, size: 0x4, def value: None
  float_t m_MaxRaycastDistance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x140 };

  /// @brief Field k_DefaultMaxRaycastDistance offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultMaxRaycastDistance{ 1000.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, 0x140>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_ImplementationData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _pointerId_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_SelectDown) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _selectDelta_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _changedThisFrame_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_Position) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _positionGetter_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_Orientation) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_RaycastPoints) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _currentRaycast_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, _currentRaycastEndpointIndex_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_RaycastLayerMask) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_ScrollDelta) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_PokeDepth) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_InteractionType) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, m_MaxRaycastDistance) == 0x138, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceModel__ImplementationData, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel/ImplementationData");
