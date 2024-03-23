#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace System {
class Object;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Photon::SocketServer::Numeric {
class BigInteger;
}
// Write type traits
MARK_REF_PTR_T(::Photon::SocketServer::Numeric::BigInteger);
// Type: Photon.SocketServer.Numeric::BigInteger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::SocketServer::Numeric {
// Is value type: false
// CS Name: ::Photon.SocketServer.Numeric::BigInteger*
class CORDL_TYPE BigInteger : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::ArrayW<uint32_t, ::Array<uint32_t>*> data;

  /// @brief Field dataLength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_dataLength, put = __cordl_internal_set_dataLength)) int32_t dataLength;

  /// @brief Field primesBelow2000, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_primesBelow2000, put = setStaticF_primesBelow2000))::ArrayW<int32_t, ::Array<int32_t>*> primesBelow2000;

  /// @brief Method BarrettReduction, addr 0x2ace944, size 0x488, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* BarrettReduction(::Photon::SocketServer::Numeric::BigInteger* x, ::Photon::SocketServer::Numeric::BigInteger* n,
                                                                       ::Photon::SocketServer::Numeric::BigInteger* constant);

  /// @brief Method Equals, addr 0x2accb28, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method FermatLittleTest, addr 0x2acf144, size 0x290, virtual false, abstract: false, final false
  inline bool FermatLittleTest(int32_t confidence);

  /// @brief Method GenerateRandom, addr 0x2aceef0, size 0x98, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* GenerateRandom(int32_t bits);

  /// @brief Method GetBytes, addr 0x2ad1850, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  /// @brief Method GetHashCode, addr 0x2accc24, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IntValue, addr 0x2ad0d90, size 0x28, virtual false, abstract: false, final false
  inline int32_t IntValue();

  /// @brief Method Jacobi, addr 0x2acfa80, size 0x334, virtual false, abstract: false, final false
  static inline int32_t Jacobi(::Photon::SocketServer::Numeric::BigInteger* a, ::Photon::SocketServer::Numeric::BigInteger* b);

  /// @brief Method LongValue, addr 0x2ad1110, size 0xd8, virtual false, abstract: false, final false
  inline int64_t LongValue();

  /// @brief Method LucasSequence, addr 0x2ad1a64, size 0x2ac, virtual false, abstract: false, final false
  static inline ::ArrayW<::Photon::SocketServer::Numeric::BigInteger*, ::Array<::Photon::SocketServer::Numeric::BigInteger*>*> LucasSequence(::Photon::SocketServer::Numeric::BigInteger* P,
                                                                                                                                             ::Photon::SocketServer::Numeric::BigInteger* Q,
                                                                                                                                             ::Photon::SocketServer::Numeric::BigInteger* k,
                                                                                                                                             ::Photon::SocketServer::Numeric::BigInteger* n);

  /// @brief Method LucasSequenceHelper, addr 0x2ad062c, size 0x61c, virtual false, abstract: false, final false
  static inline ::ArrayW<::Photon::SocketServer::Numeric::BigInteger*, ::Array<::Photon::SocketServer::Numeric::BigInteger*>*>
  LucasSequenceHelper(::Photon::SocketServer::Numeric::BigInteger* P, ::Photon::SocketServer::Numeric::BigInteger* Q, ::Photon::SocketServer::Numeric::BigInteger* k,
                      ::Photon::SocketServer::Numeric::BigInteger* n, ::Photon::SocketServer::Numeric::BigInteger* constant, int32_t s);

  /// @brief Method LucasStrongTest, addr 0x2acfdb4, size 0xe8, virtual false, abstract: false, final false
  inline bool LucasStrongTest();

  /// @brief Method LucasStrongTestHelper, addr 0x2acfe9c, size 0x650, virtual false, abstract: false, final false
  inline bool LucasStrongTestHelper(::Photon::SocketServer::Numeric::BigInteger* thisVal);

  /// @brief Method Main, addr 0x2ad30d4, size 0x4b0, virtual false, abstract: false, final false
  static inline void Main(::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method ModPow, addr 0x2ace520, size 0x378, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* ModPow(::Photon::SocketServer::Numeric::BigInteger* exp, ::Photon::SocketServer::Numeric::BigInteger* n);

  /// @brief Method MulDivTest, addr 0x2ad1d10, size 0x5c4, virtual false, abstract: false, final false
  static inline void MulDivTest(int32_t rounds);

  static inline ::Photon::SocketServer::Numeric::BigInteger* New_ctor();

  static inline ::Photon::SocketServer::Numeric::BigInteger* New_ctor(::Photon::SocketServer::Numeric::BigInteger* bi);

  static inline ::Photon::SocketServer::Numeric::BigInteger* New_ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> inData);

  static inline ::Photon::SocketServer::Numeric::BigInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> inData);

  static inline ::Photon::SocketServer::Numeric::BigInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> inData, int32_t inLen);

  static inline ::Photon::SocketServer::Numeric::BigInteger* New_ctor(::StringW value, int32_t radix);

  static inline ::Photon::SocketServer::Numeric::BigInteger* New_ctor(int64_t value);

  static inline ::Photon::SocketServer::Numeric::BigInteger* New_ctor(uint64_t value);

  /// @brief Method RSATest, addr 0x2ad22d4, size 0x554, virtual false, abstract: false, final false
  static inline void RSATest(int32_t rounds);

  /// @brief Method RSATest2, addr 0x2ad2828, size 0x5e4, virtual false, abstract: false, final false
  static inline void RSATest2(int32_t rounds);

  /// @brief Method RabinMillerTest, addr 0x2acf3d4, size 0x3bc, virtual false, abstract: false, final false
  inline bool RabinMillerTest(int32_t confidence);

  /// @brief Method SolovayStrassenTest, addr 0x2acf790, size 0x2f0, virtual false, abstract: false, final false
  inline bool SolovayStrassenTest(int32_t confidence);

  /// @brief Method SqrtTest, addr 0x2ad2e0c, size 0x2c8, virtual false, abstract: false, final false
  static inline void SqrtTest(int32_t rounds);

  /// @brief Method ToHexString, addr 0x2ace428, size 0xf8, virtual false, abstract: false, final false
  inline ::StringW ToHexString();

  /// @brief Method ToString, addr 0x2ace104, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2ace10c, size 0x31c, virtual false, abstract: false, final false
  inline ::StringW ToString(int32_t radix);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_data();

  constexpr int32_t const& __cordl_internal_get_dataLength() const;

  constexpr int32_t& __cordl_internal_get_dataLength();

  constexpr void __cordl_internal_set_data(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_dataLength(int32_t value);

  /// @brief Method .ctor, addr 0x2aca928, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2acac34, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Photon::SocketServer::Numeric::BigInteger* bi);

  /// @brief Method .ctor, addr 0x2acbcf4, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> inData);

  /// @brief Method .ctor, addr 0x2acb794, size 0x298, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> inData);

  /// @brief Method .ctor, addr 0x2acba2c, size 0x2c8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> inData, int32_t inLen);

  /// @brief Method .ctor, addr 0x2acad04, size 0x320, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, int32_t radix);

  /// @brief Method .ctor, addr 0x2aca990, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x2acab08, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// @brief Method abs, addr 0x2ace068, size 0x9c, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* abs();

  /// @brief Method bitCount, addr 0x2ace898, size 0xac, virtual false, abstract: false, final false
  inline int32_t bitCount();

  /// @brief Method gcd, addr 0x2acedcc, size 0x124, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* gcd(::Photon::SocketServer::Numeric::BigInteger* bi);

  /// @brief Method genCoPrime, addr 0x2ad1294, size 0xb8, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* genCoPrime(int32_t bits, ::System::Random* rand);

  /// @brief Method genPseudoPrime, addr 0x2ad11e8, size 0xac, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* genPseudoPrime(int32_t bits, int32_t confidence, ::System::Random* rand);

  /// @brief Method genRandomBits, addr 0x2acef88, size 0x1bc, virtual false, abstract: false, final false
  inline void genRandomBits(int32_t bits, ::System::Random* rand);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_primesBelow2000();

  /// @brief Method isProbablePrime, addr 0x2ad0db8, size 0x358, virtual false, abstract: false, final false
  inline bool isProbablePrime();

  /// @brief Method isProbablePrime, addr 0x2ad0c48, size 0x148, virtual false, abstract: false, final false
  inline bool isProbablePrime(int32_t confidence);

  /// @brief Method max, addr 0x2acdf40, size 0x94, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* max(::Photon::SocketServer::Numeric::BigInteger* bi);

  /// @brief Method min, addr 0x2acdfd4, size 0x94, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* min(::Photon::SocketServer::Numeric::BigInteger* bi);

  /// @brief Method modInverse, addr 0x2ad134c, size 0x504, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* modInverse(::Photon::SocketServer::Numeric::BigInteger* modulus);

  /// @brief Method multiByteDivide, addr 0x2accf38, size 0x5d4, virtual false, abstract: false, final false
  static inline void multiByteDivide(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2, ::Photon::SocketServer::Numeric::BigInteger* outQuotient,
                                     ::Photon::SocketServer::Numeric::BigInteger* outRemainder);

  /// @brief Method op_Addition, addr 0x2acb574, size 0x220, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Addition(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_BitwiseAnd, addr 0x2acdb68, size 0x148, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_BitwiseAnd(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_BitwiseOr, addr 0x2acdcb0, size 0x148, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_BitwiseOr(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_Decrement, addr 0x2acc30c, size 0x174, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Decrement(::Photon::SocketServer::Numeric::BigInteger* bi1);

  /// @brief Method op_Division, addr 0x2acd814, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Division(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_Equality, addr 0x2accae4, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Equality(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_ExclusiveOr, addr 0x2acddf8, size 0x148, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_ExclusiveOr(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_GreaterThan, addr 0x2accc4c, size 0xcc, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x2accde8, size 0xa8, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_Implicit, addr 0x2acb024, size 0x60, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Implicit___Photon__SocketServer__Numeric__BigInteger_(int32_t value);

  /// @brief Method op_Implicit, addr 0x2acbe54, size 0x60, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Implicit___Photon__SocketServer__Numeric__BigInteger_(int64_t value);

  /// @brief Method op_Implicit, addr 0x2acbf14, size 0x60, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Implicit___Photon__SocketServer__Numeric__BigInteger_(uint32_t value);

  /// @brief Method op_Implicit, addr 0x2acbeb4, size 0x60, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Implicit___Photon__SocketServer__Numeric__BigInteger_(uint64_t value);

  /// @brief Method op_Increment, addr 0x2acbf74, size 0x16c, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Increment(::Photon::SocketServer::Numeric::BigInteger* bi1);

  /// @brief Method op_Inequality, addr 0x2accb00, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_LeftShift, addr 0x2acc638, size 0x90, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_LeftShift(::Photon::SocketServer::Numeric::BigInteger* bi1, int32_t shiftVal);

  /// @brief Method op_LessThan, addr 0x2accd18, size 0xd0, virtual false, abstract: false, final false
  static inline bool op_LessThan(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_LessThanOrEqual, addr 0x2acce90, size 0xa8, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_Modulus, addr 0x2acd9cc, size 0x19c, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Modulus(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_Multiply, addr 0x2acb084, size 0x4f0, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Multiply(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_OnesComplement, addr 0x2acca04, size 0xe0, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_OnesComplement(::Photon::SocketServer::Numeric::BigInteger* bi1);

  /// @brief Method op_RightShift, addr 0x2acc7b0, size 0x14c, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_RightShift(::Photon::SocketServer::Numeric::BigInteger* bi1, int32_t shiftVal);

  /// @brief Method op_Subtraction, addr 0x2acc0e0, size 0x22c, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_Subtraction(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2);

  /// @brief Method op_UnaryNegation, addr 0x2acc480, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Photon::SocketServer::Numeric::BigInteger* op_UnaryNegation(::Photon::SocketServer::Numeric::BigInteger* bi1);

  /// @brief Method setBit, addr 0x2ad1990, size 0x58, virtual false, abstract: false, final false
  inline void setBit(uint32_t bitNum);

  static inline void setStaticF_primesBelow2000(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method shiftLeft, addr 0x2acc6c8, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t shiftLeft(::ArrayW<uint32_t, ::Array<uint32_t>*> buffer, int32_t shiftVal);

  /// @brief Method shiftRight, addr 0x2acc8fc, size 0x108, virtual false, abstract: false, final false
  static inline int32_t shiftRight(::ArrayW<uint32_t, ::Array<uint32_t>*> buffer, int32_t shiftVal);

  /// @brief Method singleByteDivide, addr 0x2acd50c, size 0x308, virtual false, abstract: false, final false
  static inline void singleByteDivide(::Photon::SocketServer::Numeric::BigInteger* bi1, ::Photon::SocketServer::Numeric::BigInteger* bi2, ::Photon::SocketServer::Numeric::BigInteger* outQuotient,
                                      ::Photon::SocketServer::Numeric::BigInteger* outRemainder);

  /// @brief Method sqrt, addr 0x2ad04ec, size 0x140, virtual false, abstract: false, final false
  inline ::Photon::SocketServer::Numeric::BigInteger* sqrt();

  /// @brief Method unsetBit, addr 0x2ad19e8, size 0x7c, virtual false, abstract: false, final false
  inline void unsetBit(uint32_t bitNum);

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

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___data;

  /// @brief Field dataLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___dataLength;

  /// @brief Field maxLength offset 0xffffffff size 0x4
  static constexpr int32_t maxLength{ static_cast<int32_t>(0x46) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::SocketServer::Numeric::BigInteger, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::SocketServer::Numeric::BigInteger, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::SocketServer::Numeric::BigInteger, ___dataLength) == 0x18, "Offset mismatch!");

} // namespace Photon::SocketServer::Numeric
NEED_NO_BOX(::Photon::SocketServer::Numeric::BigInteger);
DEFINE_IL2CPP_ARG_TYPE(::Photon::SocketServer::Numeric::BigInteger*, "Photon.SocketServer.Numeric", "BigInteger");
