#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProcessAWSCredentialException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class ProcessAWSCredentialException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ProcessAWSCredentialException);
// Type: Amazon.Runtime::ProcessAWSCredentialException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ProcessAWSCredentialException*
class CORDL_TYPE ProcessAWSCredentialException : public ::System::Exception {
public:
  // Declarations
  static inline ::Amazon::Runtime::ProcessAWSCredentialException* New_ctor(::StringW message);

  static inline ::Amazon::Runtime::ProcessAWSCredentialException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x1fef58c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1fef51c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessAWSCredentialException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessAWSCredentialException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessAWSCredentialException(ProcessAWSCredentialException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessAWSCredentialException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessAWSCredentialException(ProcessAWSCredentialException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ProcessAWSCredentialException, 0x90>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ProcessAWSCredentialException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ProcessAWSCredentialException*, "Amazon.Runtime", "ProcessAWSCredentialException");
