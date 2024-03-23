#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListLayersPaginator)
namespace Amazon::Lambda::Model {
class LayersListItem;
}
namespace Amazon::Lambda::Model {
class ListLayersResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListLayersPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListLayersPaginator);
// Type: Amazon.Lambda.Model::IListLayersPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListLayersPaginator*
class CORDL_TYPE IListLayersPaginator {
public:
  // Declarations
  __declspec(property(get = get_Layers))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::LayersListItem*>* Layers;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListLayersResponse*>* Responses;

  /// @brief Method get_Layers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::LayersListItem*>* get_Layers();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListLayersResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListLayersPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListLayersPaginator(IListLayersPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListLayersPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListLayersPaginator(IListLayersPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListLayersPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListLayersPaginator*, "Amazon.Lambda.Model", "IListLayersPaginator");
