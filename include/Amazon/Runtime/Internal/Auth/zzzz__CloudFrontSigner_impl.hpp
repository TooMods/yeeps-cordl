#pragma once
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_impl.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__CloudFrontSigner_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__ClientProtocol_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::CloudFrontSigner.get_Protocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::ClientProtocol (::Amazon::Runtime::Internal::Auth::CloudFrontSigner::*)()>(
    &::Amazon::Runtime::Internal::Auth::CloudFrontSigner::get_Protocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e575c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::CloudFrontSigner.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::CloudFrontSigner::*)(
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*, ::Amazon::Runtime::Internal::Util::RequestMetrics*, ::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::Auth::CloudFrontSigner::Sign)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x25e5764;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::CloudFrontSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::CloudFrontSigner::*)()>(
    &::Amazon::Runtime::Internal::Auth::CloudFrontSigner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e5aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Auth::ClientProtocol Amazon::Runtime::Internal::Auth::CloudFrontSigner::get_Protocol() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::ClientProtocol, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Auth::CloudFrontSigner::Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig,
                                                                    ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, clientConfig, metrics, awsAccessKeyId, awsSecretAccessKey);
}
inline ::Amazon::Runtime::Internal::Auth::CloudFrontSigner* Amazon::Runtime::Internal::Auth::CloudFrontSigner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>());
}
inline void Amazon::Runtime::Internal::Auth::CloudFrontSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::CloudFrontSigner*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Auth::CloudFrontSigner::CloudFrontSigner() {}
