#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConvert)
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class CryptoConvert;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::CryptoConvert);
// Type: Mono.Security.Cryptography::CryptoConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: ::Mono.Security.Cryptography::CryptoConvert*
class CORDL_TYPE CryptoConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromCapiKeyBlob, addr 0x2898ad0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* FromCapiKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob);

  /// @brief Method FromCapiKeyBlob, addr 0x2898ad8, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* FromCapiKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method FromCapiKeyBlobDSA, addr 0x2898bf8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* FromCapiKeyBlobDSA(::ArrayW<uint8_t, ::Array<uint8_t>*> blob);

  /// @brief Method FromCapiKeyBlobDSA, addr 0x2898c00, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* FromCapiKeyBlobDSA(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method FromCapiPrivateKeyBlob, addr 0x2896a6c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method FromCapiPrivateKeyBlobDSA, addr 0x2897088, size 0x4a4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* FromCapiPrivateKeyBlobDSA(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method FromCapiPublicKeyBlob, addr 0x2897bc8, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* FromCapiPublicKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method FromCapiPublicKeyBlobDSA, addr 0x2898100, size 0x4b8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* FromCapiPublicKeyBlobDSA(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method GetBytesLE, addr 0x289692c, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytesLE(int32_t val);

  /// @brief Method GetParametersFromCapiPrivateKeyBlob, addr 0x2896ae8, size 0x5a0, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters GetParametersFromCapiPrivateKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method GetParametersFromCapiPublicKeyBlob, addr 0x2897d14, size 0x3ec, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters GetParametersFromCapiPublicKeyBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> blob, int32_t offset);

  /// @brief Method ToCapiPrivateKeyBlob, addr 0x2897900, size 0x2c8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToCapiPrivateKeyBlob(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method ToCapiPrivateKeyBlob, addr 0x289752c, size 0x3d4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToCapiPrivateKeyBlob(::System::Security::Cryptography::RSA* rsa);

  /// @brief Method ToCapiPublicKeyBlob, addr 0x28987f8, size 0x2d8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToCapiPublicKeyBlob(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method ToCapiPublicKeyBlob, addr 0x28985b8, size 0x240, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToCapiPublicKeyBlob(::System::Security::Cryptography::RSA* rsa);

  /// @brief Method ToInt32LE, addr 0x2896844, size 0x74, virtual false, abstract: false, final false
  static inline int32_t ToInt32LE(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  /// @brief Method ToUInt32LE, addr 0x28968b8, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32LE(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset);

  /// @brief Method Trim, addr 0x28969c0, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Trim(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoConvert(CryptoConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoConvert(CryptoConvert const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::CryptoConvert, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::CryptoConvert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
