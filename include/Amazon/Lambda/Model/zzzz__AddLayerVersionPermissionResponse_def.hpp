#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AddLayerVersionPermissionResponse)
// Forward declare root types
namespace Amazon::Lambda::Model {
class AddLayerVersionPermissionResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AddLayerVersionPermissionResponse);
// Type: Amazon.Lambda.Model::AddLayerVersionPermissionResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AddLayerVersionPermissionResponse*
class CORDL_TYPE AddLayerVersionPermissionResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_RevisionId, put = set_RevisionId))::StringW RevisionId;

  __declspec(property(get = get_Statement, put = set_Statement))::StringW Statement;

  /// @brief Field _revisionId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__revisionId, put = __cordl_internal_set__revisionId))::StringW _revisionId;

  /// @brief Field _statement, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__statement, put = __cordl_internal_set__statement))::StringW _statement;

  /// @brief Method IsSetRevisionId, addr 0x2bc4294, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRevisionId();

  /// @brief Method IsSetStatement, addr 0x2bc42b4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatement();

  static inline ::Amazon::Lambda::Model::AddLayerVersionPermissionResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__revisionId() const;

  constexpr ::StringW& __cordl_internal_get__revisionId();

  constexpr ::StringW const& __cordl_internal_get__statement() const;

  constexpr ::StringW& __cordl_internal_get__statement();

  constexpr void __cordl_internal_set__revisionId(::StringW value);

  constexpr void __cordl_internal_set__statement(::StringW value);

  /// @brief Method .ctor, addr 0x2bc42c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RevisionId, addr 0x2bc4284, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RevisionId();

  /// @brief Method get_Statement, addr 0x2bc42a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Statement();

  /// @brief Method set_RevisionId, addr 0x2bc428c, size 0x8, virtual false, abstract: false, final false
  inline void set_RevisionId(::StringW value);

  /// @brief Method set_Statement, addr 0x2bc42ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Statement(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddLayerVersionPermissionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddLayerVersionPermissionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddLayerVersionPermissionResponse(AddLayerVersionPermissionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddLayerVersionPermissionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddLayerVersionPermissionResponse(AddLayerVersionPermissionResponse const&) = delete;

  /// @brief Field _revisionId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____revisionId;

  /// @brief Field _statement, offset: 0x30, size: 0x8, def value: None
  ::StringW ____statement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AddLayerVersionPermissionResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionResponse, ____revisionId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddLayerVersionPermissionResponse, ____statement) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AddLayerVersionPermissionResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AddLayerVersionPermissionResponse*, "Amazon.Lambda.Model", "AddLayerVersionPermissionResponse");
