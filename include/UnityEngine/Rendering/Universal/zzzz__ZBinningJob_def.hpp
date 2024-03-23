#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightMinMaxZ_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ZBin_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZBinningJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace UnityEngine::Rendering::Universal {
struct LightMinMaxZ;
}
namespace UnityEngine::Rendering::Universal {
struct ZBin;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ZBinningJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ZBinningJob);
// Type: UnityEngine.Rendering.Universal::ZBinningJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::ZBinningJob
struct CORDL_TYPE ZBinningJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x273351c, size 0x1e8, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ZBinningJob();

  // Ctor Parameters [CppParam { name: "bins", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin>", modifiers: "", def_value: None }, CppParam { name: "minMaxZs", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ>", modifiers: "", def_value: None }, CppParam { name: "binOffset", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "zFactor", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ZBinningJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> bins,
                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ> minMaxZs, int32_t binOffset, float_t zFactor) noexcept;

  /// @brief Field bins, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> bins;

  /// @brief Field minMaxZs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ> minMaxZs;

  /// @brief Field binOffset, offset: 0x20, size: 0x4, def value: None
  int32_t binOffset;

  /// @brief Field zFactor, offset: 0x24, size: 0x4, def value: None
  float_t zFactor;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field batchCount offset 0xffffffff size 0x4
  static constexpr int32_t batchCount{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ZBinningJob, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, bins) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, minMaxZs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, binOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ZBinningJob, zFactor) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ZBinningJob, "UnityEngine.Rendering.Universal", "ZBinningJob");
