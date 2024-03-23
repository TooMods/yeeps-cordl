#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListTagsOfResourceResponse)
namespace Amazon::DynamoDBv2::Model {
class Tag;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListTagsOfResourceResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse);
// Type: Amazon.DynamoDBv2.Model::ListTagsOfResourceResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListTagsOfResourceResponse*
class CORDL_TYPE ListTagsOfResourceResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_NextToken, put = set_NextToken))::StringW NextToken;

  __declspec(property(get = get_Tags, put = set_Tags))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* Tags;

  /// @brief Field _nextToken, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nextToken, put = __cordl_internal_set__nextToken))::StringW _nextToken;

  /// @brief Field _tags, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* _tags;

  /// @brief Method IsSetNextToken, addr 0x104b618, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextToken();

  /// @brief Method IsSetTags, addr 0x104b638, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTags();

  static inline ::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__nextToken() const;

  constexpr ::StringW& __cordl_internal_get__nextToken();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>*& __cordl_internal_get__tags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>*> const& __cordl_internal_get__tags() const;

  constexpr void __cordl_internal_set__nextToken(::StringW value);

  constexpr void __cordl_internal_set__tags(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* value);

  /// @brief Method .ctor, addr 0x104b68c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NextToken, addr 0x104b608, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextToken();

  /// @brief Method get_Tags, addr 0x104b628, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* get_Tags();

  /// @brief Method set_NextToken, addr 0x104b610, size 0x8, virtual false, abstract: false, final false
  inline void set_NextToken(::StringW value);

  /// @brief Method set_Tags, addr 0x104b630, size 0x8, virtual false, abstract: false, final false
  inline void set_Tags(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListTagsOfResourceResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListTagsOfResourceResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListTagsOfResourceResponse(ListTagsOfResourceResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListTagsOfResourceResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListTagsOfResourceResponse(ListTagsOfResourceResponse const&) = delete;

  /// @brief Field _nextToken, offset: 0x28, size: 0x8, def value: None
  ::StringW ____nextToken;

  /// @brief Field _tags, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* ____tags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse, ____nextToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse, ____tags) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListTagsOfResourceResponse*, "Amazon.DynamoDBv2.Model", "ListTagsOfResourceResponse");
