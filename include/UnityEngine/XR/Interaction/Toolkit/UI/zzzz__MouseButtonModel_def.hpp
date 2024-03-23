#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MouseButtonModel)
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
struct __MouseButtonModel__ImplementationData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct MouseButtonModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __MouseButtonModel__ImplementationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData);
// Type: ::ImplementationData
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::MouseButtonModel::ImplementationData
struct CORDL_TYPE __MouseButtonModel__ImplementationData {
public:
  // Declarations
  __declspec(property(get = get_draggedGameObject, put = set_draggedGameObject))::UnityW<::UnityEngine::GameObject> draggedGameObject;

  __declspec(property(get = get_isDragging, put = set_isDragging)) bool isDragging;

  __declspec(property(get = get_pressedGameObject, put = set_pressedGameObject))::UnityW<::UnityEngine::GameObject> pressedGameObject;

  __declspec(property(get = get_pressedGameObjectRaw, put = set_pressedGameObjectRaw))::UnityW<::UnityEngine::GameObject> pressedGameObjectRaw;

  __declspec(property(get = get_pressedPosition, put = set_pressedPosition))::UnityEngine::Vector2 pressedPosition;

  __declspec(property(get = get_pressedRaycast, put = set_pressedRaycast))::UnityEngine::EventSystems::RaycastResult pressedRaycast;

  __declspec(property(get = get_pressedTime, put = set_pressedTime)) float_t pressedTime;

  /// @brief Method Reset, addr 0x3024838, size 0x6c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_draggedGameObject, addr 0x30249e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_draggedGameObject();

  /// @brief Method get_isDragging, addr 0x302496c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDragging();

  /// @brief Method get_pressedGameObject, addr 0x30249c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObject();

  /// @brief Method get_pressedGameObjectRaw, addr 0x30249d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pressedGameObjectRaw();

  /// @brief Method get_pressedPosition, addr 0x3024990, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pressedPosition();

  /// @brief Method get_pressedRaycast, addr 0x30249a0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult get_pressedRaycast();

  /// @brief Method get_pressedTime, addr 0x3024980, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressedTime();

  /// @brief Method set_draggedGameObject, addr 0x30249f0, size 0x8, virtual false, abstract: false, final false
  inline void set_draggedGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_isDragging, addr 0x3024974, size 0xc, virtual false, abstract: false, final false
  inline void set_isDragging(bool value);

  /// @brief Method set_pressedGameObject, addr 0x30249d0, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_pressedGameObjectRaw, addr 0x30249e0, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedGameObjectRaw(::UnityEngine::GameObject* value);

  /// @brief Method set_pressedPosition, addr 0x3024998, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_pressedRaycast, addr 0x30249b0, size 0x18, virtual false, abstract: false, final false
  inline void set_pressedRaycast(::UnityEngine::EventSystems::RaycastResult value);

  /// @brief Method set_pressedTime, addr 0x3024988, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedTime(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseButtonModel__ImplementationData();

  // Ctor Parameters [CppParam { name: "_isDragging_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_pressedTime_k__BackingField", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "_pressedPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_pressedRaycast_k__BackingField", ty:
  // "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None }, CppParam { name: "_pressedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
  // def_value: None }, CppParam { name: "_pressedGameObjectRaw_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name:
  // "_draggedGameObject_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }]
  constexpr __MouseButtonModel__ImplementationData(bool _isDragging_k__BackingField, float_t _pressedTime_k__BackingField, ::UnityEngine::Vector2 _pressedPosition_k__BackingField,
                                                   ::UnityEngine::EventSystems::RaycastResult _pressedRaycast_k__BackingField, ::UnityW<::UnityEngine::GameObject> _pressedGameObject_k__BackingField,
                                                   ::UnityW<::UnityEngine::GameObject> _pressedGameObjectRaw_k__BackingField,
                                                   ::UnityW<::UnityEngine::GameObject> _draggedGameObject_k__BackingField) noexcept;

  /// @brief Field <isDragging>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _isDragging_k__BackingField;

  /// @brief Field <pressedTime>k__BackingField, offset: 0x4, size: 0x4, def value: None
  float_t _pressedTime_k__BackingField;

  /// @brief Field <pressedPosition>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 _pressedPosition_k__BackingField;

  /// @brief Field <pressedRaycast>k__BackingField, offset: 0x10, size: 0x50, def value: None
  ::UnityEngine::EventSystems::RaycastResult _pressedRaycast_k__BackingField;

  /// @brief Field <pressedGameObject>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pressedGameObject_k__BackingField;

  /// @brief Field <pressedGameObjectRaw>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pressedGameObjectRaw_k__BackingField;

  /// @brief Field <draggedGameObject>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _draggedGameObject_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, _isDragging_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, _pressedTime_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, _pressedPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, _pressedRaycast_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, _pressedGameObject_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, _pressedGameObjectRaw_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, _draggedGameObject_k__BackingField) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: UnityEngine.XR.Interaction.Toolkit.UI::MouseButtonModel
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::MouseButtonModel
struct CORDL_TYPE MouseButtonModel {
public:
  // Declarations
  using ImplementationData = ::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData;

  __declspec(property(get = get_isDown, put = set_isDown)) bool isDown;

  __declspec(property(get = get_lastFrameDelta, put = set_lastFrameDelta))::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState lastFrameDelta;

  /// @brief Method CopyFrom, addr 0x3024910, size 0x5c, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method CopyTo, addr 0x30248ac, size 0x64, virtual false, abstract: false, final false
  inline void CopyTo(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnFrameFinished, addr 0x30248a4, size 0x8, virtual false, abstract: false, final false
  inline void OnFrameFinished();

  /// @brief Method Reset, addr 0x3024824, size 0x14, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_isDown, addr 0x30247dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDown();

  /// @brief Method get_lastFrameDelta, addr 0x3024814, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_lastFrameDelta();

  /// @brief Method set_isDown, addr 0x30247e4, size 0x30, virtual false, abstract: false, final false
  inline void set_isDown(bool value);

  /// @brief Method set_lastFrameDelta, addr 0x302481c, size 0x8, virtual false, abstract: false, final false
  inline void set_lastFrameDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseButtonModel();

  // Ctor Parameters [CppParam { name: "_lastFrameDelta_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None }, CppParam { name:
  // "m_IsDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ImplementationData", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData",
  // modifiers: "", def_value: None }]
  constexpr MouseButtonModel(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _lastFrameDelta_k__BackingField, bool m_IsDown,
                             ::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData m_ImplementationData) noexcept;

  /// @brief Field <lastFrameDelta>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _lastFrameDelta_k__BackingField;

  /// @brief Field m_IsDown, offset: 0x4, size: 0x1, def value: None
  bool m_IsDown;

  /// @brief Field m_ImplementationData, offset: 0x8, size: 0x78, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData m_ImplementationData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, _lastFrameDelta_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, m_IsDown) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, m_ImplementationData) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel, "UnityEngine.XR.Interaction.Toolkit.UI", "MouseButtonModel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseButtonModel__ImplementationData, "UnityEngine.XR.Interaction.Toolkit.UI", "MouseButtonModel/ImplementationData");
