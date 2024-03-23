#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__UnityWebRequestSender_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IUnityWebRequestSender_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__UnityWebRequestSender_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270d7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0._SendRequest_g__OnSendingRequestCompleted_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::*)(
    ::UnityEngine::AsyncOperation*)>(&::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::_SendRequest_g__OnSendingRequestCompleted_0)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x270d8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0*>::get(),
                                    "<SendRequest>g__OnSendingRequestCompleted|0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>*&
Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>*> const&
Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::__cordl_internal_set_callback(
    ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0*
Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0*>());
}
inline void Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::_SendRequest_g__OnSendingRequestCompleted_0(::UnityEngine::AsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0*>::get(),
                                  "<SendRequest>g__OnSendingRequestCompleted|0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::__UnityWebRequestSender____c__DisplayClass0_0::__UnityWebRequestSender____c__DisplayClass0_0() {}
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender.SendRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::*)(
    ::UnityEngine::Networking::UnityWebRequest*, ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>*)>(
    &::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::SendRequest)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x270d71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender*>::get(), "SendRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender.Simplify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Telemetry::Internal::WebRequest (*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::Simplify)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x270d800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender*>::get(), "Simplify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270d8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender"
constexpr Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::operator ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender"
constexpr ::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*
Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::i___Unity__Services__Core__Telemetry__Internal__IUnityWebRequestSender() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::IUnityWebRequestSender*>(static_cast<void*>(this));
}
inline void Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::SendRequest(::UnityEngine::Networking::UnityWebRequest* request,
                                                                                           ::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender*>::get(), "SendRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::Core::Telemetry::Internal::WebRequest>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, callback);
}
inline ::Unity::Services::Core::Telemetry::Internal::WebRequest Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::Simplify(::UnityEngine::Networking::UnityWebRequest* webRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender*>::get(), "Simplify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Telemetry::Internal::WebRequest, false>(nullptr, ___internal_method, webRequest);
}
inline ::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender* Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender*>());
}
inline void Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::UnityWebRequestSender::UnityWebRequestSender() {}
