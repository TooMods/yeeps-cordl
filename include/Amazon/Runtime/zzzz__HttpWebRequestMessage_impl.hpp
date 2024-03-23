#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_impl.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__HttpWebRequestMessage_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/zzzz__HttpWebRequestMessage_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__IHttpRequest_1_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__StreamTransferProgressArgs_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::*)()>(
    &::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x201d0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x201d69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::HttpWebRequestMessage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::__HttpWebRequestMessage___GetResponseAsync_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __t__builder,
    ::Amazon::Runtime::HttpWebRequestMessage* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__HttpWebRequestMessage___GetResponseAsync_d__20::__HttpWebRequestMessage___GetResponseAsync_d__20() {}
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)(
    ::System::Net::Http::HttpClient*, ::System::Uri*, ::Amazon::Runtime::IClientConfig*)>(&::Amazon::Runtime::HttpWebRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x201adf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpClient*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.get_HttpClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpClient* (::Amazon::Runtime::HttpWebRequestMessage::*)()>(
    &::Amazon::Runtime::HttpWebRequestMessage::get_HttpClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201b89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(),
                                                                               "get_HttpClient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.get_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpRequestMessage* (::Amazon::Runtime::HttpWebRequestMessage::*)()>(
    &::Amazon::Runtime::HttpWebRequestMessage::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201b8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "get_Request",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::HttpWebRequestMessage::*)()>(&::Amazon::Runtime::HttpWebRequestMessage::get_Method)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x201b8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "get_Method",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.set_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)(::StringW)>(
    &::Amazon::Runtime::HttpWebRequestMessage::set_Method)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x201b8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "set_Method", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.get_RequestUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::Amazon::Runtime::HttpWebRequestMessage::*)()>(
    &::Amazon::Runtime::HttpWebRequestMessage::get_RequestUri)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x201b950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(),
                                                                               "get_RequestUri", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.ConfigureRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)(::Amazon::Runtime::IRequestContext*)>(
    &::Amazon::Runtime::HttpWebRequestMessage::ConfigureRequest)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x201b96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "ConfigureRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.SetRequestHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Amazon::Runtime::HttpWebRequestMessage::SetRequestHeaders)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x201bad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "SetRequestHeaders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.GetRequestContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpContent* (::Amazon::Runtime::HttpWebRequestMessage::*)()>(
    &::Amazon::Runtime::HttpWebRequestMessage::GetRequestContent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x201bed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(),
                                                                               "GetRequestContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.GetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::IWebResponseData* (::Amazon::Runtime::HttpWebRequestMessage::*)()>(
    &::Amazon::Runtime::HttpWebRequestMessage::GetResponse)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x201c044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "GetResponse",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)()>(&::Amazon::Runtime::HttpWebRequestMessage::Abort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x201c28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "Abort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.GetResponseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>* (
    ::Amazon::Runtime::HttpWebRequestMessage::*)(::System::Threading::CancellationToken)>(&::Amazon::Runtime::HttpWebRequestMessage::GetResponseAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x201c16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "GetResponseAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.WriteToRequestBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)(
    ::System::Net::Http::HttpContent*, ::System::IO::Stream*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, ::Amazon::Runtime::IRequestContext*)>(
    &::Amazon::Runtime::HttpWebRequestMessage::WriteToRequestBody)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x201c290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "WriteToRequestBody", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.WriteToRequestBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)(
    ::System::Net::Http::HttpContent*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
    &::Amazon::Runtime::HttpWebRequestMessage::WriteToRequestBody)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x201cc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "WriteToRequestBody", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.GetRequestContentAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpContent*>* (
    ::Amazon::Runtime::HttpWebRequestMessage::*)()>(&::Amazon::Runtime::HttpWebRequestMessage::GetRequestContentAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x201bfc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(),
                                                                               "GetRequestContentAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.WriteContentHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Amazon::Runtime::HttpWebRequestMessage::WriteContentHeaders)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x201c518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "WriteContentHeaders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)()>(&::Amazon::Runtime::HttpWebRequestMessage::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x201cd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpWebRequestMessage::*)(bool)>(&::Amazon::Runtime::HttpWebRequestMessage::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x201cdd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpWebRequestMessage.SetupProgressListeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Amazon::Runtime::HttpWebRequestMessage::*)(::System::IO::Stream*, int64_t, ::System::Object*, ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*)>(
    &::Amazon::Runtime::HttpWebRequestMessage::SetupProgressListeners)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x201ce04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "SetupProgressListeners", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>"
