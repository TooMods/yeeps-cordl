#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Auth/zzzz__SignatureException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SignatureException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class SignatureException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SignatureException);
// Type: Amazon.Runtime::SignatureException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::SignatureException*
class CORDL_TYPE SignatureException : public ::Amazon::Runtime::Internal::Auth::SignatureException {
public:
  // Declarations
  static inline ::Amazon::Runtime::SignatureException* New_ctor(::StringW message);

  static inline ::Amazon::Runtime::SignatureException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x202113c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2021144, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SignatureException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::SignatureException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SignatureException*, "Amazon.Runtime", "SignatureException");
