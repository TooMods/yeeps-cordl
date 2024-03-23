#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AddPermissionRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class AddPermissionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AddPermissionRequest);
// Type: Amazon.Lambda.Model::AddPermissionRequest
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AddPermissionRequest*
class CORDL_TYPE AddPermissionRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Action, put = set_Action))::StringW Action;

  __declspec(property(get = get_EventSourceToken, put = set_EventSourceToken))::StringW EventSourceToken;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_Principal, put = set_Principal))::StringW Principal;

  __declspec(property(get = get_Qualifier, put = set_Qualifier))::StringW Qualifier;

  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_SourceAccount, put = set_SourceAccount))::StringW SourceAccount;

  __declspec(property(get = get_SourceArn, put = set_SourceArn))::StringW SourceArn;

  __declspec(property(get = get_StatementId, put = set_StatementId))::StringW StatementId;

  /// @brief Field _action, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action))::StringW _action;

  /// @brief Field _eventSourceToken, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSourceToken, put = __cordl_internal_set__eventSourceToken))::StringW _eventSourceToken;

  /// @brief Field _functionName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _principal, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__principal, put = __cordl_internal_set__principal))::StringW _principal;

  /// @brief Field _qualifier, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__qualifier, put = __cordl_internal_set__qualifier))::StringW _qualifier;

  /// @brief Field _revisionId, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _sourceAccount, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceAccount, put = __cordl_internal_set__sourceAccount))::StringW _sourceAccount;

  /// @brief Field _sourceArn, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceArn, put = __cordl_internal_set__sourceArn))::StringW _sourceArn;

  /// @brief Field _statementId, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__statementId, put = __cordl_internal_set__statementId))::StringW _statementId;

  /// @brief Method IsSetAction, addr 0x2bc42dc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAction();

  /// @brief Method IsSetEventSourceToken, addr 0x2bc42fc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEventSourceToken();

  /// @brief Method IsSetFunctionName, addr 0x2bc431c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetPrincipal, addr 0x2bc433c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPrincipal();

  /// @brief Method IsSetQualifier, addr 0x2bc435c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetQualifier();

  /// @brief Method IsSetRevisionId, addr 0x2bc437c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetSourceAccount, addr 0x2bc439c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSourceAccount();

  /// @brief Method IsSetSourceArn, addr 0x2bc43bc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSourceArn();

  /// @brief Method IsSetStatementId, addr 0x2bc43dc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatementId();

  static inline ::Amazon::Lambda::Model::AddPermissionRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__action() const;

  constexpr ::StringW& __cordl_internal_get__action();

  constexpr ::StringW const& __cordl_internal_get__eventSourceToken() const;

  constexpr ::StringW& __cordl_internal_get__eventSourceToken();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__principal() const;

  constexpr ::StringW& __cordl_internal_get__principal();

  constexpr ::StringW const& __cordl_internal_get__qualifier() const;

  constexpr ::StringW& __cordl_internal_get__qualifier();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::StringW const& __cordl_internal_get__sourceAccount() const;

  constexpr ::StringW& __cordl_internal_get__sourceAccount();

  constexpr ::StringW const& __cordl_internal_get__sourceArn() const;

  constexpr ::StringW& __cordl_internal_get__sourceArn();

  constexpr ::StringW const& __cordl_internal_get__statementId() const;

  constexpr ::StringW& __cordl_internal_get__statementId();

  constexpr void __cordl_internal_set__action(::StringW value);

  constexpr void __cordl_internal_set__eventSourceToken(::StringW value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__principal(::StringW value);

  constexpr void __cordl_internal_set__qualifier(::StringW value);

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__sourceAccount(::StringW value);

  constexpr void __cordl_internal_set__sourceArn(::StringW value);

  constexpr void __cordl_internal_set__statementId(::StringW value);

  /// @brief Method .ctor, addr 0x2bc43ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Action, addr 0x2bc42cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Action();

  /// @brief Method get_EventSourceToken, addr 0x2bc42ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventSourceToken();

  /// @brief Method get_FunctionName, addr 0x2bc430c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_Principal, addr 0x2bc432c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Principal();

  /// @brief Method get_Qualifier, addr 0x2bc434c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Qualifier();

  /// @brief Method get_RevisionId, addr 0x2bc436c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_SourceAccount, addr 0x2bc438c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceAccount();

  /// @brief Method get_SourceArn, addr 0x2bc43ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceArn();

  /// @brief Method get_StatementId, addr 0x2bc43cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StatementId();

  /// @brief Method set_Action, addr 0x2bc42d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Action(::StringW value);

  /// @brief Method set_EventSourceToken, addr 0x2bc42f4, size 0x8, virtual false, abstract: false, final false
  inline void set_EventSourceToken(::StringW value);

  /// @brief Method set_FunctionName, addr 0x2bc4314, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_Principal, addr 0x2bc4334, size 0x8, virtual false, abstract: false, final false
  inline void set_Principal(::StringW value);

  /// @brief Method set_Qualifier, addr 0x2bc4354, size 0x8, virtual false, abstract: false, final false
  inline void set_Qualifier(::StringW value);

  /// @brief Method set_RevisionId, addr 0x2bc4374, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_SourceAccount, addr 0x2bc4394, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceAccount(::StringW value);

  /// @brief Method set_SourceArn, addr 0x2bc43b4, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceArn(::StringW value);

  /// @brief Method set_StatementId, addr 0x2bc43d4, size 0x8, virtual false, abstract: false, final false
  inline void set_StatementId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddPermissionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddPermissionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddPermissionRequest(AddPermissionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddPermissionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddPermissionRequest(AddPermissionRequest const&) = delete;

  /// @brief Field _action, offset: 0x38, size: 0x8, def value: None
  ::StringW ____action;

  /// @brief Field _eventSourceToken, offset: 0x40, size: 0x8, def value: None
  ::StringW ____eventSourceToken;

  /// @brief Field _functionName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _principal, offset: 0x50, size: 0x8, def value: None
  ::StringW ____principal;

  /// @brief Field _qualifier, offset: 0x58, size: 0x8, def value: None
  ::StringW ____qualifier;

  /// @brief Field _revisionId, offset: 0x60, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _sourceAccount, offset: 0x68, size: 0x8, def value: None
  ::StringW ____sourceAccount;

  /// @brief Field _sourceArn, offset: 0x70, size: 0x8, def value: None
  ::StringW ____sourceArn;

  /// @brief Field _statementId, offset: 0x78, size: 0x8, def value: None
  ::StringW ____statementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AddPermissionRequest, 0x80>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____action) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____eventSourceToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____functionName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____principal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____qualifier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____revisionId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____sourceAccount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____sourceArn) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionRequest, ____statementId) == 0x78, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AddPermissionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AddPermissionRequest*, "Amazon.Lambda.Model", "AddPermissionRequest");
