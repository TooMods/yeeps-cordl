#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(RequestEventArgs)
// Forward declare root types
namespace Amazon::Runtime {
class RequestEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::RequestEventArgs);
// Type: Amazon.Runtime::RequestEventArgs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::RequestEventArgs*
class CORDL_TYPE RequestEventArgs : public ::System::EventArgs {
public:
  // Declarations
  static inline ::Amazon::Runtime::RequestEventArgs* New_ctor();

  /// @brief Method .ctor, addr 0x20204a8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestEventArgs(RequestEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestEventArgs(RequestEventArgs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::RequestEventArgs, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::RequestEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::RequestEventArgs*, "Amazon.Runtime", "RequestEventArgs");
