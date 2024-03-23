#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Auth/zzzz__AWS3Signer_def.hpp"
CORDL_MODULE_EXPORT(AWS3HTTPSigner)
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class AWS3HTTPSigner;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner);
// Type: Amazon.Runtime.Internal.Auth::AWS3HTTPSigner
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::AWS3HTTPSigner*
class CORDL_TYPE AWS3HTTPSigner : public ::Amazon::Runtime::Internal::Auth::AWS3Signer {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner* New_ctor();

  /// @brief Method .ctor, addr 0x25de044, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWS3HTTPSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWS3HTTPSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWS3HTTPSigner(AWS3HTTPSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWS3HTTPSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWS3HTTPSigner(AWS3HTTPSigner const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner, 0x20>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::AWS3HTTPSigner*, "Amazon.Runtime.Internal.Auth", "AWS3HTTPSigner");
