#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QosResult)
// Forward declare root types
namespace Unity::Services::Qos::Internal {
struct QosResult;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Qos::Internal::QosResult);
// Type: Unity.Services.Qos.Internal::QosResult
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Qos::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Qos.Internal::QosResult
struct CORDL_TYPE QosResult {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr QosResult();

  // Ctor Parameters [CppParam { name: "Region", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "AverageLatencyMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "PacketLossPercent", ty: "float_t", modifiers: "", def_value: None }]
  constexpr QosResult(::StringW Region, int32_t AverageLatencyMs, float_t PacketLossPercent) noexcept;

  /// @brief Field Region, offset: 0x0, size: 0x8, def value: None
  ::StringW Region;

  /// @brief Field AverageLatencyMs, offset: 0x8, size: 0x4, def value: None
  int32_t AverageLatencyMs;

  /// @brief Field PacketLossPercent, offset: 0xc, size: 0x4, def value: None
  float_t PacketLossPercent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Qos::Internal::QosResult, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Qos::Internal::QosResult, Region) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Qos::Internal::QosResult, AverageLatencyMs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Qos::Internal::QosResult, PacketLossPercent) == 0xc, "Offset mismatch!");

} // namespace Unity::Services::Qos::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Qos::Internal::QosResult, "Unity.Services.Qos.Internal", "QosResult");
