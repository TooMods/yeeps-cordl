#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__Diagnostic_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DiagnosticsPayload_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryHandler_2_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DiagnosticsHandler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__IEnvironments_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__IActionScheduler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CachedPayload_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DiagnosticsHandler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DiagnosticsPayload_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ICachePersister_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetryConfig_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetrySender_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270bad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*& Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::__cordl_internal_get_Self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Self;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*> const&
Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::__cordl_internal_get_Self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Self;
}
constexpr void Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::__cordl_internal_set_Self(::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Self)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*&
Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::__cordl_internal_get_Payload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Payload;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*> const&
Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::__cordl_internal_get_Payload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Payload;
}
constexpr void Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::__cordl_internal_set_Payload(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Payload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState* Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState*>());
}
inline void Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::__DiagnosticsHandler__SendState::__DiagnosticsHandler__SendState() {}
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::*)(
    ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*, ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*,
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*,
    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender*)>(&::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x270b844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler.SendPersistedCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::*)(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*)>(
    &::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::SendPersistedCache)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x270b8cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler.OnSendAsyncCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::Task*, ::System::Object*)>(
    &::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::OnSendAsyncCompleted)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x270badc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(),
                                                 "OnSendAsyncCompleted", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler.ThreadSafeCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::*)(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*)>(
    &::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::ThreadSafeCache)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x270bca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), "ThreadSafeCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler.FetchSpecificCommonTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::*)(
    ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, ::Unity::Services::Core::Environments::Internal::IEnvironments*)>(
    &::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::FetchSpecificCommonTags)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x270be74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler.SendCachedPayload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::SendCachedPayload)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x270c1ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), 6));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler* Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::New_ctor(
    ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* cache,
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
    ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* cachePersister,
    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>(config, cache, scheduler, cachePersister, sender));
}
inline void Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::_ctor(
    ::Unity::Services::Core::Telemetry::Internal::TelemetryConfig* config,
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* cache,
    ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
    ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* cachePersister,
    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender* sender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetryConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config, cache, scheduler, cachePersister, sender);
}
inline void Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::SendPersistedCache(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* persistedCache) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, persistedCache);
}
inline void Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::OnSendAsyncCompleted(::System::Threading::Tasks::Task* sendOperation, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), "OnSendAsyncCompleted",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sendOperation, state);
}
inline void Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::ThreadSafeCache(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), "ThreadSafeCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, payload);
}
inline void Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::FetchSpecificCommonTags(::Unity::Services::Core::Configuration::Internal::ICloudProjectId* cloudProjectId,
                                                                                                    ::Unity::Services::Core::Environments::Internal::IEnvironments* environments) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloudProjectId, environments);
}
inline void Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::SendCachedPayload() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::DiagnosticsHandler::DiagnosticsHandler() {}
