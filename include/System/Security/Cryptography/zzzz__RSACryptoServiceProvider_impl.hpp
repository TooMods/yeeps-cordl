#pragma once
#include "System/Security/Cryptography/zzzz__CspProviderFlags_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSA_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSACryptoServiceProvider_def.hpp"
#include "Mono/Security/Cryptography/zzzz__KeyPairPersistence_def.hpp"
#include "Mono/Security/Cryptography/zzzz__RSAManaged_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__CspKeyContainerInfo_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__ICspAsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAEncryptionPadding_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RSASignaturePadding_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1c8331c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_UseMachineKeyStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1c8335c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "get_UseMachineKeyStore",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.set_UseMachineKeyStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::set_UseMachineKeyStore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1c833b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "set_UseMachineKeyStore",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.HashData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSACryptoServiceProvider::HashData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1c83404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.HashData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSACryptoServiceProvider::HashData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1c83448;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetAlgorithmId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Security::Cryptography::HashAlgorithmName)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::GetAlgorithmId)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1c83474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "GetAlgorithmId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::HashAlgorithmName>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Encrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Encrypt)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1c83620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Decrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Decrypt)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1c8391c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::SignHash)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1c83d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1c83f24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.PaddingModeNotSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::PaddingModeNotSupported)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1c83894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "PaddingModeNotSupported",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1c80dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1c841a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(int32_t)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1c8416c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    int32_t, ::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1c841b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Common
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(int32_t, bool)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x1c8420c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "Common", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Common
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1c84428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "Common", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1c84548;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_KeyExchangeAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::get_KeyExchangeAlgorithm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1c845e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_KeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::get_KeySize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1c84628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_PersistKeyInCsp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::get_PersistKeyInCsp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c84648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "get_PersistKeyInCsp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.set_PersistKeyInCsp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::set_PersistKeyInCsp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1c84650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "set_PersistKeyInCsp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_PublicOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::get_PublicOnly)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1c846e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "get_PublicOnly",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Decrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Decrypt)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1c83adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "Decrypt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.DecryptValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::DecryptValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1c848f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Encrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Encrypt)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1c837e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "Encrypt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.EncryptValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::EncryptValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1c84b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ExportParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::ExportParameters)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1c84ba0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ImportParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::System::Security::Cryptography::RSAParameters)>(&::System::Security::Cryptography::RSACryptoServiceProvider::ImportParameters)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1c84ce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (
    ::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Object*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::GetHash)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x1c84d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "GetHash",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetHashFromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (
    ::System::Security::Cryptography::RSACryptoServiceProvider::*)(::StringW)>(&::System::Security::Cryptography::RSACryptoServiceProvider::GetHashFromString)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1c84f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "GetHashFromString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Object*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1c8526c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::System::IO::Stream*, ::System::Object*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1c85388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Object*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1c852d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetHashNameFromOID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::StringW)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::GetHashNameFromOID)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x1c850a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "GetHashNameFromOID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignHash)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1c85424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignHash)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1c83ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.InternalHashToHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(int32_t)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::InternalHashToHashAlgorithm)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1c8551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "InternalHashToHashAlgorithm",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Object*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::VerifyData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1c85744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "VerifyData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1c85860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "VerifyHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1c840dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "VerifyHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1c85988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.OnKeyGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Object*, ::System::EventArgs*)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::OnKeyGenerated)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1c84664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "OnKeyGenerated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_CspKeyContainerInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CspKeyContainerInfo* (
    ::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_CspKeyContainerInfo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1c859dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "get_CspKeyContainerInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ExportCspBlob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::ExportCspBlob)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1c85a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "ExportCspBlob",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ImportCspBlob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::ImportCspBlob)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1c85b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "ImportCspBlob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
constexpr System::Security::Cryptography::RSACryptoServiceProvider::operator ::System::Security::Cryptography::ICspAsymmetricAlgorithm*() noexcept {
  return static_cast<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
constexpr ::System::Security::Cryptography::ICspAsymmetricAlgorithm* System::Security::Cryptography::RSACryptoServiceProvider::i___System__Security__Cryptography__ICspAsymmetricAlgorithm() noexcept {
  return static_cast<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(static_cast<void*>(this));
}
constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::KeyPairPersistence*> const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___store)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persistKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persistKey;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persistKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persistKey;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_persistKey(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___persistKey = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persisted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persisted;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persisted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persisted;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_persisted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___persisted = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyExportable;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyExportable;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_privateKeyExportable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateKeyExportable = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::Mono::Security::Cryptography::RSAManaged*& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_rsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::RSAManaged*> const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_rsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_rsa(::Mono::Security::Cryptography::RSAManaged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rsa)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::setStaticF_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::CspProviderFlags, "s_UseMachineKeyStore",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get>(
      std::forward<::System::Security::Cryptography::CspProviderFlags>(value));
}
inline ::System::Security::Cryptography::CspProviderFlags System::Security::Cryptography::RSACryptoServiceProvider::getStaticF_s_UseMachineKeyStore() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::CspProviderFlags, "s_UseMachineKeyStore",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get>();
}
inline ::StringW System::Security::Cryptography::RSACryptoServiceProvider::get_SignatureAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                                             "get_UseMachineKeyStore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::set_UseMachineKeyStore(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "set_UseMachineKeyStore",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count,
                                                                                                               ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, count, hashAlgorithm);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::HashData(::System::IO::Stream* data,
                                                                                                               ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, hashAlgorithm);
}
inline int32_t System::Security::Cryptography::RSACryptoServiceProvider::GetAlgorithmId(::System::Security::Cryptography::HashAlgorithmName hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "GetAlgorithmId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::HashAlgorithmName>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, hashAlgorithm);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                                                              ::System::Security::Cryptography::RSAEncryptionPadding* padding) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, padding);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                                                              ::System::Security::Cryptography::RSAEncryptionPadding* padding) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, padding);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::SignHash(::ArrayW<uint8_t, ::Array<uint8_t>*> hash,
                                                                                                               ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                                                                                                               ::System::Security::Cryptography::RSASignaturePadding* padding) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, hash, hashAlgorithm, padding);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature,
                                                                                 ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                                                                                 ::System::Security::Cryptography::RSASignaturePadding* padding) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hash, signature, hashAlgorithm, padding);
}
inline ::System::Exception* System::Security::Cryptography::RSACryptoServiceProvider::PaddingModeNotSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                                             "PaddingModeNotSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RSACryptoServiceProvider*>());
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(::System::Security::Cryptography::CspParameters* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RSACryptoServiceProvider*>(parameters));
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(::System::Security::Cryptography::CspParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(int32_t dwKeySize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RSACryptoServiceProvider*>(dwKeySize));
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(int32_t dwKeySize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dwKeySize);
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(int32_t dwKeySize,
                                                                                                                                      ::System::Security::Cryptography::CspParameters* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RSACryptoServiceProvider*>(dwKeySize, parameters));
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Common(int32_t dwKeySize, bool parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "Common", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Common(::System::Security::Cryptography::CspParameters* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "Common", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::RSACryptoServiceProvider::get_KeyExchangeAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RSACryptoServiceProvider::get_KeySize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::get_PersistKeyInCsp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                                             "get_PersistKeyInCsp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::set_PersistKeyInCsp(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "set_PersistKeyInCsp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::get_PublicOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                                             "get_PublicOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, bool fOAEP) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "Decrypt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rgb, fOAEP);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::DecryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rgb);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, bool fOAEP) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "Encrypt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rgb, fOAEP);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rgb);
}
inline ::System::Security::Cryptography::RSAParameters System::Security::Cryptography::RSACryptoServiceProvider::ExportParameters(bool includePrivateParameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters, false>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::ImportParameters(::System::Security::Cryptography::RSAParameters parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::RSACryptoServiceProvider::GetHash(::System::Object* halg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "GetHash",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*, false>(this, ___internal_method, halg);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::RSACryptoServiceProvider::GetHashFromString(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "GetHashFromString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*, false>(this, ___internal_method, name);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Object* halg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, buffer, halg);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::SignData(::System::IO::Stream* inputStream, ::System::Object* halg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                                             "SignData", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, inputStream, halg);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                               ::System::Object* halg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, buffer, offset, count, halg);
}
inline ::StringW System::Security::Cryptography::RSACryptoServiceProvider::GetHashNameFromOID(::StringW oid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "GetHashNameFromOID",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, oid);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::SignHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::StringW str) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rgbHash, str);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::SignHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, int32_t calgHash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "SignHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rgbHash, calgHash);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::RSACryptoServiceProvider::InternalHashToHashAlgorithm(int32_t calgHash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "InternalHashToHashAlgorithm",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*, false>(nullptr, ___internal_method, calgHash);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Object* halg, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "VerifyData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, buffer, halg, signature);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::StringW str, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "VerifyHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgbHash, str, rgbSignature);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, int32_t calgHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "VerifyHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgbHash, calgHash, rgbSignature);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "OnKeyGenerated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::System::Security::Cryptography::CspKeyContainerInfo* System::Security::Cryptography::RSACryptoServiceProvider::get_CspKeyContainerInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(),
                                                                             "get_CspKeyContainerInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CspKeyContainerInfo*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RSACryptoServiceProvider::ExportCspBlob(bool includePrivateParameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "ExportCspBlob",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::ImportCspBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBlob) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSACryptoServiceProvider*>::get(), "ImportCspBlob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyBlob);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSACryptoServiceProvider::RSACryptoServiceProvider() {}
