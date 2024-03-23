#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListVersionsByFunctionPaginator)
namespace Amazon::Lambda::Model {
class FunctionConfiguration;
}
namespace Amazon::Lambda::Model {
class ListVersionsByFunctionResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListVersionsByFunctionPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListVersionsByFunctionPaginator);
// Type: Amazon.Lambda.Model::IListVersionsByFunctionPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListVersionsByFunctionPaginator*
class CORDL_TYPE IListVersionsByFunctionPaginator {
public:
  // Declarations
  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>* Responses;

  __declspec(property(get = get_Versions))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>* Versions;

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListVersionsByFunctionResponse*>* get_Responses();

  /// @brief Method get_Versions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::FunctionConfiguration*>* get_Versions();

  // Ctor Parameters [CppParam { name: "", ty: "IListVersionsByFunctionPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListVersionsByFunctionPaginator(IListVersionsByFunctionPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListVersionsByFunctionPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListVersionsByFunctionPaginator(IListVersionsByFunctionPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListVersionsByFunctionPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListVersionsByFunctionPaginator*, "Amazon.Lambda.Model", "IListVersionsByFunctionPaginator");
