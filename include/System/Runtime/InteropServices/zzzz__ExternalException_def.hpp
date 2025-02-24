#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalException)
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
namespace System::Runtime::InteropServices {
class ExternalException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ExternalException);
// Type: System.Runtime.InteropServices::ExternalException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::ExternalException*
class CORDL_TYPE ExternalException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode)) int32_t ErrorCode;

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor();

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor(::StringW message);

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor(::StringW message, int32_t errorCode);

  static inline ::System::Runtime::InteropServices::ExternalException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method ToString, addr 0x1b3f84c, size 0x1e4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x1b3f770, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1b3f83c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x1b3f7cc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1b3f814, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, int32_t errorCode);

  /// @brief Method .ctor, addr 0x1b3f7f0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method get_ErrorCode, addr 0x1b3f844, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ErrorCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExternalException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExternalException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExternalException(ExternalException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExternalException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExternalException(ExternalException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ExternalException, 0x90>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ExternalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ExternalException*, "System.Runtime.InteropServices", "ExternalException");
