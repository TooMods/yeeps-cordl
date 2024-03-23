#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerInteger)
namespace ThirdParty::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Asn1 {
class DerInteger;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Asn1::DerInteger);
// Type: ThirdParty.BouncyCastle.Asn1::DerInteger
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Asn1::DerInteger*
class CORDL_TYPE DerInteger : public ::ThirdParty::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  __declspec(property(get = get_Bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> Bytes;

  __declspec(property(get = get_Value))::ThirdParty::BouncyCastle::Math::BigInteger* Value;

  /// @brief Field bytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes))::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  static inline ::ThirdParty::BouncyCastle::Asn1::DerInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::ThirdParty::BouncyCastle::Asn1::DerInteger* New_ctor(::ThirdParty::BouncyCastle::Math::BigInteger* value);

  static inline ::ThirdParty::BouncyCastle::Asn1::DerInteger* New_ctor(int32_t value);

  /// @brief Method ToString, addr 0x21f05d4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bytes();

  constexpr void __cordl_internal_set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x21f053c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x21f04b8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::ThirdParty::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x21f0430, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method get_Bytes, addr 0x21f0564, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Bytes();

  /// @brief Method get_Value, addr 0x21f056c, size 0x68, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Math::BigInteger* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerInteger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerInteger(DerInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerInteger(DerInteger const&) = delete;

  /// @brief Field bytes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Asn1::DerInteger, 0x18>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Asn1::DerInteger, ___bytes) == 0x10, "Offset mismatch!");

} // namespace ThirdParty::BouncyCastle::Asn1
NEED_NO_BOX(::ThirdParty::BouncyCastle::Asn1::DerInteger);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Asn1::DerInteger*, "ThirdParty.BouncyCastle.Asn1", "DerInteger");
