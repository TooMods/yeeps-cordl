#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListLayerVersionsPaginator)
namespace Amazon::Lambda::Model {
class LayerVersionsListItem;
}
namespace Amazon::Lambda::Model {
class ListLayerVersionsResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListLayerVersionsPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListLayerVersionsPaginator);
// Type: Amazon.Lambda.Model::IListLayerVersionsPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListLayerVersionsPaginator*
class CORDL_TYPE IListLayerVersionsPaginator {
public:
  // Declarations
  __declspec(property(get = get_LayerVersions))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* LayerVersions;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* Responses;

  /// @brief Method get_LayerVersions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* get_LayerVersions();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListLayerVersionsPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListLayerVersionsPaginator(IListLayerVersionsPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListLayerVersionsPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListLayerVersionsPaginator(IListLayerVersionsPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListLayerVersionsPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListLayerVersionsPaginator*, "Amazon.Lambda.Model", "IListLayerVersionsPaginator");
