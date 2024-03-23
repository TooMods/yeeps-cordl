#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__ResponseContext_def.hpp"
CORDL_MODULE_EXPORT(AsyncResponseContext)
namespace Amazon::Runtime {
class IAsyncResponseContext;
}
namespace Amazon::Runtime {
class IResponseContext;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class AsyncResponseContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::AsyncResponseContext);
// Type: Amazon.Runtime.Internal::AsyncResponseContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::AsyncResponseContext*
class CORDL_TYPE AsyncResponseContext : public ::Amazon::Runtime::Internal::ResponseContext {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::IAsyncResponseContext"
  constexpr operator ::Amazon::Runtime::IAsyncResponseContext*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::IResponseContext"
  constexpr operator ::Amazon::Runtime::IResponseContext*() noexcept;

  static inline ::Amazon::Runtime::Internal::AsyncResponseContext* New_ctor();

  /// @brief Method .ctor, addr 0x23dcda0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Amazon::Runtime::IAsyncResponseContext"
  constexpr ::Amazon::Runtime::IAsyncResponseContext* i___Amazon__Runtime__IAsyncResponseContext() noexcept;

  /// @brief Convert to "::Amazon::Runtime::IResponseContext"
  constexpr ::Amazon::Runtime::IResponseContext* i___Amazon__Runtime__IResponseContext() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncResponseContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncResponseContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncResponseContext(AsyncResponseContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncResponseContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncResponseContext(AsyncResponseContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::AsyncResponseContext, 0x20>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::AsyncResponseContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::AsyncResponseContext*, "Amazon.Runtime.Internal", "AsyncResponseContext");
