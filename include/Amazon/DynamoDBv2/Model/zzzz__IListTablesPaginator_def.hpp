#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IListTablesPaginator)
namespace Amazon::DynamoDBv2::Model {
class ListTablesResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class IListTablesPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::IListTablesPaginator);
// Type: Amazon.DynamoDBv2.Model::IListTablesPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::IListTablesPaginator*
class CORDL_TYPE IListTablesPaginator {
public:
  // Declarations
  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::ListTablesResponse*>* Responses;

  __declspec(property(get = get_TableNames))::Amazon::Runtime::IPaginatedEnumerable_1<::StringW>* TableNames;

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::DynamoDBv2::Model::ListTablesResponse*>* get_Responses();

  /// @brief Method get_TableNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::StringW>* get_TableNames();

  // Ctor Parameters [CppParam { name: "", ty: "IListTablesPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListTablesPaginator(IListTablesPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListTablesPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListTablesPaginator(IListTablesPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::IListTablesPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::IListTablesPaginator*, "Amazon.DynamoDBv2.Model", "IListTablesPaginator");
