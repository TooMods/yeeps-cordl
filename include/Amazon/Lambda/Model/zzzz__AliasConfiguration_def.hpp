#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AliasConfiguration)
namespace Amazon::Lambda::Model {
class AliasRoutingConfiguration;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class AliasConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AliasConfiguration);
// Type: Amazon.Lambda.Model::AliasConfiguration
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AliasConfiguration*
class CORDL_TYPE AliasConfiguration : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AliasArn, put = set_AliasArn))::StringW AliasArn;

  __declspec(property(get = get_Description, put = set_Description))::StringW Description;

  __declspec(property(get = get_FunctionVersion, put = set_FunctionVersion))::StringW FunctionVersion;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_RoutingConfig, put = set_RoutingConfig))::Amazon::Lambda::Model::AliasRoutingConfiguration* RoutingConfig;

  /// @brief Field _aliasArn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__aliasArn, put = __cordl_internal_set__aliasArn))::StringW _aliasArn;

  /// @brief Field _description, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description))::StringW _description;

  /// @brief Field _functionVersion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__functionVersion, put = __cordl_internal_set__functionVersion))::StringW _functionVersion;

  /// @brief Field _name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _revisionId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _routingConfig, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__routingConfig, put = __cordl_internal_set__routingConfig))::Amazon::Lambda::Model::AliasRoutingConfiguration* _routingConfig;

  /// @brief Method IsSetAliasArn, addr 0x2bc442c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAliasArn();

  /// @brief Method IsSetDescription, addr 0x2bc444c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDescription();

  /// @brief Method IsSetFunctionVersion, addr 0x2bc446c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionVersion();

  /// @brief Method IsSetName, addr 0x2bc448c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetName();

  /// @brief Method IsSetRevisionId, addr 0x2bc44ac, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetRoutingConfig, addr 0x2bc44cc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRoutingConfig();

  static inline ::Amazon::Lambda::Model::AliasConfiguration* New_ctor();

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

  /// @brief Method .ctor, addr 0x2bc44dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AliasArn, addr 0x2bc441c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AliasArn();

  /// @brief Method get_Description, addr 0x2bc443c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_FunctionVersion, addr 0x2bc445c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionVersion();

  /// @brief Method get_Name, addr 0x2bc447c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_RevisionId, addr 0x2bc449c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_RoutingConfig, addr 0x2bc44bc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::AliasRoutingConfiguration* get_RoutingConfig();

  /// @brief Method set_AliasArn, addr 0x2bc4424, size 0x8, virtual false, abstract: false, final false
  inline void set_AliasArn(::StringW value);

  /// @brief Method set_Description, addr 0x2bc4444, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_FunctionVersion, addr 0x2bc4464, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionVersion(::StringW value);

  /// @brief Method set_Name, addr 0x2bc4484, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_RevisionId, addr 0x2bc44a4, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_RoutingConfig, addr 0x2bc44c4, size 0x8, virtual false, abstract: false, final false
  inline void set_RoutingConfig(::Amazon::Lambda::Model::AliasRoutingConfiguration* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AliasConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AliasConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AliasConfiguration(AliasConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AliasConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AliasConfiguration(AliasConfiguration const&) = delete;

  /// @brief Field _aliasArn, offset: 0x10, size: 0x8, def value: None
  ::StringW ____aliasArn;

  /// @brief Field _description, offset: 0x18, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _functionVersion, offset: 0x20, size: 0x8, def value: None
  ::StringW ____functionVersion;

  /// @brief Field _name, offset: 0x28, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _revisionId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _routingConfig, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Lambda::Model::AliasRoutingConfiguration* ____routingConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AliasConfiguration, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AliasConfiguration, ____aliasArn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AliasConfiguration, ____description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AliasConfiguration, ____functionVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AliasConfiguration, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AliasConfiguration, ____revisionId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AliasConfiguration, ____routingConfig) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AliasConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AliasConfiguration*, "Amazon.Lambda.Model", "AliasConfiguration");
