#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Diagnostic_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DiagnosticsPayload_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryHandler_2_def.hpp"
CORDL_MODULE_EXPORT(DiagnosticsHandler)
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
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
struct DiagnosticsPayload;
}
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload> class ICachePersister_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetryConfig;
}
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetrySender;
}
namespace Unity::Services::Core::Telemetry::Internal {
class __DiagnosticsHandler__SendState;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
class DiagnosticsHandler;
}
namespace Unity::Services::Core::Telemetry::Internal {
class __DiagnosticsHandler__SendState;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler);
MARK_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState);
// Type: ::SendState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::DiagnosticsHandler::SendState*
class CORDL_TYPE __DiagnosticsHandler__SendState : public ::System::Object {
public:
  // Declarations
  /// @brief Field Payload, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Payload,
                      put = __cordl_internal_set_Payload))::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* Payload;

  /// @brief Field Self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Self, put = __cordl_internal_set_Self))::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* Self;

  static inline ::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState* New_ctor();

  constexpr ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*& __cordl_internal_get_Payload();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*> const&
  __cordl_internal_get_Payload() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*& __cordl_internal_get_Self();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*> const& __cordl_internal_get_Self() const;

  constexpr void __cordl_internal_set_Payload(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* value);

  constexpr void __cordl_internal_set_Self(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* value);

  /// @brief Method .ctor, addr 0x270bad4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiagnosticsHandler__SendState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiagnosticsHandler__SendState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiagnosticsHandler__SendState(__DiagnosticsHandler__SendState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiagnosticsHandler__SendState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiagnosticsHandler__SendState(__DiagnosticsHandler__SendState const&) = delete;

  /// @brief Field Self, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* ___Self;

  /// @brief Field Payload, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* ___Payload;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState, ___Self) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState, ___Payload) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
// Type: Unity.Services.Core.Telemetry.Internal::DiagnosticsHandler
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::DiagnosticsHandler*
class CORDL_TYPE DiagnosticsHandler : public ::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload,
                                                                                                              ::Unity::Services::Core::Telemetry::Internal::Diagnostic> {
public:
  // Declarations
  using SendState = ::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState;

  /// @brief Method FetchSpecificCommonTags, addr 0x270be74, size 0x338, virtual true, abstract: false, final false
  inline void FetchSpecificCommonTags(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  static inline ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*
  New_ctor(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
           ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* cache,
           ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
           ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* cachePersister,
           ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender);

  /// @brief Method OnSendAsyncCompleted, addr 0x270badc, size 0x1c8, virtual false, abstract: false, final false
  static inline void OnSendAsyncCompleted(::System::Threading::Tasks::Task* sendOperation, ::System::Object* state);

  /// @brief Method SendCachedPayload, addr 0x270c1ac, size 0x3a8, virtual true, abstract: false, final false
  inline void SendCachedPayload();

  /// @brief Method SendPersistedCache, addr 0x270b8cc, size 0x208, virtual true, abstract: false, final false
  inline void SendPersistedCache(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* persistedCache);

  /// @brief Method ThreadSafeCache, addr 0x270bca4, size 0xf4, virtual false, abstract: false, final false
  inline void ThreadSafeCache(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* payload);

  /// @brief Method .ctor, addr 0x270b844, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
                    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* cache,
                    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                    ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* cachePersister,
                    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticsHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticsHandler(DiagnosticsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticsHandler(DiagnosticsHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler, 0x50>, "Size mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*, "Unity.Services.Core.Telemetry.Internal", "DiagnosticsHandler");
NEED_NO_BOX(::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState*, "Unity.Services.Core.Telemetry.Internal", "DiagnosticsHandler/SendState");
