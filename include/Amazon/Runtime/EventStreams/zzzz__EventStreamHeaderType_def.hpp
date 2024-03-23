#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventStreamHeaderType)
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
struct EventStreamHeaderType;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::EventStreams::EventStreamHeaderType);
// Type: Amazon.Runtime.EventStreams::EventStreamHeaderType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: true
// CS Name: ::Amazon.Runtime.EventStreams::EventStreamHeaderType
struct CORDL_TYPE EventStreamHeaderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __EventStreamHeaderType_Unwrapped
  enum struct __EventStreamHeaderType_Unwrapped : uint8_t {
    __E_BoolTrue = static_cast<uint8_t>(0x0u),
    __E_BoolFalse = static_cast<uint8_t>(0x1u),
    __E_Byte = static_cast<uint8_t>(0x2u),
    __E_Int16 = static_cast<uint8_t>(0x3u),
    __E_Int32 = static_cast<uint8_t>(0x4u),
    __E_Int64 = static_cast<uint8_t>(0x5u),
    __E_ByteBuf = static_cast<uint8_t>(0x6u),
    __E_String = static_cast<uint8_t>(0x7u),
    __E_Timestamp = static_cast<uint8_t>(0x8u),
    __E_UUID = static_cast<uint8_t>(0x9u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventStreamHeaderType_Unwrapped() const noexcept {
    return static_cast<__EventStreamHeaderType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamHeaderType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr EventStreamHeaderType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field BoolFalse value: static_cast<uint8_t>(0x1u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const BoolFalse;

  /// @brief Field BoolTrue value: static_cast<uint8_t>(0x0u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const BoolTrue;

  /// @brief Field Byte value: static_cast<uint8_t>(0x2u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const Byte;

  /// @brief Field ByteBuf value: static_cast<uint8_t>(0x6u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const ByteBuf;

  /// @brief Field Int16 value: static_cast<uint8_t>(0x3u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const Int16;

  /// @brief Field Int32 value: static_cast<uint8_t>(0x4u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const Int32;

  /// @brief Field Int64 value: static_cast<uint8_t>(0x5u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const Int64;

  /// @brief Field String value: static_cast<uint8_t>(0x7u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const String;

  /// @brief Field Timestamp value: static_cast<uint8_t>(0x8u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const Timestamp;

  /// @brief Field UUID value: static_cast<uint8_t>(0x9u)
  static ::Amazon::Runtime::EventStreams::EventStreamHeaderType const UUID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::EventStreamHeaderType, 0x1>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::EventStreams::EventStreamHeaderType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::EventStreams
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::EventStreamHeaderType, "Amazon.Runtime.EventStreams", "EventStreamHeaderType");
