#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlConvert)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Xml {
struct ExceptionType;
}
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
namespace System {
class ArgumentException;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlConvert;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlConvert);
// Type: System.Xml::XmlConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlConvert*
class CORDL_TYPE XmlConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Field WhitespaceChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_WhitespaceChars, put = setStaticF_WhitespaceChars))::ArrayW<char16_t, ::Array<char16_t>*> WhitespaceChars;

  /// @brief Field c_DecodeCharPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_DecodeCharPattern, put = setStaticF_c_DecodeCharPattern))::System::Text::RegularExpressions::Regex* c_DecodeCharPattern;

  /// @brief Field c_EncodeCharPattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_EncodeCharPattern, put = setStaticF_c_EncodeCharPattern))::System::Text::RegularExpressions::Regex* c_EncodeCharPattern;

  /// @brief Field c_EncodedCharLength, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_c_EncodedCharLength, put = setStaticF_c_EncodedCharLength)) int32_t c_EncodedCharLength;

  /// @brief Field crt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_crt, put = setStaticF_crt))::ArrayW<char16_t, ::Array<char16_t>*> crt;

  /// @brief Field s_allDateTimeFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_allDateTimeFormats, put = setStaticF_s_allDateTimeFormats))::ArrayW<::StringW, ::Array<::StringW>*> s_allDateTimeFormats;

  /// @brief Field xmlCharType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmlCharType, put = setStaticF_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Method CreateAllDateTimeFormats, addr 0x124acb8, size 0x6c4, virtual false, abstract: false, final false
  static inline void CreateAllDateTimeFormats();

  /// @brief Method CreateException, addr 0x124c56c, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::StringW arg, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x124c6a4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateException, addr 0x1247a10, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateException, addr 0x124c154, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateException(::StringW res, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidCharException, addr 0x124c3e4, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(::StringW data, int32_t invCharPos, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidCharException, addr 0x124ca24, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar);

  /// @brief Method CreateInvalidCharException, addr 0x124ca8c, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidCharException(char16_t invChar, char16_t nextChar, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x124c864, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x124c8bc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidHighSurrogateCharException, addr 0x124c928, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidHighSurrogateCharException(char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method CreateInvalidNameArgumentException, addr 0x124cb20, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::ArgumentException* CreateInvalidNameArgumentException(::StringW name, ::StringW argumentName);

  /// @brief Method CreateInvalidNameCharException, addr 0x12476c0, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidNameCharException(::StringW name, int32_t index, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x124c788, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x124c7f0, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method CreateInvalidSurrogatePairException, addr 0x124c22c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateInvalidSurrogatePairException(char16_t low, char16_t hi, ::System::Xml::ExceptionType exceptionType, int32_t lineNo, int32_t linePos);

  /// @brief Method DecodeName, addr 0x1246ae0, size 0x928, virtual false, abstract: false, final false
  static inline ::StringW DecodeName(::StringW name);

  /// @brief Method DoubleToInt64Bits, addr 0x124bf5c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t DoubleToInt64Bits(double_t value);

  /// @brief Method EncodeLocalName, addr 0x1246a84, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW EncodeLocalName(::StringW name);

  /// @brief Method EncodeName, addr 0x124605c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name);

  /// @brief Method EncodeName, addr 0x12460b8, size 0x9cc, virtual false, abstract: false, final false
  static inline ::StringW EncodeName(::StringW name, bool first, bool local);

  /// @brief Method FromBinHexString, addr 0x1247438, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBinHexString(::StringW s);

  /// @brief Method FromBinHexString, addr 0x1247490, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromBinHexString(::StringW s, bool allowOddCount);

  /// @brief Method FromHex, addr 0x1247408, size 0x30, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t digit);

  /// @brief Method IsNegativeZero, addr 0x12484e4, size 0x74, virtual false, abstract: false, final false
  static inline bool IsNegativeZero(double_t value);

  /// @brief Method SplitString, addr 0x124beec, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> SplitString(::StringW value);

  /// @brief Method StrEqual, addr 0x124bd4c, size 0xc8, virtual false, abstract: false, final false
  static inline bool StrEqual(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t strPos1, int32_t strLen1, ::StringW str2);

  /// @brief Method SwitchToLocalTime, addr 0x124890c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToLocalTime(::System::DateTime value);

  /// @brief Method SwitchToUtcTime, addr 0x1248980, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToUtcTime(::System::DateTime value);

  /// @brief Method ToBinHexString, addr 0x1247500, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToBinHexString(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray);

  /// @brief Method ToBoolean, addr 0x1248a50, size 0x1d0, virtual false, abstract: false, final false
  static inline bool ToBoolean(::StringW s);

  /// @brief Method ToByte, addr 0x1249ae4, size 0x28, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::StringW s);

  /// @brief Method ToChar, addr 0x1248eb0, size 0xc8, virtual false, abstract: false, final false
  static inline char16_t ToChar(::StringW s);

  /// @brief Method ToDateTime, addr 0x124b37c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s);

  /// @brief Method ToDateTime, addr 0x124b47c, size 0x220, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToDateTime, addr 0x124b3d8, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::DateTime ToDateTime(::StringW s, ::ArrayW<::StringW, ::Array<::StringW>*> formats);

  /// @brief Method ToDateTimeOffset, addr 0x124b69c, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset ToDateTimeOffset(::StringW s);

  /// @brief Method ToDecimal, addr 0x12490ec, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Decimal ToDecimal(::StringW s);

  /// @brief Method ToDouble, addr 0x124a434, size 0x118, virtual false, abstract: false, final false
  static inline double_t ToDouble(::StringW s);

  /// @brief Method ToGuid, addr 0x124b768, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Guid ToGuid(::StringW s);

  /// @brief Method ToInt16, addr 0x1249664, size 0x28, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::StringW s);

  /// @brief Method ToInt32, addr 0x12497e4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::StringW s);

  /// @brief Method ToInt64, addr 0x1249964, size 0x28, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::StringW s);

  /// @brief Method ToInteger, addr 0x12492e8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Decimal ToInteger(::StringW s);

  /// @brief Method ToSByte, addr 0x12494e4, size 0x28, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::StringW s);

  /// @brief Method ToSingle, addr 0x124a0e4, size 0x118, virtual false, abstract: false, final false
  static inline float_t ToSingle(::StringW s);

  /// @brief Method ToString, addr 0x1248724, size 0x1e8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::System::Xml::XmlDateTimeSerializationMode dateTimeOption);

  /// @brief Method ToString, addr 0x12486ac, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::StringW format);

  /// @brief Method ToString, addr 0x12489f4, size 0x38, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x1248234, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x1248a2c, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString, addr 0x1248654, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x12481ac, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x1248214, size 0x20, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value);

  /// @brief Method ToString, addr 0x1248558, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x12483e8, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x12482b4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString, addr 0x12482e0, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x124830c, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x1248288, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int8_t value);

  /// @brief Method ToString, addr 0x1248364, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint16_t value);

  /// @brief Method ToString, addr 0x1248390, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint32_t value);

  /// @brief Method ToString, addr 0x12483bc, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString, addr 0x1248338, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToTimeSpan, addr 0x124a9d8, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ToTimeSpan(::StringW s);

  /// @brief Method ToUInt16, addr 0x1249c64, size 0x28, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::StringW s);

  /// @brief Method ToUInt32, addr 0x1249de4, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::StringW s);

  /// @brief Method ToUInt64, addr 0x1249f64, size 0x28, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::StringW s);

  /// @brief Method ToUri, addr 0x124b978, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Uri* ToUri(::StringW s);

  /// @brief Method ToXPathDouble, addr 0x124a784, size 0x254, virtual false, abstract: false, final false
  static inline double_t ToXPathDouble(::System::Object* o);

  /// @brief Method TrimString, addr 0x1248c20, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimString(::StringW value);

  /// @brief Method TrimStringEnd, addr 0x124be80, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimStringEnd(::StringW value);

  /// @brief Method TrimStringStart, addr 0x124be14, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW TrimStringStart(::StringW value);

  /// @brief Method TryToBoolean, addr 0x1248c8c, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToBoolean(::StringW s, ByRef<bool> result);

  /// @brief Method TryToByte, addr 0x1249b0c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToByte(::StringW s, ByRef<uint8_t> result);

  /// @brief Method TryToChar, addr 0x1248f78, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToChar(::StringW s, ByRef<char16_t> result);

  /// @brief Method TryToDecimal, addr 0x124915c, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDecimal(::StringW s, ByRef<::System::Decimal> result);

  /// @brief Method TryToDouble, addr 0x124a54c, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToDouble(::StringW s, ByRef<double_t> result);

  /// @brief Method TryToGuid, addr 0x124b794, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToGuid(::StringW s, ByRef<::System::Guid> result);

  /// @brief Method TryToInt16, addr 0x124968c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt16(::StringW s, ByRef<int16_t> result);

  /// @brief Method TryToInt32, addr 0x124980c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt32(::StringW s, ByRef<int32_t> result);

  /// @brief Method TryToInt64, addr 0x124998c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInt64(::StringW s, ByRef<int64_t> result);

  /// @brief Method TryToInteger, addr 0x1249358, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToInteger(::StringW s, ByRef<::System::Decimal> result);

  /// @brief Method TryToSByte, addr 0x124950c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSByte(::StringW s, ByRef<int8_t> result);

  /// @brief Method TryToSingle, addr 0x124a1fc, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToSingle(::StringW s, ByRef<float_t> result);

  /// @brief Method TryToTimeSpan, addr 0x124ab74, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToTimeSpan(::StringW s, ByRef<::System::TimeSpan> result);

  /// @brief Method TryToUInt16, addr 0x1249c8c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt16(::StringW s, ByRef<uint16_t> result);

  /// @brief Method TryToUInt32, addr 0x1249e0c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt32(::StringW s, ByRef<uint32_t> result);

  /// @brief Method TryToUInt64, addr 0x1249f8c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUInt64(::StringW s, ByRef<uint64_t> result);

  /// @brief Method TryToUri, addr 0x124bb34, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Exception* TryToUri(::StringW s, ByRef<::System::Uri*> result);

  /// @brief Method TryVerifyNCName, addr 0x1247c9c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNCName(::StringW name);

  /// @brief Method TryVerifyNMTOKEN, addr 0x1247fb0, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNMTOKEN(::StringW name);

  /// @brief Method TryVerifyName, addr 0x1247784, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyName(::StringW name);

  /// @brief Method TryVerifyNormalizedString, addr 0x12480e0, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyNormalizedString(::StringW str);

  /// @brief Method TryVerifyTOKEN, addr 0x1247e74, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Exception* TryVerifyTOKEN(::StringW token);

  /// @brief Method VerifyCharData, addr 0x124bf64, size 0x1f0, virtual false, abstract: false, final false
  static inline void VerifyCharData(::StringW data, ::System::Xml::ExceptionType invCharExceptionType, ::System::Xml::ExceptionType invSurrogateExceptionType);

  /// @brief Method VerifyNCName, addr 0x1247aec, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name);

  /// @brief Method VerifyNCName, addr 0x1247b44, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW VerifyNCName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyName, addr 0x1247568, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW VerifyName(::StringW name);

  /// @brief Method VerifyQName, addr 0x12478e0, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW VerifyQName(::StringW name, ::System::Xml::ExceptionType exceptionType);

  /// @brief Method VerifyTOKEN, addr 0x1247d3c, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW VerifyTOKEN(::StringW token);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_WhitespaceChars();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_DecodeCharPattern();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_c_EncodeCharPattern();

  static inline int32_t getStaticF_c_EncodedCharLength();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_crt();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_allDateTimeFormats();

  static inline ::System::Xml::XmlCharType getStaticF_xmlCharType();

  /// @brief Method get_AllDateTimeFormats, addr 0x124ac20, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> get_AllDateTimeFormats();

  static inline void setStaticF_WhitespaceChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_c_DecodeCharPattern(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_c_EncodeCharPattern(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_c_EncodedCharLength(int32_t value);

  static inline void setStaticF_crt(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_allDateTimeFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_xmlCharType(::System::Xml::XmlCharType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlConvert(XmlConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlConvert(XmlConvert const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlConvert, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlConvert);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlConvert*, "System.Xml", "XmlConvert");
