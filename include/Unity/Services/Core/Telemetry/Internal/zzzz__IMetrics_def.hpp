#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IMetrics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::IMetrics);
// Type: Unity.Services.Core.Telemetry.Internal::IMetrics
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::IMetrics*
class CORDL_TYPE IMetrics {
public:
  // Declarations
  /// @brief Method SendGaugeMetric, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendGaugeMetric(::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  /// @brief Method SendHistogramMetric, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendHistogramMetric(::StringW name, double_t time, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  /// @brief Method SendSumMetric, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendSumMetric(::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  // Ctor Parameters [CppParam { name: "", ty: "IMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMetrics(IMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMetrics(IMetrics const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::IMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::IMetrics*, "Unity.Services.Core.Telemetry.Internal", "IMetrics");
