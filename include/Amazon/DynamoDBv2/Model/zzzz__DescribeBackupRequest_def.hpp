#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DescribeBackupRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeBackupRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeBackupRequest);
// Type: Amazon.DynamoDBv2.Model::DescribeBackupRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeBackupRequest*
class CORDL_TYPE DescribeBackupRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_BackupArn, put = set_BackupArn))::StringW BackupArn;

  /// @brief Field _backupArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__backupArn, put = __cordl_internal_set__backupArn))::StringW _backupArn;

  /// @brief Method IsSetBackupArn, addr 0x1229bd8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupArn();

  static inline ::Amazon::DynamoDBv2::Model::DescribeBackupRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__backupArn() const;

  constexpr ::StringW& __cordl_internal_get__backupArn();

  constexpr void __cordl_internal_set__backupArn(::StringW value);

  /// @brief Method .ctor, addr 0x1229be8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupArn, addr 0x1229bc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BackupArn();

  /// @brief Method set_BackupArn, addr 0x1229bd0, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeBackupRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeBackupRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeBackupRequest(DescribeBackupRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeBackupRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeBackupRequest(DescribeBackupRequest const&) = delete;

  /// @brief Field _backupArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____backupArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeBackupRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeBackupRequest, ____backupArn) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeBackupRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeBackupRequest*, "Amazon.DynamoDBv2.Model", "DescribeBackupRequest");
