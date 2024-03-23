#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryHandler_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryHandler_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__IEnvironments_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__IActionScheduler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CachedPayload_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ICachePersister_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryConfig_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetrySender_def.hpp"
template <typename TPayload, typename TEvent>
constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*& Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_m_Scheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scheduler;
}
template <typename TPayload, typename TEvent>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*> const&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_m_Scheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scheduler;
}
template <typename TPayload, typename TEvent>
constexpr void
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_set_m_Scheduler(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Scheduler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload, typename TEvent>
constexpr ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_m_CachePersister() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachePersister;
}
template <typename TPayload, typename TEvent>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*> const&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_m_CachePersister() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachePersister;
}
template <typename TPayload, typename TEvent>
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_set_m_CachePersister(
    ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachePersister)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload, typename TEvent>
constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetrySender*& Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_m_Sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sender;
}
template <typename TPayload, typename TEvent>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*> const&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_m_Sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sender;
}
template <typename TPayload, typename TEvent>
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_set_m_Sender(::Unity::Services::Core::Telemetry::Internal::TelemetrySender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Sender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload, typename TEvent> constexpr int64_t& Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_SendingLoopScheduleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SendingLoopScheduleId;
}
template <typename TPayload, typename TEvent>
constexpr int64_t const& Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_SendingLoopScheduleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SendingLoopScheduleId;
}
template <typename TPayload, typename TEvent>
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_set_SendingLoopScheduleId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SendingLoopScheduleId = value;
}
template <typename TPayload, typename TEvent> constexpr int64_t& Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_PersistenceLoopScheduleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PersistenceLoopScheduleId;
}
template <typename TPayload, typename TEvent>
constexpr int64_t const& Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get_PersistenceLoopScheduleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PersistenceLoopScheduleId;
}
template <typename TPayload, typename TEvent>
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_set_PersistenceLoopScheduleId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PersistenceLoopScheduleId = value;
}
template <typename TPayload, typename TEvent>
constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get__Config_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Config_k__BackingField;
}
template <typename TPayload, typename TEvent>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*> const&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get__Config_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Config_k__BackingField;
}
template <typename TPayload, typename TEvent>
constexpr void
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_set__Config_k__BackingField(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Config_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload, typename TEvent>
constexpr ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get__Cache_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cache_k__BackingField;
}
template <typename TPayload, typename TEvent>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*> const&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get__Cache_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cache_k__BackingField;
}
template <typename TPayload, typename TEvent>
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_set__Cache_k__BackingField(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Cache_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload, typename TEvent>
constexpr ::System::Object*& Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get__Lock_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lock_k__BackingField;
}
template <typename TPayload, typename TEvent>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_get__Lock_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lock_k__BackingField;
}
template <typename TPayload, typename TEvent>
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::__cordl_internal_set__Lock_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Lock_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload, typename TEvent>
inline ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::get_Config() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "get_Config", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent>
inline ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::get_Cache() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "get_Cache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent> inline ::System::Object* Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::get_Lock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "get_Lock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent>
inline ::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>* Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::New_ctor(
    ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config, ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache,
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler, ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* cachePersister,
    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>(config, cache, scheduler, cachePersister, sender));
}
template <typename TPayload, typename TEvent>
inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::_ctor(::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
                                                                                                    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache,
                                                                                                    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                                                                                    ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>* cachePersister,
                                                                                                    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, cache, scheduler, cachePersister, sender);
}
template <typename TPayload, typename TEvent>
inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::Initialize(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId,
                                                                                                         ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(), "Initialize",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloudProjectId, environments);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::HandlePersistedCache() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "HandlePersistedCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent>
inline void
Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::SendPersistedCache(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* persistedCache) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, persistedCache);
}
template <typename TPayload, typename TEvent>
inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::FetchAllCommonTags(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId,
                                                                                                                 ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                 "FetchAllCommonTags", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloudProjectId, environments);
}
template <typename TPayload, typename TEvent>
inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::FetchSpecificCommonTags(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId,
                                                                                                                      ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloudProjectId, environments);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::FetchTelemetryCommonTags() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "FetchTelemetryCommonTags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::ScheduleSendingLoop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "ScheduleSendingLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::SendCachedPayload() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::SchedulePersistenceLoop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "SchedulePersistenceLoop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::PersistCache() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "PersistCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::Register(TEvent telemetryEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(), "Register",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, telemetryEvent);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::_ScheduleSendingLoop_g__SendingLoop_21_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "<ScheduleSendingLoop>g__SendingLoop|21_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent> inline void Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::_SchedulePersistenceLoop_g__PersistenceLoop_23_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "<SchedulePersistenceLoop>g__PersistenceLoop|23_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload, typename TEvent> inline bool Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::_Register_g__IsCacheFull_25_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>*>::get(),
                                               "<Register>g__IsCacheFull|25_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TPayload, typename TEvent> constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetryHandler_2<TPayload, TEvent>::TelemetryHandler_2() {}
