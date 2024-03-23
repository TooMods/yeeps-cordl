#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListTagsOfResourceRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListTagsOfResourceRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest);
// Type: Amazon.DynamoDBv2.Model::ListTagsOfResourceRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListTagsOfResourceRequest*
class CORDL_TYPE ListTagsOfResourceRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_NextToken, put = set_NextToken))::StringW NextToken;

  __declspec(property(get = get_ResourceArn, put = set_ResourceArn))::StringW ResourceArn;

  /// @brief Field _nextToken, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nextToken, put = __cordl_internal_set__nextToken))::StringW _nextToken;

  /// @brief Field _resourceArn, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__resourceArn, put = __cordl_internal_set__resourceArn))::StringW _resourceArn;

  /// @brief Method IsSetNextToken, addr 0x104b5d0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextToken();

  /// @brief Method IsSetResourceArn, addr 0x104b5f0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetResourceArn();

  static inline ::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__nextToken() const;

  constexpr ::StringW& __cordl_internal_get__nextToken();

  constexpr ::StringW const& __cordl_internal_get__resourceArn() const;

  constexpr ::StringW& __cordl_internal_get__resourceArn();

  constexpr void __cordl_internal_set__nextToken(::StringW value);

  constexpr void __cordl_internal_set__resourceArn(::StringW value);

  /// @brief Method .ctor, addr 0x104b600, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NextToken, addr 0x104b5c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextToken();

  /// @brief Method get_ResourceArn, addr 0x104b5e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ResourceArn();

  /// @brief Method set_NextToken, addr 0x104b5c8, size 0x8, virtual false, abstract: false, final false
  inline void set_NextToken(::StringW value);

  /// @brief Method set_ResourceArn, addr 0x104b5e8, size 0x8, virtual false, abstract: false, final false
  inline void set_ResourceArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListTagsOfResourceRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListTagsOfResourceRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListTagsOfResourceRequest(ListTagsOfResourceRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListTagsOfResourceRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListTagsOfResourceRequest(ListTagsOfResourceRequest const&) = delete;

  /// @brief Field _nextToken, offset: 0x38, size: 0x8, def value: None
  ::StringW ____nextToken;

  /// @brief Field _resourceArn, offset: 0x40, size: 0x8, def value: None
  ::StringW ____resourceArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest, ____nextToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest, ____resourceArn) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListTagsOfResourceRequest*, "Amazon.DynamoDBv2.Model", "ListTagsOfResourceRequest");
