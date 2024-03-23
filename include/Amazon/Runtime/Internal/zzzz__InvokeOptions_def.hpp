#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__InvokeOptionsBase_def.hpp"
CORDL_MODULE_EXPORT(InvokeOptions)
// Forward declare root types
namespace Amazon::Runtime::Internal {
class InvokeOptions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::InvokeOptions);
// Type: Amazon.Runtime.Internal::InvokeOptions
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::InvokeOptions*
class CORDL_TYPE InvokeOptions : public ::Amazon::Runtime::Internal::InvokeOptionsBase {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::InvokeOptions* New_ctor();

  /// @brief Method .ctor, addr 0x23d907c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeOptions(InvokeOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeOptions(InvokeOptions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::InvokeOptions, 0x30>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::InvokeOptions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::InvokeOptions*, "Amazon.Runtime.Internal", "InvokeOptions");
