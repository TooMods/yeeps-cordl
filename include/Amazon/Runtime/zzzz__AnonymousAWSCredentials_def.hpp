#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
CORDL_MODULE_EXPORT(AnonymousAWSCredentials)
namespace Amazon::Runtime {
class ImmutableCredentials;
}
// Forward declare root types
namespace Amazon::Runtime {
class AnonymousAWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::AnonymousAWSCredentials);
// Type: Amazon.Runtime::AnonymousAWSCredentials
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::AnonymousAWSCredentials*
class CORDL_TYPE AnonymousAWSCredentials : public ::Amazon::Runtime::AWSCredentials {
public:
  // Declarations
  /// @brief Method GetCredentials, addr 0x1fe4b00, size 0x50, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* GetCredentials();

  static inline ::Amazon::Runtime::AnonymousAWSCredentials* New_ctor();

  /// @brief Method .ctor, addr 0x1fe4b50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnonymousAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnonymousAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnonymousAWSCredentials(AnonymousAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnonymousAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnonymousAWSCredentials(AnonymousAWSCredentials const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::AnonymousAWSCredentials, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::AnonymousAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::AnonymousAWSCredentials*, "Amazon.Runtime", "AnonymousAWSCredentials");
