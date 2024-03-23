#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BackupSummary)
namespace Amazon::DynamoDBv2 {
class BackupStatus;
}
namespace Amazon::DynamoDBv2 {
class BackupType;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BackupSummary;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BackupSummary);
// Type: Amazon.DynamoDBv2.Model::BackupSummary
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BackupSummary*
class CORDL_TYPE BackupSummary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BackupArn, put = set_BackupArn))::StringW BackupArn;

  __declspec(property(get = get_BackupCreationDateTime, put = set_BackupCreationDateTime))::System::DateTime BackupCreationDateTime;

  __declspec(property(get = get_BackupExpiryDateTime, put = set_BackupExpiryDateTime))::System::DateTime BackupExpiryDateTime;

  __declspec(property(get = get_BackupName, put = set_BackupName))::StringW BackupName;

  __declspec(property(get = get_BackupSizeBytes, put = set_BackupSizeBytes)) int64_t BackupSizeBytes;

  __declspec(property(get = get_BackupStatus, put = set_BackupStatus))::Amazon::DynamoDBv2::BackupStatus* BackupStatus;

  __declspec(property(get = get_BackupType, put = set_BackupType))::Amazon::DynamoDBv2::BackupType* BackupType;

  __declspec(property(get = get_TableArn, put = set_TableArn))::StringW TableArn;

  __declspec(property(get = get_TableId, put = set_TableId))::StringW TableId;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _backupArn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__backupArn, put = __cordl_internal_set__backupArn))::StringW _backupArn;

  /// @brief Field _backupCreationDateTime, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__backupCreationDateTime, put = __cordl_internal_set__backupCreationDateTime))::System::Nullable_1<::System::DateTime> _backupCreationDateTime;

  /// @brief Field _backupExpiryDateTime, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__backupExpiryDateTime, put = __cordl_internal_set__backupExpiryDateTime))::System::Nullable_1<::System::DateTime> _backupExpiryDateTime;

  /// @brief Field _backupName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__backupName, put = __cordl_internal_set__backupName))::StringW _backupName;

  /// @brief Field _backupSizeBytes, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__backupSizeBytes, put = __cordl_internal_set__backupSizeBytes))::System::Nullable_1<int64_t> _backupSizeBytes;

  /// @brief Field _backupStatus, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__backupStatus, put = __cordl_internal_set__backupStatus))::Amazon::DynamoDBv2::BackupStatus* _backupStatus;

  /// @brief Field _backupType, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__backupType, put = __cordl_internal_set__backupType))::Amazon::DynamoDBv2::BackupType* _backupType;

  /// @brief Field _tableArn, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__tableArn, put = __cordl_internal_set__tableArn))::StringW _tableArn;

  /// @brief Field _tableId, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__tableId, put = __cordl_internal_set__tableId))::StringW _tableId;

  /// @brief Field _tableName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetBackupArn, addr 0x122631c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupArn();

  /// @brief Method IsSetBackupCreationDateTime, addr 0x12263d8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBackupCreationDateTime();

  /// @brief Method IsSetBackupExpiryDateTime, addr 0x12264c0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBackupExpiryDateTime();

  /// @brief Method IsSetBackupName, addr 0x122650c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupName();

  /// @brief Method IsSetBackupSizeBytes, addr 0x12265c8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBackupSizeBytes();

  /// @brief Method IsSetBackupStatus, addr 0x1226614, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBackupStatus();

  /// @brief Method IsSetBackupType, addr 0x1226684, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBackupType();

  /// @brief Method IsSetTableArn, addr 0x12266f4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableArn();

  /// @brief Method IsSetTableId, addr 0x1226714, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableId();

  /// @brief Method IsSetTableName, addr 0x1226734, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::BackupSummary* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__backupArn() const;

  constexpr ::StringW& __cordl_internal_get__backupArn();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__backupCreationDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__backupCreationDateTime();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__backupExpiryDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__backupExpiryDateTime();

  constexpr ::StringW const& __cordl_internal_get__backupName() const;

  constexpr ::StringW& __cordl_internal_get__backupName();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__backupSizeBytes() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__backupSizeBytes();

  constexpr ::Amazon::DynamoDBv2::BackupStatus*& __cordl_internal_get__backupStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BackupStatus*> const& __cordl_internal_get__backupStatus() const;

  constexpr ::Amazon::DynamoDBv2::BackupType*& __cordl_internal_get__backupType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BackupType*> const& __cordl_internal_get__backupType() const;

  constexpr ::StringW const& __cordl_internal_get__tableArn() const;

  constexpr ::StringW& __cordl_internal_get__tableArn();

  constexpr ::StringW const& __cordl_internal_get__tableId() const;

  constexpr ::StringW& __cordl_internal_get__tableId();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__backupArn(::StringW value);

  constexpr void __cordl_internal_set__backupCreationDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__backupExpiryDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__backupName(::StringW value);

  constexpr void __cordl_internal_set__backupSizeBytes(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__backupStatus(::Amazon::DynamoDBv2::BackupStatus* value);

  constexpr void __cordl_internal_set__backupType(::Amazon::DynamoDBv2::BackupType* value);

  constexpr void __cordl_internal_set__tableArn(::StringW value);

  constexpr void __cordl_internal_set__tableId(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1226744, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupArn, addr 0x122630c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BackupArn();

  /// @brief Method get_BackupCreationDateTime, addr 0x122632c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_BackupCreationDateTime();

  /// @brief Method get_BackupExpiryDateTime, addr 0x1226414, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_BackupExpiryDateTime();

  /// @brief Method get_BackupName, addr 0x12264fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BackupName();

  /// @brief Method get_BackupSizeBytes, addr 0x122651c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_BackupSizeBytes();

  /// @brief Method get_BackupStatus, addr 0x1226604, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BackupStatus* get_BackupStatus();

  /// @brief Method get_BackupType, addr 0x1226674, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BackupType* get_BackupType();

  /// @brief Method get_TableArn, addr 0x12266e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableArn();

  /// @brief Method get_TableId, addr 0x1226704, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableId();

  /// @brief Method get_TableName, addr 0x1226724, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_BackupArn, addr 0x1226314, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupArn(::StringW value);

  /// @brief Method set_BackupCreationDateTime, addr 0x1226368, size 0x70, virtual false, abstract: false, final false
  inline void set_BackupCreationDateTime(::System::DateTime value);

  /// @brief Method set_BackupExpiryDateTime, addr 0x1226450, size 0x70, virtual false, abstract: false, final false
  inline void set_BackupExpiryDateTime(::System::DateTime value);

  /// @brief Method set_BackupName, addr 0x1226504, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupName(::StringW value);

  /// @brief Method set_BackupSizeBytes, addr 0x1226558, size 0x70, virtual false, abstract: false, final false
  inline void set_BackupSizeBytes(int64_t value);

  /// @brief Method set_BackupStatus, addr 0x122660c, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupStatus(::Amazon::DynamoDBv2::BackupStatus* value);

  /// @brief Method set_BackupType, addr 0x122667c, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupType(::Amazon::DynamoDBv2::BackupType* value);

  /// @brief Method set_TableArn, addr 0x12266ec, size 0x8, virtual false, abstract: false, final false
  inline void set_TableArn(::StringW value);

  /// @brief Method set_TableId, addr 0x122670c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableId(::StringW value);

  /// @brief Method set_TableName, addr 0x122672c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackupSummary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackupSummary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackupSummary(BackupSummary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackupSummary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackupSummary(BackupSummary const&) = delete;

  /// @brief Field _backupArn, offset: 0x10, size: 0x8, def value: None
  ::StringW ____backupArn;

  /// @brief Field _backupCreationDateTime, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____backupCreationDateTime;

  /// @brief Field _backupExpiryDateTime, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____backupExpiryDateTime;

  /// @brief Field _backupName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____backupName;

  /// @brief Field _backupSizeBytes, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____backupSizeBytes;

  /// @brief Field _backupStatus, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BackupStatus* ____backupStatus;

  /// @brief Field _backupType, offset: 0x58, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BackupType* ____backupType;

  /// @brief Field _tableArn, offset: 0x60, size: 0x8, def value: None
  ::StringW ____tableArn;

  /// @brief Field _tableId, offset: 0x68, size: 0x8, def value: None
  ::StringW ____tableId;

  /// @brief Field _tableName, offset: 0x70, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BackupSummary, 0x78>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____backupArn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____backupCreationDateTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____backupExpiryDateTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____backupName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____backupSizeBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____backupStatus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____backupType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____tableArn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____tableId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupSummary, ____tableName) == 0x70, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BackupSummary);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BackupSummary*, "Amazon.DynamoDBv2.Model", "BackupSummary");
