#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace System {
class Object;
}
namespace System {
class Random;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Math {
class BigInteger;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Math::BigInteger);
// Type: ThirdParty.BouncyCastle.Math::BigInteger
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Math {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Math::BigInteger*
class CORDL_TYPE BigInteger : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BitLength)) int32_t BitLength;

  /// @brief Field One, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_One, put = setStaticF_One))::ThirdParty::BouncyCastle::Math::BigInteger* One;

  /// @brief Field RandomSource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RandomSource, put = setStaticF_RandomSource))::System::Random* RandomSource;

  /// @brief Field Ten, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ten, put = setStaticF_Ten))::ThirdParty::BouncyCastle::Math::BigInteger* Ten;

  /// @brief Field Three, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Three, put = setStaticF_Three))::ThirdParty::BouncyCastle::Math::BigInteger* Three;

  /// @brief Field Two, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Two, put = setStaticF_Two))::ThirdParty::BouncyCastle::Math::BigInteger* Two;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::ThirdParty::BouncyCastle::Math::BigInteger* Zero;

  /// @brief Field ZeroEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ZeroEncoding, put = setStaticF_ZeroEncoding))::ArrayW<uint8_t, ::Array<uint8_t>*> ZeroEncoding;

  /// @brief Field ZeroMagnitude, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ZeroMagnitude, put = setStaticF_ZeroMagnitude))::ArrayW<int32_t, ::Array<int32_t>*> ZeroMagnitude;

  /// @brief Field magnitude, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_magnitude, put = __cordl_internal_set_magnitude))::ArrayW<int32_t, ::Array<int32_t>*> magnitude;

  /// @brief Field nBitLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nBitLength, put = __cordl_internal_set_nBitLength)) int32_t nBitLength;

  /// @brief Field rndMask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rndMask, put = setStaticF_rndMask))::ArrayW<uint8_t, ::Array<uint8_t>*> rndMask;

  /// @brief Field sign, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sign, put = __cordl_internal_set_sign)) int32_t sign;

  /// @brief Method AddMagnitudes, addr 0x14b48a8, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> AddMagnitudes(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method AddToMagnitude, addr 0x14b494c, size 0x16c, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Math::BigInteger* AddToMagnitude(::ArrayW<int32_t, ::Array<int32_t>*> magToAdd);

  /// @brief Method BitLen, addr 0x14b4bb0, size 0x164, virtual false, abstract: false, final false
  static inline int32_t BitLen(int32_t w);

  /// @brief Method CompareNoLeadingZeroes, addr 0x14b4f60, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t CompareNoLeadingZeroes(int32_t xIndx, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yIndx, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method CompareTo, addr 0x14b4d54, size 0x84, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x14b4dd8, size 0xac, virtual false, abstract: false, final false
  inline int32_t CompareTo(::ThirdParty::BouncyCastle::Math::BigInteger* value);

  /// @brief Method CompareTo, addr 0x14b4e84, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t CompareTo(int32_t xIndx, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yIndx, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method Equals, addr 0x14b4fec, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetByteLength, addr 0x14b4334, size 0x18, virtual false, abstract: false, final false
  static inline int32_t GetByteLength(int32_t nBits);

  /// @brief Method GetHashCode, addr 0x14b50f8, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Inc, addr 0x14b5154, size 0x100, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Math::BigInteger* Inc();

  /// @brief Method MakeMagnitude, addr 0x14b4708, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeMagnitude(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method Negate, addr 0x14b5310, size 0x74, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Math::BigInteger* Negate();

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* New_ctor();

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* New_ctor(int32_t signum, ::ArrayW<int32_t, ::Array<int32_t>*> mag, bool checkMag);

  /// @brief Method Not, addr 0x14b5384, size 0x18, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Math::BigInteger* Not();

  /// @brief Method Subtract, addr 0x14b539c, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Subtract(int32_t xStart, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yStart, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method ToByteArray, addr 0x14b543c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method ToByteArray, addr 0x14b5444, size 0x3b4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray(bool _cordl_unsigned);

  /// @brief Method ToByteArrayUnsigned, addr 0x14b419c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArrayUnsigned();

  /// @brief Method ValueOf, addr 0x14b59a4, size 0x120, virtual false, abstract: false, final false
  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* ValueOf(int64_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_magnitude() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_magnitude();

  constexpr int32_t const& __cordl_internal_get_nBitLength() const;

  constexpr int32_t& __cordl_internal_get_nBitLength();

  constexpr int32_t const& __cordl_internal_get_sign() const;

  constexpr int32_t& __cordl_internal_get_sign();

  constexpr void __cordl_internal_set_magnitude(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_nBitLength(int32_t value);

  constexpr void __cordl_internal_set_sign(int32_t value);

  /// @brief Method .ctor, addr 0x14b434c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x14b448c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x14b44a8, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method .ctor, addr 0x14b435c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(int32_t signum, ::ArrayW<int32_t, ::Array<int32_t>*> mag, bool checkMag);

  /// @brief Method calcBitLength, addr 0x14b4ab8, size 0xf8, virtual false, abstract: false, final false
  inline int32_t calcBitLength(int32_t indx, ::ArrayW<int32_t, ::Array<int32_t>*> mag);

  /// @brief Method createUValueOf, addr 0x14b57f8, size 0x104, virtual false, abstract: false, final false
  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* createUValueOf(uint64_t value);

  /// @brief Method createValueOf, addr 0x14b58fc, size 0xa8, virtual false, abstract: false, final false
  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* createValueOf(int64_t value);

  /// @brief Method doSubBigLil, addr 0x14b5254, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> doSubBigLil(::ArrayW<int32_t, ::Array<int32_t>*> bigMag, ::ArrayW<int32_t, ::Array<int32_t>*> lilMag);

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* getStaticF_One();

  static inline ::System::Random* getStaticF_RandomSource();

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* getStaticF_Ten();

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* getStaticF_Three();

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* getStaticF_Two();

  static inline ::ThirdParty::BouncyCastle::Math::BigInteger* getStaticF_Zero();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ZeroEncoding();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_ZeroMagnitude();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_rndMask();

  /// @brief Method get_BitLength, addr 0x14b4d14, size 0x40, virtual false, abstract: false, final false
  inline int32_t get_BitLength();

  static inline void setStaticF_One(::ThirdParty::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_RandomSource(::System::Random* value);

  static inline void setStaticF_Ten(::ThirdParty::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Three(::ThirdParty::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Two(::ThirdParty::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Zero(::ThirdParty::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_ZeroEncoding(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_ZeroMagnitude(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_rndMask(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigInteger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigInteger(BigInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigInteger(BigInteger const&) = delete;

  /// @brief Field sign, offset: 0x10, size: 0x4, def value: None
  int32_t ___sign;

  /// @brief Field magnitude, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___magnitude;

  /// @brief Field nBitLength, offset: 0x20, size: 0x4, def value: None
  int32_t ___nBitLength;

  /// @brief Field BitsPerByte offset 0xffffffff size 0x4
  static constexpr int32_t BitsPerByte{ static_cast<int32_t>(0x8) };

  /// @brief Field BitsPerInt offset 0xffffffff size 0x4
  static constexpr int32_t BitsPerInt{ static_cast<int32_t>(0x20) };

  /// @brief Field BytesPerInt offset 0xffffffff size 0x4
  static constexpr int32_t BytesPerInt{ static_cast<int32_t>(0x4) };

  /// @brief Field IMASK offset 0xffffffff size 0x8
  static constexpr int64_t IMASK{ static_cast<int64_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Math::BigInteger, 0x28>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Math::BigInteger, ___sign) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Math::BigInteger, ___magnitude) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Math::BigInteger, ___nBitLength) == 0x20, "Offset mismatch!");

} // namespace ThirdParty::BouncyCastle::Math
NEED_NO_BOX(::ThirdParty::BouncyCastle::Math::BigInteger);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Math::BigInteger*, "ThirdParty.BouncyCastle.Math", "BigInteger");
