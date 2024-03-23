#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClient_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__IHttpClient_def.hpp"
#include "UnityEngine/Networking/zzzz__IMultipartFormSection_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::*)()>(
    &::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x1702308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1702510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "url", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "body", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "headers", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "requestTimeout", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::__HttpClient___MakeRequestAsync_d__1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
    ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this, ::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->method = method;
  this->url = url;
  this->body = body;
  this->headers = headers;
  this->requestTimeout = requestTimeout;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1::__HttpClient___MakeRequestAsync_d__1() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::*)()>(
    &::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x1702568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1702774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "url", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "body", ty: "::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "headers", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "requestTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "boundary", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::__HttpClient___MakeRequestAsync_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
    ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this, ::StringW method, ::StringW url, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::StringW boundary,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->method = method;
  this->url = url;
  this->body = body;
  this->headers = headers;
  this->requestTimeout = requestTimeout;
  this->boundary = boundary;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2::__HttpClient___MakeRequestAsync_d__2() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::*)()>(
    &::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x17027cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17029b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "url", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "body", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "headers", ty: "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "requestTimeout", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::__HttpClient___CreateWebRequestAsync_d__3(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
    ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this, ::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->method = method;
  this->url = url;
  this->body = body;
  this->headers = headers;
  this->requestTimeout = requestTimeout;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3::__HttpClient___CreateWebRequestAsync_d__3() {}
//  Writing Method size for method: ::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::*)()>(
    &::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x824;
  constexpr static std::size_t addrs = 0x1702b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d>::get(), "MoveNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1703460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_request_5__2", ty:
// "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
    ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0* __4__this, ::UnityEngine::Networking::UnityWebRequest* _request_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_request_5__2 = _request_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::*)()>(
    &::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1702a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0._CreateHttpClientResponse_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::*)()>(&::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::_CreateHttpClientResponse_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1702a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0*>::get(),
                                                 "<CreateHttpClientResponse>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___url;
}
constexpr ::StringW const& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___url;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_set_url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::StringW const& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_set_method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_set_headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_requestTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestTimeout;
}
constexpr int32_t const& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_requestTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestTimeout;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_set_requestTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestTimeout = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get_body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_set_body(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___body)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::Mint::Http::HttpClient*& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Http::HttpClient*> const&
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::Mint::Http::HttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0* Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0*>());
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::_CreateHttpClientResponse_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0*>::get(),
                                               "<CreateHttpClientResponse>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0::__HttpClient____c__DisplayClass4_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::*)()>(
    &::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x17034b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x170391c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "url", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "headers", ty:
