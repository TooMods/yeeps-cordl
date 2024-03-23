#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TagResourceRequest)
namespace Amazon::DynamoDBv2::Model {
class Tag;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TagResourceRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TagResourceRequest);
// Type: Amazon.DynamoDBv2.Model::TagResourceRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TagResourceRequest*
class CORDL_TYPE TagResourceRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ResourceArn, put = set_ResourceArn))::StringW ResourceArn;

  __declspec(property(get = get_Tags, put = set_Tags))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* Tags;

  /// @brief Field _resourceArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__resourceArn, put = __cordl_internal_set__resourceArn))::StringW _resourceArn;

  /// @brief Field _tags, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* _tags;

  /// @brief Method IsSetResourceArn, addr 0x1052dc8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetResourceArn();

  /// @brief Method IsSetTags, addr 0x1052de8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTags();

  static inline ::Amazon::DynamoDBv2::Model::TagResourceRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__resourceArn() const;

  constexpr ::StringW& __cordl_internal_get__resourceArn();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>*& __cordl_internal_get__tags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>*> const& __cordl_internal_get__tags() const;

  constexpr void __cordl_internal_set__resourceArn(::StringW value);

  constexpr void __cordl_internal_set__tags(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* value);

  /// @brief Method .ctor, addr 0x1052e3c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ResourceArn, addr 0x1052db8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ResourceArn();

  /// @brief Method get_Tags, addr 0x1052dd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* get_Tags();

  /// @brief Method set_ResourceArn, addr 0x1052dc0, size 0x8, virtual false, abstract: false, final false
  inline void set_ResourceArn(::StringW value);

  /// @brief Method set_Tags, addr 0x1052de0, size 0x8, virtual false, abstract: false, final false
  inline void set_Tags(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TagResourceRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TagResourceRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TagResourceRequest(TagResourceRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TagResourceRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TagResourceRequest(TagResourceRequest const&) = delete;

  /// @brief Field _resourceArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____resourceArn;

  /// @brief Field _tags, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Tag*>* ____tags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TagResourceRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TagResourceRequest, ____resourceArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TagResourceRequest, ____tags) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TagResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TagResourceRequest*, "Amazon.DynamoDBv2.Model", "TagResourceRequest");
