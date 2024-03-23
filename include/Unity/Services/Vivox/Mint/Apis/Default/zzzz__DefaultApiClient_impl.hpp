#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__BaseApiClient_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_impl.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Response_1_impl.hpp"
#include "Unity/Services/Vivox/Mint/Apis/Default/zzzz__DefaultApiClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IAccessToken_def.hpp"
#include "Unity/Services/Vivox/Mint/Apis/Default/zzzz__DefaultApiClient_def.hpp"
#include "Unity/Services/Vivox/Mint/Apis/Default/zzzz__IDefaultApiClient_def.hpp"
#include "Unity/Services/Vivox/Mint/Default/zzzz__ConnectTokenV1Request_def.hpp"
#include "Unity/Services/Vivox/Mint/Default/zzzz__JoinChannelV1Request_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__IHttpClient_def.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Configuration_def.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Response_1_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::*)()>(
    &::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x170a530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x170aa4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "operationConfiguration", ty: "::Unity::Services::Vivox::Mint::Configuration*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "request", ty:
// "::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_statusCodeToTypeMap_5__2", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::__DefaultApiClient___ConnectTokenV1Async_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __t__builder,
    ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration, ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* __4__this,
    ::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request* request, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* _statusCodeToTypeMap_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->operationConfiguration = operationConfiguration;
  this->__4__this = __4__this;
  this->request = request;
  this->_statusCodeToTypeMap_5__2 = _statusCodeToTypeMap_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___ConnectTokenV1Async_d__7::__DefaultApiClient___ConnectTokenV1Async_d__7() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::*)()>(
    &::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x170aaa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x170afc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "operationConfiguration", ty: "::Unity::Services::Vivox::Mint::Configuration*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "request", ty:
// "::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_statusCodeToTypeMap_5__2", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::__DefaultApiClient___JoinChannelV1Async_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __t__builder,
    ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration, ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* __4__this,
    ::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request* request, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* _statusCodeToTypeMap_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->operationConfiguration = operationConfiguration;
  this->__4__this = __4__this;
  this->request = request;
  this->_statusCodeToTypeMap_5__2 = _statusCodeToTypeMap_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Apis::Default::__DefaultApiClient___JoinChannelV1Async_d__8::__DefaultApiClient___JoinChannelV1Async_d__8() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient.get_Configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::Mint::Configuration* (
    ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::*)()>(&::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::get_Configuration)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x170a21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), "get_Configuration",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient.set_Configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::*)(
    ::Unity::Services::Vivox::Mint::Configuration*)>(&::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::set_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170a2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), "set_Configuration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::*)(
    ::Unity::Services::Vivox::Mint::Http::IHttpClient*, ::Unity::Services::Authentication::Internal::IAccessToken*, ::Unity::Services::Vivox::Mint::Configuration*)>(
    &::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x170a2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Internal::IAccessToken*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient.ConnectTokenV1Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>* (
    ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::*)(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request*, ::Unity::Services::Vivox::Mint::Configuration*)>(
    &::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::ConnectTokenV1Async)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x170a320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), "ConnectTokenV1Async",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient.JoinChannelV1Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>* (
    ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::*)(::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request*, ::Unity::Services::Vivox::Mint::Configuration*)>(
    &::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::JoinChannelV1Async)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x170a428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), "JoinChannelV1Async", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient"
constexpr Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::operator ::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*() noexcept {
  return static_cast<::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient"
constexpr ::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*
Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::i___Unity__Services__Vivox__Mint__Apis__Default__IDefaultApiClient() noexcept {
  return static_cast<::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*>(static_cast<void*>(this));
}
constexpr ::Unity::Services::Authentication::Internal::IAccessToken*& Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::__cordl_internal_get__accessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessToken;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Authentication::Internal::IAccessToken*> const&
Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::__cordl_internal_get__accessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessToken;
}
constexpr void Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::__cordl_internal_set__accessToken(::Unity::Services::Authentication::Internal::IAccessToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____accessToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::Mint::Configuration*& Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::__cordl_internal_get__configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Configuration*> const&
Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::__cordl_internal_get__configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr void Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::__cordl_internal_set__configuration(::Unity::Services::Vivox::Mint::Configuration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____configuration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::Mint::Configuration* Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::get_Configuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), "get_Configuration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Configuration*, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::set_Configuration(::Unity::Services::Vivox::Mint::Configuration* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), "set_Configuration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param configuration: ::Unity::Services::Vivox::Mint::Configuration* (default: nullptr)
inline ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*
Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::New_ctor(::Unity::Services::Vivox::Mint::Http::IHttpClient* httpClient,
                                                                        ::Unity::Services::Authentication::Internal::IAccessToken* accessToken,
                                                                        ::Unity::Services::Vivox::Mint::Configuration* configuration) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>(httpClient, accessToken, configuration));
}
/// @param configuration: ::Unity::Services::Vivox::Mint::Configuration* (default: nullptr)
inline void Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::_ctor(::Unity::Services::Vivox::Mint::Http::IHttpClient* httpClient,
                                                                                 ::Unity::Services::Authentication::Internal::IAccessToken* accessToken,
                                                                                 ::Unity::Services::Vivox::Mint::Configuration* configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Internal::IAccessToken*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, httpClient, accessToken, configuration);
}
/// @param operationConfiguration: ::Unity::Services::Vivox::Mint::Configuration* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>*
Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::ConnectTokenV1Async(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request* request,
                                                                                   ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), "ConnectTokenV1Async", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>*, false>(this, ___internal_method, request,
                                                                                                                                                 operationConfiguration);
}
/// @param operationConfiguration: ::Unity::Services::Vivox::Mint::Configuration* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>*
Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::JoinChannelV1Async(::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request* request,
                                                                                  ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*>::get(), "JoinChannelV1Async", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>*, false>(this, ___internal_method, request,
                                                                                                                                                 operationConfiguration);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient::DefaultApiClient() {}
