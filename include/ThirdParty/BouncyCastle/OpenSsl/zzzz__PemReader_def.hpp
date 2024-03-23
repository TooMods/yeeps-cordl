#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PemReader)
namespace System::IO {
class TextReader;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::OpenSsl {
class PemReader;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::OpenSsl::PemReader);
// Type: ThirdParty.BouncyCastle.OpenSsl::PemReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::OpenSsl {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.OpenSsl::PemReader*
class CORDL_TYPE PemReader : public ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader {
public:
  // Declarations
  /// @brief Method FixAlignment, addr 0x14b42a8, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FixAlignment(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBytes, int32_t alignment);

  /// @brief Method GetAlignmentValue, addr 0x14b41a4, size 0x104, virtual false, abstract: false, final false
  inline int32_t GetAlignmentValue(::ArrayW<uint8_t, ::Array<uint8_t>*> modules);

  static inline ::ThirdParty::BouncyCastle::OpenSsl::PemReader* New_ctor(::System::IO::TextReader* reader);

  /// @brief Method ReadPrivatekey, addr 0x14b3a7c, size 0x170, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::RSAParameters ReadPrivatekey();

  /// @brief Method .ctor, addr 0x14b3a00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader);

  /// @brief Method convertSequenceToRSAParameters, addr 0x14b3de8, size 0x3b4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::RSAParameters convertSequenceToRSAParameters(::ThirdParty::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemReader(PemReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemReader(PemReader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::OpenSsl::PemReader, 0x18>, "Size mismatch!");

} // namespace ThirdParty::BouncyCastle::OpenSsl
NEED_NO_BOX(::ThirdParty::BouncyCastle::OpenSsl::PemReader);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::OpenSsl::PemReader*, "ThirdParty.BouncyCastle.OpenSsl", "PemReader");
