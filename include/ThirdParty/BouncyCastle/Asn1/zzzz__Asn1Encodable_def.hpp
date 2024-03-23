#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Asn1Encodable)
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Asn1::Asn1Encodable);
// Type: ThirdParty.BouncyCastle.Asn1::Asn1Encodable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Asn1::Asn1Encodable*
class CORDL_TYPE Asn1Encodable : public ::System::Object {
public:
  // Declarations
  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* New_ctor();

  /// @brief Method ToAsn1Object, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method .ctor, addr 0x14b6be0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Encodable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Encodable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Encodable(Asn1Encodable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Encodable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Encodable(Asn1Encodable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable, 0x10>, "Size mismatch!");

} // namespace ThirdParty::BouncyCastle::Asn1
NEED_NO_BOX(::ThirdParty::BouncyCastle::Asn1::Asn1Encodable);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*, "ThirdParty.BouncyCastle.Asn1", "Asn1Encodable");
