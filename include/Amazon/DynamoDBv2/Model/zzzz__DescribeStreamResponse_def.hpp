#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(DescribeStreamResponse)
namespace Amazon::DynamoDBv2::Model {
class StreamDescription;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeStreamResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeStreamResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeStreamResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeStreamResponse*
class CORDL_TYPE DescribeStreamResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_StreamDescription, put = set_StreamDescription))::Amazon::DynamoDBv2::Model::StreamDescription* StreamDescription;

  /// @brief Field _streamDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__streamDescription, put = __cordl_internal_set__streamDescription))::Amazon::DynamoDBv2::Model::StreamDescription* _streamDescription;

  /// @brief Method IsSetStreamDescription, addr 0x122a7f8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamDescription();

  static inline ::Amazon::DynamoDBv2::Model::DescribeStreamResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::StreamDescription*& __cordl_internal_get__streamDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamDescription*> const& __cordl_internal_get__streamDescription() const;

  constexpr void __cordl_internal_set__streamDescription(::Amazon::DynamoDBv2::Model::StreamDescription* value);

  /// @brief Method .ctor, addr 0x122a808, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_StreamDescription, addr 0x122a7e8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::StreamDescription* get_StreamDescription();

  /// @brief Method set_StreamDescription, addr 0x122a7f0, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamDescription(::Amazon::DynamoDBv2::Model::StreamDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeStreamResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeStreamResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeStreamResponse(DescribeStreamResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeStreamResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeStreamResponse(DescribeStreamResponse const&) = delete;

  /// @brief Field _streamDescription, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::StreamDescription* ____streamDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeStreamResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeStreamResponse, ____streamDescription) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeStreamResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeStreamResponse*, "Amazon.DynamoDBv2.Model", "DescribeStreamResponse");
