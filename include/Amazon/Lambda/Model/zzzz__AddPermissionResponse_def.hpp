#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AddPermissionResponse)
// Forward declare root types
namespace Amazon::Lambda::Model {
class AddPermissionResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AddPermissionResponse);
// Type: Amazon.Lambda.Model::AddPermissionResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AddPermissionResponse*
class CORDL_TYPE AddPermissionResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Statement, put = set_Statement))::StringW Statement;

  /// @brief Field _statement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__statement, put = __cordl_internal_set__statement))::StringW _statement;

  /// @brief Method IsSetStatement, addr 0x2bc4404, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatement();

  static inline ::Amazon::Lambda::Model::AddPermissionResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__statement() const;

  constexpr ::StringW& __cordl_internal_get__statement();

  constexpr void __cordl_internal_set__statement(::StringW value);

  /// @brief Method .ctor, addr 0x2bc4414, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Statement, addr 0x2bc43f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Statement();

  /// @brief Method set_Statement, addr 0x2bc43fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Statement(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddPermissionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddPermissionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddPermissionResponse(AddPermissionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddPermissionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddPermissionResponse(AddPermissionResponse const&) = delete;

  /// @brief Field _statement, offset: 0x28, size: 0x8, def value: None
  ::StringW ____statement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AddPermissionResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AddPermissionResponse, ____statement) == 0x28, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AddPermissionResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AddPermissionResponse*, "Amazon.Lambda.Model", "AddPermissionResponse");
