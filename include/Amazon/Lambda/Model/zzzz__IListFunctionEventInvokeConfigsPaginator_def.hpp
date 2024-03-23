#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListFunctionEventInvokeConfigsPaginator)
namespace Amazon::Lambda::Model {
class FunctionEventInvokeConfig;
}
namespace Amazon::Lambda::Model {
class ListFunctionEventInvokeConfigsResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListFunctionEventInvokeConfigsPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListFunctionEventInvokeConfigsPaginator);
// Type: Amazon.Lambda.Model::IListFunctionEventInvokeConfigsPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListFunctionEventInvokeConfigsPaginator*
class CORDL_TYPE IListFunctionEventInvokeConfigsPaginator {
public:
  // Declarations
  __declspec(property(get = get_FunctionEventInvokeConfigs))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>* FunctionEventInvokeConfigs;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse*>* Responses;

  /// @brief Method get_FunctionEventInvokeConfigs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>* get_FunctionEventInvokeConfigs();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListFunctionEventInvokeConfigsPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListFunctionEventInvokeConfigsPaginator(IListFunctionEventInvokeConfigsPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListFunctionEventInvokeConfigsPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListFunctionEventInvokeConfigsPaginator(IListFunctionEventInvokeConfigsPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListFunctionEventInvokeConfigsPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListFunctionEventInvokeConfigsPaginator*, "Amazon.Lambda.Model", "IListFunctionEventInvokeConfigsPaginator");
