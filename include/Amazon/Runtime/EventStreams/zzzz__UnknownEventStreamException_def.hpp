#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnknownEventStreamException)
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class UnknownEventStreamException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::UnknownEventStreamException);
// Type: Amazon.Runtime.EventStreams::UnknownEventStreamException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::UnknownEventStreamException*
class CORDL_TYPE UnknownEventStreamException : public ::Amazon::Runtime::EventStreams::Internal::EventStreamException {
public:
  // Declarations
  __declspec(property(get = get_ExceptionType, put = set_ExceptionType))::StringW ExceptionType;

  static inline ::Amazon::Runtime::EventStreams::UnknownEventStreamException* New_ctor(::StringW exceptionType);

  /// @brief Method .ctor, addr 0x202559c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW exceptionType);

  /// @brief Method get_ExceptionType, addr 0x20253e8, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW get_ExceptionType();

  /// @brief Method set_ExceptionType, addr 0x20254c4, size 0xd8, virtual false, abstract: false, final false
  inline void set_ExceptionType(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnknownEventStreamException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnknownEventStreamException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnknownEventStreamException(UnknownEventStreamException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnknownEventStreamException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnknownEventStreamException(UnknownEventStreamException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::EventStreams::UnknownEventStreamException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::UnknownEventStreamException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::UnknownEventStreamException*, "Amazon.Runtime.EventStreams", "UnknownEventStreamException");
