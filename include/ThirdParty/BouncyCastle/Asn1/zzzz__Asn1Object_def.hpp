#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Object)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1Object;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Asn1::Asn1Object);
// Type: ThirdParty.BouncyCastle.Asn1::Asn1Object
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Asn1::Asn1Object*
class CORDL_TYPE Asn1Object : public ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Method FromByteArray, addr 0x14b3cc4, size 0x124, virtual false, abstract: false, final false
  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* FromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method FromStream, addr 0x14b7ed0, size 0x138, virtual false, abstract: false, final false
  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* FromStream(::System::IO::Stream* inStr);

  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* New_ctor();

  /// @brief Method ToAsn1Object, addr 0x14b8008, size 0x4, virtual true, abstract: false, final true
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method .ctor, addr 0x14b800c, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Object();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Object", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Object(Asn1Object&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Object", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Object(Asn1Object const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Asn1::Asn1Object, 0x10>, "Size mismatch!");

} // namespace ThirdParty::BouncyCastle::Asn1
NEED_NO_BOX(::ThirdParty::BouncyCastle::Asn1::Asn1Object);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Asn1::Asn1Object*, "ThirdParty.BouncyCastle.Asn1", "Asn1Object");
