#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoveLayerVersionPermissionRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class RemoveLayerVersionPermissionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest);
// Type: Amazon.Lambda.Model::RemoveLayerVersionPermissionRequest
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::RemoveLayerVersionPermissionRequest*
class CORDL_TYPE RemoveLayerVersionPermissionRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_LayerName, put = set_LayerName))::StringW LayerName;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_StatementId, put = set_StatementId))::StringW StatementId;

  __declspec(property(get = get_VersionNumber, put = set_VersionNumber)) int64_t VersionNumber;

  /// @brief Field _layerName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__layerName, put = __cordl_internal_set__layerName))::StringW _layerName;

  /// @brief Field _revisionId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _statementId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__statementId, put = __cordl_internal_set__statementId))::StringW _statementId;

  /// @brief Field _versionNumber, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__versionNumber, put = __cordl_internal_set__versionNumber))::System::Nullable_1<int64_t> _versionNumber;

  /// @brief Method IsSetLayerName, addr 0x3108d48, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLayerName();

  /// @brief Method IsSetRevisionId, addr 0x3108d68, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetStatementId, addr 0x3108d88, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatementId();

  /// @brief Method IsSetVersionNumber, addr 0x3108e44, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetVersionNumber();

  static inline ::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__layerName() const;

  constexpr ::StringW& __cordl_internal_get__layerName();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::StringW const& __cordl_internal_get__statementId() const;

  constexpr ::StringW& __cordl_internal_get__statementId();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__versionNumber() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__versionNumber();

  constexpr void __cordl_internal_set__layerName(::StringW value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__statementId(::StringW value);

  constexpr void __cordl_internal_set__versionNumber(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x3108e80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LayerName, addr 0x3108d38, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LayerName();

  /// @brief Method get_RevisionId, addr 0x3108d58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_StatementId, addr 0x3108d78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StatementId();

  /// @brief Method get_VersionNumber, addr 0x3108d98, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_VersionNumber();

  /// @brief Method set_LayerName, addr 0x3108d40, size 0x8, virtual false, abstract: false, final false
  inline void set_LayerName(::StringW value);

  /// @brief Method set_RevisionId, addr 0x3108d60, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_StatementId, addr 0x3108d80, size 0x8, virtual false, abstract: false, final false
  inline void set_StatementId(::StringW value);

  /// @brief Method set_VersionNumber, addr 0x3108dd4, size 0x70, virtual false, abstract: false, final false
  inline void set_VersionNumber(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoveLayerVersionPermissionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoveLayerVersionPermissionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoveLayerVersionPermissionRequest(RemoveLayerVersionPermissionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoveLayerVersionPermissionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoveLayerVersionPermissionRequest(RemoveLayerVersionPermissionRequest const&) = delete;

  /// @brief Field _layerName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____layerName;

  /// @brief Field _revisionId, offset: 0x40, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _statementId, offset: 0x48, size: 0x8, def value: None
  ::StringW ____statementId;

  /// @brief Field _versionNumber, offset: 0x50, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____versionNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest, ____layerName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest, ____revisionId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest, ____statementId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest, ____versionNumber) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::RemoveLayerVersionPermissionRequest*, "Amazon.Lambda.Model", "RemoveLayerVersionPermissionRequest");
