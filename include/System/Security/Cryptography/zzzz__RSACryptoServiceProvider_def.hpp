#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__CspProviderFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSACryptoServiceProvider)
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
namespace Mono::Security::Cryptography {
class RSAManaged;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class CspKeyContainerInfo;
}
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class ICspAsymmetricAlgorithm;
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
class EventArgs;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSACryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSACryptoServiceProvider);
// Type: System.Security.Cryptography::RSACryptoServiceProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RSACryptoServiceProvider*
class CORDL_TYPE RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA {
public:
  // Declarations
  __declspec(property(get = get_CspKeyContainerInfo))::System::Security::Cryptography::CspKeyContainerInfo* CspKeyContainerInfo;

  __declspec(property(get = get_KeyExchangeAlgorithm))::StringW KeyExchangeAlgorithm;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PersistKeyInCsp, put = set_PersistKeyInCsp)) bool PersistKeyInCsp;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  __declspec(property(get = get_SignatureAlgorithm))::StringW SignatureAlgorithm;

  /// @brief Field m_disposed, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field persistKey, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_persistKey, put = __cordl_internal_set_persistKey)) bool persistKey;

  /// @brief Field persisted, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_persisted, put = __cordl_internal_set_persisted)) bool persisted;

  /// @brief Field privateKeyExportable, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_privateKeyExportable, put = __cordl_internal_set_privateKeyExportable)) bool privateKeyExportable;

  /// @brief Field rsa, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rsa, put = __cordl_internal_set_rsa))::Mono::Security::Cryptography::RSAManaged* rsa;

  /// @brief Field s_UseMachineKeyStore, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_UseMachineKeyStore, put = setStaticF_s_UseMachineKeyStore))::System::Security::Cryptography::CspProviderFlags s_UseMachineKeyStore;

  /// @brief Field store, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_store, put = __cordl_internal_set_store))::Mono::Security::Cryptography::KeyPairPersistence* store;

  /// @brief Convert operator to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
  constexpr operator ::System::Security::Cryptography::ICspAsymmetricAlgorithm*() noexcept;

  /// @brief Method Common, addr 0x1c8420c, size 0x21c, virtual false, abstract: false, final false
  inline void Common(int32_t dwKeySize, bool parameters);

  /// @brief Method Common, addr 0x1c84428, size 0x120, virtual false, abstract: false, final false
  inline void Common(::System::Security::Cryptography::CspParameters* p);

  /// @brief Method Decrypt, addr 0x1c8391c, size 0x1c0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Security::Cryptography::RSAEncryptionPadding* padding);

  /// @brief Method Decrypt, addr 0x1c83adc, size 0x240, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, bool fOAEP);

  /// @brief Method DecryptValue, addr 0x1c848f4, size 0x98, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method Dispose, addr 0x1c85988, size 0x54, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Encrypt, addr 0x1c83620, size 0x1c0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Security::Cryptography::RSAEncryptionPadding* padding);

  /// @brief Method Encrypt, addr 0x1c837e0, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, bool fOAEP);

  /// @brief Method EncryptValue, addr 0x1c84b7c, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  /// @brief Method ExportCspBlob, addr 0x1c85a90, size 0x84, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportCspBlob(bool includePrivateParameters);

  /// @brief Method ExportParameters, addr 0x1c84ba0, size 0x144, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method Finalize, addr 0x1c84548, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetAlgorithmId, addr 0x1c83474, size 0x1ac, virtual false, abstract: false, final false
  static inline int32_t GetAlgorithmId(::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method GetHash, addr 0x1c84d38, size 0x24c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::HashAlgorithm* GetHash(::System::Object* halg);

  /// @brief Method GetHashFromString, addr 0x1c84f84, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::HashAlgorithm* GetHashFromString(::StringW name);

  /// @brief Method GetHashNameFromOID, addr 0x1c850a0, size 0x1cc, virtual false, abstract: false, final false
  inline ::StringW GetHashNameFromOID(::StringW oid);

  /// @brief Method HashData, addr 0x1c83404, size 0x44, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method HashData, addr 0x1c83448, size 0x2c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::System::IO::Stream* data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method ImportCspBlob, addr 0x1c85b14, size 0x2f0, virtual true, abstract: false, final true
  inline void ImportCspBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBlob);

  /// @brief Method ImportParameters, addr 0x1c84ce4, size 0x54, virtual true, abstract: false, final false
  inline void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);

  /// @brief Method InternalHashToHashAlgorithm, addr 0x1c8551c, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithm* InternalHashToHashAlgorithm(int32_t calgHash);

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor();

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(int32_t dwKeySize);

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters);

  static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method OnKeyGenerated, addr 0x1c84664, size 0x84, virtual false, abstract: false, final false
  inline void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e);

  /// @brief Method PaddingModeNotSupported, addr 0x1c83894, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Exception* PaddingModeNotSupported();

  /// @brief Method SignData, addr 0x1c8526c, size 0x68, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Object* halg);

  /// @brief Method SignData, addr 0x1c852d4, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Object* halg);

  /// @brief Method SignData, addr 0x1c85388, size 0x9c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::System::IO::Stream* inputStream, ::System::Object* halg);

  /// @brief Method SignHash, addr 0x1c83d1c, size 0x188, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignHash(::ArrayW<uint8_t, ::Array<uint8_t>*> hash, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                                                       ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method SignHash, addr 0x1c83ea4, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, int32_t calgHash);

  /// @brief Method SignHash, addr 0x1c85424, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::StringW str);

  /// @brief Method VerifyData, addr 0x1c85744, size 0x11c, virtual false, abstract: false, final false
  inline bool VerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::System::Object* halg, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method VerifyHash, addr 0x1c83f24, size 0x1b8, virtual true, abstract: false, final false
  inline bool VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                         ::System::Security::Cryptography::RSASignaturePadding* padding);

  /// @brief Method VerifyHash, addr 0x1c840dc, size 0x90, virtual false, abstract: false, final false
  inline bool VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, int32_t calgHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  /// @brief Method VerifyHash, addr 0x1c85860, size 0x128, virtual false, abstract: false, final false
  inline bool VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::StringW str, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr bool const& __cordl_internal_get_persistKey() const;

  constexpr bool& __cordl_internal_get_persistKey();

  constexpr bool const& __cordl_internal_get_persisted() const;

  constexpr bool& __cordl_internal_get_persisted();

  constexpr bool const& __cordl_internal_get_privateKeyExportable() const;

  constexpr bool& __cordl_internal_get_privateKeyExportable();

  constexpr ::Mono::Security::Cryptography::RSAManaged*& __cordl_internal_get_rsa();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::RSAManaged*> const& __cordl_internal_get_rsa() const;

  constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& __cordl_internal_get_store();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::KeyPairPersistence*> const& __cordl_internal_get_store() const;

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_persistKey(bool value);

  constexpr void __cordl_internal_set_persisted(bool value);

  constexpr void __cordl_internal_set_privateKeyExportable(bool value);

  constexpr void __cordl_internal_set_rsa(::Mono::Security::Cryptography::RSAManaged* value);

  constexpr void __cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence* value);

  /// @brief Method .ctor, addr 0x1c80dd4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1c8416c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwKeySize);

  /// @brief Method .ctor, addr 0x1c841b0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method .ctor, addr 0x1c841a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters);

  static inline ::System::Security::Cryptography::CspProviderFlags getStaticF_s_UseMachineKeyStore();

  /// @brief Method get_CspKeyContainerInfo, addr 0x1c859dc, size 0x84, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo();

  /// @brief Method get_KeyExchangeAlgorithm, addr 0x1c845e8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_KeyExchangeAlgorithm();

  /// @brief Method get_KeySize, addr 0x1c84628, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_PersistKeyInCsp, addr 0x1c84648, size 0x8, virtual false, abstract: false, final false
  inline bool get_PersistKeyInCsp();

  /// @brief Method get_PublicOnly, addr 0x1c846e8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_PublicOnly();

  /// @brief Method get_SignatureAlgorithm, addr 0x1c8331c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_SignatureAlgorithm();

  /// @brief Method get_UseMachineKeyStore, addr 0x1c8335c, size 0x54, virtual false, abstract: false, final false
  static inline bool get_UseMachineKeyStore();

  /// @brief Convert to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
  constexpr ::System::Security::Cryptography::ICspAsymmetricAlgorithm* i___System__Security__Cryptography__ICspAsymmetricAlgorithm() noexcept;

  static inline void setStaticF_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags value);

  /// @brief Method set_PersistKeyInCsp, addr 0x1c84650, size 0x14, virtual false, abstract: false, final false
  inline void set_PersistKeyInCsp(bool value);

  /// @brief Method set_UseMachineKeyStore, addr 0x1c833b0, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseMachineKeyStore(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSACryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSACryptoServiceProvider(RSACryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSACryptoServiceProvider(RSACryptoServiceProvider const&) = delete;

  /// @brief Field store, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::Cryptography::KeyPairPersistence* ___store;

  /// @brief Field persistKey, offset: 0x28, size: 0x1, def value: None
  bool ___persistKey;

  /// @brief Field persisted, offset: 0x29, size: 0x1, def value: None
  bool ___persisted;

  /// @brief Field privateKeyExportable, offset: 0x2a, size: 0x1, def value: None
  bool ___privateKeyExportable;

  /// @brief Field m_disposed, offset: 0x2b, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field rsa, offset: 0x30, size: 0x8, def value: None
  ::Mono::Security::Cryptography::RSAManaged* ___rsa;

  /// @brief Field AT_KEYEXCHANGE offset 0xffffffff size 0x4
  static constexpr int32_t AT_KEYEXCHANGE{ static_cast<int32_t>(0x1) };

  /// @brief Field AT_SIGNATURE offset 0xffffffff size 0x4
  static constexpr int32_t AT_SIGNATURE{ static_cast<int32_t>(0x2) };

  /// @brief Field PROV_RSA_FULL offset 0xffffffff size 0x4
  static constexpr int32_t PROV_RSA_FULL{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSACryptoServiceProvider, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___store) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___persistKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___persisted) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___privateKeyExportable) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___m_disposed) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___rsa) == 0x30, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSACryptoServiceProvider*, "System.Security.Cryptography", "RSACryptoServiceProvider");
