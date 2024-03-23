#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TagResourceRequest)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class TagResourceRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::TagResourceRequest);
// Type: Amazon.Lambda.Model::TagResourceRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::TagResourceRequest*
class CORDL_TYPE TagResourceRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Resource, put = set_Resource))::StringW Resource;

  __declspec(property(get = get_Tags, put = set_Tags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Tags;

  /// @brief Field _resource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__resource, put = __cordl_internal_set__resource))::StringW _resource;

  /// @brief Field _tags, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _tags;

  /// @brief Method IsSetResource, addr 0x31092a4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetResource();

  /// @brief Method IsSetTags, addr 0x31092c4, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetTags();

  static inline ::Amazon::Lambda::Model::TagResourceRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__resource() const;

  constexpr ::StringW& __cordl_internal_get__resource();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__tags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__tags() const;

  constexpr void __cordl_internal_set__resource(::StringW value);

  constexpr void __cordl_internal_set__tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x310931c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Resource, addr 0x3109294, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Resource();

  /// @brief Method get_Tags, addr 0x31092b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Tags();

  /// @brief Method set_Resource, addr 0x310929c, size 0x8, virtual false, abstract: false, final false
  inline void set_Resource(::StringW value);

  /// @brief Method set_Tags, addr 0x31092bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

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

  /// @brief Field _resource, offset: 0x38, size: 0x8, def value: None
  ::StringW ____resource;

  /// @brief Field _tags, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____tags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::TagResourceRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::TagResourceRequest, ____resource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::TagResourceRequest, ____tags) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::TagResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::TagResourceRequest*, "Amazon.Lambda.Model", "TagResourceRequest");
