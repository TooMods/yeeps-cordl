#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Number_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Number)
namespace GlobalNamespace {
struct __Number__NumberBuffer__DigitsAndNullTerminator;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Text {
struct ValueStringBuilder;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormatProvider;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct __Number__NumberBuffer;
}
// Forward declare root types
namespace System {
class Number;
}
namespace GlobalNamespace {
struct __Number__NumberBuffer__DigitsAndNullTerminator;
}
namespace System {
struct __Number__NumberBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Number);
MARK_VAL_T(::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator);
MARK_VAL_T(::System::__Number__NumberBuffer);
// Type: ::DigitsAndNullTerminator
// SizeInfo { instance_size: 102, native_size: 102, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Number::NumberBuffer::DigitsAndNullTerminator
#pragma pack(push, 0)
struct CORDL_TYPE __Number__NumberBuffer__DigitsAndNullTerminator {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Number__NumberBuffer__DigitsAndNullTerminator();

  /// @brief Size padding 0x66 - 0x0 = 0x66, packed as 0x66
  uint8_t _cordl_size_padding[0x66];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x66 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator, 0x66>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NumberBuffer
// SizeInfo { instance_size: 122, native_size: 122, calculated_instance_size: 122, calculated_native_size: 138, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(1)
// }
namespace System {
// Is value type: true
// CS Name: ::Number::NumberBuffer
#pragma pack(push, 1)
struct CORDL_TYPE __Number__NumberBuffer {
public:
  // Declarations
  using DigitsAndNullTerminator = ::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator;

  __declspec(property(get = get_digits))::cordl_internals::Ptr<char16_t> digits;

  __declspec(property(get = get_sign, put = set_sign)) bool sign;

  /// @brief Method get_digits, addr 0x2efce14, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<char16_t> get_digits();

  /// @brief Method get_sign, addr 0x2efcdf8, size 0x10, virtual false, abstract: false, final false
  inline bool get_sign();

  /// @brief Method set_sign, addr 0x2efce08, size 0xc, virtual false, abstract: false, final false
  inline void set_sign(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Number__NumberBuffer();

  // Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_digits", ty: "::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator", modifiers: "", def_value: None },
  // CppParam { name: "_allDigits", ty: "::cordl_internals::Ptr<char16_t>", modifiers: "", def_value: None }]
  constexpr __Number__NumberBuffer(int32_t precision, int32_t scale, int32_t _sign, ::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator _digits,
                                   ::cordl_internals::Ptr<char16_t> _allDigits) noexcept;

  /// @brief Field precision, offset: 0x0, size: 0x4, def value: None
  int32_t precision;

  /// @brief Field scale, offset: 0x4, size: 0x4, def value: None
  int32_t scale;

  /// @brief Field _sign, offset: 0x8, size: 0x4, def value: None
  int32_t _sign;

  /// @brief Field _digits, offset: 0xc, size: 0x66, def value: None
  ::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator _digits;

  /// @brief Field _allDigits, offset: 0x72, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> _allDigits;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x7a };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Number__NumberBuffer, 0x7a>, "Size mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, precision) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, _sign) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, _digits) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::__Number__NumberBuffer, _allDigits) == 0x72, "Offset mismatch!");

} // namespace System
// Type: System::Number
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Number*
class CORDL_TYPE Number : public ::System::Object {
public:
  // Declarations
  using NumberBuffer = ::System::__Number__NumberBuffer;

  /// @brief Field s_charToHexLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_charToHexLookup, put = setStaticF_s_charToHexLookup))::ArrayW<int32_t, ::Array<int32_t>*> s_charToHexLookup;

  /// @brief Field s_negCurrencyFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_negCurrencyFormats, put = setStaticF_s_negCurrencyFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_negCurrencyFormats;

  /// @brief Field s_negNumberFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_negNumberFormats, put = setStaticF_s_negNumberFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_negNumberFormats;

  /// @brief Field s_negPercentFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_negPercentFormats, put = setStaticF_s_negPercentFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_negPercentFormats;

  /// @brief Field s_posCurrencyFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_posCurrencyFormats, put = setStaticF_s_posCurrencyFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_posCurrencyFormats;

  /// @brief Field s_posPercentFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_posPercentFormats, put = setStaticF_s_posPercentFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_posPercentFormats;

  /// @brief Field s_rgexp64Power10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgexp64Power10, put = setStaticF_s_rgexp64Power10))::ArrayW<int8_t, ::Array<int8_t>*> s_rgexp64Power10;

