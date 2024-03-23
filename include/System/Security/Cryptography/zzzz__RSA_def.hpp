#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSA)
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
class RSAEncryptionPadding;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System::Security::Cryptography {
class RSASignaturePadding;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSA;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSA);
// Type: System.Security.Cryptography::RSA
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RSA*
class CORDL_TYPE RSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
public:
  // Declarations
  __declspec(property(get = get_KeyExchangeAlgorithm))::StringW KeyExchangeAlgorithm;

  __declspec(property(get = get_SignatureAlgorithm))::StringW SignatureAlgorithm;

  /// @brief Method Create, addr 0x1c80d60, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* Create();

  /// @brief Method Create, addr 0x1c80e00, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* Create(::StringW algName);

  /// @brief Method Create, addr 0x1c82464, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* Create(int32_t keySizeInBits);

  /// @brief Method Create, addr 0x1c82530, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* Create(::System::Security::Cryptography::RSAParameters parameters);

  /// @brief Method Decrypt, addr 0x1c80fa4, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Security::Cryptography::RSAEncryptionPadding* padding);

  /// @brief Method DecryptValue, addr 0x1c8187c, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method DerivedClassMustOverride, addr 0x1c80f1c, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Exception* DerivedClassMustOverride();

  /// @brief Method Encrypt, addr 0x1c80ef8, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Security::Cryptography::RSAEncryptionPadding* padding);

  /// @brief Method EncryptValue, addr 0x1c818dc, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method ExportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method ExportRSAPrivateKey, addr 0x1c8319c, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportRSAPrivateKey();

  /// @brief Method ExportRSAPublicKey, addr 0x1c831dc, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportRSAPublicKey();

  /// @brief Method FromXmlString, addr 0x1c819bc, size 0x600, virtual true, abstract: false, final false
  inline void FromXmlString(::StringW xmlString);

  /// @brief Method HashAlgorithmNameNullOrEmpty, addr 0x1c812a0, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* HashAlgorithmNameNullOrEmpty();

  /// @brief Method HashData, addr 0x1c81010, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method HashData, addr 0x1c81034, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::System::IO::Stream* data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method ImportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);

  /// @brief Method ImportRSAPrivateKey, addr 0x1c8321c, size 0x40, virtual true, abstract: false, final false
  inline void ImportRSAPrivateKey(::System::ReadOnlySpan_1<uint8_t> source, ByRef<int32_t> bytesRead);

  /// @brief Method ImportRSAPublicKey, addr 0x1c8325c, size 0x40, virtual true, abstract: false, final false
  inline void ImportRSAPublicKey(::System::ReadOnlySpan_1<uint8_t> source, ByRef<int32_t> bytesRead);

  static inline ::System::Security::Cryptography::RSA* New_ctor();

  /// @brief Method SignData, addr 0x1c81058, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                                                       ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method SignData, addr 0x1c810d0, size 0x1d0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                                                       ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method SignData, addr 0x1c81340, size 0x140, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::System::IO::Stream* data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                                                       ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method SignHash, addr 0x1c80fc8, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignHash(::ArrayW<uint8_t, ::Array<uint8_t>*> hash, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                                                       ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method ToXmlString, addr 0x1c82024, size 0x440, virtual true, abstract: false, final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  /// @brief Method TryDecrypt, addr 0x1c82628, size 0x114, virtual true, abstract: false, final false
  inline bool TryDecrypt(::System::ReadOnlySpan_1<uint8_t> data, ::System::Span_1<uint8_t> destination, ::System::Security::Cryptography::RSAEncryptionPadding* padding, ByRef<int32_t> bytesWritten);

  /// @brief Method TryEncrypt, addr 0x1c8273c, size 0x114, virtual true, abstract: false, final false
  inline bool TryEncrypt(::System::ReadOnlySpan_1<uint8_t> data, ::System::Span_1<uint8_t> destination, ::System::Security::Cryptography::RSAEncryptionPadding* padding, ByRef<int32_t> bytesWritten);

  /// @brief Method TryExportRSAPrivateKey, addr 0x1c8329c, size 0x40, virtual true, abstract: false, final false
  inline bool TryExportRSAPrivateKey(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten);

  /// @brief Method TryExportRSAPublicKey, addr 0x1c832dc, size 0x40, virtual true, abstract: false, final false
  inline bool TryExportRSAPublicKey(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten);

  /// @brief Method TryHashData, addr 0x1c82850, size 0x260, virtual true, abstract: false, final false
  inline bool TryHashData(::System::ReadOnlySpan_1<uint8_t> data, ::System::Span_1<uint8_t> destination, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                          ByRef<int32_t> bytesWritten);

  /// @brief Method TrySignData, addr 0x1c82bd4, size 0x1ec, virtual true, abstract: false, final false
  inline bool TrySignData(::System::ReadOnlySpan_1<uint8_t> data, ::System::Span_1<uint8_t> destination, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                          ::System::Security::Cryptography::RSASignaturePadding* padding, ByRef<int32_t> bytesWritten);

  /// @brief Method TrySignHash, addr 0x1c82ab0, size 0x124, virtual true, abstract: false, final false
  inline bool TrySignHash(::System::ReadOnlySpan_1<uint8_t> hash, ::System::Span_1<uint8_t> destination, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                          ::System::Security::Cryptography::RSASignaturePadding* padding, ByRef<int32_t> bytesWritten);

  /// @brief Method VerifyData, addr 0x1c814fc, size 0x208, virtual true, abstract: false, final false
  inline bool VerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature,
                         ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method VerifyData, addr 0x1c81480, size 0x7c, virtual false, abstract: false, final false
  inline bool VerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                         ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method VerifyData, addr 0x1c81704, size 0x178, virtual false, abstract: false, final false
  inline bool VerifyData(::System::IO::Stream* data, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                         ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method VerifyData, addr 0x1c82dc0, size 0x338, virtual true, abstract: false, final false
  inline bool VerifyData(::System::ReadOnlySpan_1<uint8_t> data, ::System::ReadOnlySpan_1<uint8_t> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                         ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method VerifyHash, addr 0x1c80fec, size 0x24, virtual true, abstract: false, final false
  inline bool VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                         ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method VerifyHash, addr 0x1c830f8, size 0xa4, virtual true, abstract: false, final false
  inline bool VerifyHash(::System::ReadOnlySpan_1<uint8_t> hash, ::System::ReadOnlySpan_1<uint8_t> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                         ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method .ctor, addr 0x1c80d58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_KeyExchangeAlgorithm, addr 0x1c8193c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_KeyExchangeAlgorithm();

  /// @brief Method get_SignatureAlgorithm, addr 0x1c8197c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_SignatureAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSA();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSA(RSA&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSA(RSA const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSA, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSA);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSA*, "System.Security.Cryptography", "RSA");
