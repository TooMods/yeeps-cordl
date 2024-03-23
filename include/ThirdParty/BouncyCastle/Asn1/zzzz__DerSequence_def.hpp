#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DerSequence)
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Asn1 {
class DerSequence;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Asn1::DerSequence);
// Type: ThirdParty.BouncyCastle.Asn1::DerSequence
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Asn1::DerSequence*
class CORDL_TYPE DerSequence : public ::ThirdParty::BouncyCastle::Asn1::Asn1Sequence {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::ThirdParty::BouncyCastle::Asn1::DerSequence* Empty;

  /// @brief Method FromVector, addr 0x21f05f4, size 0x9c, virtual false, abstract: false, final false
  static inline ::ThirdParty::BouncyCastle::Asn1::DerSequence* FromVector(::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector* v);

  static inline ::ThirdParty::BouncyCastle::Asn1::DerSequence* New_ctor();

  static inline ::ThirdParty::BouncyCastle::Asn1::DerSequence* New_ctor(::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* obj);

  static inline ::ThirdParty::BouncyCastle::Asn1::DerSequence* New_ctor(::ArrayW<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>*> v);

  static inline ::ThirdParty::BouncyCastle::Asn1::DerSequence* New_ctor(::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method .ctor, addr 0x21f0994, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x21f09bc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method .ctor, addr 0x21f09f8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>*> v);

  /// @brief Method .ctor, addr 0x21f0690, size 0x304, virtual false, abstract: false, final false
  inline void _ctor(::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector* v);

  static inline ::ThirdParty::BouncyCastle::Asn1::DerSequence* getStaticF_Empty();

  static inline void setStaticF_Empty(::ThirdParty::BouncyCastle::Asn1::DerSequence* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSequence(DerSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSequence(DerSequence const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Asn1::DerSequence, 0x18>, "Size mismatch!");

} // namespace ThirdParty::BouncyCastle::Asn1
NEED_NO_BOX(::ThirdParty::BouncyCastle::Asn1::DerSequence);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Asn1::DerSequence*, "ThirdParty.BouncyCastle.Asn1", "DerSequence");
