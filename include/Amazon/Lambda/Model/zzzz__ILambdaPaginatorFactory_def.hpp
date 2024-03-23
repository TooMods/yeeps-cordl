#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILambdaPaginatorFactory)
namespace Amazon::Lambda::Model {
class IListAliasesPaginator;
}
namespace Amazon::Lambda::Model {
class IListCodeSigningConfigsPaginator;
}
namespace Amazon::Lambda::Model {
class IListEventSourceMappingsPaginator;
}
namespace Amazon::Lambda::Model {
class IListFunctionEventInvokeConfigsPaginator;
}
namespace Amazon::Lambda::Model {
class IListFunctionsByCodeSigningConfigPaginator;
}
namespace Amazon::Lambda::Model {
class IListFunctionsPaginator;
}
namespace Amazon::Lambda::Model {
class IListLayerVersionsPaginator;
}
namespace Amazon::Lambda::Model {
class IListLayersPaginator;
}
namespace Amazon::Lambda::Model {
class IListProvisionedConcurrencyConfigsPaginator;
}
namespace Amazon::Lambda::Model {
class IListVersionsByFunctionPaginator;
}
namespace Amazon::Lambda::Model {
class ListAliasesRequest;
}
namespace Amazon::Lambda::Model {
class ListCodeSigningConfigsRequest;
}
namespace Amazon::Lambda::Model {
class ListEventSourceMappingsRequest;
}
namespace Amazon::Lambda::Model {
class ListFunctionEventInvokeConfigsRequest;
}
namespace Amazon::Lambda::Model {
class ListFunctionsByCodeSigningConfigRequest;
}
namespace Amazon::Lambda::Model {
class ListFunctionsRequest;
}
namespace Amazon::Lambda::Model {
class ListLayerVersionsRequest;
}
namespace Amazon::Lambda::Model {
class ListLayersRequest;
}
namespace Amazon::Lambda::Model {
class ListProvisionedConcurrencyConfigsRequest;
}
namespace Amazon::Lambda::Model {
class ListVersionsByFunctionRequest;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ILambdaPaginatorFactory;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ILambdaPaginatorFactory);
// Type: Amazon.Lambda.Model::ILambdaPaginatorFactory
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ILambdaPaginatorFactory*
class CORDL_TYPE ILambdaPaginatorFactory {
public:
  // Declarations
  /// @brief Method ListAliases, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListAliasesPaginator* ListAliases(::Amazon::Lambda::Model::ListAliasesRequest* request);

  /// @brief Method ListCodeSigningConfigs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListCodeSigningConfigsPaginator* ListCodeSigningConfigs(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest* request);

  /// @brief Method ListEventSourceMappings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListEventSourceMappingsPaginator* ListEventSourceMappings(::Amazon::Lambda::Model::ListEventSourceMappingsRequest* request);

  /// @brief Method ListFunctionEventInvokeConfigs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListFunctionEventInvokeConfigsPaginator* ListFunctionEventInvokeConfigs(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsRequest* request);

  /// @brief Method ListFunctions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListFunctionsPaginator* ListFunctions(::Amazon::Lambda::Model::ListFunctionsRequest* request);

  /// @brief Method ListFunctionsByCodeSigningConfig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator* ListFunctionsByCodeSigningConfig(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest* request);

  /// @brief Method ListLayerVersions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListLayerVersionsPaginator* ListLayerVersions(::Amazon::Lambda::Model::ListLayerVersionsRequest* request);

  /// @brief Method ListLayers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListLayersPaginator* ListLayers(::Amazon::Lambda::Model::ListLayersRequest* request);

  /// @brief Method ListProvisionedConcurrencyConfigs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListProvisionedConcurrencyConfigsPaginator* ListProvisionedConcurrencyConfigs(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsRequest* request);

  /// @brief Method ListVersionsByFunction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Lambda::Model::IListVersionsByFunctionPaginator* ListVersionsByFunction(::Amazon::Lambda::Model::ListVersionsByFunctionRequest* request);

  // Ctor Parameters [CppParam { name: "", ty: "ILambdaPaginatorFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILambdaPaginatorFactory(ILambdaPaginatorFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILambdaPaginatorFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILambdaPaginatorFactory(ILambdaPaginatorFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ILambdaPaginatorFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ILambdaPaginatorFactory*, "Amazon.Lambda.Model", "ILambdaPaginatorFactory");
