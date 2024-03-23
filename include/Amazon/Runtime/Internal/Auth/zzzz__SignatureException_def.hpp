#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SignatureException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class SignatureException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::SignatureException);
// Type: Amazon.Runtime.Internal.Auth::SignatureException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::SignatureException*
class CORDL_TYPE SignatureException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Auth::SignatureException* New_ctor(::StringW message);

  static inline ::Amazon::Runtime::Internal::Auth::SignatureException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x25e8fd0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25e9038, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureException(SignatureException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureException(SignatureException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::SignatureException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::SignatureException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::SignatureException*, "Amazon.Runtime.Internal.Auth", "SignatureException");
