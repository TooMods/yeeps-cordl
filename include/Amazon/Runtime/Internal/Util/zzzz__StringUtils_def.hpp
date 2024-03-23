#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StringUtils)
namespace Amazon::Runtime {
class ConstantClass;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class StringUtils;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::StringUtils);
// Type: Amazon.Runtime.Internal.Util::StringUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::StringUtils*
class CORDL_TYPE StringUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field UTF_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UTF_8, put = setStaticF_UTF_8))::System::Text::Encoding* UTF_8;

  /// @brief Method FromBool, addr 0x2447390, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW FromBool(bool value);

  /// @brief Method FromDateTime, addr 0x24473f8, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW FromDateTime(::System::DateTime value);

  /// @brief Method FromDateTimeToISO8601, addr 0x2447478, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW FromDateTimeToISO8601(::System::DateTime value);

  /// @brief Method FromDateTimeToRFC822, addr 0x2447510, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW FromDateTimeToRFC822(::System::DateTime value);

  /// @brief Method FromDateTimeToUnixTimestamp, addr 0x24475a8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW FromDateTimeToUnixTimestamp(::System::DateTime value);

  /// @brief Method FromDecimal, addr 0x2447668, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW FromDecimal(::System::Decimal value);

  /// @brief Method FromDouble, addr 0x2447600, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW FromDouble(double_t value);

  /// @brief Method FromInt, addr 0x2447270, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW FromInt(::System::Nullable_1<int32_t> value);

  /// @brief Method FromInt, addr 0x2447208, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW FromInt(int32_t value);

  /// @brief Method FromLong, addr 0x2447328, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW FromLong(int64_t value);

  /// @brief Method FromMemoryStream, addr 0x244718c, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW FromMemoryStream(::System::IO::MemoryStream* value);

  /// @brief Method FromString, addr 0x24470f0, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW FromString(::Amazon::Runtime::ConstantClass* value);

  /// @brief Method FromString, addr 0x2447070, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW FromString(::StringW value);

  /// @brief Method FromStringWithSlashEncoding, addr 0x2447074, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW FromStringWithSlashEncoding(::StringW value);

  /// @brief Method Utf8ByteLength, addr 0x24476f8, size 0x84, virtual false, abstract: false, final false
  static inline int64_t Utf8ByteLength(::StringW value);

  static inline ::System::Text::Encoding* getStaticF_UTF_8();

  static inline void setStaticF_UTF_8(::System::Text::Encoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringUtils(StringUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringUtils(StringUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::StringUtils, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::StringUtils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::StringUtils*, "Amazon.Runtime.Internal.Util", "StringUtils");
