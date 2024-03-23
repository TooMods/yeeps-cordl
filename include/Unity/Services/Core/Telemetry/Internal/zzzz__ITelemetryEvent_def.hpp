#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITelemetryEvent)
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class ITelemetryEvent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent);
// Type: Unity.Services.Core.Telemetry.Internal::ITelemetryEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::ITelemetryEvent*
class CORDL_TYPE ITelemetryEvent {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ITelemetryEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITelemetryEvent(ITelemetryEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITelemetryEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITelemetryEvent(ITelemetryEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*, "Unity.Services.Core.Telemetry.Internal", "ITelemetryEvent");
