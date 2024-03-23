#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/zzzz__ColorBlendMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableAsyncBase_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorTweenableVariable)
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
struct ColorBlendMode;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class ColorTweenableVariable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives::ColorTweenableVariable
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives::ColorTweenableVariable*
class CORDL_TYPE ColorTweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<::UnityEngine::Color> {
public:
  // Declarations
  /// @brief Field <colorBlendAmount>k__BackingField, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__colorBlendAmount_k__BackingField, put = __cordl_internal_set__colorBlendAmount_k__BackingField)) float_t _colorBlendAmount_k__BackingField;

  /// @brief Field <colorBlendMode>k__BackingField, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__colorBlendMode_k__BackingField,
                      put = __cordl_internal_set__colorBlendMode_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode
      _colorBlendMode_k__BackingField;

  __declspec(property(get = get_colorBlendAmount, put = set_colorBlendAmount)) float_t colorBlendAmount;

  __declspec(property(get = get_colorBlendMode, put = set_colorBlendMode))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode colorBlendMode;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable* New_ctor();

  /// @brief Method ScheduleTweenJob, addr 0x3022664, size 0xe0, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>> jobData);

  constexpr float_t const& __cordl_internal_get__colorBlendAmount_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__colorBlendAmount_k__BackingField();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode const& __cordl_internal_get__colorBlendMode_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode& __cordl_internal_get__colorBlendMode_k__BackingField();

  constexpr void __cordl_internal_set__colorBlendAmount_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__colorBlendMode_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode value);

  /// @brief Method .ctor, addr 0x3022744, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorBlendAmount, addr 0x3022654, size 0x8, virtual false, abstract: false, final false
  inline float_t get_colorBlendAmount();

  /// @brief Method get_colorBlendMode, addr 0x3022644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode get_colorBlendMode();

  /// @brief Method set_colorBlendAmount, addr 0x302265c, size 0x8, virtual false, abstract: false, final false
  inline void set_colorBlendAmount(float_t value);

  /// @brief Method set_colorBlendMode, addr 0x302264c, size 0x8, virtual false, abstract: false, final false
  inline void set_colorBlendMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTweenableVariable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorTweenableVariable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTweenableVariable(ColorTweenableVariable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTweenableVariable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTweenableVariable(ColorTweenableVariable const&) = delete;

  /// @brief Field <colorBlendMode>k__BackingField, offset: 0xb8, size: 0x1, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorBlendMode ____colorBlendMode_k__BackingField;

  /// @brief Field <colorBlendAmount>k__BackingField, offset: 0xbc, size: 0x4, def value: None
  float_t ____colorBlendAmount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable, ____colorBlendMode_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable, ____colorBlendAmount_k__BackingField) == 0xbc, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives",
                       "ColorTweenableVariable");
