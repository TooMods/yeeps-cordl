#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableBase_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TweenableVariableSynchronousBase_1)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
template <typename T> class TweenableVariableSynchronousBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables::TweenableVariableSynchronousBase`1
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables::TweenableVariableSynchronousBase`1<T>*
class CORDL_TYPE TweenableVariableSynchronousBase_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T> {
public:
  // Declarations
  /// @brief Method ExecuteTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteTween(T startValue, T targetValue, float_t tweenAmount, bool useCurve);

  /// @brief Method IsNearlyEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsNearlyEqual(T startValue, T targetValue);

  /// @brief Method Lerp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Lerp(T from, T to, float_t t);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweenableVariableSynchronousBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweenableVariableSynchronousBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweenableVariableSynchronousBase_1(TweenableVariableSynchronousBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweenableVariableSynchronousBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweenableVariableSynchronousBase_1(TweenableVariableSynchronousBase_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables",
                                     "TweenableVariableSynchronousBase`1");
