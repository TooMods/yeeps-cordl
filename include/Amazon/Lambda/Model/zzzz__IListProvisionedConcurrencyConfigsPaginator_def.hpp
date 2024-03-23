#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListProvisionedConcurrencyConfigsPaginator)
namespace Amazon::Lambda::Model {
class ListProvisionedConcurrencyConfigsResponse;
}
namespace Amazon::Lambda::Model {
class ProvisionedConcurrencyConfigListItem;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListProvisionedConcurrencyConfigsPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListProvisionedConcurrencyConfigsPaginator);
// Type: Amazon.Lambda.Model::IListProvisionedConcurrencyConfigsPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListProvisionedConcurrencyConfigsPaginator*
class CORDL_TYPE IListProvisionedConcurrencyConfigsPaginator {
public:
  // Declarations
  __declspec(property(get = get_ProvisionedConcurrencyConfigs))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* ProvisionedConcurrencyConfigs;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>* Responses;

  /// @brief Method get_ProvisionedConcurrencyConfigs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* get_ProvisionedConcurrencyConfigs();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListProvisionedConcurrencyConfigsPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListProvisionedConcurrencyConfigsPaginator(IListProvisionedConcurrencyConfigsPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListProvisionedConcurrencyConfigsPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListProvisionedConcurrencyConfigsPaginator(IListProvisionedConcurrencyConfigsPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListProvisionedConcurrencyConfigsPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListProvisionedConcurrencyConfigsPaginator*, "Amazon.Lambda.Model", "IListProvisionedConcurrencyConfigsPaginator");
