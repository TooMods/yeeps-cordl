#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventStreamChecksumFailureException)
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class EventStreamChecksumFailureException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException);
// Type: Amazon.Runtime.EventStreams::EventStreamChecksumFailureException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::EventStreamChecksumFailureException*
class CORDL_TYPE EventStreamChecksumFailureException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2023cb4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStreamChecksumFailureException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStreamChecksumFailureException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStreamChecksumFailureException(EventStreamChecksumFailureException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStreamChecksumFailureException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStreamChecksumFailureException(EventStreamChecksumFailureException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::EventStreamChecksumFailureException*, "Amazon.Runtime.EventStreams", "EventStreamChecksumFailureException");
