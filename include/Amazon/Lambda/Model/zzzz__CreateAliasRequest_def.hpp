#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreateAliasRequest)
namespace Amazon::Lambda::Model {
class AliasRoutingConfiguration;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class CreateAliasRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::CreateAliasRequest);
// Type: Amazon.Lambda.Model::CreateAliasRequest
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::CreateAliasRequest*
class CORDL_TYPE CreateAliasRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_FunctionVersion, put = set_FunctionVersion))::StringW FunctionVersion;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_RoutingConfig, put = set_RoutingConfig))::Amazon::Lambda::Model::AliasRoutingConfiguration* RoutingConfig;

  /// @brief Field _description, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _functionName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _functionVersion, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__functionVersion, put = __cordl_internal_set__functionVersion))::StringW _functionVersion;

  /// @brief Field _name, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _routingConfig, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__routingConfig, put = __cordl_internal_set__routingConfig))::Amazon::Lambda::Model::AliasRoutingConfiguration* _routingConfig;

  /// @brief Method IsSetDescription, addr 0x2bc49ac, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetFunctionName, addr 0x2bc49cc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetFunctionVersion, addr 0x2bc49ec, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionVersion();

  /// @brief Method IsSetName, addr 0x2bc4a0c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetName();

  /// @brief Method IsSetRoutingConfig, addr 0x2bc4a2c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRoutingConfig();

  static inline ::Amazon::Lambda::Model::CreateAliasRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__functionVersion() const;

  constexpr ::StringW& __cordl_internal_get__functionVersion();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::Amazon::Lambda::Model::AliasRoutingConfiguration*& __cordl_internal_get__routingConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::AliasRoutingConfiguration*> const& __cordl_internal_get__routingConfig() const;

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__functionVersion(::StringW value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__routingConfig(::Amazon::Lambda::Model::AliasRoutingConfiguration* value);

  /// @brief Method .ctor, addr 0x2bc4a3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Description, addr 0x2bc499c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_FunctionName, addr 0x2bc49bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_FunctionVersion, addr 0x2bc49dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionVersion();

  /// @brief Method get_Name, addr 0x2bc49fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_RoutingConfig, addr 0x2bc4a1c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::AliasRoutingConfiguration* get_RoutingConfig();

  /// @brief Method set_Description, addr 0x2bc49a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_FunctionName, addr 0x2bc49c4, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_FunctionVersion, addr 0x2bc49e4, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionVersion(::StringW value);

  /// @brief Method set_Name, addr 0x2bc4a04, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_RoutingConfig, addr 0x2bc4a24, size 0x8, virtual false, abstract: false, final false
  inline void set_RoutingConfig(::Amazon::Lambda::Model::AliasRoutingConfiguration* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateAliasRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateAliasRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateAliasRequest(CreateAliasRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateAliasRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateAliasRequest(CreateAliasRequest const&) = delete;

  /// @brief Field _description, offset: 0x38, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _functionName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _functionVersion, offset: 0x48, size: 0x8, def value: None
  ::StringW ____functionVersion;

  /// @brief Field _name, offset: 0x50, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _routingConfig, offset: 0x58, size: 0x8, def value: None
  ::Amazon::Lambda::Model::AliasRoutingConfiguration* ____routingConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::CreateAliasRequest, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasRequest, ____description) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasRequest, ____functionName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasRequest, ____functionVersion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasRequest, ____name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasRequest, ____routingConfig) == 0x58, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::CreateAliasRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::CreateAliasRequest*, "Amazon.Lambda.Model", "CreateAliasRequest");