  /// @brief Field s_rgexp64Power10By16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgexp64Power10By16, put = setStaticF_s_rgexp64Power10By16))::ArrayW<int16_t, ::Array<int16_t>*> s_rgexp64Power10By16;

  /// @brief Field s_rgval64Power10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgval64Power10, put = setStaticF_s_rgval64Power10))::ArrayW<uint64_t, ::Array<uint64_t>*> s_rgval64Power10;

  /// @brief Field s_rgval64Power10By16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgval64Power10By16, put = setStaticF_s_rgval64Power10By16))::ArrayW<uint64_t, ::Array<uint64_t>*> s_rgval64Power10By16;

  /// @brief Method DecimalToNumber, addr 0x30da4ec, size 0x218, virtual false, abstract: false, final false
  static inline void DecimalToNumber(::System::Decimal value, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method DigitsToInt, addr 0x30e5cf8, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t DigitsToInt(::cordl_internals::Ptr<char16_t> p, int32_t count);

  /// @brief Method DoubleToNumber, addr 0x30dc690, size 0x47c, virtual false, abstract: false, final false
  static inline void DoubleToNumber(double_t value, int32_t precision, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method FindSection, addr 0x30e0c68, size 0x134, virtual false, abstract: false, final false
  static inline int32_t FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section);

  /// @brief Method FormatCurrency, addr 0x30df9f4, size 0x268, virtual false, abstract: false, final false
  static inline void FormatCurrency(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDecimal, addr 0x30da1cc, size 0x1e0, virtual false, abstract: false, final false
  static inline ::StringW FormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDouble, addr 0x30dc154, size 0x2e4, virtual false, abstract: false, final false
  static inline ::StringW FormatDouble(ByRef<::System::Text::ValueStringBuilder> sb, double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatDouble, addr 0x30dbff4, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW FormatDouble(double_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatExponent, addr 0x30e0d9c, size 0x2a8, virtual false, abstract: false, final false
  static inline void FormatExponent(ByRef<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo* info, int32_t value, char16_t expChar, int32_t minDigits,
                                    bool positiveSign);

  /// @brief Method FormatFixed, addr 0x30dfc5c, size 0x540, virtual false, abstract: false, final false
  static inline void FormatFixed(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                 ::System::Globalization::NumberFormatInfo* info, ::ArrayW<int32_t, ::Array<int32_t>*> groupDigits, ::StringW sDecimal, ::StringW sGroup);

  /// @brief Method FormatGeneral, addr 0x30e0648, size 0x3b8, virtual false, abstract: false, final false
  static inline void FormatGeneral(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info, char16_t expChar, bool bSuppressScientific);

  /// @brief Method FormatInt32, addr 0x30d2f3c, size 0x3c0, virtual false, abstract: false, final false
  static inline ::StringW FormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatInt64, addr 0x30d6204, size 0x2c8, virtual false, abstract: false, final false
  static inline ::StringW FormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatNumber, addr 0x30e019c, size 0x254, virtual false, abstract: false, final false
  static inline void FormatNumber(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                  ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatPercent, addr 0x30e0a00, size 0x268, virtual false, abstract: false, final false
  static inline void FormatPercent(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                   ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatScientific, addr 0x30e03f0, size 0x258, virtual false, abstract: false, final false
  static inline void FormatScientific(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits,
                                      ::System::Globalization::NumberFormatInfo* info, char16_t expChar);

  /// @brief Method FormatSingle, addr 0x30dd154, size 0x2f0, virtual false, abstract: false, final false
  static inline ::StringW FormatSingle(ByRef<::System::Text::ValueStringBuilder> sb, float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatSingle, addr 0x30dcff4, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW FormatSingle(float_t value, ::StringW format, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method FormatUInt32, addr 0x30d3508, size 0x370, virtual false, abstract: false, final false
  static inline ::StringW FormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method FormatUInt64, addr 0x30def2c, size 0x290, virtual false, abstract: false, final false
  static inline ::StringW FormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method High32, addr 0x30df8e8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t High32(uint64_t value);

  /// @brief Method Int32ToHexChars, addr 0x30df758, size 0x40, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> Int32ToHexChars(::cordl_internals::Ptr<char16_t> buffer, uint32_t value, int32_t hexBase, int32_t digits);

  /// @brief Method Int32ToHexStr, addr 0x30dd8fc, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW Int32ToHexStr(int32_t value, char16_t hexBase, int32_t digits);

  /// @brief Method Int32ToNumber, addr 0x30df62c, size 0x12c, virtual false, abstract: false, final false
  static inline void Int32ToNumber(int32_t value, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method Int64DivMod1E9, addr 0x30df8b0, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t Int64DivMod1E9(ByRef<uint64_t> value);

  /// @brief Method Int64ToHexStr, addr 0x30de44c, size 0x1ec, virtual false, abstract: false, final false
  static inline ::StringW Int64ToHexStr(int64_t value, char16_t hexBase, int32_t digits);

  /// @brief Method Int64ToNumber, addr 0x30de638, size 0x1a8, virtual false, abstract: false, final false
  static inline void Int64ToNumber(int64_t input, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method IsDigit, addr 0x30e4528, size 0x10, virtual false, abstract: false, final false
  static inline bool IsDigit(int32_t ch);

  /// @brief Method IsWhite, addr 0x30e4488, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsWhite(int32_t ch);

  /// @brief Method Low32, addr 0x30df8f0, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t Low32(uint64_t value);

  /// @brief Method MatchChars, addr 0x30e44a4, size 0x84, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> MatchChars(::cordl_internals::Ptr<char16_t> p, ::cordl_internals::Ptr<char16_t> pEnd, ::StringW value);

  /// @brief Method Mul32x32To64, addr 0x30e5d2c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Mul32x32To64(uint32_t a, uint32_t b);

  /// @brief Method Mul64Lossy, addr 0x30e5d34, size 0x98, virtual false, abstract: false, final false
  static inline uint64_t Mul64Lossy(uint64_t a, uint64_t b, ByRef<int32_t> pexp);

  /// @brief Method NegativeInt32ToDecStr, addr 0x30dd750, size 0x1ac, virtual false, abstract: false, final false
  static inline ::StringW NegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative);

  /// @brief Method NegativeInt64ToDecStr, addr 0x30de1ac, size 0x2a0, virtual false, abstract: false, final false
  static inline ::StringW NegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative);

  /// @brief Method NumberBufferToDecimal, addr 0x30e4b04, size 0x2d8, virtual false, abstract: false, final false
  static inline bool NumberBufferToDecimal(ByRef<::System::__Number__NumberBuffer> number, ByRef<::System::Decimal> value);

  /// @brief Method NumberBufferToDouble, addr 0x30e530c, size 0xd0, virtual false, abstract: false, final false
  static inline bool NumberBufferToDouble(ByRef<::System::__Number__NumberBuffer> number, ByRef<double_t> value);

  /// @brief Method NumberToDouble, addr 0x30dcb0c, size 0x4e8, virtual false, abstract: false, final false
  static inline double_t NumberToDouble(ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method NumberToInt32, addr 0x30e1044, size 0xbc, virtual false, abstract: false, final false
  static inline bool NumberToInt32(ByRef<::System::__Number__NumberBuffer> number, ByRef<int32_t> value);

  /// @brief Method NumberToInt64, addr 0x30e1100, size 0xb4, virtual false, abstract: false, final false
  static inline bool NumberToInt64(ByRef<::System::__Number__NumberBuffer> number, ByRef<int64_t> value);

  /// @brief Method NumberToString, addr 0x30da704, size 0x580, virtual false, abstract: false, final false
  static inline void NumberToString(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, char16_t format, int32_t nMaxDigits,
                                    ::System::Globalization::NumberFormatInfo* info, bool isDecimal);

  /// @brief Method NumberToStringFormat, addr 0x30dac84, size 0x1118, virtual false, abstract: false, final false
  static inline void NumberToStringFormat(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::System::__Number__NumberBuffer> number, ::System::ReadOnlySpan_1<char16_t> format,
                                          ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method NumberToUInt32, addr 0x30e11b4, size 0xb0, virtual false, abstract: false, final false
  static inline bool NumberToUInt32(ByRef<::System::__Number__NumberBuffer> number, ByRef<uint32_t> value);

  /// @brief Method NumberToUInt64, addr 0x30e1264, size 0xb0, virtual false, abstract: false, final false
  static inline bool NumberToUInt64(ByRef<::System::__Number__NumberBuffer> number, ByRef<uint64_t> value);

  /// @brief Method ParseDecimal, addr 0x30e49fc, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Decimal ParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseDouble, addr 0x30e4ddc, size 0x530, virtual false, abstract: false, final false
  static inline double_t ParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseFormatSpecifier, addr 0x30da3ac, size 0x140, virtual false, abstract: false, final false
  static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ByRef<int32_t> digits);

  /// @brief Method ParseInt32, addr 0x30d4458, size 0x1d8, virtual false, abstract: false, final false
  static inline int32_t ParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseInt64, addr 0x30d6abc, size 0x1dc, virtual false, abstract: false, final false
  static inline int64_t ParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseNumber, addr 0x30e3d80, size 0x708, virtual false, abstract: false, final false
  static inline bool ParseNumber(ByRef<::cordl_internals::Ptr<char16_t>> str, ::cordl_internals::Ptr<char16_t> strEnd, ::System::Globalization::NumberStyles styles,
                                 ByRef<::System::__Number__NumberBuffer> number, ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method ParseSingle, addr 0x30e53dc, size 0x5a0, virtual false, abstract: false, final false
  static inline float_t ParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseUInt32, addr 0x30e2ac4, size 0x1b8, virtual false, abstract: false, final false
  static inline uint32_t ParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method ParseUInt64, addr 0x30e341c, size 0x1b8, virtual false, abstract: false, final false
  static inline uint64_t ParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info);

  /// @brief Method RoundNumber, addr 0x30df8f4, size 0x100, virtual false, abstract: false, final false
  static inline void RoundNumber(ByRef<::System::__Number__NumberBuffer> number, int32_t pos);

  /// @brief Method StringToNumber, addr 0x30e1e94, size 0x138, virtual false, abstract: false, final false
  static inline void StringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ByRef<::System::__Number__NumberBuffer> number,
                                    ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method ThrowOverflowOrFormatException, addr 0x30e1abc, size 0x94, virtual false, abstract: false, final false
  static inline void ThrowOverflowOrFormatException(bool overflow, ::StringW overflowResourceKey);

  /// @brief Method TrailingZeros, addr 0x30e4668, size 0x7c, virtual false, abstract: false, final false
  static inline bool TrailingZeros(::System::ReadOnlySpan_1<char16_t> value, int32_t index);

  /// @brief Method TryCopyTo, addr 0x30dc5b4, size 0xdc, virtual false, abstract: false, final false
  static inline bool TryCopyTo(::StringW source, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatDecimal, addr 0x30dbd9c, size 0x20c, virtual false, abstract: false, final false
  static inline bool TryFormatDecimal(::System::Decimal value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                      ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatDouble, addr 0x30dc438, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryFormatDouble(double_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                     ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatInt32, addr 0x30d3d64, size 0x420, virtual false, abstract: false, final false
  static inline bool TryFormatInt32(int32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatInt64, addr 0x30d66b8, size 0x334, virtual false, abstract: false, final false
  static inline bool TryFormatInt64(int64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatSingle, addr 0x30dd444, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryFormatSingle(float_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo* info, ::System::Span_1<char16_t> destination,
                                     ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatUInt32, addr 0x30d398c, size 0x3d8, virtual false, abstract: false, final false
  static inline bool TryFormatUInt32(uint32_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                     ByRef<int32_t> charsWritten);

  /// @brief Method TryFormatUInt64, addr 0x30df350, size 0x2dc, virtual false, abstract: false, final false
  static inline bool TryFormatUInt64(uint64_t value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider, ::System::Span_1<char16_t> destination,
                                     ByRef<int32_t> charsWritten);

  /// @brief Method TryInt32ToHexStr, addr 0x30ddde0, size 0x174, virtual false, abstract: false, final false
  static inline bool TryInt32ToHexStr(int32_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryInt64ToHexStr, addr 0x30ded28, size 0x204, virtual false, abstract: false, final false
  static inline bool TryInt64ToHexStr(int64_t value, char16_t hexBase, int32_t digits, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryNegativeInt32ToDecStr, addr 0x30ddbf8, size 0x1e8, virtual false, abstract: false, final false
  static inline bool TryNegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryNegativeInt64ToDecStr, addr 0x30dea64, size 0x2c4, virtual false, abstract: false, final false
  static inline bool TryNegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryParseDecimal, addr 0x30e597c, size 0x104, virtual false, abstract: false, final false
  static inline bool TryParseDecimal(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                     ByRef<::System::Decimal> result);

  /// @brief Method TryParseDouble, addr 0x30e5a80, size 0x104, virtual false, abstract: false, final false
  static inline bool TryParseDouble(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<double_t> result);

  /// @brief Method TryParseInt32, addr 0x30d479c, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<int32_t> result);

  /// @brief Method TryParseInt32IntegerStyle, addr 0x30e1314, size 0x7a8, virtual false, abstract: false, final false
  static inline bool TryParseInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                               ByRef<int32_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseInt64, addr 0x30d6e48, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<int64_t> result);

  /// @brief Method TryParseInt64IntegerStyle, addr 0x30e1fcc, size 0x7b4, virtual false, abstract: false, final false
  static inline bool TryParseInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                               ByRef<int64_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseSingle, addr 0x30e5b84, size 0x174, virtual false, abstract: false, final false
  static inline bool TryParseSingle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<float_t> result);

  /// @brief Method TryParseUInt32, addr 0x30e46e4, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseUInt32(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<uint32_t> result);

  /// @brief Method TryParseUInt32HexNumberStyle, addr 0x30e1b50, size 0x344, virtual false, abstract: false, final false
  static inline bool TryParseUInt32HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                  ByRef<uint32_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt32IntegerStyle, addr 0x30e2c7c, size 0x7a0, virtual false, abstract: false, final false
  static inline bool TryParseUInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                ByRef<uint32_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt64, addr 0x30e4870, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseUInt64(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info, ByRef<uint64_t> result);

  /// @brief Method TryParseUInt64HexNumberStyle, addr 0x30e2780, size 0x344, virtual false, abstract: false, final false
  static inline bool TryParseUInt64HexNumberStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                  ByRef<uint64_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryParseUInt64IntegerStyle, addr 0x30e35d4, size 0x7ac, virtual false, abstract: false, final false
  static inline bool TryParseUInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ::System::Globalization::NumberFormatInfo* info,
                                                ByRef<uint64_t> result, ByRef<bool> failureIsOverflow);

  /// @brief Method TryStringToNumber, addr 0x30e4538, size 0x130, virtual false, abstract: false, final false
  static inline bool TryStringToNumber(::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::NumberStyles styles, ByRef<::System::__Number__NumberBuffer> number,
                                       ::System::Globalization::NumberFormatInfo* info, bool parseDecimal);

  /// @brief Method TryUInt32ToDecStr, addr 0x30dda34, size 0x1c4, virtual false, abstract: false, final false
  static inline bool TryUInt32ToDecStr(uint32_t value, int32_t digits, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryUInt64ToDecStr, addr 0x30de7e0, size 0x284, virtual false, abstract: false, final false
  static inline bool TryUInt64ToDecStr(uint64_t value, int32_t digits, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method UInt32ToDecChars, addr 0x30dbfa8, size 0x4c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<char16_t> UInt32ToDecChars(::cordl_internals::Ptr<char16_t> bufferEnd, uint32_t value, int32_t digits);

  /// @brief Method UInt32ToDecStr, addr 0x30dd5c0, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW UInt32ToDecStr(uint32_t value, int32_t digits);

  /// @brief Method UInt32ToNumber, addr 0x30df798, size 0x118, virtual false, abstract: false, final false
  static inline void UInt32ToNumber(uint32_t value, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method UInt64ToDecStr, addr 0x30ddf54, size 0x258, virtual false, abstract: false, final false
  static inline ::StringW UInt64ToDecStr(uint64_t value, int32_t digits);

  /// @brief Method UInt64ToNumber, addr 0x30df1bc, size 0x194, virtual false, abstract: false, final false
  static inline void UInt64ToNumber(uint64_t value, ByRef<::System::__Number__NumberBuffer> number);

  /// @brief Method abs, addr 0x30e5dcc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t abs(int32_t value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_charToHexLookup();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negCurrencyFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negNumberFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_negPercentFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_posCurrencyFormats();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_posPercentFormats();

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_s_rgexp64Power10();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_s_rgexp64Power10By16();

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_s_rgval64Power10();

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_s_rgval64Power10By16();

  static inline void setStaticF_s_charToHexLookup(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_negCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_negNumberFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_negPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_posCurrencyFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_posPercentFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_rgexp64Power10(::ArrayW<int8_t, ::Array<int8_t>*> value);

  static inline void setStaticF_s_rgexp64Power10By16(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline void setStaticF_s_rgval64Power10(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline void setStaticF_s_rgval64Power10By16(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Number();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Number(Number&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Number(Number const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Number, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Number);
DEFINE_IL2CPP_ARG_TYPE(::System::Number*, "System", "Number");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Number__NumberBuffer__DigitsAndNullTerminator, "System", "Number/NumberBuffer/DigitsAndNullTerminator");
DEFINE_IL2CPP_ARG_TYPE(::System::__Number__NumberBuffer, "System", "Number/NumberBuffer");
