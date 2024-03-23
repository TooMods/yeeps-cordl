#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IListFunctionsByCodeSigningConfigPaginator)
namespace Amazon::Lambda::Model {
class ListFunctionsByCodeSigningConfigResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListFunctionsByCodeSigningConfigPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator);
// Type: Amazon.Lambda.Model::IListFunctionsByCodeSigningConfigPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListFunctionsByCodeSigningConfigPaginator*
class CORDL_TYPE IListFunctionsByCodeSigningConfigPaginator {
public:
  // Declarations
  __declspec(property(get = get_FunctionArns))::Amazon::Runtime::IPaginatedEnumerable_1<::StringW>* FunctionArns;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>* Responses;

  /// @brief Method get_FunctionArns, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::StringW>* get_FunctionArns();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListFunctionsByCodeSigningConfigPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListFunctionsByCodeSigningConfigPaginator(IListFunctionsByCodeSigningConfigPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListFunctionsByCodeSigningConfigPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListFunctionsByCodeSigningConfigPaginator(IListFunctionsByCodeSigningConfigPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator*, "Amazon.Lambda.Model", "IListFunctionsByCodeSigningConfigPaginator");
