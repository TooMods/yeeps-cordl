#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListTagsRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListTagsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListTagsRequest);
// Type: Amazon.Lambda.Model::ListTagsRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListTagsRequest*
class CORDL_TYPE ListTagsRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Resource, put = set_Resource))::StringW Resource;

  /// @brief Field _resource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__resource, put = __cordl_internal_set__resource))::StringW _resource;

  /// @brief Method IsSetResource, addr 0x2bce710, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetResource();

  static inline ::Amazon::Lambda::Model::ListTagsRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__resource() const;

  constexpr ::StringW& __cordl_internal_get__resource();

  constexpr void __cordl_internal_set__resource(::StringW value);

  /// @brief Method .ctor, addr 0x2bce720, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Resource, addr 0x2bce700, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Resource();

  /// @brief Method set_Resource, addr 0x2bce708, size 0x8, virtual false, abstract: false, final false
  inline void set_Resource(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListTagsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListTagsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListTagsRequest(ListTagsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListTagsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListTagsRequest(ListTagsRequest const&) = delete;

  /// @brief Field _resource, offset: 0x38, size: 0x8, def value: None
  ::StringW ____resource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListTagsRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListTagsRequest, ____resource) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListTagsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListTagsRequest*, "Amazon.Lambda.Model", "ListTagsRequest");
