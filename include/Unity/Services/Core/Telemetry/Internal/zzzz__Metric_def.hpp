#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Metric)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace Unity::Services::Core::Telemetry::Internal {
class ITelemetryEvent;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct MetricType;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
struct Metric;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Telemetry::Internal::Metric);
// Type: Unity.Services.Core.Telemetry.Internal::Metric
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Telemetry.Internal::Metric
struct CORDL_TYPE Metric {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent"
  constexpr operator ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*();

  /// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent"
  constexpr ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* i___Unity__Services__Core__Telemetry__Internal__ITelemetryEvent();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Metric();

  // Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Type",
  // ty: "::Unity::Services::Core::Telemetry::Internal::MetricType", modifiers: "", def_value: None }, CppParam { name: "Tags", ty:
  // "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }]
  constexpr Metric(::StringW Name, double_t Value, ::Unity::Services::Core::Telemetry::Internal::MetricType Type, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Tags) noexcept;

  /// @brief Field Name, offset: 0x0, size: 0x8, def value: None
  ::StringW Name;

  /// @brief Field Value, offset: 0x8, size: 0x8, def value: None
  double_t Value;

  /// @brief Field Type, offset: 0x10, size: 0x4, def value: None
  ::Unity::Services::Core::Telemetry::Internal::MetricType Type;

  /// @brief Field Tags, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Tags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::Metric, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Metric, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Metric, Value) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Metric, Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::Metric, Tags) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::Metric, "Unity.Services.Core.Telemetry.Internal", "Metric");
