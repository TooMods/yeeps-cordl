#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExceptionHandler_1)
namespace Amazon::Runtime {
class IExceptionHandler;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
// Forward declare root types
namespace Amazon::Runtime {
template <typename T> class IExceptionHandler_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::IExceptionHandler_1);
// Type: Amazon.Runtime::IExceptionHandler`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.Runtime::IExceptionHandler`1<T>*
class CORDL_TYPE IExceptionHandler_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::IExceptionHandler"
  constexpr operator ::Amazon::Runtime::IExceptionHandler*() noexcept;

  /// @brief Method HandleException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HandleException(::Amazon::Runtime::IExecutionContext* executionContext, T exception);

  /// @brief Convert to "::Amazon::Runtime::IExceptionHandler"
  constexpr ::Amazon::Runtime::IExceptionHandler* i___Amazon__Runtime__IExceptionHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IExceptionHandler_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExceptionHandler_1(IExceptionHandler_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExceptionHandler_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExceptionHandler_1(IExceptionHandler_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::IExceptionHandler_1, "Amazon.Runtime", "IExceptionHandler`1");
