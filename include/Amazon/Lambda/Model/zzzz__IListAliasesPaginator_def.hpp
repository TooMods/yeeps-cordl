#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListAliasesPaginator)
namespace Amazon::Lambda::Model {
class AliasConfiguration;
}
namespace Amazon::Lambda::Model {
class ListAliasesResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListAliasesPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListAliasesPaginator);
// Type: Amazon.Lambda.Model::IListAliasesPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListAliasesPaginator*
class CORDL_TYPE IListAliasesPaginator {
public:
  // Declarations
  __declspec(property(get = get_Aliases))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::AliasConfiguration*>* Aliases;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListAliasesResponse*>* Responses;

  /// @brief Method get_Aliases, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::AliasConfiguration*>* get_Aliases();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListAliasesResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListAliasesPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListAliasesPaginator(IListAliasesPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListAliasesPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListAliasesPaginator(IListAliasesPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListAliasesPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListAliasesPaginator*, "Amazon.Lambda.Model", "IListAliasesPaginator");
