#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListFunctionsPaginator)
namespace Amazon::Lambda::Model {
class FunctionConfiguration;
}
namespace Amazon::Lambda::Model {
class ListFunctionsResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListFunctionsPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListFunctionsPaginator);
// Type: Amazon.Lambda.Model::IListFunctionsPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListFunctionsPaginator*
class CORDL_TYPE IListFunctionsPaginator {
public:
  // Declarations
  __declspec(property(get = get_Functions))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>* Functions;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListFunctionsResponse*>* Responses;

  /// @brief Method get_Functions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>* get_Functions();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListFunctionsResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListFunctionsPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListFunctionsPaginator(IListFunctionsPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListFunctionsPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListFunctionsPaginator(IListFunctionsPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListFunctionsPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListFunctionsPaginator*, "Amazon.Lambda.Model", "IListFunctionsPaginator");
