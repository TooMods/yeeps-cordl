#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS4Signer_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__ClientProtocol_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__RequestMetrics_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__SigningAlgorithm_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner.get_AWS4SignerInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AWS4Signer* (::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::*)()>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::get_AWS4SignerInstance)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2453fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(),
                                                                               "get_AWS4SignerInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner.ComputeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::Amazon::Runtime::SigningAlgorithm)>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::ComputeHash)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x24540ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "ComputeHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner.ComputeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW, ::Amazon::Runtime::SigningAlgorithm)>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::ComputeHash)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2454300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "ComputeHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::*)(
    ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*, ::Amazon::Runtime::Internal::Util::RequestMetrics*, ::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::Sign)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner.get_Protocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::ClientProtocol (::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::*)()>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::get_Protocol)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner.UseV4Signing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::UseV4Signing)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x2454518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "UseV4Signing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner.SelectSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (
    ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::*)(::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::SelectSigner)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2454aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "SelectSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner.SelectSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (
    ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::*)(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, bool, ::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::SelectSigner)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2454b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "SelectSigner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::*)()>(
    &::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2454b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Auth::AWS4Signer*& Amazon::Runtime::Internal::Auth::AbstractAWSSigner::__cordl_internal_get__aws4Signer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aws4Signer;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AWS4Signer*> const& Amazon::Runtime::Internal::Auth::AbstractAWSSigner::__cordl_internal_get__aws4Signer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aws4Signer;
}
constexpr void Amazon::Runtime::Internal::Auth::AbstractAWSSigner::__cordl_internal_set__aws4Signer(::Amazon::Runtime::Internal::Auth::AWS4Signer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____aws4Signer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::Auth::AWS4Signer* Amazon::Runtime::Internal::Auth::AbstractAWSSigner::get_AWS4SignerInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(),
                                                                             "get_AWS4SignerInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AWS4Signer*, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Auth::AbstractAWSSigner::ComputeHash(::StringW data, ::StringW secretkey, ::Amazon::Runtime::SigningAlgorithm algorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "ComputeHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, data, secretkey, algorithm);
}
inline ::StringW Amazon::Runtime::Internal::Auth::AbstractAWSSigner::ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW secretkey, ::Amazon::Runtime::SigningAlgorithm algorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "ComputeHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, data, secretkey, algorithm);
}
inline void Amazon::Runtime::Internal::Auth::AbstractAWSSigner::Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig,
                                                                     ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, clientConfig, metrics, awsAccessKeyId, awsSecretAccessKey);
}
inline ::Amazon::Runtime::Internal::Auth::ClientProtocol Amazon::Runtime::Internal::Auth::AbstractAWSSigner::get_Protocol() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::ClientProtocol, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Auth::AbstractAWSSigner::UseV4Signing(bool useSigV4Setting, ::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "UseV4Signing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, useSigV4Setting, request, config);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::Internal::Auth::AbstractAWSSigner::SelectSigner(::Amazon::Runtime::Internal::IRequest* request,
                                                                                                                              ::Amazon::Runtime::IClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "SelectSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method, request, config);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::Internal::Auth::AbstractAWSSigner::SelectSigner(::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* defaultSigner,
                                                                                                                              bool useSigV4Setting, ::Amazon::Runtime::Internal::IRequest* request,
                                                                                                                              ::Amazon::Runtime::IClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(), "SelectSigner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method, defaultSigner, useSigV4Setting, request, config);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::Runtime::Internal::Auth::AbstractAWSSigner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>());
}
inline void Amazon::Runtime::Internal::Auth::AbstractAWSSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner::AbstractAWSSigner() {}
