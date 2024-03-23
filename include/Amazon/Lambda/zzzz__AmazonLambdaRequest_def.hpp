#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
CORDL_MODULE_EXPORT(AmazonLambdaRequest)
// Forward declare root types
namespace Amazon::Lambda {
class AmazonLambdaRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::AmazonLambdaRequest);
// Type: Amazon.Lambda::AmazonLambdaRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::AmazonLambdaRequest*
class CORDL_TYPE AmazonLambdaRequest : public ::Amazon::Runtime::AmazonWebServiceRequest {
public:
  // Declarations
  static inline ::Amazon::Lambda::AmazonLambdaRequest* New_ctor();

  /// @brief Method .ctor, addr 0x2bb50ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonLambdaRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonLambdaRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonLambdaRequest(AmazonLambdaRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonLambdaRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonLambdaRequest(AmazonLambdaRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::AmazonLambdaRequest, 0x38>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::AmazonLambdaRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::AmazonLambdaRequest*, "Amazon.Lambda", "AmazonLambdaRequest");
