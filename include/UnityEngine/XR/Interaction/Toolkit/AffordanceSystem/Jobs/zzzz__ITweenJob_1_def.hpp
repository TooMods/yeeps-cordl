#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITweenJob_1)
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> class ITweenJob_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::ITweenJob`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs::ITweenJob`1<T>*
class CORDL_TYPE ITweenJob_1 {
public:
  // Declarations
  __declspec(property(get = get_jobData, put = set_jobData))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T> jobData;

  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*() noexcept;

  /// @brief Method IsNearlyEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsNearlyEqual(T from, T to);

  /// @brief Method Lerp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Lerp(T from, T to, float_t t);

  /// @brief Method get_jobData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T> get_jobData();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() noexcept;

  /// @brief Method set_jobData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T> value);

  // Ctor Parameters [CppParam { name: "", ty: "ITweenJob_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITweenJob_1(ITweenJob_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITweenJob_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITweenJob_1(ITweenJob_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "ITweenJob`1");
