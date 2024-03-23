#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ResponseEventArgs)
// Forward declare root types
namespace Amazon::Runtime {
class ResponseEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ResponseEventArgs);
// Type: Amazon.Runtime::ResponseEventArgs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ResponseEventArgs*
class CORDL_TYPE ResponseEventArgs : public ::System::EventArgs {
public:
  // Declarations
  static inline ::Amazon::Runtime::ResponseEventArgs* New_ctor();

  /// @brief Method .ctor, addr 0x2020b84, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseEventArgs(ResponseEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseEventArgs(ResponseEventArgs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ResponseEventArgs, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ResponseEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ResponseEventArgs*, "Amazon.Runtime", "ResponseEventArgs");
