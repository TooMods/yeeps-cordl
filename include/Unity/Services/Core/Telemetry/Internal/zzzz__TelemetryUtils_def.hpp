#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TelemetryUtils)
namespace System {
class Exception;
}
namespace Unity::Services::Core::Configuration::Internal {
class ICloudProjectId;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
namespace Unity::Services::Core::Environments::Internal {
class IEnvironments;
}
namespace Unity::Services::Core::Scheduler::Internal {
class IActionScheduler;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class ICachePersister_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetricsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetryConfig;
}
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetryUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::TelemetryUtils);
// Type: Unity.Services.Core.Telemetry.Internal::TelemetryUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::TelemetryUtils*
class CORDL_TYPE TelemetryUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateCachePersister, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPayload>
  static inline ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* CreateCachePersister(::StringW fileName, ::UnityEngine::RuntimePlatform platform);

  /// @brief Method CreateDiagnosticsFactory, addr 0x270e334, size 0x15bd8, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*
  CreateDiagnosticsFactory(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler, ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration,
                           ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  /// @brief Method CreateMetricsFactory, addr 0x270db4c, size 0x324, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* CreateMetricsFactory(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                                                                                    ::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration,
                                                                                                    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId,
                                                                                                    ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  /// @brief Method CreateTelemetryConfig, addr 0x270df2c, size 0x408, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* CreateTelemetryConfig(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration);

  /// @brief Method IsTelemetryDisabled, addr 0x270de70, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsTelemetryDisabled(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfiguration);

  /// @brief Method LogTelemetryException, addr 0x270bd98, size 0x8, virtual false, abstract: false, final false
  static inline bool LogTelemetryException(::System::Exception* e, bool predicateValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetryUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetryUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetryUtils(TelemetryUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetryUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetryUtils(TelemetryUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::TelemetryUtils, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::TelemetryUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::TelemetryUtils*, "Unity.Services.Core.Telemetry.Internal", "TelemetryUtils");