// "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "requestTimeout", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "body", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::__HttpClient___CreateHttpClientResponse_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder, ::StringW url, ::StringW method,
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
    ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->url = url;
  this->method = method;
  this->headers = headers;
  this->requestTimeout = requestTimeout;
  this->body = body;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4::__HttpClient___CreateHttpClientResponse_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::*)()>(
    &::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x1703a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1704068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
    ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::*)()>(
    &::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1703974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0._CreateWebRequestAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::*)()>(&::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::_CreateWebRequestAsync_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x170397c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0*>::get(),
                                                 "<CreateWebRequestAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_boundary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundary;
}
constexpr ::StringW const& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_boundary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundary;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_set_boundary(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___boundary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___url;
}
constexpr ::StringW const& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___url;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_set_url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::StringW const& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_set_method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_set_headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_requestTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestTimeout;
}
constexpr int32_t const& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_requestTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestTimeout;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_set_requestTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestTimeout = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*&
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*> const&
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get_body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr void
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_set_body(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___body)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::Mint::Http::HttpClient*& Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Http::HttpClient*> const&
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__cordl_internal_set___4__this(::Unity::Services::Vivox::Mint::Http::HttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0* Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0*>());
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::_CreateWebRequestAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0*>::get(),
                                               "<CreateWebRequestAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0::__HttpClient____c__DisplayClass5_0() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::*)()>(
    &::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x17040c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1704524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "boundary", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "method", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "headers", ty: "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "requestTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "body", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::__HttpClient___CreateWebRequestAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder, ::StringW boundary, ::StringW url,
    ::StringW method, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout,
    ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body, ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->boundary = boundary;
  this->url = url;
  this->method = method;
  this->headers = headers;
  this->requestTimeout = requestTimeout;
  this->body = body;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5::__HttpClient___CreateWebRequestAsync_d__5() {}
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::HttpClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::HttpClient::*)()>(
    &::Unity::Services::Vivox::Mint::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1701a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::HttpClient.MakeRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::HttpClient::*)(::StringW, ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, int32_t)>(
    &::Unity::Services::Vivox::Mint::Http::HttpClient::MakeRequestAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1701bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "MakeRequestAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::HttpClient.MakeRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::HttpClient::*)(::StringW, ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*,
                                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, int32_t, ::StringW)>(
    &::Unity::Services::Vivox::Mint::Http::HttpClient::MakeRequestAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1701cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "MakeRequestAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::HttpClient.CreateWebRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::HttpClient::*)(::StringW, ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, int32_t)>(
    &::Unity::Services::Vivox::Mint::Http::HttpClient::CreateWebRequestAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1701e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "CreateWebRequestAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::HttpClient.CreateHttpClientResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::HttpClient::*)(::StringW, ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, int32_t)>(
    &::Unity::Services::Vivox::Mint::Http::HttpClient::CreateHttpClientResponse)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1701f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "CreateHttpClientResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::HttpClient.CreateWebRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::HttpClient::*)(::StringW, ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*,
                                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, int32_t, ::StringW)>(
    &::Unity::Services::Vivox::Mint::Http::HttpClient::CreateWebRequestAsync)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x170205c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "CreateWebRequestAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::HttpClient.SetupMultipartRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::UnityEngine::Networking::UnityWebRequest*, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Unity::Services::Vivox::Mint::Http::HttpClient::SetupMultipartRequest)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1702194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "SetupMultipartRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::HttpClient.SendWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (
    ::Unity::Services::Vivox::Mint::Http::HttpClient::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Unity::Services::Vivox::Mint::Http::HttpClient::SendWebRequest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17022f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "SendWebRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Vivox::Mint::Http::IHttpClient"
constexpr Unity::Services::Vivox::Mint::Http::HttpClient::operator ::Unity::Services::Vivox::Mint::Http::IHttpClient*() noexcept {
  return static_cast<::Unity::Services::Vivox::Mint::Http::IHttpClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::Mint::Http::IHttpClient"
constexpr ::Unity::Services::Vivox::Mint::Http::IHttpClient* Unity::Services::Vivox::Mint::Http::HttpClient::i___Unity__Services__Vivox__Mint__Http__IHttpClient() noexcept {
  return static_cast<::Unity::Services::Vivox::Mint::Http::IHttpClient*>(static_cast<void*>(this));
}
inline ::Unity::Services::Vivox::Mint::Http::HttpClient* Unity::Services::Vivox::Mint::Http::HttpClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::HttpClient*>());
}
inline void Unity::Services::Vivox::Mint::Http::HttpClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::HttpClient::MakeRequestAsync(::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "MakeRequestAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method, method, url, body,
                                                                                                                                                    headers, requestTimeout);
}
/// @param boundary: ::StringW (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::HttpClient::MakeRequestAsync(::StringW method, ::StringW url, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body,
                                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::StringW boundary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "MakeRequestAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method, method, url, body,
                                                                                                                                                    headers, requestTimeout, boundary);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::HttpClient::CreateWebRequestAsync(::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                                                      ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "CreateWebRequestAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method, method, url, body,
                                                                                                                                                    headers, requestTimeout);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::HttpClient::CreateHttpClientResponse(::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "CreateHttpClientResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method, method, url, body,
                                                                                                                                                    headers, requestTimeout);
}
/// @param boundary: ::StringW (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::HttpClient::CreateWebRequestAsync(::StringW method, ::StringW url, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body,
                                                                      ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::StringW boundary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "CreateWebRequestAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method, method, url, body,
                                                                                                                                                    headers, requestTimeout, boundary);
}
inline ::UnityEngine::Networking::UnityWebRequest*
Unity::Services::Vivox::Mint::Http::HttpClient::SetupMultipartRequest(::UnityEngine::Networking::UnityWebRequest* request,
                                                                      ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* multipartFormSections,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> boundary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "SetupMultipartRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(nullptr, ___internal_method, request, multipartFormSections, boundary);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* Unity::Services::Vivox::Mint::Http::HttpClient::SendWebRequest(::UnityEngine::Networking::UnityWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpClient*>::get(), "SendWebRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*, false>(this, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::HttpClient::HttpClient() {}
