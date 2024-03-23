#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListLayerVersionsResponse)
namespace Amazon::Lambda::Model {
class LayerVersionsListItem;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListLayerVersionsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListLayerVersionsResponse);
// Type: Amazon.Lambda.Model::ListLayerVersionsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListLayerVersionsResponse*
class CORDL_TYPE ListLayerVersionsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_LayerVersions, put = set_LayerVersions))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* LayerVersions;

  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  /// @brief Field _layerVersions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__layerVersions,
                      put = __cordl_internal_set__layerVersions))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* _layerVersions;

  /// @brief Field _nextMarker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Method IsSetLayerVersions, addr 0x2bce3e8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLayerVersions();

  /// @brief Method IsSetNextMarker, addr 0x2bce44c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  static inline ::Amazon::Lambda::Model::ListLayerVersionsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*& __cordl_internal_get__layerVersions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*> const& __cordl_internal_get__layerVersions() const;

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr void __cordl_internal_set__layerVersions(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* value);

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  /// @brief Method .ctor, addr 0x2bce45c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LayerVersions, addr 0x2bce3d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* get_LayerVersions();

  /// @brief Method get_NextMarker, addr 0x2bce43c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method set_LayerVersions, addr 0x2bce3e0, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerVersions(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* value);

  /// @brief Method set_NextMarker, addr 0x2bce444, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListLayerVersionsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListLayerVersionsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListLayerVersionsResponse(ListLayerVersionsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListLayerVersionsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListLayerVersionsResponse(ListLayerVersionsResponse const&) = delete;

  /// @brief Field _layerVersions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* ____layerVersions;

  /// @brief Field _nextMarker, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListLayerVersionsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListLayerVersionsResponse, ____layerVersions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListLayerVersionsResponse, ____nextMarker) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListLayerVersionsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListLayerVersionsResponse*, "Amazon.Lambda.Model", "ListLayerVersionsResponse");