constexpr Amazon::Runtime::HttpWebRequestMessage::operator ::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>*() noexcept {
  return static_cast<::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>"
constexpr ::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>*
Amazon::Runtime::HttpWebRequestMessage::i___Amazon__Runtime__IHttpRequest_1___System__Net__Http__HttpContent__() noexcept {
  return static_cast<::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::HttpWebRequestMessage::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::HttpWebRequestMessage::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::System::Net::Http::HttpRequestMessage*& Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_get__request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpRequestMessage*> const& Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_get__request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr void Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_set__request(::System::Net::Http::HttpRequestMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Http::HttpClient*& Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_get__httpClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpClient;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_get__httpClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpClient;
}
constexpr void Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_set__httpClient(::System::Net::Http::HttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____httpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::IClientConfig*& Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_get__clientConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_get__clientConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientConfig;
}
constexpr void Amazon::Runtime::HttpWebRequestMessage::__cordl_internal_set__clientConfig(::Amazon::Runtime::IClientConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::HttpWebRequestMessage::setStaticF_ContentHeaderNames(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ContentHeaderNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::HttpWebRequestMessage::getStaticF_ContentHeaderNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ContentHeaderNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get>();
}
inline ::Amazon::Runtime::HttpWebRequestMessage* Amazon::Runtime::HttpWebRequestMessage::New_ctor(::System::Net::Http::HttpClient* httpClient, ::System::Uri* requestUri,
                                                                                                  ::Amazon::Runtime::IClientConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::HttpWebRequestMessage*>(httpClient, requestUri, config));
}
inline void Amazon::Runtime::HttpWebRequestMessage::_ctor(::System::Net::Http::HttpClient* httpClient, ::System::Uri* requestUri, ::Amazon::Runtime::IClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpClient*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, httpClient, requestUri, config);
}
inline ::System::Net::Http::HttpClient* Amazon::Runtime::HttpWebRequestMessage::get_HttpClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "get_HttpClient",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpClient*, false>(this, ___internal_method);
}
inline ::System::Net::Http::HttpRequestMessage* Amazon::Runtime::HttpWebRequestMessage::get_Request() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "get_Request",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpRequestMessage*, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::HttpWebRequestMessage::get_Method() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "get_Method",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::HttpWebRequestMessage::set_Method(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "set_Method", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* Amazon::Runtime::HttpWebRequestMessage::get_RequestUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "get_RequestUri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::HttpWebRequestMessage::ConfigureRequest(::Amazon::Runtime::IRequestContext* requestContext) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "ConfigureRequest", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContext);
}
inline void Amazon::Runtime::HttpWebRequestMessage::SetRequestHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "SetRequestHeaders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headers);
}
inline ::System::Net::Http::HttpContent* Amazon::Runtime::HttpWebRequestMessage::GetRequestContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(),
                                                                             "GetRequestContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* Amazon::Runtime::HttpWebRequestMessage::GetResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "GetResponse",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::IWebResponseData*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::HttpWebRequestMessage::Abort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "Abort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>*
Amazon::Runtime::HttpWebRequestMessage::GetResponseAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "GetResponseAsync", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>*, false>(this, ___internal_method, cancellationToken);
}
inline void Amazon::Runtime::HttpWebRequestMessage::WriteToRequestBody(::System::Net::Http::HttpContent* requestContent, ::System::IO::Stream* contentStream,
                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders,
                                                                       ::Amazon::Runtime::IRequestContext* requestContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "WriteToRequestBody", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContent, contentStream, contentHeaders, requestContext);
}
inline void Amazon::Runtime::HttpWebRequestMessage::WriteToRequestBody(::System::Net::Http::HttpContent* requestContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> content,
                                                                       ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "WriteToRequestBody", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContent, content, contentHeaders);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpContent*>* Amazon::Runtime::HttpWebRequestMessage::GetRequestContentAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(),
                                                                             "GetRequestContentAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpContent*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::HttpWebRequestMessage::WriteContentHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "WriteContentHeaders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentHeaders);
}
inline void Amazon::Runtime::HttpWebRequestMessage::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::HttpWebRequestMessage::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::IO::Stream* Amazon::Runtime::HttpWebRequestMessage::SetupProgressListeners(::System::IO::Stream* originalStream, int64_t progressUpdateInterval, ::System::Object* sender,
                                                                                            ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpWebRequestMessage*>::get(), "SetupProgressListeners", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, originalStream, progressUpdateInterval, sender, callback);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::HttpWebRequestMessage::HttpWebRequestMessage() {}
