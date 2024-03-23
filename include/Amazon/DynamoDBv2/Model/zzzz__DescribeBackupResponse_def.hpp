#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(DescribeBackupResponse)
namespace Amazon::DynamoDBv2::Model {
class BackupDescription;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeBackupResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeBackupResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeBackupResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeBackupResponse*
class CORDL_TYPE DescribeBackupResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_BackupDescription, put = set_BackupDescription))::Amazon::DynamoDBv2::Model::BackupDescription* BackupDescription;

  /// @brief Field _backupDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__backupDescription, put = __cordl_internal_set__backupDescription))::Amazon::DynamoDBv2::Model::BackupDescription* _backupDescription;

  /// @brief Method IsSetBackupDescription, addr 0x1229c00, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupDescription();

  static inline ::Amazon::DynamoDBv2::Model::DescribeBackupResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::BackupDescription*& __cordl_internal_get__backupDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BackupDescription*> const& __cordl_internal_get__backupDescription() const;

  constexpr void __cordl_internal_set__backupDescription(::Amazon::DynamoDBv2::Model::BackupDescription* value);

  /// @brief Method .ctor, addr 0x1229c10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupDescription, addr 0x1229bf0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BackupDescription* get_BackupDescription();

  /// @brief Method set_BackupDescription, addr 0x1229bf8, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupDescription(::Amazon::DynamoDBv2::Model::BackupDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeBackupResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeBackupResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeBackupResponse(DescribeBackupResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeBackupResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeBackupResponse(DescribeBackupResponse const&) = delete;

  /// @brief Field _backupDescription, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BackupDescription* ____backupDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeBackupResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeBackupResponse, ____backupDescription) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeBackupResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeBackupResponse*, "Amazon.DynamoDBv2.Model", "DescribeBackupResponse");
