#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AWSCredentials)
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace Amazon::Runtime {
class AWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AWSCredentials);
// Type: Amazon.Runtime::AWSCredentials
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AWSCredentials*
class CORDL_TYPE AWSCredentials : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCredentials, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::ImmutableCredentials* GetCredentials();

  /// @brief Method GetCredentialsAsync, addr 0x1fe79d8, size 0x84, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* GetCredentialsAsync();

  static inline ::Amazon::Runtime::AWSCredentials* New_ctor();

  /// @brief Method Validate, addr 0x1fe79d4, size 0x4, virtual true, abstract: false, final false
  inline void Validate();

  /// @brief Method .ctor, addr 0x1fe4b58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSCredentials(AWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSCredentials(AWSCredentials const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AWSCredentials, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AWSCredentials*, "Amazon.Runtime", "AWSCredentials");
