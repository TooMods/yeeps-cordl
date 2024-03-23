#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TelemetryHandler)
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetryHandler;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::TelemetryHandler);
// Type: Unity.Services.Core.Telemetry.Internal::TelemetryHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::TelemetryHandler*
class CORDL_TYPE TelemetryHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Method FormatOperatingSystemInfo, addr 0x270ca44, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW FormatOperatingSystemInfo(::StringW rawOsInfo);

  static inline ::Unity::Services::Core::Telemetry::Internal::TelemetryHandler* New_ctor();

  /// @brief Method .ctor, addr 0x270cac4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetryHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetryHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetryHandler(TelemetryHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetryHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetryHandler(TelemetryHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::TelemetryHandler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::TelemetryHandler*, "Unity.Services.Core.Telemetry.Internal", "TelemetryHandler");
