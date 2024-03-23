#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListLayersResponse)
namespace Amazon::Lambda::Model {
class LayersListItem;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListLayersResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListLayersResponse);
// Type: Amazon.Lambda.Model::ListLayersResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListLayersResponse*
class CORDL_TYPE ListLayersResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Layers, put = set_Layers))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayersListItem*>* Layers;

  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  /// @brief Field _layers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__layers, put = __cordl_internal_set__layers))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayersListItem*>* _layers;

  /// @brief Field _nextMarker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Method IsSetLayers, addr 0x2bce150, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLayers();

  /// @brief Method IsSetNextMarker, addr 0x2bce1b4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  static inline ::Amazon::Lambda::Model::ListLayersResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayersListItem*>*& __cordl_internal_get__layers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayersListItem*>*> const& __cordl_internal_get__layers() const;

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr void __cordl_internal_set__layers(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayersListItem*>* value);

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  /// @brief Method .ctor, addr 0x2bce1c4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Layers, addr 0x2bce140, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayersListItem*>* get_Layers();

  /// @brief Method get_NextMarker, addr 0x2bce1a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method set_Layers, addr 0x2bce148, size 0x8, virtual false, abstract: false, final false
  inline void set_Layers(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayersListItem*>* value);

  /// @brief Method set_NextMarker, addr 0x2bce1ac, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListLayersResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListLayersResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListLayersResponse(ListLayersResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListLayersResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListLayersResponse(ListLayersResponse const&) = delete;

  /// @brief Field _layers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayersListItem*>* ____layers;

  /// @brief Field _nextMarker, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListLayersResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListLayersResponse, ____layers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListLayersResponse, ____nextMarker) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListLayersResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListLayersResponse*, "Amazon.Lambda.Model", "ListLayersResponse");
