#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Metric_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsPayload_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryHandler_2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MetricsHandler)
namespace Unity::Services::Core::Configuration::Internal {
class ICloudProjectId;
}
namespace Unity::Services::Core::Environments::Internal {
class IEnvironments;
}
namespace Unity::Services::Core::Scheduler::Internal {
class IActionScheduler;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class CachedPayload_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class ICachePersister_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct MetricsPayload;
}
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetryConfig;
}
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetrySender;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct __MetricsHandler____c__DisplayClass1_0;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class MetricsHandler;
}
namespace Unity::Services::Core::Telemetry::Internal {
struct __MetricsHandler____c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::MetricsHandler);
MARK_VAL_T(::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: true
// CS Name: ::MetricsHandler::<>c__DisplayClass1_0
struct CORDL_TYPE __MetricsHandler____c__DisplayClass1_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetricsHandler____c__DisplayClass1_0();

  // Ctor Parameters [CppParam { name: "persistedCache", ty: "::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Telemetry::Internal::MetricsHandler*", modifiers: "", def_value: None }]
  constexpr __MetricsHandler____c__DisplayClass1_0(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* persistedCache,
                                                   ::Unity::Services::Core::Telemetry::Internal::MetricsHandler* __4__this) noexcept;

  /// @brief Field persistedCache, offset: 0x0, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* persistedCache;

  /// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::MetricsHandler* __4__this;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0, persistedCache) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0, __4__this) == 0x8, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
// Type: Unity.Services.Core.Telemetry.Internal::MetricsHandler
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::MetricsHandler*
class CORDL_TYPE MetricsHandler
    : public ::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<::Unity::Services::Core::Telemetry::Internal::MetricsPayload, ::Unity::Services::Core::Telemetry::Internal::Metric> {
public:
  // Declarations
  using __c__DisplayClass1_0 = ::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0;

  /// @brief Method FetchSpecificCommonTags, addr 0x270c804, size 0x64, virtual true, abstract: false, final false
  inline void FetchSpecificCommonTags(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  static inline ::Unity::Services::Core::Telemetry::Internal::MetricsHandler*
  New_ctor(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
           ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* cache,
           ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
           ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* cachePersister,
           ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender);

  /// @brief Method SendCachedPayload, addr 0x270c868, size 0x1dc, virtual true, abstract: false, final false
  inline void SendCachedPayload();

  /// @brief Method SendPersistedCache, addr 0x270c61c, size 0x114, virtual true, abstract: false, final false
  inline void SendPersistedCache(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* persistedCache);

  /// @brief Method <SendPersistedCache>g__AreMetricsOutdated|1_0, addr 0x270c730, size 0xd4, virtual false, abstract: false, final false
  inline bool _SendPersistedCache_g__AreMetricsOutdated_1_0(ByRef<::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method .ctor, addr 0x270c554, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
                    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* cache,
                    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                    ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* cachePersister,
                    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetricsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetricsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetricsHandler(MetricsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetricsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetricsHandler(MetricsHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::MetricsHandler, 0x50>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::MetricsHandler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::MetricsHandler*, "Unity.Services.Core.Telemetry.Internal", "MetricsHandler");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0, "Unity.Services.Core.Telemetry.Internal", "MetricsHandler/<>c__DisplayClass1_0");
