#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__NativeCurve_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenJobData_1)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Collections {
struct NativeCurve;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::TweenJobData`1
// SizeInfo { instance_size: 88, native_size: 104, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::TweenJobData`1<T>
struct CORDL_TYPE TweenJobData_1 {
public:
  // Declarations
  __declspec(property(get = get_stateTransitionAmountFloat)) float_t stateTransitionAmountFloat;

  /// @brief Method get_stateTransitionAmountFloat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_stateTransitionAmountFloat();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TweenJobData_1();

  // Ctor Parameters [CppParam { name: "initialValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "stateOriginValue", ty: "T", modifiers: "", def_value: None }, CppParam { name:
  // "stateTargetValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "stateTransitionIncrement", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "nativeCurve", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve", modifiers: "", def_value: None }, CppParam { name: "tweenStartValue", ty: "T", modifiers: "", def_value: None },
  // CppParam { name: "tweenAmount", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "outputData", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }]
  constexpr TweenJobData_1(T initialValue, T stateOriginValue, T stateTargetValue, uint8_t stateTransitionIncrement,
                           ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve nativeCurve, T tweenStartValue, float_t tweenAmount,
                           ::Unity::Collections::NativeArray_1<T> outputData) noexcept;

  /// @brief Field initialValue, offset: 0x0, size: 0x8, def value: None
  T initialValue;

  /// @brief Field stateOriginValue, offset: 0x8, size: 0x8, def value: None
  T stateOriginValue;

  /// @brief Field stateTargetValue, offset: 0x10, size: 0x8, def value: None
  T stateTargetValue;

  /// @brief Field stateTransitionIncrement, offset: 0x18, size: 0x1, def value: None
  uint8_t stateTransitionIncrement;

  /// @brief Field nativeCurve, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve nativeCurve;

  /// @brief Field tweenStartValue, offset: 0x38, size: 0x8, def value: None
  T tweenStartValue;

  /// @brief Field tweenAmount, offset: 0x40, size: 0x4, def value: None
  float_t tweenAmount;

  /// @brief Field outputData, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> outputData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field squareSnapDistanceThreshold offset 0xffffffff size 0x4
  static constexpr float_t squareSnapDistanceThreshold{ 0.00000025000003 };

  /// @brief Field totalStateTransitionIncrements offset 0xffffffff size 0x1
  static constexpr uint8_t totalStateTransitionIncrements{ static_cast<uint8_t>(0xffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "TweenJobData`1");
