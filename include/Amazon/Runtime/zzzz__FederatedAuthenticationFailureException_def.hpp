#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FederatedAuthenticationFailureException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class FederatedAuthenticationFailureException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::FederatedAuthenticationFailureException);
// Type: Amazon.Runtime::FederatedAuthenticationFailureException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::FederatedAuthenticationFailureException*
class CORDL_TYPE FederatedAuthenticationFailureException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::FederatedAuthenticationFailureException* New_ctor(::StringW msg);

  static inline ::Amazon::Runtime::FederatedAuthenticationFailureException* New_ctor(::StringW msg, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x1feaf54, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg);

  /// @brief Method .ctor, addr 0x1feafbc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FederatedAuthenticationFailureException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FederatedAuthenticationFailureException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FederatedAuthenticationFailureException(FederatedAuthenticationFailureException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FederatedAuthenticationFailureException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FederatedAuthenticationFailureException(FederatedAuthenticationFailureException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::FederatedAuthenticationFailureException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::FederatedAuthenticationFailureException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::FederatedAuthenticationFailureException*, "Amazon.Runtime", "FederatedAuthenticationFailureException");
