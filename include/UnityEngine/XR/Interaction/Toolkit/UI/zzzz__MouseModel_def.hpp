#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseButtonModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseModel_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseModel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct MouseButtonModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __MouseModel__InternalData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct MouseModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __MouseModel__InternalData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData);
// Type: ::InternalData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::MouseModel::InternalData
struct CORDL_TYPE __MouseModel__InternalData {
public:
  // Declarations
  __declspec(property(get = get_hoverTargets, put = set_hoverTargets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* hoverTargets;

  __declspec(property(get = get_pointerTarget, put = set_pointerTarget))::UnityW<::UnityEngine::GameObject> pointerTarget;

  /// @brief Method Reset, addr 0x3024d20, size 0xb8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_hoverTargets, addr 0x3024fa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_hoverTargets();

  /// @brief Method get_pointerTarget, addr 0x3024fb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pointerTarget();

  /// @brief Method set_hoverTargets, addr 0x3024fb0, size 0x8, virtual false, abstract: false, final false
  inline void set_hoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method set_pointerTarget, addr 0x3024fc0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerTarget(::UnityEngine::GameObject* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseModel__InternalData();

  // Ctor Parameters [CppParam { name: "_hoverTargets_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None }, CppParam {
  // name: "_pointerTarget_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }]
  constexpr __MouseModel__InternalData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _hoverTargets_k__BackingField,
                                       ::UnityW<::UnityEngine::GameObject> _pointerTarget_k__BackingField) noexcept;

  /// @brief Field <hoverTargets>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _hoverTargets_k__BackingField;

  /// @brief Field <pointerTarget>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _pointerTarget_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData, _hoverTargets_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData, _pointerTarget_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: UnityEngine.XR.Interaction.Toolkit.UI::MouseModel
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 448, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::MouseModel
struct CORDL_TYPE MouseModel {
public:
  // Declarations
  using InternalData = ::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData;

  __declspec(property(get = get_changedThisFrame, put = set_changedThisFrame)) bool changedThisFrame;

  __declspec(property(get = get_deltaPosition, put = set_deltaPosition))::UnityEngine::Vector2 deltaPosition;

  __declspec(property(get = get_leftButton, put = set_leftButton))::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel leftButton;

  __declspec(property(put = set_leftButtonPressed)) bool leftButtonPressed;

  __declspec(property(get = get_middleButton, put = set_middleButton))::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel middleButton;

  __declspec(property(put = set_middleButtonPressed)) bool middleButtonPressed;

  __declspec(property(get = get_pointerId)) int32_t pointerId;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector2 position;

  __declspec(property(get = get_rightButton, put = set_rightButton))::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel rightButton;

  __declspec(property(put = set_rightButtonPressed)) bool rightButtonPressed;

  __declspec(property(get = get_scrollDelta, put = set_scrollDelta))::UnityEngine::Vector2 scrollDelta;

  /// @brief Method CopyFrom, addr 0x3024f00, size 0xa8, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method CopyTo, addr 0x3024e44, size 0xbc, virtual false, abstract: false, final false
  inline void CopyTo(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnFrameFinished, addr 0x3024dd8, size 0x6c, virtual false, abstract: false, final false
  inline void OnFrameFinished();

  /// @brief Method .ctor, addr 0x3024c6c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(int32_t pointerId);

  /// @brief Method get_changedThisFrame, addr 0x3024a00, size 0x8, virtual false, abstract: false, final false
  inline bool get_changedThisFrame();

  /// @brief Method get_deltaPosition, addr 0x3024a60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_deltaPosition();

  /// @brief Method get_leftButton, addr 0x3024ab0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_leftButton();

  /// @brief Method get_middleButton, addr 0x3024bd8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_middleButton();

  /// @brief Method get_pointerId, addr 0x30249f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pointerId();

  /// @brief Method get_position, addr 0x3024a14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_rightButton, addr 0x3024b44, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel get_rightButton();

  /// @brief Method get_scrollDelta, addr 0x3024a70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scrollDelta();

  /// @brief Method set_changedThisFrame, addr 0x3024a08, size 0xc, virtual false, abstract: false, final false
  inline void set_changedThisFrame(bool value);

  /// @brief Method set_deltaPosition, addr 0x3024a68, size 0x8, virtual false, abstract: false, final false
  inline void set_deltaPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_leftButton, addr 0x3024ac0, size 0x30, virtual false, abstract: false, final false
  inline void set_leftButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel value);

  /// @brief Method set_leftButtonPressed, addr 0x3024af0, size 0x54, virtual false, abstract: false, final false
  inline void set_leftButtonPressed(bool value);

  /// @brief Method set_middleButton, addr 0x3024be8, size 0x30, virtual false, abstract: false, final false
  inline void set_middleButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel value);

  /// @brief Method set_middleButtonPressed, addr 0x3024c18, size 0x54, virtual false, abstract: false, final false
  inline void set_middleButtonPressed(bool value);

  /// @brief Method set_position, addr 0x3024a1c, size 0x44, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method set_rightButton, addr 0x3024b54, size 0x30, virtual false, abstract: false, final false
  inline void set_rightButton(::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel value);

  /// @brief Method set_rightButtonPressed, addr 0x3024b84, size 0x54, virtual false, abstract: false, final false
  inline void set_rightButtonPressed(bool value);

  /// @brief Method set_scrollDelta, addr 0x3024a78, size 0x38, virtual false, abstract: false, final false
  inline void set_scrollDelta(::UnityEngine::Vector2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseModel();

  // Ctor Parameters [CppParam { name: "_pointerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_changedThisFrame_k__BackingField", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_deltaPosition_k__BackingField", ty: "::UnityEngine::Vector2",
  // modifiers: "", def_value: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_LeftButton", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: None }, CppParam { name: "m_RightButton", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: None }, CppParam { name: "m_MiddleButton", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel", modifiers: "", def_value: None }, CppParam { name: "m_InternalData", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData", modifiers: "", def_value: None }]
  constexpr MouseModel(int32_t _pointerId_k__BackingField, bool _changedThisFrame_k__BackingField, ::UnityEngine::Vector2 m_Position, ::UnityEngine::Vector2 _deltaPosition_k__BackingField,
                       ::UnityEngine::Vector2 m_ScrollDelta, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_LeftButton,
                       ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_RightButton, ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_MiddleButton,
                       ::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData m_InternalData) noexcept;

  /// @brief Field <pointerId>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _pointerId_k__BackingField;

  /// @brief Field <changedThisFrame>k__BackingField, offset: 0x4, size: 0x1, def value: None
  bool _changedThisFrame_k__BackingField;

  /// @brief Field m_Position, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Position;

  /// @brief Field <deltaPosition>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 _deltaPosition_k__BackingField;

  /// @brief Field m_ScrollDelta, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_ScrollDelta;

  /// @brief Field m_LeftButton, offset: 0x20, size: 0x80, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_LeftButton;

  /// @brief Field m_RightButton, offset: 0xa0, size: 0x80, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_RightButton;

  /// @brief Field m_MiddleButton, offset: 0x120, size: 0x80, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::MouseButtonModel m_MiddleButton;

  /// @brief Field m_InternalData, offset: 0x1a0, size: 0x10, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData m_InternalData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1b0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, _pointerId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, _changedThisFrame_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, m_Position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, _deltaPosition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, m_ScrollDelta) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, m_LeftButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, m_RightButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, m_MiddleButton) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, m_InternalData) == 0x1a0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel, "UnityEngine.XR.Interaction.Toolkit.UI", "MouseModel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__MouseModel__InternalData, "UnityEngine.XR.Interaction.Toolkit.UI", "MouseModel/InternalData");
