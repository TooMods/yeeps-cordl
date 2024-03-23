#pragma once
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_impl.hpp"
#include "ThirdParty/BouncyCastle/OpenSsl/zzzz__PemReader_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
//  Writing Method size for method: ::ThirdParty::BouncyCastle::OpenSsl::PemReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader*)>(
    &::ThirdParty::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x14b3a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::OpenSsl::PemReader.ReadPrivatekey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (::ThirdParty::BouncyCastle::OpenSsl::PemReader::*)()>(
    &::ThirdParty::BouncyCastle::OpenSsl::PemReader::ReadPrivatekey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x14b3a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(),
                                                                               "ReadPrivatekey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::OpenSsl::PemReader.convertSequenceToRSAParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (::ThirdParty::BouncyCastle::OpenSsl::PemReader::*)(
    ::ThirdParty::BouncyCastle::Asn1::Asn1Sequence*)>(&::ThirdParty::BouncyCastle::OpenSsl::PemReader::convertSequenceToRSAParameters)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x14b3de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(), "convertSequenceToRSAParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::OpenSsl::PemReader.GetAlignmentValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ThirdParty::BouncyCastle::OpenSsl::PemReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::ThirdParty::BouncyCastle::OpenSsl::PemReader::GetAlignmentValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x14b41a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(), "GetAlignmentValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::OpenSsl::PemReader.FixAlignment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::ThirdParty::BouncyCastle::OpenSsl::PemReader::FixAlignment)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x14b42a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(), "FixAlignment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::ThirdParty::BouncyCastle::OpenSsl::PemReader* ThirdParty::BouncyCastle::OpenSsl::PemReader::New_ctor(::System::IO::TextReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>(reader));
}
inline void ThirdParty::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::Security::Cryptography::RSAParameters ThirdParty::BouncyCastle::OpenSsl::PemReader::ReadPrivatekey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(),
                                                                             "ReadPrivatekey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSAParameters ThirdParty::BouncyCastle::OpenSsl::PemReader::convertSequenceToRSAParameters(::ThirdParty::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(), "convertSequenceToRSAParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters, false>(this, ___internal_method, seq);
}
inline int32_t ThirdParty::BouncyCastle::OpenSsl::PemReader::GetAlignmentValue(::ArrayW<uint8_t, ::Array<uint8_t>*> modules) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(), "GetAlignmentValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, modules);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ThirdParty::BouncyCastle::OpenSsl::PemReader::FixAlignment(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBytes, int32_t alignment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::OpenSsl::PemReader*>::get(), "FixAlignment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, inputBytes, alignment);
}
// Ctor Parameters []
constexpr ::ThirdParty::BouncyCastle::OpenSsl::PemReader::PemReader() {}
