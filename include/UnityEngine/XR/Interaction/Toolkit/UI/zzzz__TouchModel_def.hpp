#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_def.hpp"
#include "UnityEngine/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchModel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __TouchModel__ImplementationData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct TouchPhase;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TouchModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __TouchModel__ImplementationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData);
// Type: ::ImplementationData
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::TouchModel::ImplementationData
struct CORDL_TYPE __TouchModel__ImplementationData {
public:
  // Declarations
  __declspec(property(get = get_draggedGameObject, put = set_draggedGameObject))::UnityW<::UnityEngine::GameObject> draggedGameObject;

  __declspec(property(get = get_hoverTargets, put = set_hoverTargets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* hoverTargets;

  __declspec(property(get = get_isDragging, put = set_isDragging)) bool isDragging;

  __declspec(property(get = get_pointerTarget, put = set_pointerTarget))::UnityW<::UnityEngine::GameObject> pointerTarget;

  __declspec(property(get = get_pressedGameObject, put = set_pressedGameObject))::UnityW<::UnityEngine::GameObject> pressedGameObject;

  __declspec(property(get = get_pressedGameObjectRaw, put = set_pressedGameObjectRaw))::UnityW<::UnityEngine::GameObject> pressedGameObjectRaw;

  __declspec(property(get = get_pressedPosition, put = set_pressedPosition))::UnityEngine::Vector2 pressedPosition;

  __declspec(property(get = get_pressedRaycast, put = set_pressedRaycast))::UnityEngine::EventSystems::RaycastResult pressedRaycast;

  __declspec(property(get = get_pressedTime, put = set_pressedTime)) float_t pressedTime;

  /// @brief Method Reset, addr 0x30259c0, size 0x108, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_draggedGameObject, addr 0x3025e34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_draggedGameObject();

  /// @brief Method get_hoverTargets, addr 0x3025d98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_hoverTargets();

  /// @brief Method get_isDragging, addr 0x3025db8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDragging();

  /// @brief Method get_pointerTarget, addr 0x3025da8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pointerTarget();

  /// @brief Method get_pressedGameObject, addr 0x3025e14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObject();

  /// @brief Method get_pressedGameObjectRaw, addr 0x3025e24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObjectRaw();

  /// @brief Method get_pressedPosition, addr 0x3025ddc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pressedPosition();

  /// @brief Method get_pressedRaycast, addr 0x3025dec, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult get_pressedRaycast();

  /// @brief Method get_pressedTime, addr 0x3025dcc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressedTime();

  /// @brief Method set_draggedGameObject, addr 0x3025e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_draggedGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_hoverTargets, addr 0x3025da0, size 0x8, virtual false, abstract: false, final false
  inline void set_hoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method set_isDragging, addr 0x3025dc0, size 0xc, virtual false, abstract: false, final false
  inline void set_isDragging(bool value);

  /// @brief Method set_pointerTarget, addr 0x3025db0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerTarget(::UnityEngine::GameObject* value);

  /// @brief Method set_pressedGameObject, addr 0x3025e1c, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_pressedGameObjectRaw, addr 0x3025e2c, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedGameObjectRaw(::UnityEngine::GameObject* value);

  /// @brief Method set_pressedPosition, addr 0x3025de4, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_pressedRaycast, addr 0x3025dfc, size 0x18, virtual false, abstract: false, final false
  inline void set_pressedRaycast(::UnityEngine::EventSystems::RaycastResult value);

  /// @brief Method set_pressedTime, addr 0x3025dd4, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedTime(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TouchModel__ImplementationData();

  // Ctor Parameters [CppParam { name: "_hoverTargets_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None }, CppParam {
  // name: "_pointerTarget_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "_isDragging_k__BackingField", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "_pressedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_pressedPosition_k__BackingField", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_pressedRaycast_k__BackingField", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None },
  // CppParam { name: "_pressedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "_pressedGameObjectRaw_k__BackingField", ty:
  // "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "_draggedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
  // def_value: None }]
  constexpr __TouchModel__ImplementationData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _hoverTargets_k__BackingField,
                                             ::UnityW<::UnityEngine::GameObject> _pointerTarget_k__BackingField, bool _isDragging_k__BackingField, float_t _pressedTime_k__BackingField,
                                             ::UnityEngine::Vector2 _pressedPosition_k__BackingField, ::UnityEngine::EventSystems::RaycastResult _pressedRaycast_k__BackingField,
                                             ::UnityW<::UnityEngine::GameObject> _pressedGameObject_k__BackingField, ::UnityW<::UnityEngine::GameObject> _pressedGameObjectRaw_k__BackingField,
                                             ::UnityW<::UnityEngine::GameObject> _draggedGameObject_k__BackingField) noexcept;

  /// @brief Field <hoverTargets>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _hoverTargets_k__BackingField;

  /// @brief Field <pointerTarget>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pointerTarget_k__BackingField;

  /// @brief Field <isDragging>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool _isDragging_k__BackingField;

  /// @brief Field <pressedTime>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t _pressedTime_k__BackingField;

  /// @brief Field <pressedPosition>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 _pressedPosition_k__BackingField;

  /// @brief Field <pressedRaycast>k__BackingField, offset: 0x20, size: 0x50, def value: None
  ::UnityEngine::EventSystems::RaycastResult _pressedRaycast_k__BackingField;

  /// @brief Field <pressedGameObject>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pressedGameObject_k__BackingField;

  /// @brief Field <pressedGameObjectRaw>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pressedGameObjectRaw_k__BackingField;

  /// @brief Field <draggedGameObject>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _draggedGameObject_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _hoverTargets_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _pointerTarget_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _isDragging_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _pressedTime_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _pressedPosition_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _pressedRaycast_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _pressedGameObject_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _pressedGameObjectRaw_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, _draggedGameObject_k__BackingField) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: UnityEngine.XR.Interaction.Toolkit.UI::TouchModel
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::TouchModel
struct CORDL_TYPE TouchModel {
public:
  // Declarations
  using ImplementationData = ::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData;

  __declspec(property(get = get_changedThisFrame, put = set_changedThisFrame)) bool changedThisFrame;

  __declspec(property(get = get_deltaPosition, put = set_deltaPosition))::UnityEngine::Vector2 deltaPosition;

  __declspec(property(get = get_pointerId)) int32_t pointerId;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector2 position;

  __declspec(property(get = get_selectDelta, put = set_selectDelta))::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState selectDelta;

  __declspec(property(get = get_selectPhase, put = set_selectPhase))::UnityEngine::TouchPhase selectPhase;

  /// @brief Method CopyFrom, addr 0x3025cc4, size 0xd4, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method CopyTo, addr 0x3025b80, size 0x144, virtual false, abstract: false, final false
  inline void CopyTo(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnFrameFinished, addr 0x3025b28, size 0x58, virtual false, abstract: false, final false
  inline void OnFrameFinished();

  /// @brief Method Reset, addr 0x3025ac8, size 0x60, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x3025940, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t pointerId);

  /// @brief Method get_changedThisFrame, addr 0x30258d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_changedThisFrame();

  /// @brief Method get_deltaPosition, addr 0x3025930, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_deltaPosition();

  /// @brief Method get_pointerId, addr 0x302586c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pointerId();

  /// @brief Method get_position, addr 0x30258e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_selectDelta, addr 0x30258c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_selectDelta();

  /// @brief Method get_selectPhase, addr 0x3025874, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchPhase get_selectPhase();

  /// @brief Method set_changedThisFrame, addr 0x30258d8, size 0xc, virtual false, abstract: false, final false
  inline void set_changedThisFrame(bool value);

  /// @brief Method set_deltaPosition, addr 0x3025938, size 0x8, virtual false, abstract: false, final false
  inline void set_deltaPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_position, addr 0x30258ec, size 0x44, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method set_selectDelta, addr 0x30258c8, size 0x8, virtual false, abstract: false, final false
  inline void set_selectDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState value);

  /// @brief Method set_selectPhase, addr 0x302587c, size 0x44, virtual false, abstract: false, final false
  inline void set_selectPhase(::UnityEngine::TouchPhase value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchModel();

  // Ctor Parameters [CppParam { name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_selectDelta_k__BackingField", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "_deltaPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_SelectPhase", ty: "::UnityEngine::TouchPhase", modifiers:
  // "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_ImplementationData", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData", modifiers: "", def_value: None }]
  constexpr TouchModel(int32_t _pointerId_k__BackingField, ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _selectDelta_k__BackingField, bool _changedThisFrame_k__BackingField,
                       ::UnityEngine::Vector2 _deltaPosition_k__BackingField, ::UnityEngine::TouchPhase m_SelectPhase, ::UnityEngine::Vector2 m_Position,
                       ::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData m_ImplementationData) noexcept;

  /// @brief Field <pointerId>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _pointerId_k__BackingField;

  /// @brief Field <selectDelta>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _selectDelta_k__BackingField;

  /// @brief Field <changedThisFrame>k__BackingField, offset: 0x8, size: 0x1, def value: None
  bool _changedThisFrame_k__BackingField;

  /// @brief Field <deltaPosition>k__BackingField, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 _deltaPosition_k__BackingField;

  /// @brief Field m_SelectPhase, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::TouchPhase m_SelectPhase;

  /// @brief Field m_Position, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Position;

  /// @brief Field m_ImplementationData, offset: 0x20, size: 0x88, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData m_ImplementationData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, _pointerId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, _selectDelta_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, _changedThisFrame_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, _deltaPosition_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, m_SelectPhase) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, m_Position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, m_ImplementationData) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel, "UnityEngine.XR.Interaction.Toolkit.UI", "TouchModel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__TouchModel__ImplementationData, "UnityEngine.XR.Interaction.Toolkit.UI", "TouchModel/ImplementationData");
