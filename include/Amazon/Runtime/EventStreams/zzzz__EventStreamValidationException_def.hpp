#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventStreamValidationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class EventStreamValidationException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::EventStreamValidationException);
// Type: Amazon.Runtime.EventStreams::EventStreamValidationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::EventStreamValidationException*
class CORDL_TYPE EventStreamValidationException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::EventStreams::EventStreamValidationException* New_ctor();

  static inline ::Amazon::Runtime::EventStreams::EventStreamValidationException* New_ctor(::StringW message);

  static inline ::Amazon::Runtime::EventStreams::EventStreamValidationException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2025260, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x20252b8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2025320, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamValidationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamValidationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamValidationException(EventStreamValidationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamValidationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamValidationException(EventStreamValidationException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::EventStreamValidationException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::EventStreamValidationException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::EventStreamValidationException*, "Amazon.Runtime.EventStreams", "EventStreamValidationException");
