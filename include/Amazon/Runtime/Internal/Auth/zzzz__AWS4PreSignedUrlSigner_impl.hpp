#pragma once
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS4Signer_impl.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS4PreSignedUrlSigner_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS4SigningResult_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::*)(
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*, ::Amazon::Runtime::Internal::Util::RequestMetrics*, ::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::Sign)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25e4074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner.SignRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AWS4SigningResult* (
    ::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::*)(::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*, ::Amazon::Runtime::Internal::Util::RequestMetrics*,
                                                                  ::StringW, ::StringW)>(&::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::SignRequest)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x25e40c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(), "SignRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner.SignRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::Internal::Auth::AWS4SigningResult* (*)(::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*, ::Amazon::Runtime::Internal::Util::RequestMetrics*,
                                                                          ::StringW, ::StringW, ::StringW, ::StringW)>(&::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::SignRequest)> {
  constexpr static std::size_t size = 0xf60;
  constexpr static std::size_t addrs = 0x25e4254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(), "SignRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::*)()>(
    &::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25e51b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::setStaticF_ServicesUsingUnsignedPayload(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ServicesUsingUnsignedPayload",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::getStaticF_ServicesUsingUnsignedPayload() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "ServicesUsingUnsignedPayload",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get>();
}
inline void Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig,
                                                                          ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, clientConfig, metrics, awsAccessKeyId, awsSecretAccessKey);
}
inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::SignRequest(::Amazon::Runtime::Internal::IRequest* request,
                                                                                                                                  ::Amazon::Runtime::IClientConfig* clientConfig,
                                                                                                                                  ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics,
                                                                                                                                  ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(), "SignRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*, false>(this, ___internal_method, request, clientConfig, metrics, awsAccessKeyId,
                                                                                                           awsSecretAccessKey);
}
inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::SignRequest(::Amazon::Runtime::Internal::IRequest* request,
                                                                                                                                  ::Amazon::Runtime::IClientConfig* clientConfig,
                                                                                                                                  ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics,
                                                                                                                                  ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey,
                                                                                                                                  ::StringW service, ::StringW overrideSigningRegion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(), "SignRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::RequestMetrics*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*, false>(nullptr, ___internal_method, request, clientConfig, metrics, awsAccessKeyId,
                                                                                                           awsSecretAccessKey, service, overrideSigningRegion);
}
inline ::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner* Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>());
}
inline void Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Auth::AWS4PreSignedUrlSigner::AWS4PreSignedUrlSigner() {}
