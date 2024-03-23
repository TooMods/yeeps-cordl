#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddLayerVersionPermissionRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class AddLayerVersionPermissionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest);
// Type: Amazon.Lambda.Model::AddLayerVersionPermissionRequest
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AddLayerVersionPermissionRequest*
class CORDL_TYPE AddLayerVersionPermissionRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Action, put = set_Action))::StringW Action;

  __declspec(property(get = get_LayerName, put = set_LayerName))::StringW LayerName;

  __declspec(property(get = get_OrganizationId, put = set_OrganizationId))::StringW OrganizationId;

  __declspec(property(get = get_Principal, put = set_Principal))::StringW Principal;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_StatementId, put = set_StatementId))::StringW StatementId;

  __declspec(property(get = get_VersionNumber, put = set_VersionNumber)) int64_t VersionNumber;

  /// @brief Field _action, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action))::StringW _action;

  /// @brief Field _layerName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__layerName, put = __cordl_internal_set__layerName))::StringW _layerName;

  /// @brief Field _organizationId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__organizationId, put = __cordl_internal_set__organizationId))::StringW _organizationId;

  /// @brief Field _principal, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__principal, put = __cordl_internal_set__principal))::StringW _principal;

  /// @brief Field _revisionId, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _statementId, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__statementId, put = __cordl_internal_set__statementId))::StringW _statementId;

  /// @brief Field _versionNumber, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__versionNumber, put = __cordl_internal_set__versionNumber))::System::Nullable_1<int64_t> _versionNumber;

  /// @brief Method IsSetAction, addr 0x2bc40e4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAction();

  /// @brief Method IsSetLayerName, addr 0x2bc4104, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLayerName();

  /// @brief Method IsSetOrganizationId, addr 0x2bc4124, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetOrganizationId();

  /// @brief Method IsSetPrincipal, addr 0x2bc4144, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPrincipal();

  /// @brief Method IsSetRevisionId, addr 0x2bc4164, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetStatementId, addr 0x2bc4184, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatementId();

  /// @brief Method IsSetVersionNumber, addr 0x2bc4240, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetVersionNumber();

  static inline ::Amazon::Lambda::Model::AddLayerVersionPermissionRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__action() const;

  constexpr ::StringW& __cordl_internal_get__action();

  constexpr ::StringW const& __cordl_internal_get__layerName() const;

  constexpr ::StringW& __cordl_internal_get__layerName();

  constexpr ::StringW const& __cordl_internal_get__organizationId() const;

  constexpr ::StringW& __cordl_internal_get__organizationId();

  constexpr ::StringW const& __cordl_internal_get__principal() const;

  constexpr ::StringW& __cordl_internal_get__principal();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::StringW const& __cordl_internal_get__statementId() const;

  constexpr ::StringW& __cordl_internal_get__statementId();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__versionNumber() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__versionNumber();

  constexpr void __cordl_internal_set__action(::StringW value);

  constexpr void __cordl_internal_set__layerName(::StringW value);

  constexpr void __cordl_internal_set__organizationId(::StringW value);

  constexpr void __cordl_internal_set__principal(::StringW value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__statementId(::StringW value);

  constexpr void __cordl_internal_set__versionNumber(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x2bc427c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Action, addr 0x2bc40d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Action();

  /// @brief Method get_LayerName, addr 0x2bc40f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LayerName();

  /// @brief Method get_OrganizationId, addr 0x2bc4114, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_OrganizationId();

  /// @brief Method get_Principal, addr 0x2bc4134, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Principal();

  /// @brief Method get_RevisionId, addr 0x2bc4154, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_StatementId, addr 0x2bc4174, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StatementId();

  /// @brief Method get_VersionNumber, addr 0x2bc4194, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_VersionNumber();

  /// @brief Method set_Action, addr 0x2bc40dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Action(::StringW value);

  /// @brief Method set_LayerName, addr 0x2bc40fc, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerName(::StringW value);

  /// @brief Method set_OrganizationId, addr 0x2bc411c, size 0x8, virtual false, abstract: false, final false
  inline void set_OrganizationId(::StringW value);

  /// @brief Method set_Principal, addr 0x2bc413c, size 0x8, virtual false, abstract: false, final false
  inline void set_Principal(::StringW value);

  /// @brief Method set_RevisionId, addr 0x2bc415c, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_StatementId, addr 0x2bc417c, size 0x8, virtual false, abstract: false, final false
  inline void set_StatementId(::StringW value);

  /// @brief Method set_VersionNumber, addr 0x2bc41d0, size 0x70, virtual false, abstract: false, final false
  inline void set_VersionNumber(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddLayerVersionPermissionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddLayerVersionPermissionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddLayerVersionPermissionRequest(AddLayerVersionPermissionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddLayerVersionPermissionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddLayerVersionPermissionRequest(AddLayerVersionPermissionRequest const&) = delete;

  /// @brief Field _action, offset: 0x38, size: 0x8, def value: None
  ::StringW ____action;

  /// @brief Field _layerName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____layerName;

  /// @brief Field _organizationId, offset: 0x48, size: 0x8, def value: None
  ::StringW ____organizationId;

  /// @brief Field _principal, offset: 0x50, size: 0x8, def value: None
  ::StringW ____principal;

  /// @brief Field _revisionId, offset: 0x58, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _statementId, offset: 0x60, size: 0x8, def value: None
  ::StringW ____statementId;

  /// @brief Field _versionNumber, offset: 0x68, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____versionNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AddLayerVersionPermissionRequest, 0x78>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest, ____action) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest, ____layerName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest, ____organizationId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest, ____principal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest, ____revisionId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest, ____statementId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest, ____versionNumber) == 0x68, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AddLayerVersionPermissionRequest*, "Amazon.Lambda.Model", "AddLayerVersionPermissionRequest");
