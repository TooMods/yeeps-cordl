#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerCalculator)
namespace System::Numerics {
struct __BigIntegerCalculator__BitsBuffer;
}
namespace System::Numerics {
struct __BigIntegerCalculator__FastReducer;
}
// Forward declare root types
namespace System::Numerics {
class BigIntegerCalculator;
}
namespace System::Numerics {
struct __BigIntegerCalculator__BitsBuffer;
}
namespace System::Numerics {
struct __BigIntegerCalculator__FastReducer;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::BigIntegerCalculator);
MARK_VAL_T(::System::Numerics::__BigIntegerCalculator__BitsBuffer);
MARK_VAL_T(::System::Numerics::__BigIntegerCalculator__FastReducer);
// Type: ::BitsBuffer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: true
// CS Name: ::BigIntegerCalculator::BitsBuffer
struct CORDL_TYPE __BigIntegerCalculator__BitsBuffer {
public:
  // Declarations
  /// @brief Method Apply, addr 0x2854140, size 0x94, virtual false, abstract: false, final false
  inline void Apply(ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> temp, int32_t maxLength);

  /// @brief Method GetBits, addr 0x2854270, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint32_t, ::Array<uint32_t>*> GetBits();

  /// @brief Method GetSize, addr 0x2852fdc, size 0x1c, virtual false, abstract: false, final false
  inline int32_t GetSize();

  /// @brief Method MultiplySelf, addr 0x285346c, size 0x130, virtual false, abstract: false, final false
  inline void MultiplySelf(ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> value, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> temp);

  /// @brief Method Reduce, addr 0x285359c, size 0xcc, virtual false, abstract: false, final false
  inline void Reduce(::ArrayW<uint32_t, ::Array<uint32_t>*> modulus);

  /// @brief Method Reduce, addr 0x285372c, size 0x28, virtual false, abstract: false, final false
  inline void Reduce(ByRef<::System::Numerics::__BigIntegerCalculator__FastReducer> reducer);

  /// @brief Method SquareSelf, addr 0x2853668, size 0xc4, virtual false, abstract: false, final false
  inline void SquareSelf(ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> temp);

  /// @brief Method .ctor, addr 0x2852e04, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, ::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x2852c58, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigIntegerCalculator__BitsBuffer();

  // Ctor Parameters [CppParam { name: "_bits", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr __BigIntegerCalculator__BitsBuffer(::ArrayW<uint32_t, ::Array<uint32_t>*> _bits, int32_t _length) noexcept;

  /// @brief Field _bits, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> _bits;

  /// @brief Field _length, offset: 0x8, size: 0x4, def value: None
  int32_t _length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::__BigIntegerCalculator__BitsBuffer, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Numerics::__BigIntegerCalculator__BitsBuffer, _bits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::__BigIntegerCalculator__BitsBuffer, _length) == 0x8, "Offset mismatch!");

} // namespace System::Numerics
// Type: ::FastReducer
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: true
// CS Name: ::BigIntegerCalculator::FastReducer
struct CORDL_TYPE __BigIntegerCalculator__FastReducer {
public:
  // Declarations
  /// @brief Method DivMul, addr 0x2854278, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t DivMul(::ArrayW<uint32_t, ::Array<uint32_t>*> left, int32_t leftLength, ::ArrayW<uint32_t, ::Array<uint32_t>*> right, int32_t rightLength,
                               ::ArrayW<uint32_t, ::Array<uint32_t>*> bits, int32_t k);

  /// @brief Method Reduce, addr 0x28541d4, size 0x9c, virtual false, abstract: false, final false
  inline int32_t Reduce(::ArrayW<uint32_t, ::Array<uint32_t>*> value, int32_t length);

  /// @brief Method SubMod, addr 0x28543c4, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t SubMod(::ArrayW<uint32_t, ::Array<uint32_t>*> left, int32_t leftLength, ::ArrayW<uint32_t, ::Array<uint32_t>*> right, int32_t rightLength,
                               ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus, int32_t k);

  /// @brief Method .ctor, addr 0x2853124, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> modulus);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigIntegerCalculator__FastReducer();

  // Ctor Parameters [CppParam { name: "_modulus", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "_mu", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>",
  // modifiers: "", def_value: None }, CppParam { name: "_q1", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "_q2", ty:
  // "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "_muLength", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BigIntegerCalculator__FastReducer(::ArrayW<uint32_t, ::Array<uint32_t>*> _modulus, ::ArrayW<uint32_t, ::Array<uint32_t>*> _mu, ::ArrayW<uint32_t, ::Array<uint32_t>*> _q1,
                                                ::ArrayW<uint32_t, ::Array<uint32_t>*> _q2, int32_t _muLength) noexcept;

  /// @brief Field _modulus, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> _modulus;

  /// @brief Field _mu, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> _mu;

  /// @brief Field _q1, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> _q1;

  /// @brief Field _q2, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> _q2;

  /// @brief Field _muLength, offset: 0x20, size: 0x4, def value: None
  int32_t _muLength;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::__BigIntegerCalculator__FastReducer, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Numerics::__BigIntegerCalculator__FastReducer, _modulus) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::__BigIntegerCalculator__FastReducer, _mu) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::__BigIntegerCalculator__FastReducer, _q1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::__BigIntegerCalculator__FastReducer, _q2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::__BigIntegerCalculator__FastReducer, _muLength) == 0x20, "Offset mismatch!");

} // namespace System::Numerics
// Type: System.Numerics::BigIntegerCalculator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// CS Name: ::System.Numerics::BigIntegerCalculator*
class CORDL_TYPE BigIntegerCalculator : public ::System::Object {
public:
  // Declarations
  using BitsBuffer = ::System::Numerics::__BigIntegerCalculator__BitsBuffer;

