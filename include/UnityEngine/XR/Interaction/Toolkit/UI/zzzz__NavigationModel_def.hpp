#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__ButtonDeltaState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationModel)
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __NavigationModel__ImplementationData;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct NavigationModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __NavigationModel__ImplementationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData);
// Type: ::ImplementationData
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::NavigationModel::ImplementationData
struct CORDL_TYPE __NavigationModel__ImplementationData {
public:
  // Declarations
  __declspec(property(get = get_consecutiveMoveCount, put = set_consecutiveMoveCount)) int32_t consecutiveMoveCount;

  __declspec(property(get = get_lastMoveDirection, put = set_lastMoveDirection))::UnityEngine::EventSystems::MoveDirection lastMoveDirection;

  __declspec(property(get = get_lastMoveTime, put = set_lastMoveTime)) float_t lastMoveTime;

  /// @brief Method Reset, addr 0x30250c8, size 0x14, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_consecutiveMoveCount, addr 0x30250e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_consecutiveMoveCount();

  /// @brief Method get_lastMoveDirection, addr 0x30250f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::MoveDirection get_lastMoveDirection();

  /// @brief Method get_lastMoveTime, addr 0x3025104, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lastMoveTime();

  /// @brief Method set_consecutiveMoveCount, addr 0x30250ec, size 0x8, virtual false, abstract: false, final false
  inline void set_consecutiveMoveCount(int32_t value);

  /// @brief Method set_lastMoveDirection, addr 0x30250fc, size 0x8, virtual false, abstract: false, final false
  inline void set_lastMoveDirection(::UnityEngine::EventSystems::MoveDirection value);

  /// @brief Method set_lastMoveTime, addr 0x302510c, size 0x8, virtual false, abstract: false, final false
  inline void set_lastMoveTime(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationModel__ImplementationData();

  // Ctor Parameters [CppParam { name: "_consecutiveMoveCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_lastMoveDirection_k__BackingField", ty:
  // "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: None }, CppParam { name: "_lastMoveTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __NavigationModel__ImplementationData(int32_t _consecutiveMoveCount_k__BackingField, ::UnityEngine::EventSystems::MoveDirection _lastMoveDirection_k__BackingField,
                                                  float_t _lastMoveTime_k__BackingField) noexcept;

  /// @brief Field <consecutiveMoveCount>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _consecutiveMoveCount_k__BackingField;

  /// @brief Field <lastMoveDirection>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::EventSystems::MoveDirection _lastMoveDirection_k__BackingField;

  /// @brief Field <lastMoveTime>k__BackingField, offset: 0x8, size: 0x4, def value: None
  float_t _lastMoveTime_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData, _consecutiveMoveCount_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData, _lastMoveDirection_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData, _lastMoveTime_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: UnityEngine.XR.Interaction.Toolkit.UI::NavigationModel
// SizeInfo { instance_size: 32, native_size: 36, calculated_instance_size: 32, calculated_native_size: 46, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::NavigationModel
struct CORDL_TYPE NavigationModel {
public:
  // Declarations
  using ImplementationData = ::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData;

  __declspec(property(get = get_cancelButtonDelta, put = set_cancelButtonDelta))::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState cancelButtonDelta;

  __declspec(property(get = get_cancelButtonDown, put = set_cancelButtonDown)) bool cancelButtonDown;

  __declspec(property(get = get_implementationData, put = set_implementationData))::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData implementationData;

  __declspec(property(get = get_move, put = set_move))::UnityEngine::Vector2 move;

  __declspec(property(get = get_submitButtonDelta, put = set_submitButtonDelta))::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState submitButtonDelta;

  __declspec(property(get = get_submitButtonDown, put = set_submitButtonDown)) bool submitButtonDown;

  /// @brief Method OnFrameFinished, addr 0x30250dc, size 0x8, virtual false, abstract: false, final false
  inline void OnFrameFinished();

  /// @brief Method Reset, addr 0x3025074, size 0x54, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_cancelButtonDelta, addr 0x3025048, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_cancelButtonDelta();

  /// @brief Method get_cancelButtonDown, addr 0x3025018, size 0x8, virtual false, abstract: false, final false
  inline bool get_cancelButtonDown();

  /// @brief Method get_implementationData, addr 0x3025058, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData get_implementationData();

  /// @brief Method get_move, addr 0x3024fc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_move();

  /// @brief Method get_submitButtonDelta, addr 0x3025008, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState get_submitButtonDelta();

  /// @brief Method get_submitButtonDown, addr 0x3024fd8, size 0x8, virtual false, abstract: false, final false
  inline bool get_submitButtonDown();

  /// @brief Method set_cancelButtonDelta, addr 0x3025050, size 0x8, virtual false, abstract: false, final false
  inline void set_cancelButtonDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState value);

  /// @brief Method set_cancelButtonDown, addr 0x3025020, size 0x28, virtual false, abstract: false, final false
  inline void set_cancelButtonDown(bool value);

  /// @brief Method set_implementationData, addr 0x3025068, size 0xc, virtual false, abstract: false, final false
  inline void set_implementationData(::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData value);

  /// @brief Method set_move, addr 0x3024fd0, size 0x8, virtual false, abstract: false, final false
  inline void set_move(::UnityEngine::Vector2 value);

  /// @brief Method set_submitButtonDelta, addr 0x3025010, size 0x8, virtual false, abstract: false, final false
  inline void set_submitButtonDelta(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState value);

  /// @brief Method set_submitButtonDown, addr 0x3024fe0, size 0x28, virtual false, abstract: false, final false
  inline void set_submitButtonDown(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationModel();

  // Ctor Parameters [CppParam { name: "_move_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_submitButtonDelta_k__BackingField", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None }, CppParam { name: "_cancelButtonDelta_k__BackingField", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState", modifiers: "", def_value: None }, CppParam { name: "_implementationData_k__BackingField", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData", modifiers: "", def_value: None }, CppParam { name: "m_SubmitButtonDown", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_CancelButtonDown", ty: "bool", modifiers: "", def_value: None }]
  constexpr NavigationModel(::UnityEngine::Vector2 _move_k__BackingField, ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _submitButtonDelta_k__BackingField,
                            ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _cancelButtonDelta_k__BackingField,
                            ::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData _implementationData_k__BackingField, bool m_SubmitButtonDown,
                            bool m_CancelButtonDown) noexcept;

  /// @brief Field <move>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 _move_k__BackingField;

  /// @brief Field <submitButtonDelta>k__BackingField, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _submitButtonDelta_k__BackingField;

  /// @brief Field <cancelButtonDelta>k__BackingField, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _cancelButtonDelta_k__BackingField;

  /// @brief Field <implementationData>k__BackingField, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData _implementationData_k__BackingField;

  /// @brief Field m_SubmitButtonDown, offset: 0x1c, size: 0x1, def value: None
  bool m_SubmitButtonDown;

  /// @brief Field m_CancelButtonDown, offset: 0x1d, size: 0x1, def value: None
  bool m_CancelButtonDown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, _move_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, _submitButtonDelta_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, _cancelButtonDelta_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, _implementationData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, m_SubmitButtonDown) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, m_CancelButtonDown) == 0x1d, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel, "UnityEngine.XR.Interaction.Toolkit.UI", "NavigationModel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__NavigationModel__ImplementationData, "UnityEngine.XR.Interaction.Toolkit.UI", "NavigationModel/ImplementationData");
