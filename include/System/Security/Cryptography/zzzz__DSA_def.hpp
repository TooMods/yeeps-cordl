#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSA)
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
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
class DSA;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSA);
// Type: System.Security.Cryptography::DSA
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::DSA*
class CORDL_TYPE DSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
public:
  // Declarations
  /// @brief Method Create, addr 0x1d1be10, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* Create();

  /// @brief Method Create, addr 0x1d1be6c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* Create(::StringW algName);

  /// @brief Method Create, addr 0x1d1d1dc, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* Create(int32_t keySizeInBits);

  /// @brief Method Create, addr 0x1d1d2a4, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* Create(::System::Security::Cryptography::DSAParameters parameters);

  /// @brief Method CreateSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash);

  /// @brief Method DerivedClassMustOverride, addr 0x1d1bf34, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Exception* DerivedClassMustOverride();

  /// @brief Method ExportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method FromXmlString, addr 0x1d1c5ec, size 0x760, virtual true, abstract: false, final false
  inline void FromXmlString(::StringW xmlString);

  /// @brief Method HashAlgorithmNameNullOrEmpty, addr 0x1d1c1a0, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* HashAlgorithmNameNullOrEmpty();

  /// @brief Method HashData, addr 0x1d1bf10, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method HashData, addr 0x1d1bfbc, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashData(::System::IO::Stream* data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method ImportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);

  static inline ::System::Security::Cryptography::DSA* New_ctor();

  /// @brief Method SignData, addr 0x1d1bfe0, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method SignData, addr 0x1d1c054, size 0x14c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method SignData, addr 0x1d1c240, size 0xbc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::System::IO::Stream* data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method ToXmlString, addr 0x1d1cd4c, size 0x490, virtual true, abstract: false, final false
  inline ::StringW ToXmlString(bool includePrivateParameters);

  /// @brief Method TryCreateSignature, addr 0x1d1d398, size 0x10c, virtual true, abstract: false, final false
  inline bool TryCreateSignature(::System::ReadOnlySpan_1<uint8_t> hash, ::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten);

  /// @brief Method TryHashData, addr 0x1d1d4a4, size 0x270, virtual true, abstract: false, final false
  inline bool TryHashData(::System::ReadOnlySpan_1<uint8_t> data, ::System::Span_1<uint8_t> destination, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                          ByRef<int32_t> bytesWritten);

  /// @brief Method TrySignData, addr 0x1d1d714, size 0x164, virtual true, abstract: false, final false
  inline bool TrySignData(::System::ReadOnlySpan_1<uint8_t> data, ::System::Span_1<uint8_t> destination, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                          ByRef<int32_t> bytesWritten);

  /// @brief Method VerifyData, addr 0x1d1c374, size 0x184, virtual true, abstract: false, final false
  inline bool VerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature,
                         ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method VerifyData, addr 0x1d1c2fc, size 0x78, virtual false, abstract: false, final false
  inline bool VerifyData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method VerifyData, addr 0x1d1c4f8, size 0xf4, virtual true, abstract: false, final false
  inline bool VerifyData(::System::IO::Stream* data, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method VerifyData, addr 0x1d1d878, size 0x2bc, virtual true, abstract: false, final false
  inline bool VerifyData(::System::ReadOnlySpan_1<uint8_t> data, ::System::ReadOnlySpan_1<uint8_t> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method VerifySignature, addr 0x1d1db34, size 0x8c, virtual true, abstract: false, final false
  inline bool VerifySignature(::System::ReadOnlySpan_1<uint8_t> hash, ::System::ReadOnlySpan_1<uint8_t> signature);

  /// @brief Method VerifySignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  /// @brief Method .ctor, addr 0x1d1be08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSA();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSA", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSA(DSA&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSA", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSA(DSA const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSA, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSA);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSA*, "System.Security.Cryptography", "DSA");
