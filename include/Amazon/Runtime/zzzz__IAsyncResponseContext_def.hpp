#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncResponseContext)
namespace Amazon::Runtime {
class IResponseContext;
}
// Forward declare root types
namespace Amazon::Runtime {
class IAsyncResponseContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IAsyncResponseContext);
// Type: Amazon.Runtime::IAsyncResponseContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IAsyncResponseContext*
class CORDL_TYPE IAsyncResponseContext {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::IResponseContext"
  constexpr operator ::Amazon::Runtime::IResponseContext*() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IResponseContext"
  constexpr ::Amazon::Runtime::IResponseContext* i___Amazon__Runtime__IResponseContext() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncResponseContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncResponseContext(IAsyncResponseContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncResponseContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncResponseContext(IAsyncResponseContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IAsyncResponseContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IAsyncResponseContext*, "Amazon.Runtime", "IAsyncResponseContext");
