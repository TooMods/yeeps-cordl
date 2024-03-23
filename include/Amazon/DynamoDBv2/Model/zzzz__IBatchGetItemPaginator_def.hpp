#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBatchGetItemPaginator)
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class IBatchGetItemPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator);
// Type: Amazon.DynamoDBv2.Model::IBatchGetItemPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::IBatchGetItemPaginator*
class CORDL_TYPE IBatchGetItemPaginator {
public:
  // Declarations
  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>* Responses;

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IBatchGetItemPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBatchGetItemPaginator(IBatchGetItemPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBatchGetItemPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBatchGetItemPaginator(IBatchGetItemPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator*, "Amazon.DynamoDBv2.Model", "IBatchGetItemPaginator");