  using FastReducer = ::System::Numerics::__BigIntegerCalculator__FastReducer;

  /// @brief Field AllocationThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AllocationThreshold, put = setStaticF_AllocationThreshold)) int32_t AllocationThreshold;

  /// @brief Field MultiplyThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MultiplyThreshold, put = setStaticF_MultiplyThreshold)) int32_t MultiplyThreshold;

  /// @brief Field ReducerThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ReducerThreshold, put = setStaticF_ReducerThreshold)) int32_t ReducerThreshold;

  /// @brief Field SquareThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SquareThreshold, put = setStaticF_SquareThreshold)) int32_t SquareThreshold;

  /// @brief Method ActualLength, addr 0x2853754, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ActualLength(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method ActualLength, addr 0x28537b4, size 0x40, virtual false, abstract: false, final false
  static inline int32_t ActualLength(::ArrayW<uint32_t, ::Array<uint32_t>*> value, int32_t length);

  /// @brief Method Add, addr 0x28501bc, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Add(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Add, addr 0x28500e4, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Add(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Add, addr 0x2852410, size 0x88, virtual false, abstract: false, final false
  static inline void Add(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                         int32_t bitsLength);

  /// @brief Method AddDivisor, addr 0x2852ab8, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t AddDivisor(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength);

  /// @brief Method AddSelf, addr 0x2852498, size 0x6c, virtual false, abstract: false, final false
  static inline void AddSelf(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength);

  /// @brief Method Compare, addr 0x2850598, size 0x80, virtual false, abstract: false, final false
  static inline int32_t Compare(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Compare, addr 0x28525e8, size 0x48, virtual false, abstract: false, final false
  static inline int32_t Compare(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength);

  /// @brief Method CreateCopy, addr 0x2852630, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> CreateCopy(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method Divide, addr 0x2851dfc, size 0xdc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Divide(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Divide, addr 0x2851d48, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Divide(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Divide, addr 0x28526ac, size 0x2fc, virtual false, abstract: false, final false
  static inline void Divide(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                            int32_t bitsLength);

  /// @brief Method DivideGuessTooBig, addr 0x2852a24, size 0x4c, virtual false, abstract: false, final false
  static inline bool DivideGuessTooBig(uint64_t q, uint64_t valHi, uint32_t valLo, uint32_t divHi, uint32_t divLo);

  /// @brief Method LeadingZeros, addr 0x28529a8, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t LeadingZeros(uint32_t value);

  /// @brief Method Multiply, addr 0x2851b18, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Multiply, addr 0x2851970, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Multiply, addr 0x2853c5c, size 0x494, virtual false, abstract: false, final false
  static inline void Multiply(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                              int32_t bitsLength);

  /// @brief Method Pow, addr 0x284f0d4, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Pow(::ArrayW<uint32_t, ::Array<uint32_t>*> value, ::ArrayW<uint32_t, ::Array<uint32_t>*> power, ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus);

  /// @brief Method Pow, addr 0x284f1a0, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Pow(::ArrayW<uint32_t, ::Array<uint32_t>*> value, uint32_t power, ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus);

  /// @brief Method Pow, addr 0x284f26c, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Pow(uint32_t value, ::ArrayW<uint32_t, ::Array<uint32_t>*> power, ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus);

  /// @brief Method Pow, addr 0x284f304, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Pow(uint32_t value, uint32_t power, ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus);

  /// @brief Method Pow, addr 0x284ee5c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t Pow(::ArrayW<uint32_t, ::Array<uint32_t>*> value, ::ArrayW<uint32_t, ::Array<uint32_t>*> power, uint32_t modulus);

  /// @brief Method Pow, addr 0x284eed8, size 0xb8, virtual false, abstract: false, final false
  static inline uint32_t Pow(::ArrayW<uint32_t, ::Array<uint32_t>*> value, uint32_t power, uint32_t modulus);

  /// @brief Method Pow, addr 0x284ef90, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t Pow(uint32_t value, ::ArrayW<uint32_t, ::Array<uint32_t>*> power, uint32_t modulus);

  /// @brief Method Pow, addr 0x284f000, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t Pow(uint32_t value, uint32_t power, uint32_t modulus);

  /// @brief Method PowCore, addr 0x2852eb4, size 0x128, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> PowCore(::ArrayW<uint32_t, ::Array<uint32_t>*> power, ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus,
                                                               ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> value);

