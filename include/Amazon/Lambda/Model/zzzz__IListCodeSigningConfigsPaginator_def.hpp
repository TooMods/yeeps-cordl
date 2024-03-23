#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListCodeSigningConfigsPaginator)
namespace Amazon::Lambda::Model {
class CodeSigningConfig;
}
namespace Amazon::Lambda::Model {
class ListCodeSigningConfigsResponse;
}
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class IListCodeSigningConfigsPaginator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::IListCodeSigningConfigsPaginator);
// Type: Amazon.Lambda.Model::IListCodeSigningConfigsPaginator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::IListCodeSigningConfigsPaginator*
class CORDL_TYPE IListCodeSigningConfigsPaginator {
public:
  // Declarations
  __declspec(property(get = get_CodeSigningConfigs))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::CodeSigningConfig*>* CodeSigningConfigs;

  __declspec(property(get = get_Responses))::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>* Responses;

  /// @brief Method get_CodeSigningConfigs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::CodeSigningConfig*>* get_CodeSigningConfigs();

  /// @brief Method get_Responses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*>* get_Responses();

  // Ctor Parameters [CppParam { name: "", ty: "IListCodeSigningConfigsPaginator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IListCodeSigningConfigsPaginator(IListCodeSigningConfigsPaginator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IListCodeSigningConfigsPaginator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListCodeSigningConfigsPaginator(IListCodeSigningConfigsPaginator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::IListCodeSigningConfigsPaginator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::IListCodeSigningConfigsPaginator*, "Amazon.Lambda.Model", "IListCodeSigningConfigsPaginator");
