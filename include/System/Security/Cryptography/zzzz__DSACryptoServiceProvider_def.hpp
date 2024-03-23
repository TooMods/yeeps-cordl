#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSACryptoServiceProvider)
namespace Mono::Security::Cryptography {
class DSAManaged;
}
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
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
struct DSAParameters;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
class ICspAsymmetricAlgorithm;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSACryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSACryptoServiceProvider);
// Type: System.Security.Cryptography::DSACryptoServiceProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::DSACryptoServiceProvider*
class CORDL_TYPE DSACryptoServiceProvider : public ::System::Security::Cryptography::DSA {
public:
  // Declarations
  __declspec(property(get = get_CspKeyContainerInfo))::System::Security::Cryptography::CspKeyContainerInfo* CspKeyContainerInfo;

  __declspec(property(get = get_KeyExchangeAlgorithm))::StringW KeyExchangeAlgorithm;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PersistKeyInCsp, put = set_PersistKeyInCsp)) bool PersistKeyInCsp;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  __declspec(property(get = get_SignatureAlgorithm))::StringW SignatureAlgorithm;

  /// @brief Field dsa, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_dsa, put = __cordl_internal_set_dsa))::Mono::Security::Cryptography::DSAManaged* dsa;

  /// @brief Field m_disposed, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field persistKey, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_persistKey, put = __cordl_internal_set_persistKey)) bool persistKey;

  /// @brief Field persisted, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_persisted, put = __cordl_internal_set_persisted)) bool persisted;

  /// @brief Field privateKeyExportable, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_privateKeyExportable, put = __cordl_internal_set_privateKeyExportable)) bool privateKeyExportable;

  /// @brief Field store, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_store, put = __cordl_internal_set_store))::Mono::Security::Cryptography::KeyPairPersistence* store;

  /// @brief Field useMachineKeyStore, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_useMachineKeyStore, put = setStaticF_useMachineKeyStore)) bool useMachineKeyStore;

  /// @brief Convert operator to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
  constexpr operator ::System::Security::Cryptography::ICspAsymmetricAlgorithm*() noexcept;

  /// @brief Method Common, addr 0x1c92550, size 0x224, virtual false, abstract: false, final false
  inline void Common(int32_t dwKeySize, bool parameters);

  /// @brief Method Common, addr 0x1c92774, size 0xb8, virtual false, abstract: false, final false
  inline void Common(::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method CreateSignature, addr 0x1c92b04, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash);

  /// @brief Method Dispose, addr 0x1c930c8, size 0x54, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ExportCspBlob, addr 0x1c931a8, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportCspBlob(bool includePrivateParameters);

  /// @brief Method ExportParameters, addr 0x1c929f8, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method Finalize, addr 0x1c9282c, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HashData, addr 0x1c92ee0, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method HashData, addr 0x1c92fe0, size 0xe8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::System::IO::Stream* data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method ImportCspBlob, addr 0x1c931bc, size 0x260, virtual true, abstract: false, final true
  inline void ImportCspBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBlob);

  /// @brief Method ImportParameters, addr 0x1c92ab0, size 0x54, virtual true, abstract: false, final false
  inline void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);

  static inline ::System::Security::Cryptography::DSACryptoServiceProvider* New_ctor();

  static inline ::System::Security::Cryptography::DSACryptoServiceProvider* New_ctor(int32_t dwKeySize);

  static inline ::System::Security::Cryptography::DSACryptoServiceProvider* New_ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters);

  static inline ::System::Security::Cryptography::DSACryptoServiceProvider* New_ctor(::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method OnKeyGenerated, addr 0x1c9311c, size 0x84, virtual false, abstract: false, final false
  inline void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e);

  /// @brief Method SignData, addr 0x1c92b28, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method SignData, addr 0x1c92b78, size 0x68, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method SignData, addr 0x1c92be0, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::System::IO::Stream* inputStream);

  /// @brief Method SignHash, addr 0x1c92c30, size 0x10c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::StringW str);

  /// @brief Method VerifyData, addr 0x1c92d3c, size 0x58, virtual false, abstract: false, final false
  inline bool VerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbData, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  /// @brief Method VerifyHash, addr 0x1c92d94, size 0x128, virtual false, abstract: false, final false
  inline bool VerifyHash(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::StringW str, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  /// @brief Method VerifySignature, addr 0x1c92ebc, size 0x24, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  constexpr ::Mono::Security::Cryptography::DSAManaged*& __cordl_internal_get_dsa();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::DSAManaged*> const& __cordl_internal_get_dsa() const;

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr bool const& __cordl_internal_get_persistKey() const;

  constexpr bool& __cordl_internal_get_persistKey();

  constexpr bool const& __cordl_internal_get_persisted() const;

  constexpr bool& __cordl_internal_get_persisted();

  constexpr bool const& __cordl_internal_get_privateKeyExportable() const;

  constexpr bool& __cordl_internal_get_privateKeyExportable();

  constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& __cordl_internal_get_store();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::KeyPairPersistence*> const& __cordl_internal_get_store() const;

  constexpr void __cordl_internal_set_dsa(::Mono::Security::Cryptography::DSAManaged* value);

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_persistKey(bool value);

  constexpr void __cordl_internal_set_persisted(bool value);

  constexpr void __cordl_internal_set_privateKeyExportable(bool value);

  constexpr void __cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence* value);

  /// @brief Method .ctor, addr 0x1c8fd8c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1c924b0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwKeySize);

  /// @brief Method .ctor, addr 0x1c924f4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method .ctor, addr 0x1c924e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters);

  static inline bool getStaticF_useMachineKeyStore();

  /// @brief Method get_CspKeyContainerInfo, addr 0x1c931a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo();

  /// @brief Method get_KeyExchangeAlgorithm, addr 0x1c928cc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_KeyExchangeAlgorithm();

  /// @brief Method get_KeySize, addr 0x1c928d4, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_KeySize();

  /// @brief Method get_PersistKeyInCsp, addr 0x1c928f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_PersistKeyInCsp();

  /// @brief Method get_PublicOnly, addr 0x1c92908, size 0x1c, virtual false, abstract: false, final false
  inline bool get_PublicOnly();

  /// @brief Method get_SignatureAlgorithm, addr 0x1c92924, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_SignatureAlgorithm();

  /// @brief Method get_UseMachineKeyStore, addr 0x1c92964, size 0x48, virtual false, abstract: false, final false
  static inline bool get_UseMachineKeyStore();

  /// @brief Convert to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
  constexpr ::System::Security::Cryptography::ICspAsymmetricAlgorithm* i___System__Security__Cryptography__ICspAsymmetricAlgorithm() noexcept;

  static inline void setStaticF_useMachineKeyStore(bool value);

  /// @brief Method set_PersistKeyInCsp, addr 0x1c928fc, size 0xc, virtual false, abstract: false, final false
  inline void set_PersistKeyInCsp(bool value);

  /// @brief Method set_UseMachineKeyStore, addr 0x1c929ac, size 0x4c, virtual false, abstract: false, final false
  static inline void set_UseMachineKeyStore(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSACryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSACryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSACryptoServiceProvider(DSACryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSACryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSACryptoServiceProvider(DSACryptoServiceProvider const&) = delete;

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

  /// @brief Field dsa, offset: 0x30, size: 0x8, def value: None
  ::Mono::Security::Cryptography::DSAManaged* ___dsa;

  /// @brief Field PROV_DSS_DH offset 0xffffffff size 0x4
  static constexpr int32_t PROV_DSS_DH{ static_cast<int32_t>(0xd) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSACryptoServiceProvider, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___store) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___persistKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___persisted) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___privateKeyExportable) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___m_disposed) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSACryptoServiceProvider, ___dsa) == 0x30, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSACryptoServiceProvider*, "System.Security.Cryptography", "DSACryptoServiceProvider");
