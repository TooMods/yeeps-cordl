#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class PKCS1MaskGenerationMethod;
}
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Utils);
// Type: System.Security.Cryptography::Utils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::Utils*
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Field _rng, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__rng, put = setStaticF__rng))::System::Security::Cryptography::RNGCryptoServiceProvider* _rng;

  /// @brief Method CompareBigIntArrays, addr 0x1c8d9bc, size 0x114, virtual false, abstract: false, final false
  static inline bool CompareBigIntArrays(::ArrayW<uint8_t, ::Array<uint8_t>*> lhs, ::ArrayW<uint8_t, ::Array<uint8_t>*> rhs);

  /// @brief Method ConvertByteArrayToInt, addr 0x1c8d34c, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ConvertByteArrayToInt(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ConvertIntToByteArray, addr 0x1c8d3ac, size 0x120, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertIntToByteArray(int32_t dwInput);

  /// @brief Method ConvertIntToByteArray, addr 0x1c8d4cc, size 0x70, virtual false, abstract: false, final false
  static inline void ConvertIntToByteArray(uint32_t dwInput, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> counter);

  /// @brief Method DWORDFromBigEndian, addr 0x1c880cc, size 0x50, virtual false, abstract: false, final false
  static inline void DWORDFromBigEndian(::cordl_internals::Ptr<uint32_t> x, int32_t digits, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method DWORDFromLittleEndian, addr 0x1c8d53c, size 0x4c, virtual false, abstract: false, final false
  static inline void DWORDFromLittleEndian(::cordl_internals::Ptr<uint32_t> x, int32_t digits, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method DWORDToBigEndian, addr 0x1c87fd8, size 0xf4, virtual false, abstract: false, final false
  static inline void DWORDToBigEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t digits);

  /// @brief Method DWORDToLittleEndian, addr 0x1c8d588, size 0xf4, virtual false, abstract: false, final false
  static inline void DWORDToLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t digits);

  /// @brief Method DiscardWhiteSpaces, addr 0x1c81fbc, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW DiscardWhiteSpaces(::StringW inputBuffer);

  /// @brief Method DiscardWhiteSpaces, addr 0x1c8d1c4, size 0x188, virtual false, abstract: false, final false
  static inline ::StringW DiscardWhiteSpaces(::StringW inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method DoesRsaKeyOverride, addr 0x1c86360, size 0xf8, virtual false, abstract: false, final false
  static inline bool DoesRsaKeyOverride(::System::Security::Cryptography::RSA* rsaKey, ::StringW methodName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> parameterTypes);

  /// @brief Method DoesRsaKeyOverrideSlowPath, addr 0x1c8dc0c, size 0xdc, virtual false, abstract: false, final false
  static inline bool DoesRsaKeyOverrideSlowPath(::System::Type* t, ::StringW methodName, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> parameterTypes);

  /// @brief Method FixupKeyParity, addr 0x1c8c8c4, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FixupKeyParity(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method GenerateRandom, addr 0x1c8d124, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRandom(int32_t keySize);

  /// @brief Method HasAlgorithm, addr 0x1c8cc7c, size 0x8, virtual false, abstract: false, final false
  static inline bool HasAlgorithm(int32_t dwCalg, int32_t dwKeySize);

  /// @brief Method Int, addr 0x1c8d67c, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Int(uint32_t i);

  /// @brief Method OidToHashAlgorithmName, addr 0x1c8dad0, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithmName OidToHashAlgorithmName(::StringW oid);

  /// @brief Method QuadWordFromBigEndian, addr 0x1c89d94, size 0x80, virtual false, abstract: false, final false
  static inline void QuadWordFromBigEndian(::cordl_internals::Ptr<uint64_t> x, int32_t digits, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method QuadWordToBigEndian, addr 0x1c89bd8, size 0x1bc, virtual false, abstract: false, final false
  static inline void QuadWordToBigEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t digits);

  /// @brief Method RsaOaepDecrypt, addr 0x1c861a0, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RsaOaepDecrypt(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash,
                                                                    ::System::Security::Cryptography::PKCS1MaskGenerationMethod* mgf, ::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedData);

  /// @brief Method RsaOaepEncrypt, addr 0x1c86a20, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RsaOaepEncrypt(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash,
                                                                    ::System::Security::Cryptography::PKCS1MaskGenerationMethod* mgf, ::System::Security::Cryptography::RandomNumberGenerator* rng,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method RsaPkcs1Padding, addr 0x1c8d710, size 0x2ac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RsaPkcs1Padding(::System::Security::Cryptography::RSA* rsa, ::ArrayW<uint8_t, ::Array<uint8_t>*> oid, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method _ProduceLegacyHmacValues, addr 0x1c8dce8, size 0x8, virtual false, abstract: false, final false
  static inline bool _ProduceLegacyHmacValues();

  static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* getStaticF__rng();

  /// @brief Method get_StaticRandomNumberGenerator, addr 0x1c8cfb8, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator();

  static inline void setStaticF__rng(::System::Security::Cryptography::RNGCryptoServiceProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  /// @brief Field DefaultRsaProviderType offset 0xffffffff size 0x4
  static constexpr int32_t DefaultRsaProviderType{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Utils, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Utils);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Utils*, "System.Security.Cryptography", "Utils");
