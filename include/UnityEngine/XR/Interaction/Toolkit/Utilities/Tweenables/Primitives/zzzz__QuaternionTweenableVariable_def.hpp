#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableSynchronousBase_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QuaternionTweenableVariable)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class QuaternionTweenableVariable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives::QuaternionTweenableVariable
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives::QuaternionTweenableVariable*
class CORDL_TYPE QuaternionTweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<::UnityEngine::Quaternion> {
public:
  // Declarations
  /// @brief Field <angleEqualityThreshold>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__angleEqualityThreshold_k__BackingField,
                      put = __cordl_internal_set__angleEqualityThreshold_k__BackingField)) float_t _angleEqualityThreshold_k__BackingField;

  __declspec(property(get = get_angleEqualityThreshold, put = set_angleEqualityThreshold)) float_t angleEqualityThreshold;

  /// @brief Method IsNearlyEqual, addr 0x302289c, size 0x6c, virtual true, abstract: false, final false
  inline bool IsNearlyEqual(::UnityEngine::Quaternion startValue, ::UnityEngine::Quaternion targetValue);

  /// @brief Method Lerp, addr 0x302288c, size 0x10, virtual true, abstract: false, final false
  inline ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to, float_t t);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable* New_ctor();

  constexpr float_t const& __cordl_internal_get__angleEqualityThreshold_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__angleEqualityThreshold_k__BackingField();

  constexpr void __cordl_internal_set__angleEqualityThreshold_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x3022908, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angleEqualityThreshold, addr 0x302287c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_angleEqualityThreshold();

  /// @brief Method set_angleEqualityThreshold, addr 0x3022884, size 0x8, virtual false, abstract: false, final false
  inline void set_angleEqualityThreshold(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionTweenableVariable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuaternionTweenableVariable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaternionTweenableVariable(QuaternionTweenableVariable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionTweenableVariable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaternionTweenableVariable(QuaternionTweenableVariable const&) = delete;

  /// @brief Field <angleEqualityThreshold>k__BackingField, offset: 0x68, size: 0x4, def value: None
  float_t ____angleEqualityThreshold_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable, ____angleEqualityThreshold_k__BackingField) == 0x68,
              "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives",
                       "QuaternionTweenableVariable");
