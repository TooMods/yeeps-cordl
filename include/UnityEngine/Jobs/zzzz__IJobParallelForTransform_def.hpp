#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForTransform)
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Forward declare root types
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Jobs::IJobParallelForTransform);
// Type: UnityEngine.Jobs::IJobParallelForTransform
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Jobs {
// Is value type: false
// CS Name: ::UnityEngine.Jobs::IJobParallelForTransform*
class CORDL_TYPE IJobParallelForTransform {
public:
  // Declarations
  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJobParallelForTransform(IJobParallelForTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJobParallelForTransform(IJobParallelForTransform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Jobs
NEED_NO_BOX(::UnityEngine::Jobs::IJobParallelForTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::IJobParallelForTransform*, "UnityEngine.Jobs", "IJobParallelForTransform");
