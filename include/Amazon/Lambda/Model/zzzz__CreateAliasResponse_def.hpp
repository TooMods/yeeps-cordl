#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreateAliasResponse)
namespace Amazon::Lambda::Model {
class AliasRoutingConfiguration;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class CreateAliasResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::CreateAliasResponse);
// Type: Amazon.Lambda.Model::CreateAliasResponse
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::CreateAliasResponse*
class CORDL_TYPE CreateAliasResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_AliasArn, put = set_AliasArn))::StringW AliasArn;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_FunctionVersion, put = set_FunctionVersion))::StringW FunctionVersion;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_RoutingConfig, put = set_RoutingConfig))::Amazon::Lambda::Model::AliasRoutingConfiguration* RoutingConfig;

  /// @brief Field _aliasArn, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__aliasArn, put = __cordl_internal_set__aliasArn))::StringW _aliasArn;

  /// @brief Field _description, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _functionVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionVersion, put = __cordl_internal_set__functionVersion))::StringW _functionVersion;

  /// @brief Field _name, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _revisionId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _routingConfig, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__routingConfig, put = __cordl_internal_set__routingConfig))::Amazon::Lambda::Model::AliasRoutingConfiguration* _routingConfig;

  /// @brief Method IsSetAliasArn, addr 0x2bc4a54, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAliasArn();

  /// @brief Method IsSetDescription, addr 0x2bc4a74, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetFunctionVersion, addr 0x2bc4a94, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionVersion();

  /// @brief Method IsSetName, addr 0x2bc4ab4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetName();

  /// @brief Method IsSetRevisionId, addr 0x2bc4ad4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetRoutingConfig, addr 0x2bc4af4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRoutingConfig();

  static inline ::Amazon::Lambda::Model::CreateAliasResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__aliasArn() const;

  constexpr ::StringW& __cordl_internal_get__aliasArn();

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::StringW const& __cordl_internal_get__functionVersion() const;

  constexpr ::StringW& __cordl_internal_get__functionVersion();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::Amazon::Lambda::Model::AliasRoutingConfiguration*& __cordl_internal_get__routingConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::AliasRoutingConfiguration*> const& __cordl_internal_get__routingConfig() const;

  constexpr void __cordl_internal_set__aliasArn(::StringW value);

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__functionVersion(::StringW value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__routingConfig(::Amazon::Lambda::Model::AliasRoutingConfiguration* value);

  /// @brief Method .ctor, addr 0x2bc4b04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AliasArn, addr 0x2bc4a44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AliasArn();

  /// @brief Method get_Description, addr 0x2bc4a64, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_FunctionVersion, addr 0x2bc4a84, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionVersion();

  /// @brief Method get_Name, addr 0x2bc4aa4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_RevisionId, addr 0x2bc4ac4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_RoutingConfig, addr 0x2bc4ae4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::AliasRoutingConfiguration* get_RoutingConfig();

  /// @brief Method set_AliasArn, addr 0x2bc4a4c, size 0x8, virtual false, abstract: false, final false
  inline void set_AliasArn(::StringW value);

  /// @brief Method set_Description, addr 0x2bc4a6c, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_FunctionVersion, addr 0x2bc4a8c, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionVersion(::StringW value);

  /// @brief Method set_Name, addr 0x2bc4aac, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_RevisionId, addr 0x2bc4acc, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_RoutingConfig, addr 0x2bc4aec, size 0x8, virtual false, abstract: false, final false
  inline void set_RoutingConfig(::Amazon::Lambda::Model::AliasRoutingConfiguration* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateAliasResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateAliasResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateAliasResponse(CreateAliasResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateAliasResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateAliasResponse(CreateAliasResponse const&) = delete;

  /// @brief Field _aliasArn, offset: 0x28, size: 0x8, def value: None
  ::StringW ____aliasArn;

  /// @brief Field _description, offset: 0x30, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _functionVersion, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionVersion;

  /// @brief Field _name, offset: 0x40, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _revisionId, offset: 0x48, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _routingConfig, offset: 0x50, size: 0x8, def value: None
  ::Amazon::Lambda::Model::AliasRoutingConfiguration* ____routingConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::CreateAliasResponse, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasResponse, ____aliasArn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasResponse, ____description) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasResponse, ____functionVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasResponse, ____name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasResponse, ____revisionId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::CreateAliasResponse, ____routingConfig) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::CreateAliasResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::CreateAliasResponse*, "Amazon.Lambda.Model", "CreateAliasResponse");
