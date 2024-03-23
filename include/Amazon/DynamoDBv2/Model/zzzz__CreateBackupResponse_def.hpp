#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(CreateBackupResponse)
namespace Amazon::DynamoDBv2::Model {
class BackupDetails;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class CreateBackupResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::CreateBackupResponse);
// Type: Amazon.DynamoDBv2.Model::CreateBackupResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::CreateBackupResponse*
class CORDL_TYPE CreateBackupResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_BackupDetails, put = set_BackupDetails))::Amazon::DynamoDBv2::Model::BackupDetails* BackupDetails;

  /// @brief Field _backupDetails, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__backupDetails, put = __cordl_internal_set__backupDetails))::Amazon::DynamoDBv2::Model::BackupDetails* _backupDetails;

  /// @brief Method IsSetBackupDetails, addr 0x12284a4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupDetails();

  static inline ::Amazon::DynamoDBv2::Model::CreateBackupResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::BackupDetails*& __cordl_internal_get__backupDetails();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BackupDetails*> const& __cordl_internal_get__backupDetails() const;

  constexpr void __cordl_internal_set__backupDetails(::Amazon::DynamoDBv2::Model::BackupDetails* value);

  /// @brief Method .ctor, addr 0x12284b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupDetails, addr 0x1228494, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BackupDetails* get_BackupDetails();

  /// @brief Method set_BackupDetails, addr 0x122849c, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupDetails(::Amazon::DynamoDBv2::Model::BackupDetails* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateBackupResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateBackupResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateBackupResponse(CreateBackupResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateBackupResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateBackupResponse(CreateBackupResponse const&) = delete;

  /// @brief Field _backupDetails, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BackupDetails* ____backupDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::CreateBackupResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateBackupResponse, ____backupDetails) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::CreateBackupResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::CreateBackupResponse*, "Amazon.DynamoDBv2.Model", "CreateBackupResponse");
