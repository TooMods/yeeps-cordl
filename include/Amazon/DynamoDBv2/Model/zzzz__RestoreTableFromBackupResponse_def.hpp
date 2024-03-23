#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(RestoreTableFromBackupResponse)
namespace Amazon::DynamoDBv2::Model {
class TableDescription;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class RestoreTableFromBackupResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupResponse);
// Type: Amazon.DynamoDBv2.Model::RestoreTableFromBackupResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::RestoreTableFromBackupResponse*
class CORDL_TYPE RestoreTableFromBackupResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_TableDescription, put = set_TableDescription))::Amazon::DynamoDBv2::Model::TableDescription* TableDescription;

  /// @brief Field _tableDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tableDescription, put = __cordl_internal_set__tableDescription))::Amazon::DynamoDBv2::Model::TableDescription* _tableDescription;

  /// @brief Method IsSetTableDescription, addr 0x104fca8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableDescription();

  static inline ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::TableDescription*& __cordl_internal_get__tableDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TableDescription*> const& __cordl_internal_get__tableDescription() const;

  constexpr void __cordl_internal_set__tableDescription(::Amazon::DynamoDBv2::Model::TableDescription* value);

  /// @brief Method .ctor, addr 0x104fcb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TableDescription, addr 0x104fc98, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TableDescription* get_TableDescription();

  /// @brief Method set_TableDescription, addr 0x104fca0, size 0x8, virtual false, abstract: false, final false
  inline void set_TableDescription(::Amazon::DynamoDBv2::Model::TableDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestoreTableFromBackupResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RestoreTableFromBackupResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestoreTableFromBackupResponse(RestoreTableFromBackupResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestoreTableFromBackupResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestoreTableFromBackupResponse(RestoreTableFromBackupResponse const&) = delete;

  /// @brief Field _tableDescription, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::TableDescription* ____tableDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupResponse, ____tableDescription) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupResponse*, "Amazon.DynamoDBv2.Model", "RestoreTableFromBackupResponse");
