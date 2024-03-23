#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FloatTweenJob)
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> class ITweenJob_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
struct FloatTweenJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::FloatTweenJob);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::FloatTweenJob
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::FloatTweenJob
struct CORDL_TYPE FloatTweenJob {
public:
  // Declarations
  __declspec(property(get = get_jobData, put = set_jobData))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t> jobData;

  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<float_t>"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<float_t>*();

  /// @brief Method Execute, addr 0x2a32290, size 0x164, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method IsNearlyEqual, addr 0x2a32434, size 0x1c, virtual true, abstract: false, final true
  inline bool IsNearlyEqual(float_t from, float_t to);

  /// @brief Method Lerp, addr 0x2a323f4, size 0x40, virtual true, abstract: false, final true
  inline float_t Lerp(float_t from, float_t to, float_t t);

  /// @brief Method get_jobData, addr 0x2a32268, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t> get_jobData();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<float_t>"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<float_t>* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Jobs__ITweenJob_1_float_t_();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  /// @brief Method set_jobData, addr 0x2a3227c, size 0x14, virtual true, abstract: false, final true
  inline void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTweenJob();

  // Ctor Parameters [CppParam { name: "_jobData_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>", modifiers: "", def_value: None }]
  constexpr FloatTweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t> _jobData_k__BackingField) noexcept;

  /// @brief Field <jobData>k__BackingField, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t> _jobData_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::FloatTweenJob, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::FloatTweenJob, _jobData_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::FloatTweenJob, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "FloatTweenJob");
