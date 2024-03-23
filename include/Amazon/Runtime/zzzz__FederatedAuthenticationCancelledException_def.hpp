#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FederatedAuthenticationCancelledException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class FederatedAuthenticationCancelledException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::FederatedAuthenticationCancelledException);
// Type: Amazon.Runtime::FederatedAuthenticationCancelledException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::FederatedAuthenticationCancelledException*
class CORDL_TYPE FederatedAuthenticationCancelledException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::FederatedAuthenticationCancelledException* New_ctor(::StringW msg);

  static inline ::Amazon::Runtime::FederatedAuthenticationCancelledException* New_ctor(::StringW msg, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x1feae7c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg);

  /// @brief Method .ctor, addr 0x1feaee4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW msg, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FederatedAuthenticationCancelledException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FederatedAuthenticationCancelledException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FederatedAuthenticationCancelledException(FederatedAuthenticationCancelledException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FederatedAuthenticationCancelledException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FederatedAuthenticationCancelledException(FederatedAuthenticationCancelledException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::FederatedAuthenticationCancelledException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::FederatedAuthenticationCancelledException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::FederatedAuthenticationCancelledException*, "Amazon.Runtime", "FederatedAuthenticationCancelledException");
