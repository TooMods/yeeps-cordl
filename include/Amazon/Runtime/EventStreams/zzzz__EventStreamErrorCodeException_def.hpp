#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventStreamErrorCodeException)
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class EventStreamErrorCodeException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::EventStreamErrorCodeException);
// Type: Amazon.Runtime.EventStreams::EventStreamErrorCodeException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::EventStreamErrorCodeException*
class CORDL_TYPE EventStreamErrorCodeException : public ::Amazon::Runtime::EventStreams::Internal::EventStreamException {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode, put = set_ErrorCode)) int32_t ErrorCode;

  static inline ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException* New_ctor(int32_t errorCode);

  static inline ::Amazon::Runtime::EventStreams::EventStreamErrorCodeException* New_ctor(int32_t errorCode, ::StringW message);

  /// @brief Method .ctor, addr 0x2022604, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t errorCode);

  /// @brief Method .ctor, addr 0x2022630, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t errorCode, ::StringW message);

  /// @brief Method get_ErrorCode, addr 0x20223ec, size 0x10c, virtual false, abstract: false, final false
  inline int32_t get_ErrorCode();

  /// @brief Method set_ErrorCode, addr 0x20224f8, size 0x10c, virtual false, abstract: false, final false
  inline void set_ErrorCode(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamErrorCodeException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamErrorCodeException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamErrorCodeException(EventStreamErrorCodeException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamErrorCodeException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamErrorCodeException(EventStreamErrorCodeException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::EventStreamErrorCodeException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::EventStreamErrorCodeException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::EventStreamErrorCodeException*, "Amazon.Runtime.EventStreams", "EventStreamErrorCodeException");
