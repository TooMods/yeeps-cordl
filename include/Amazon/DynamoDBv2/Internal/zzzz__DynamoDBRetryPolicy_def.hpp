#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__DefaultRetryPolicy_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamoDBRetryPolicy)
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Internal {
class DynamoDBRetryPolicy;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy);
// Type: Amazon.DynamoDBv2.Internal::DynamoDBRetryPolicy
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Internal {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Internal::DynamoDBRetryPolicy*
class CORDL_TYPE DynamoDBRetryPolicy : public ::Amazon::Runtime::Internal::DefaultRetryPolicy {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy* New_ctor(::Amazon::Runtime::IClientConfig* config);

  /// @brief Method WaitBeforeRetry, addr 0x17453e4, size 0x128, virtual true, abstract: false, final false
  inline void WaitBeforeRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method .ctor, addr 0x1745250, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IClientConfig* config);

  /// @brief Method pauseExponentially, addr 0x174550c, size 0x10c, virtual false, abstract: false, final false
  inline void pauseExponentially(int32_t retries);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBRetryPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBRetryPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBRetryPolicy(DynamoDBRetryPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBRetryPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBRetryPolicy(DynamoDBRetryPolicy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy, 0x58>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Internal
NEED_NO_BOX(::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*, "Amazon.DynamoDBv2.Internal", "DynamoDBRetryPolicy");
