#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorTweenJob)
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> class ITweenJob_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
struct ColorTweenJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::ColorTweenJob
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::ColorTweenJob
struct CORDL_TYPE ColorTweenJob {
public:
  // Declarations
  __declspec(property(get = get_colorBlendAmount, put = set_colorBlendAmount)) float_t colorBlendAmount;

  __declspec(property(get = get_colorBlendMode, put = set_colorBlendMode)) uint8_t colorBlendMode;

  __declspec(property(get = get_jobData, put = set_jobData))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color> jobData;

  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::UnityEngine::Color>"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::UnityEngine::Color>*();

  /// @brief Method Execute, addr 0x2a31dbc, size 0x214, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method IsNearlyEqual, addr 0x2a321c0, size 0xa8, virtual true, abstract: false, final true
  inline bool IsNearlyEqual(::UnityEngine::Color from, ::UnityEngine::Color to);

  /// @brief Method Lerp, addr 0x2a31fd0, size 0xf4, virtual true, abstract: false, final true
  inline ::UnityEngine::Color Lerp(::UnityEngine::Color from, ::UnityEngine::Color to, float_t t);

  /// @brief Method ProcessTargetAffordanceValue, addr 0x2a320c4, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ProcessTargetAffordanceValue(::UnityEngine::Color initialValue, ::UnityEngine::Color newValue);

  /// @brief Method get_colorBlendAmount, addr 0x2a31dac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_colorBlendAmount();

  /// @brief Method get_colorBlendMode, addr 0x2a31d9c, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_colorBlendMode();

  /// @brief Method get_jobData, addr 0x2a31d78, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color> get_jobData();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::UnityEngine::Color>"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::UnityEngine::Color>*
  i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Jobs__ITweenJob_1___UnityEngine__Color_();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  /// @brief Method set_colorBlendAmount, addr 0x2a31db4, size 0x8, virtual false, abstract: false, final false
  inline void set_colorBlendAmount(float_t value);

  /// @brief Method set_colorBlendMode, addr 0x2a31da4, size 0x8, virtual false, abstract: false, final false
  inline void set_colorBlendMode(uint8_t value);

  /// @brief Method set_jobData, addr 0x2a31d88, size 0x14, virtual true, abstract: false, final true
  inline void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTweenJob();

  // Ctor Parameters [CppParam { name: "_jobData_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>", modifiers: "",
  // def_value: None }, CppParam { name: "_colorBlendMode_k__BackingField", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_colorBlendAmount_k__BackingField", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr ColorTweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color> _jobData_k__BackingField, uint8_t _colorBlendMode_k__BackingField,
                          float_t _colorBlendAmount_k__BackingField) noexcept;

  /// @brief Field <jobData>k__BackingField, offset: 0x0, size: 0x78, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color> _jobData_k__BackingField;

  /// @brief Field <colorBlendMode>k__BackingField, offset: 0x78, size: 0x1, def value: None
  uint8_t _colorBlendMode_k__BackingField;

  /// @brief Field <colorBlendAmount>k__BackingField, offset: 0x7c, size: 0x4, def value: None
  float_t _colorBlendAmount_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, _jobData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, _colorBlendMode_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, _colorBlendAmount_k__BackingField) == 0x7c, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "ColorTweenJob");
