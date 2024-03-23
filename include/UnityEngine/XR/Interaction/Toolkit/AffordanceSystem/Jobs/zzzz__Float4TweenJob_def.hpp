#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Float4TweenJob)
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> class ITweenJob_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
struct Float4TweenJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float4TweenJob);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::Float4TweenJob
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::Float4TweenJob
struct CORDL_TYPE Float4TweenJob {
public:
  // Declarations
  __declspec(property(get = get_jobData, put = set_jobData))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4> jobData;

  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float4>"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float4>*();

  /// @brief Method Execute, addr 0x2a32924, size 0x1d4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method IsNearlyEqual, addr 0x2a32b90, size 0x118, virtual true, abstract: false, final true
  inline bool IsNearlyEqual(::Unity::Mathematics::float4 from, ::Unity::Mathematics::float4 to);

  /// @brief Method Lerp, addr 0x2a32af8, size 0x98, virtual true, abstract: false, final true
  inline ::Unity::Mathematics::float4 Lerp(::Unity::Mathematics::float4 from, ::Unity::Mathematics::float4 to, float_t t);

  /// @brief Method get_jobData, addr 0x2a32900, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4> get_jobData();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float4>"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float4>*
  i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Jobs__ITweenJob_1___Unity__Mathematics__float4_();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  /// @brief Method set_jobData, addr 0x2a32910, size 0x14, virtual true, abstract: false, final true
  inline void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Float4TweenJob();

  // Ctor Parameters [CppParam { name: "_jobData_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4>", modifiers: "",
  // def_value: None }]
  constexpr Float4TweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4> _jobData_k__BackingField) noexcept;

  /// @brief Field <jobData>k__BackingField, offset: 0x0, size: 0x78, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4> _jobData_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float4TweenJob, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float4TweenJob, _jobData_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float4TweenJob, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "Float4TweenJob");
