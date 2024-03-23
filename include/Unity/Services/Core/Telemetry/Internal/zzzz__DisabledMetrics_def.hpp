#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DisabledMetrics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class DisabledMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::DisabledMetrics);
// Type: Unity.Services.Core.Telemetry.Internal::DisabledMetrics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::DisabledMetrics*
class CORDL_TYPE DisabledMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IMetrics*() noexcept;

  static inline ::Unity::Services::Core::Telemetry::Internal::DisabledMetrics* New_ctor();

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric, addr 0x270cacc, size 0x4, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric(::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric, addr 0x270cad0, size 0x4, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric(::StringW name, double_t time, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric, addr 0x270cad4, size 0x4, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric(::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  /// @brief Method .ctor, addr 0x270cad8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics* i___Unity__Services__Core__Telemetry__Internal__IMetrics() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisabledMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisabledMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisabledMetrics(DisabledMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisabledMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisabledMetrics(DisabledMetrics const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::DisabledMetrics, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::DisabledMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::DisabledMetrics*, "Unity.Services.Core.Telemetry.Internal", "DisabledMetrics");