  /// @brief Method PowCore, addr 0x2852cdc, size 0x128, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> PowCore(uint32_t power, ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> value);

  /// @brief Method PowCore, addr 0x2852b38, size 0x120, virtual false, abstract: false, final false
  static inline uint32_t PowCore(::ArrayW<uint32_t, ::Array<uint32_t>*> power, uint32_t modulus, uint64_t value, uint64_t result);

  /// @brief Method PowCore, addr 0x2852af8, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t PowCore(uint32_t power, uint32_t modulus, uint64_t value, uint64_t result);

  /// @brief Method PowCore, addr 0x2852ff8, size 0x12c, virtual false, abstract: false, final false
  static inline void PowCore(::ArrayW<uint32_t, ::Array<uint32_t>*> power, ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> value,
                             ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> result, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> temp);

  /// @brief Method PowCore, addr 0x2853228, size 0x13c, virtual false, abstract: false, final false
  static inline void PowCore(::ArrayW<uint32_t, ::Array<uint32_t>*> power, ByRef<::System::Numerics::__BigIntegerCalculator__FastReducer> reducer,
                             ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> value, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> result,
                             ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> temp);

  /// @brief Method PowCore, addr 0x2853364, size 0x7c, virtual false, abstract: false, final false
  static inline void PowCore(uint32_t power, ::ArrayW<uint32_t, ::Array<uint32_t>*> modulus, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> value,
                             ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> result, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> temp);

  /// @brief Method PowCore, addr 0x28533e0, size 0x8c, virtual false, abstract: false, final false
  static inline void PowCore(uint32_t power, ByRef<::System::Numerics::__BigIntegerCalculator__FastReducer> reducer, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> value,
                             ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> result, ByRef<::System::Numerics::__BigIntegerCalculator__BitsBuffer> temp);

  /// @brief Method Remainder, addr 0x2852098, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Remainder(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Remainder, addr 0x2852034, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t Remainder(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Square, addr 0x2851a54, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Square(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method Square, addr 0x28537f4, size 0x3a8, virtual false, abstract: false, final false
  static inline void Square(::cordl_internals::Ptr<uint32_t> value, int32_t valueLength, ::cordl_internals::Ptr<uint32_t> bits, int32_t bitsLength);

  /// @brief Method Subtract, addr 0x2850618, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> left, ::ArrayW<uint32_t, ::Array<uint32_t>*> right);

  /// @brief Method Subtract, addr 0x28504e0, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> left, uint32_t right);

  /// @brief Method Subtract, addr 0x2852504, size 0x78, virtual false, abstract: false, final false
  static inline void Subtract(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> bits,
                              int32_t bitsLength);

  /// @brief Method SubtractCore, addr 0x2853b9c, size 0xc0, virtual false, abstract: false, final false
  static inline void SubtractCore(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, ::cordl_internals::Ptr<uint32_t> core,
                                  int32_t coreLength);

  /// @brief Method SubtractDivisor, addr 0x2852a70, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t SubtractDivisor(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength, uint64_t q);

  /// @brief Method SubtractSelf, addr 0x285257c, size 0x6c, virtual false, abstract: false, final false
  static inline void SubtractSelf(::cordl_internals::Ptr<uint32_t> left, int32_t leftLength, ::cordl_internals::Ptr<uint32_t> right, int32_t rightLength);

  static inline int32_t getStaticF_AllocationThreshold();

  static inline int32_t getStaticF_MultiplyThreshold();

  static inline int32_t getStaticF_ReducerThreshold();

  static inline int32_t getStaticF_SquareThreshold();

  static inline void setStaticF_AllocationThreshold(int32_t value);

  static inline void setStaticF_MultiplyThreshold(int32_t value);

  static inline void setStaticF_ReducerThreshold(int32_t value);

  static inline void setStaticF_SquareThreshold(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigIntegerCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigIntegerCalculator(BigIntegerCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigIntegerCalculator(BigIntegerCalculator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::BigIntegerCalculator, 0x10>, "Size mismatch!");

} // namespace System::Numerics
NEED_NO_BOX(::System::Numerics::BigIntegerCalculator);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigIntegerCalculator*, "System.Numerics", "BigIntegerCalculator");
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::__BigIntegerCalculator__BitsBuffer, "System.Numerics", "BigIntegerCalculator/BitsBuffer");
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::__BigIntegerCalculator__FastReducer, "System.Numerics", "BigIntegerCalculator/FastReducer");
