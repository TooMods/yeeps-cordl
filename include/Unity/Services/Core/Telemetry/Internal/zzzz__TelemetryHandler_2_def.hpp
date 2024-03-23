#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryHandler_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TelemetryHandler_2)
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
template <typename TPayload> class ICachePersister_1;
}
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetryConfig;
}
namespace Unity::Services::Core::Telemetry::Internal {
class TelemetrySender;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
template <typename TPayload, typename TEvent> class TelemetryHandler_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2);
// Type: Unity.Services.Core.Telemetry.Internal::TelemetryHandler`2
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// cpp template
template <typename TPayload, typename TEvent>
// Is value type: false
// CS Name: ::Unity.Services.Core.Telemetry.Internal::TelemetryHandler`2<TPayload,TEvent>*
class CORDL_TYPE TelemetryHandler_2 : public ::Unity::Services::Core::Telemetry::Internal::TelemetryHandler {
public:
  // Declarations
  __declspec(property(get = get_Cache))::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* Cache;

  __declspec(property(get = get_Config))::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* Config;

  __declspec(property(get = get_Lock))::System::Object* Lock;

  /// @brief Field PersistenceLoopScheduleId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PersistenceLoopScheduleId, put = __cordl_internal_set_PersistenceLoopScheduleId)) int64_t PersistenceLoopScheduleId;

  /// @brief Field SendingLoopScheduleId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SendingLoopScheduleId, put = __cordl_internal_set_SendingLoopScheduleId)) int64_t SendingLoopScheduleId;

  /// @brief Field <Cache>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Cache_k__BackingField,
                      put = __cordl_internal_set__Cache_k__BackingField))::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* _Cache_k__BackingField;

  /// @brief Field <Config>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Config_k__BackingField,
                      put = __cordl_internal_set__Config_k__BackingField))::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* _Config_k__BackingField;

  /// @brief Field <Lock>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Lock_k__BackingField, put = __cordl_internal_set__Lock_k__BackingField))::System::Object* _Lock_k__BackingField;

  /// @brief Field m_CachePersister, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachePersister,
                      put = __cordl_internal_set_m_CachePersister))::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* m_CachePersister;

  /// @brief Field m_Scheduler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scheduler, put = __cordl_internal_set_m_Scheduler))::Unity::Services::Core::Scheduler::Internal::IActionScheduler* m_Scheduler;

  /// @brief Field m_Sender, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sender, put = __cordl_internal_set_m_Sender))::Unity::Services::Core::Telemetry::Internal::TelemetrySender* m_Sender;

  /// @brief Method FetchAllCommonTags, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FetchAllCommonTags(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  /// @brief Method FetchSpecificCommonTags, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void FetchSpecificCommonTags(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  /// @brief Method FetchTelemetryCommonTags, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FetchTelemetryCommonTags();

  /// @brief Method HandlePersistedCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandlePersistedCache();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments* environments);

  static inline ::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>* New_ctor(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
                                                                                                             ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache,
                                                                                                             ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                                                                                             ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* cachePersister,
                                                                                                             ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender);

  /// @brief Method PersistCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PersistCache();

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Register(TEvent telemetryEvent);

  /// @brief Method SchedulePersistenceLoop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SchedulePersistenceLoop();

  /// @brief Method ScheduleSendingLoop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ScheduleSendingLoop();

  /// @brief Method SendCachedPayload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendCachedPayload();

  /// @brief Method SendPersistedCache, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendPersistedCache(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* persistedCache);

  /// @brief Method <Register>g__IsCacheFull|25_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _Register_g__IsCacheFull_25_0();

  /// @brief Method <SchedulePersistenceLoop>g__PersistenceLoop|23_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SchedulePersistenceLoop_g__PersistenceLoop_23_0();

  /// @brief Method <ScheduleSendingLoop>g__SendingLoop|21_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ScheduleSendingLoop_g__SendingLoop_21_0();

  constexpr int64_t const& __cordl_internal_get_PersistenceLoopScheduleId() const;

  constexpr int64_t& __cordl_internal_get_PersistenceLoopScheduleId();

  constexpr int64_t const& __cordl_internal_get_SendingLoopScheduleId() const;

  constexpr int64_t& __cordl_internal_get_SendingLoopScheduleId();

  constexpr ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*& __cordl_internal_get__Cache_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*> const& __cordl_internal_get__Cache_k__BackingField() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*& __cordl_internal_get__Config_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*> const& __cordl_internal_get__Config_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__Lock_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Lock_k__BackingField() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*& __cordl_internal_get_m_CachePersister();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*> const& __cordl_internal_get_m_CachePersister() const;

  constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*& __cordl_internal_get_m_Scheduler();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*> const& __cordl_internal_get_m_Scheduler() const;

  constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetrySender*& __cordl_internal_get_m_Sender();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*> const& __cordl_internal_get_m_Sender() const;

  constexpr void __cordl_internal_set_PersistenceLoopScheduleId(int64_t value);

  constexpr void __cordl_internal_set_SendingLoopScheduleId(int64_t value);

  constexpr void __cordl_internal_set__Cache_k__BackingField(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* value);

  constexpr void __cordl_internal_set__Config_k__BackingField(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* value);

  constexpr void __cordl_internal_set__Lock_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set_m_CachePersister(::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* value);

  constexpr void __cordl_internal_set_m_Scheduler(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* value);

  constexpr void __cordl_internal_set_m_Sender(::Unity::Services::Core::Telemetry::Internal::TelemetrySender* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config, ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache,
                    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler, ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* cachePersister,
                    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender);

  /// @brief Method get_Cache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* get_Cache();

  /// @brief Method get_Config, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* get_Config();

  /// @brief Method get_Lock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* get_Lock();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetryHandler_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetryHandler_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetryHandler_2(TelemetryHandler_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetryHandler_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetryHandler_2(TelemetryHandler_2 const&) = delete;

  /// @brief Field m_Scheduler, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* ___m_Scheduler;

  /// @brief Field m_CachePersister, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* ___m_CachePersister;

  /// @brief Field m_Sender, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* ___m_Sender;

  /// @brief Field SendingLoopScheduleId, offset: 0x28, size: 0x8, def value: None
  int64_t ___SendingLoopScheduleId;

  /// @brief Field PersistenceLoopScheduleId, offset: 0x30, size: 0x8, def value: None
  int64_t ___PersistenceLoopScheduleId;

  /// @brief Field <Config>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* ____Config_k__BackingField;

  /// @brief Field <Cache>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* ____Cache_k__BackingField;

  /// @brief Field <Lock>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____Lock_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2, "Unity.Services.Core.Telemetry.Internal", "TelemetryHandler`2");
