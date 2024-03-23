#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemovePermissionRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class RemovePermissionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::RemovePermissionRequest);
// Type: Amazon.Lambda.Model::RemovePermissionRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::RemovePermissionRequest*
class CORDL_TYPE RemovePermissionRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_Qualifier, put = set_Qualifier))::StringW Qualifier;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_StatementId, put = set_StatementId))::StringW StatementId;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _qualifier, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__qualifier, put = __cordl_internal_set__qualifier))::StringW _qualifier;

  /// @brief Field _revisionId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _statementId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__statementId, put = __cordl_internal_set__statementId))::StringW _statementId;

  /// @brief Method IsSetFunctionName, addr 0x3108ea0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetQualifier, addr 0x3108ec0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetQualifier();

  /// @brief Method IsSetRevisionId, addr 0x3108ee0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetStatementId, addr 0x3108f00, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatementId();

  static inline ::Amazon::Lambda::Model::RemovePermissionRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__qualifier() const;

  constexpr ::StringW& __cordl_internal_get__qualifier();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::StringW const& __cordl_internal_get__statementId() const;

  constexpr ::StringW& __cordl_internal_get__statementId();

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__qualifier(::StringW value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__statementId(::StringW value);

  /// @brief Method .ctor, addr 0x3108f10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionName, addr 0x3108e90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_Qualifier, addr 0x3108eb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Qualifier();

  /// @brief Method get_RevisionId, addr 0x3108ed0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_StatementId, addr 0x3108ef0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StatementId();

  /// @brief Method set_FunctionName, addr 0x3108e98, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_Qualifier, addr 0x3108eb8, size 0x8, virtual false, abstract: false, final false
  inline void set_Qualifier(::StringW value);

  /// @brief Method set_RevisionId, addr 0x3108ed8, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_StatementId, addr 0x3108ef8, size 0x8, virtual false, abstract: false, final false
  inline void set_StatementId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemovePermissionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemovePermissionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemovePermissionRequest(RemovePermissionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemovePermissionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemovePermissionRequest(RemovePermissionRequest const&) = delete;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _qualifier, offset: 0x40, size: 0x8, def value: None
  ::StringW ____qualifier;

  /// @brief Field _revisionId, offset: 0x48, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _statementId, offset: 0x50, size: 0x8, def value: None
  ::StringW ____statementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::RemovePermissionRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::RemovePermissionRequest, ____functionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::RemovePermissionRequest, ____qualifier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::RemovePermissionRequest, ____revisionId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::RemovePermissionRequest, ____statementId) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::RemovePermissionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::RemovePermissionRequest*, "Amazon.Lambda.Model", "RemovePermissionRequest");
