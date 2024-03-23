#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UntagResourceRequest)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class UntagResourceRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UntagResourceRequest);
// Type: Amazon.Lambda.Model::UntagResourceRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UntagResourceRequest*
class CORDL_TYPE UntagResourceRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Resource, put = set_Resource))::StringW Resource;

  __declspec(property(get = get_TagKeys, put = set_TagKeys))::System::Collections::Generic::List_1<::StringW>* TagKeys;

  /// @brief Field _resource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__resource, put = __cordl_internal_set__resource))::StringW _resource;

  /// @brief Field _tagKeys, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tagKeys, put = __cordl_internal_set__tagKeys))::System::Collections::Generic::List_1<::StringW>* _tagKeys;

  /// @brief Method IsSetResource, addr 0x31095c0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetResource();

  /// @brief Method IsSetTagKeys, addr 0x31095e0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetTagKeys();

  static inline ::Amazon::Lambda::Model::UntagResourceRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__resource() const;

  constexpr ::StringW& __cordl_internal_get__resource();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__tagKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__tagKeys() const;

  constexpr void __cordl_internal_set__resource(::StringW value);

  constexpr void __cordl_internal_set__tagKeys(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x3109634, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Resource, addr 0x31095b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Resource();

  /// @brief Method get_TagKeys, addr 0x31095d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_TagKeys();

  /// @brief Method set_Resource, addr 0x31095b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Resource(::StringW value);

  /// @brief Method set_TagKeys, addr 0x31095d8, size 0x8, virtual false, abstract: false, final false
  inline void set_TagKeys(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UntagResourceRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UntagResourceRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UntagResourceRequest(UntagResourceRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UntagResourceRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UntagResourceRequest(UntagResourceRequest const&) = delete;

  /// @brief Field _resource, offset: 0x38, size: 0x8, def value: None
  ::StringW ____resource;

  /// @brief Field _tagKeys, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____tagKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UntagResourceRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UntagResourceRequest, ____resource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UntagResourceRequest, ____tagKeys) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UntagResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UntagResourceRequest*, "Amazon.Lambda.Model", "UntagResourceRequest");
