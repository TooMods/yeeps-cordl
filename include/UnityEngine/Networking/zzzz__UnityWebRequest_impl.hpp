#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__IMultipartFormSection_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod::__UnityWebRequest__UnityWebRequestMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod::__UnityWebRequest__UnityWebRequestMethod() {}
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod::Get{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod::Post{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod::Put{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod::Head{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod::Custom{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::__UnityWebRequest__UnityWebRequestError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::__UnityWebRequest__UnityWebRequestError() {}
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::OK{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::Unknown{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::SDKError{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::UnsupportedProtocol{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::MalformattedUrl{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::CannotResolveProxy{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::CannotResolveHost{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::CannotConnectToHost{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::AccessDenied{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::GenericHttpError{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::WriteError{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::ReadError{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::OutOfMemory{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::Timeout{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::HTTPPostError{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::SSLCannotConnect{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::Aborted{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::TooManyRedirects{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::ReceivedNoData{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::SSLNotSupported{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::FailedToSendData{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::FailedToReceiveData{ static_cast<int32_t>(0x15) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::SSLCertificateError{ static_cast<int32_t>(0x16) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::SSLCipherNotAvailable{ static_cast<int32_t>(0x17) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::SSLCACertError{ static_cast<int32_t>(0x18) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::UnrecognizedContentEncoding{ static_cast<int32_t>(
    0x19) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::LoginFailed{ static_cast<int32_t>(0x1a) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::SSLShutdownFailed{ static_cast<int32_t>(0x1b) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError::NoInternetConnection{ static_cast<int32_t>(0x1c) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::__UnityWebRequest__Result::__UnityWebRequest__Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::__UnityWebRequest__Result::__UnityWebRequest__Result() {}
constexpr ::UnityEngine::Networking::__UnityWebRequest__Result UnityEngine::Networking::__UnityWebRequest__Result::InProgress{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__Result UnityEngine::Networking::__UnityWebRequest__Result::Success{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__Result UnityEngine::Networking::__UnityWebRequest__Result::ConnectionError{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__Result UnityEngine::Networking::__UnityWebRequest__Result::ProtocolError{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Networking::__UnityWebRequest__Result UnityEngine::Networking::__UnityWebRequest__Result::DataProcessingError{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetWebErrorString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError)>(
    &::UnityEngine::Networking::UnityWebRequest::GetWebErrorString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a7770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetWebErrorString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetHTTPStatusString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int64_t)>(&::UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a77ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetHTTPStatusString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeCertificateHandlerOnDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30a77e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_disposeCertificateHandlerOnDispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeCertificateHandlerOnDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(
    &::UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30a77f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_disposeCertificateHandlerOnDispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeDownloadHandlerOnDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30a77fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_disposeDownloadHandlerOnDispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeDownloadHandlerOnDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(
    &::UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30a7804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_disposeDownloadHandlerOnDispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeUploadHandlerOnDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30a7810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_disposeUploadHandlerOnDispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeUploadHandlerOnDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(
    &::UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30a7818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_disposeUploadHandlerOnDispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::UnityEngine::Networking::UnityWebRequest::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x30a7824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Release)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a784c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Release",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::InternalDestroy)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x30a7888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "InternalDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::InternalSetDefaults)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x30a7980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "InternalSetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW, ::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x30a7994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(
    ::StringW, ::StringW, ::UnityEngine::Networking::DownloadHandler*, ::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x30a7c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UploadHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x30a7ee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x30a7fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.DisposeHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::DisposeHandlers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x30a7f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "DisposeHandlers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.BeginWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::BeginWebRequest)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a80f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "BeginWebRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SendWebRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::SendWebRequest)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x30a812c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "SendWebRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Abort)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a7944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Abort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod)>(&::UnityEngine::Networking::UnityWebRequest::SetMethod)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x30a8174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(
    ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetMethod)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x30a81b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "InternalSetMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCustomMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::StringW)>(&::UnityEngine::Networking::UnityWebRequest::SetCustomMethod)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x30a8300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetCustomMethod",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetCustomMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x30a8344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "InternalSetCustomMethod",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::set_method)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x30a7a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_method", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::GetError)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a8450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_error)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x30a848c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_error",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_url
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_url)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a86a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_url",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_url
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::set_url)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30a7a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_url", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetUrl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a86e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetUrl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::SetUrl)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x30a882c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetUrl", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::InternalSetUrl)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x30a8720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "InternalSetUrl",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_responseCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_responseCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a866c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "get_responseCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isModifiable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_isModifiable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a82c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "get_isModifiable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_result
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::__UnityWebRequest__Result (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_result)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a8630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_result",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetRequestHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::StringW, ::StringW)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetRequestHeader)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x30a8870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "InternalSetRequestHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetRequestHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW, ::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::SetRequestHeader)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x30a88c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetRequestHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::GetResponseHeader)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x30a8a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetResponseHeader",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeaderKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::GetResponseHeaderKeys)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x30a8a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "GetResponseHeaderKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (
    ::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetResponseHeaders)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x30a8ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "GetResponseHeaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUploadHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::SetUploadHandler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x30a8ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetUploadHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UploadHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_uploadHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UploadHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_uploadHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30a804c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "get_uploadHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_uploadHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::UploadHandler*)>(
    &::UnityEngine::Networking::UnityWebRequest::set_uploadHandler)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x30a7dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_uploadHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UploadHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetDownloadHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::UnityEngine::Networking::DownloadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::SetDownloadHandler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x30a8ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetDownloadHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_downloadHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::DownloadHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_downloadHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30a8044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "get_downloadHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_downloadHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::DownloadHandler*)>(
    &::UnityEngine::Networking::UnityWebRequest::set_downloadHandler)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x30a7cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_downloadHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_certificateHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::CertificateHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_certificateHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30a8054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "get_certificateHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetTimeoutMsec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    int32_t)>(&::UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x30a8d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetTimeoutMsec",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(
    &::UnityEngine::Networking::UnityWebRequest::set_timeout)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x30a8d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_timeout", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::Get)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x30a8ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.EscapeURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::EscapeURL)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30a8fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "EscapeURL", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.EscapeURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::UnityEngine::Networking::UnityWebRequest::EscapeURL)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x30a8fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "EscapeURL", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SerializeFormSections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::UnityEngine::Networking::UnityWebRequest::SerializeFormSections)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0x30a90b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SerializeFormSections", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GenerateBoundary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)()>(&::UnityEngine::Networking::UnityWebRequest::GenerateBoundary)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x30a9880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                               "GenerateBoundary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Networking::UnityWebRequest::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Networking::UnityWebRequest::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_Ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::UnityEngine::Networking::DownloadHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_DownloadHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadHandler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::DownloadHandler*> const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_DownloadHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_DownloadHandler(::UnityEngine::Networking::DownloadHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DownloadHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Networking::UploadHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_UploadHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UploadHandler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UploadHandler*> const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_UploadHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UploadHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_UploadHandler(::UnityEngine::Networking::UploadHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UploadHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Networking::CertificateHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_CertificateHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CertificateHandler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::CertificateHandler*> const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_CertificateHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CertificateHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_CertificateHandler(::UnityEngine::Networking::CertificateHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CertificateHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Uri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Uri;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_Uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeCertificateHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeCertificateHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeCertificateHandlerOnDispose_k__BackingField = value;
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeDownloadHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeDownloadHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeDownloadHandlerOnDispose_k__BackingField = value;
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeUploadHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeUploadHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeUploadHandlerOnDispose_k__BackingField = value;
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetWebErrorString(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError err) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetWebErrorString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, err);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString(int64_t responseCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetHTTPStatusString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, responseCode);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_disposeCertificateHandlerOnDispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_disposeCertificateHandlerOnDispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_disposeDownloadHandlerOnDispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_disposeDownloadHandlerOnDispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_disposeUploadHandlerOnDispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_disposeUploadHandlerOnDispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void* UnityEngine::Networking::UnityWebRequest::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "InternalDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetDefaults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "InternalSetDefaults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::StringW url, ::StringW method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Networking::UnityWebRequest*>(url, method));
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::StringW url, ::StringW method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, method);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::StringW url, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                                                                      ::UnityEngine::Networking::UploadHandler* uploadHandler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Networking::UnityWebRequest*>(url, method, downloadHandler, uploadHandler));
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::StringW url, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                            ::UnityEngine::Networking::UploadHandler* uploadHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UploadHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, method, downloadHandler, uploadHandler);
}
inline void UnityEngine::Networking::UnityWebRequest::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::DisposeHandlers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "DisposeHandlers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequest::BeginWebRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "BeginWebRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequest::SendWebRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "SendWebRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Abort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Abort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError
UnityEngine::Networking::UnityWebRequest::SetMethod(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod methodType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, false>(this, ___internal_method, methodType);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetMethod(::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod methodType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "InternalSetMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodType);
}
inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCustomMethod(::StringW customMethodName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetCustomMethod",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, false>(this, ___internal_method, customMethodName);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod(::StringW customMethodName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "InternalSetCustomMethod",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customMethodName);
}
inline void UnityEngine::Networking::UnityWebRequest::set_method(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_method", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::GetError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::get_error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_error",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::get_url() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_url",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_url(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_url", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetUrl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetUrl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUrl(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetUrl", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, false>(this, ___internal_method, url);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetUrl(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "InternalSetUrl",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url);
}
inline int64_t UnityEngine::Networking::UnityWebRequest::get_responseCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "get_responseCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isModifiable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "get_isModifiable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::__UnityWebRequest__Result UnityEngine::Networking::UnityWebRequest::get_result() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "get_result",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__Result, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::InternalSetRequestHeader(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "InternalSetRequestHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, false>(this, ___internal_method, name, value);
}
inline void UnityEngine::Networking::UnityWebRequest::SetRequestHeader(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetRequestHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetResponseHeader(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "GetResponseHeader",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Networking::UnityWebRequest::GetResponseHeaderKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "GetResponseHeaderKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::Networking::UnityWebRequest::GetResponseHeaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "GetResponseHeaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUploadHandler(::UnityEngine::Networking::UploadHandler* uh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetUploadHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UploadHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, false>(this, ___internal_method, uh);
}
inline ::UnityEngine::Networking::UploadHandler* UnityEngine::Networking::UnityWebRequest::get_uploadHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "get_uploadHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UploadHandler*, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_uploadHandler(::UnityEngine::Networking::UploadHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_uploadHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UploadHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetDownloadHandler(::UnityEngine::Networking::DownloadHandler* dh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetDownloadHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, false>(this, ___internal_method, dh);
}
inline ::UnityEngine::Networking::DownloadHandler* UnityEngine::Networking::UnityWebRequest::get_downloadHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "get_downloadHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::DownloadHandler*, false>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_downloadHandler(::UnityEngine::Networking::DownloadHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_downloadHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::DownloadHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::CertificateHandler* UnityEngine::Networking::UnityWebRequest::get_certificateHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "get_certificateHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::CertificateHandler*, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec(int32_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SetTimeoutMsec",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::__UnityWebRequest__UnityWebRequestError, false>(this, ___internal_method, timeout);
}
inline void UnityEngine::Networking::UnityWebRequest::set_timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "set_timeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::Get(::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*, false>(nullptr, ___internal_method, uri);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::EscapeURL(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "EscapeURL", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::EscapeURL(::StringW s, ::System::Text::Encoding* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "EscapeURL", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s, e);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
UnityEngine::Networking::UnityWebRequest::SerializeFormSections(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* multipartFormSections,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> boundary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(), "SerializeFormSections", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, multipartFormSections, boundary);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::Networking::UnityWebRequest::GenerateBoundary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                                                             "GenerateBoundary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequest::UnityWebRequest() {}
