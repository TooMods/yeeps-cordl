#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventStreamException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
class EventStreamException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::EventStreamException);
// Type: Amazon.Runtime.EventStreams.Internal::EventStreamException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::EventStreamException*
class CORDL_TYPE EventStreamException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::EventStreams::Internal::EventStreamException* New_ctor();

  static inline ::Amazon::Runtime::EventStreams::Internal::EventStreamException* New_ctor(::StringW message);

  static inline ::Amazon::Runtime::EventStreams::Internal::EventStreamException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x20255c4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x202265c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2026488, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamException(EventStreamException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamException(EventStreamException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::Internal::EventStreamException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime::EventStreams::Internal
NEED_NO_BOX(::Amazon::Runtime::EventStreams::Internal::EventStreamException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::Internal::EventStreamException*, "Amazon.Runtime.EventStreams.Internal", "EventStreamException");
