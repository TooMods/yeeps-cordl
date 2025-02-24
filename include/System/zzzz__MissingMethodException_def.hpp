#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MissingMemberException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissingMethodException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class MissingMethodException;
}
// Write type traits
MARK_REF_PTR_T(::System::MissingMethodException);
// Type: System::MissingMethodException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::MissingMethodException*
class CORDL_TYPE MissingMethodException : public ::System::MissingMemberException {
public:
  // Declarations
  __declspec(property(get = get_Message))::StringW Message;

  static inline ::System::MissingMethodException* New_ctor();

  static inline ::System::MissingMethodException* New_ctor(::StringW className, ::StringW methodName);

  static inline ::System::MissingMethodException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::MissingMethodException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x30d9c2c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x30d9cac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW className, ::StringW methodName);

  /// @brief Method .ctor, addr 0x30d9cd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x30d9c88, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method get_Message, addr 0x30d9ce0, size 0x12c, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingMethodException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingMethodException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingMethodException(MissingMethodException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingMethodException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingMethodException(MissingMethodException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MissingMethodException, 0xa8>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MissingMethodException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingMethodException*, "System", "MissingMethodException");
