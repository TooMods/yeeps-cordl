#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidAsynchronousStateException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::ComponentModel {
class InvalidAsynchronousStateException;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::InvalidAsynchronousStateException);
// Type: System.ComponentModel::InvalidAsynchronousStateException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::InvalidAsynchronousStateException*
class CORDL_TYPE InvalidAsynchronousStateException : public ::System::ArgumentException {
public:
  // Declarations
  static inline ::System::ComponentModel::InvalidAsynchronousStateException* New_ctor();

  static inline ::System::ComponentModel::InvalidAsynchronousStateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                      ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ComponentModel::InvalidAsynchronousStateException* New_ctor(::StringW message);

  static inline ::System::ComponentModel::InvalidAsynchronousStateException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1af9d04, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1af9d20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x1af9d10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1af9d18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidAsynchronousStateException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidAsynchronousStateException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidAsynchronousStateException(InvalidAsynchronousStateException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidAsynchronousStateException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidAsynchronousStateException(InvalidAsynchronousStateException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::InvalidAsynchronousStateException, 0x98>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::InvalidAsynchronousStateException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InvalidAsynchronousStateException*, "System.ComponentModel", "InvalidAsynchronousStateException");
