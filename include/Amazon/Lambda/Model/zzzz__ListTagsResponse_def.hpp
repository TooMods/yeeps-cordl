#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListTagsResponse)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListTagsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListTagsResponse);
// Type: Amazon.Lambda.Model::ListTagsResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListTagsResponse*
class CORDL_TYPE ListTagsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Tags, put = set_Tags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Tags;

  /// @brief Field _tags, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _tags;

  /// @brief Method IsSetTags, addr 0x2bce738, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetTags();

  static inline ::Amazon::Lambda::Model::ListTagsResponse* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__tags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__tags() const;

  constexpr void __cordl_internal_set__tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x2bce790, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Tags, addr 0x2bce728, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Tags();

  /// @brief Method set_Tags, addr 0x2bce730, size 0x8, virtual false, abstract: false, final false
  inline void set_Tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListTagsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListTagsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListTagsResponse(ListTagsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListTagsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListTagsResponse(ListTagsResponse const&) = delete;

  /// @brief Field _tags, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____tags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListTagsResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListTagsResponse, ____tags) == 0x28, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListTagsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListTagsResponse*, "Amazon.Lambda.Model", "ListTagsResponse");
