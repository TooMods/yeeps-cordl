#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Metric_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsPayload_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryHandler_2_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsHandler_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__IEnvironments_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__IActionScheduler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CachedPayload_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ICachePersister_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsHandler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__MetricsPayload_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryConfig_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetrySender_def.hpp"
// Ctor Parameters [CppParam { name: "persistedCache", ty: "::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Telemetry::Internal::MetricsHandler*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0::__MetricsHandler____c__DisplayClass1_0(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* persistedCache,
    ::Unity::Services::Core::Telemetry::Internal::MetricsHandler* __4__this) noexcept {
  this->persistedCache = persistedCache;
  this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0::__MetricsHandler____c__DisplayClass1_0() {}
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::MetricsHandler::*)(
    ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*, ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*,
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*,
    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender*)>(&::Unity::Services::Core::Telemetry::Internal::MetricsHandler::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x270c554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsHandler.SendPersistedCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::MetricsHandler::*)(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*)>(
    &::Unity::Services::Core::Telemetry::Internal::MetricsHandler::SendPersistedCache)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x270c61c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsHandler.FetchSpecificCommonTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::MetricsHandler::*)(
    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, ::Unity::Services::Core::Environments::Internal::IEnvironments*)>(
    &::Unity::Services::Core::Telemetry::Internal::MetricsHandler::FetchSpecificCommonTags)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x270c804;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsHandler.SendCachedPayload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::MetricsHandler::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::MetricsHandler::SendCachedPayload)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x270c868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::MetricsHandler._SendPersistedCache_g__AreMetricsOutdated_1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Unity::Services::Core::Telemetry::Internal::MetricsHandler::*)(ByRef<::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0>)>(
        &::Unity::Services::Core::Telemetry::Internal::MetricsHandler::_SendPersistedCache_g__AreMetricsOutdated_1_0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x270c730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                    "<SendPersistedCache>g__AreMetricsOutdated|1_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0>>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::Telemetry::Internal::MetricsHandler* Unity::Services::Core::Telemetry::Internal::MetricsHandler::New_ctor(
    ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* cache,
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
    ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* cachePersister,
    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>(config, cache, scheduler, cachePersister, sender));
}
inline void Unity::Services::Core::Telemetry::Internal::MetricsHandler::_ctor(
    ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* cache,
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
    ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* cachePersister,
    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, cache, scheduler, cachePersister, sender);
}
inline void Unity::Services::Core::Telemetry::Internal::MetricsHandler::SendPersistedCache(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::MetricsPayload>* persistedCache) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, persistedCache);
}
inline void Unity::Services::Core::Telemetry::Internal::MetricsHandler::FetchSpecificCommonTags(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId,
                                                                                                ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloudProjectId, environments);
}
inline void Unity::Services::Core::Telemetry::Internal::MetricsHandler::SendCachedPayload() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Core::Telemetry::Internal::MetricsHandler::_SendPersistedCache_g__AreMetricsOutdated_1_0(
    ByRef<::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::MetricsHandler*>::get(),
                                  "<SendPersistedCache>g__AreMetricsOutdated|1_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Services::Core::Telemetry::Internal::__MetricsHandler____c__DisplayClass1_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::MetricsHandler::MetricsHandler() {}
