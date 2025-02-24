#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemotingException)
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
namespace System::Runtime::Remoting {
class RemotingException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::RemotingException);
// Type: System.Runtime.Remoting::RemotingException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::RemotingException*
class CORDL_TYPE RemotingException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::RemotingException* New_ctor();

  static inline ::System::Runtime::Remoting::RemotingException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Remoting::RemotingException* New_ctor(::StringW message);

  static inline ::System::Runtime::Remoting::RemotingException* New_ctor(::StringW message, ::System::Exception* InnerException);

  /// @brief Method .ctor, addr 0x197d930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x197d938, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x1974238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x197ae78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* InnerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemotingException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingException(RemotingException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingException(RemotingException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::RemotingException, 0x90>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::RemotingException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::RemotingException*, "System.Runtime.Remoting", "RemotingException");
