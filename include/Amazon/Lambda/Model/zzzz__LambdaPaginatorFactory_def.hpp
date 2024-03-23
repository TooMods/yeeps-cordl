#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LambdaPaginatorFactory)
namespace Amazon::Lambda::Model {
class ILambdaPaginatorFactory;
}
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
namespace Amazon::Lambda {
class IAmazonLambda;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class LambdaPaginatorFactory;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::LambdaPaginatorFactory);
// Type: Amazon.Lambda.Model::LambdaPaginatorFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::LambdaPaginatorFactory*
class CORDL_TYPE LambdaPaginatorFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Amazon::Lambda::IAmazonLambda* client;

  /// @brief Convert operator to "::Amazon::Lambda::Model::ILambdaPaginatorFactory"
  constexpr operator ::Amazon::Lambda::Model::ILambdaPaginatorFactory*() noexcept;

  /// @brief Method ListAliases, addr 0x310d100, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListAliasesPaginator* ListAliases(::Amazon::Lambda::Model::ListAliasesRequest* request);

  /// @brief Method ListCodeSigningConfigs, addr 0x310d1a0, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListCodeSigningConfigsPaginator* ListCodeSigningConfigs(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest* request);

  /// @brief Method ListEventSourceMappings, addr 0x310d240, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListEventSourceMappingsPaginator* ListEventSourceMappings(::Amazon::Lambda::Model::ListEventSourceMappingsRequest* request);

  /// @brief Method ListFunctionEventInvokeConfigs, addr 0x310d2e0, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListFunctionEventInvokeConfigsPaginator* ListFunctionEventInvokeConfigs(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsRequest* request);

  /// @brief Method ListFunctions, addr 0x310d380, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListFunctionsPaginator* ListFunctions(::Amazon::Lambda::Model::ListFunctionsRequest* request);

  /// @brief Method ListFunctionsByCodeSigningConfig, addr 0x310d420, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListFunctionsByCodeSigningConfigPaginator* ListFunctionsByCodeSigningConfig(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigRequest* request);

  /// @brief Method ListLayerVersions, addr 0x310d560, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListLayerVersionsPaginator* ListLayerVersions(::Amazon::Lambda::Model::ListLayerVersionsRequest* request);

  /// @brief Method ListLayers, addr 0x310d4c0, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListLayersPaginator* ListLayers(::Amazon::Lambda::Model::ListLayersRequest* request);

  /// @brief Method ListProvisionedConcurrencyConfigs, addr 0x310d600, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListProvisionedConcurrencyConfigsPaginator* ListProvisionedConcurrencyConfigs(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsRequest* request);

  /// @brief Method ListVersionsByFunction, addr 0x310d6a0, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::Lambda::Model::IListVersionsByFunctionPaginator* ListVersionsByFunction(::Amazon::Lambda::Model::ListVersionsByFunctionRequest* request);

  static inline ::Amazon::Lambda::Model::LambdaPaginatorFactory* New_ctor(::Amazon::Lambda::IAmazonLambda* client);

  constexpr ::Amazon::Lambda::IAmazonLambda*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::IAmazonLambda*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::Amazon::Lambda::IAmazonLambda* value);

  /// @brief Method .ctor, addr 0x310d0d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Lambda::IAmazonLambda* client);

  /// @brief Convert to "::Amazon::Lambda::Model::ILambdaPaginatorFactory"
  constexpr ::Amazon::Lambda::Model::ILambdaPaginatorFactory* i___Amazon__Lambda__Model__ILambdaPaginatorFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LambdaPaginatorFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LambdaPaginatorFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LambdaPaginatorFactory(LambdaPaginatorFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LambdaPaginatorFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LambdaPaginatorFactory(LambdaPaginatorFactory const&) = delete;

  /// @brief Field client, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::IAmazonLambda* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::LambdaPaginatorFactory, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::LambdaPaginatorFactory, ___client) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::LambdaPaginatorFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::LambdaPaginatorFactory*, "Amazon.Lambda.Model", "LambdaPaginatorFactory");
