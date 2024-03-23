#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Metrics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct MetricType;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct Metric;
}
namespace Unity::Services::Core::Telemetry::Internal {
class MetricsHandler;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class Metrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::Metrics);
// Type: Unity.Services.Core.Telemetry.Internal::Metrics
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::Metrics*
class CORDL_TYPE Metrics : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Handler))::Unity::Services::Core::Telemetry::Internal::MetricsHandler* Handler;

  __declspec(property(get = get_PackageTags))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* PackageTags;

  /// @brief Field <Handler>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Handler_k__BackingField,
                      put = __cordl_internal_set__Handler_k__BackingField))::Unity::Services::Core::Telemetry::Internal::MetricsHandler* _Handler_k__BackingField;

  /// @brief Field <PackageTags>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__PackageTags_k__BackingField,
                      put = __cordl_internal_set__PackageTags_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _PackageTags_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::IMetrics*() noexcept;

  /// @brief Method CreateMetric, addr 0x270cbfc, size 0xac, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::Metric CreateMetric(::StringW name, double_t value, ::Unity::Services::Core::Telemetry::Internal::MetricType type,
                                                                           ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  static inline ::Unity::Services::Core::Telemetry::Internal::Metrics* New_ctor(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* handler,
                                                                                ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* packageTags);

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric, addr 0x270cca8, size 0xb0, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Telemetry_Internal_IMetrics_SendGaugeMetric(::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric, addr 0x270cd58, size 0xb0, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric(::StringW name, double_t time, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  /// @brief Method Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric, addr 0x270ce08, size 0xb0, virtual true, abstract: false, final true
  inline void Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric(::StringW name, double_t value, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags);

  constexpr ::Unity::Services::Core::Telemetry::Internal::MetricsHandler*& __cordl_internal_get__Handler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*> const& __cordl_internal_get__Handler_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__PackageTags_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__PackageTags_k__BackingField() const;

  constexpr void __cordl_internal_set__Handler_k__BackingField(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* value);

  constexpr void __cordl_internal_set__PackageTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x270cbd0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Telemetry::Internal::MetricsHandler* handler, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* packageTags);

  /// @brief Method get_Handler, addr 0x270cbc0, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::MetricsHandler* get_Handler();

  /// @brief Method get_PackageTags, addr 0x270cbc8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_PackageTags();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IMetrics"
  constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics* i___Unity__Services__Core__Telemetry__Internal__IMetrics() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Metrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Metrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Metrics(Metrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Metrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Metrics(Metrics const&) = delete;

  /// @brief Field <Handler>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::MetricsHandler* ____Handler_k__BackingField;

  /// @brief Field <PackageTags>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____PackageTags_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::Metrics, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Metrics, ____Handler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Metrics, ____PackageTags_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::Metrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::Metrics*, "Unity.Services.Core.Telemetry.Internal", "Metrics");
