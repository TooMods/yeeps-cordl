#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetrySender_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__IActionScheduler_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ExponentialBackOffRetryPolicy_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IUnityWebRequestSender_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__TelemetrySender_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
template <typename TPayload>
constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetrySender*&
Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TPayload>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*> const&
Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TPayload>
constexpr void
Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_set___4__this(::Unity::Services::Core::Telemetry::Internal::TelemetrySender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload>
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_get_serializedPayload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedPayload;
}
template <typename TPayload>
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_get_serializedPayload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedPayload;
}
template <typename TPayload>
constexpr void Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_set_serializedPayload(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedPayload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload> constexpr int32_t& Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_get_sendCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendCount;
}
template <typename TPayload> constexpr int32_t const& Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_get_sendCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendCount;
}
template <typename TPayload> constexpr void Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_set_sendCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendCount = value;
}
template <typename TPayload>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*&
Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_get_completionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionSource;
}
template <typename TPayload>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const&
Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_get_completionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionSource;
}
template <typename TPayload>
constexpr void Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__cordl_internal_set_completionSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___completionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload>
inline ::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>*
Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>*>());
}
template <typename TPayload> inline void Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload> inline void Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::_SendAsync_g__SendWebRequest_0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>*>::get(),
                                  "<SendAsync>g__SendWebRequest|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload>
inline void Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::_SendAsync_g__OnRequestCompleted_1(
    ::Unity::Services::Core::Telemetry::Internal::WebRequest webRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>*>::get(),
                                  "<SendAsync>g__OnRequestCompleted|1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::WebRequest>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webRequest);
}
// Ctor Parameters []
template <typename TPayload> constexpr ::Unity::Services::Core::Telemetry::Internal::__TelemetrySender____c__DisplayClass7_0_1<TPayload>::__TelemetrySender____c__DisplayClass7_0_1() {}
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetrySender.get_TargetUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Telemetry::Internal::TelemetrySender::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::TelemetrySender::get_TargetUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270d52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get(), "get_TargetUrl",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetrySender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::TelemetrySender::*)(
    ::StringW, ::StringW, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*,
    ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*)>(&::Unity::Services::Core::Telemetry::Internal::TelemetrySender::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x270d534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::TelemetrySender.CreateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (
    ::Unity::Services::Core::Telemetry::Internal::TelemetrySender::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Unity::Services::Core::Telemetry::Internal::TelemetrySender::CreateRequest)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x270d5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get(), "CreateRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_get__TargetUrl_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetUrl_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_get__TargetUrl_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetUrl_k__BackingField;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_set__TargetUrl_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TargetUrl_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*& Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_get_m_RetryPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RetryPolicy;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*> const&
Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_get_m_RetryPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RetryPolicy;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_set_m_RetryPolicy(::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RetryPolicy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*& Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_get_m_Scheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scheduler;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*> const&
Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_get_m_Scheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scheduler;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_set_m_Scheduler(::Unity::Services::Core::Scheduler::Internal::IActionScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Scheduler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*& Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_get_m_RequestSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestSender;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*> const&
Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_get_m_RequestSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestSender;
}
constexpr void Unity::Services::Core::Telemetry::Internal::TelemetrySender::__cordl_internal_set_m_RequestSender(::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Unity::Services::Core::Telemetry::Internal::TelemetrySender::get_TargetUrl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get(), "get_TargetUrl",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Telemetry::Internal::TelemetrySender*
Unity::Services::Core::Telemetry::Internal::TelemetrySender::New_ctor(::StringW targetUrl, ::StringW servicePath, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                                                      ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* retryPolicy,
                                                                      ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* requestSender) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>(targetUrl, servicePath, scheduler, retryPolicy, requestSender));
}
inline void Unity::Services::Core::Telemetry::Internal::TelemetrySender::_ctor(::StringW targetUrl, ::StringW servicePath, ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* scheduler,
                                                                               ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* retryPolicy,
                                                                               ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender* requestSender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::IActionScheduler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetUrl, servicePath, scheduler, retryPolicy, requestSender);
}
template <typename TPayload> inline ::System::Threading::Tasks::Task* Unity::Services::Core::Telemetry::Internal::TelemetrySender::SendAsync(TPayload payload) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get(), "SendAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPayload>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, payload);
}
template <typename TPayload> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unity::Services::Core::Telemetry::Internal::TelemetrySender::SerializePayload(TPayload payload) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get(), "SerializePayload",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPayload>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, payload);
}
inline ::UnityEngine::Networking::UnityWebRequest* Unity::Services::Core::Telemetry::Internal::TelemetrySender::CreateRequest(::ArrayW<uint8_t, ::Array<uint8_t>*> serializedPayload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::TelemetrySender*>::get(), "CreateRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(this, ___internal_method, serializedPayload);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::TelemetrySender::TelemetrySender() {}
