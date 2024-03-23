#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(UnknownEventStreamMessageTypeException)
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class UnknownEventStreamMessageTypeException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException);
// Type: Amazon.Runtime.EventStreams::UnknownEventStreamMessageTypeException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::UnknownEventStreamMessageTypeException*
class CORDL_TYPE UnknownEventStreamMessageTypeException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException* New_ctor();

  /// @brief Method .ctor, addr 0x2025390, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnknownEventStreamMessageTypeException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnknownEventStreamMessageTypeException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnknownEventStreamMessageTypeException(UnknownEventStreamMessageTypeException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnknownEventStreamMessageTypeException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnknownEventStreamMessageTypeException(UnknownEventStreamMessageTypeException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::UnknownEventStreamMessageTypeException*, "Amazon.Runtime.EventStreams", "UnknownEventStreamMessageTypeException");
