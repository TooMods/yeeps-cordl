#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListBackupsRequest)
namespace Amazon::DynamoDBv2 {
class BackupTypeFilter;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListBackupsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListBackupsRequest);
// Type: Amazon.DynamoDBv2.Model::ListBackupsRequest
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListBackupsRequest*
class CORDL_TYPE ListBackupsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_BackupType, put = set_BackupType))::Amazon::DynamoDBv2::BackupTypeFilter* BackupType;

  __declspec(property(get = get_ExclusiveStartBackupArn, put = set_ExclusiveStartBackupArn))::StringW ExclusiveStartBackupArn;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_TimeRangeLowerBound, put = set_TimeRangeLowerBound))::System::DateTime TimeRangeLowerBound;

  __declspec(property(get = get_TimeRangeUpperBound, put = set_TimeRangeUpperBound))::System::DateTime TimeRangeUpperBound;

  /// @brief Field _backupType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__backupType, put = __cordl_internal_set__backupType))::Amazon::DynamoDBv2::BackupTypeFilter* _backupType;

  /// @brief Field _exclusiveStartBackupArn, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__exclusiveStartBackupArn, put = __cordl_internal_set__exclusiveStartBackupArn))::StringW _exclusiveStartBackupArn;

  /// @brief Field _limit, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit))::System::Nullable_1<int32_t> _limit;

  /// @brief Field _tableName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Field _timeRangeLowerBound, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__timeRangeLowerBound, put = __cordl_internal_set__timeRangeLowerBound))::System::Nullable_1<::System::DateTime> _timeRangeLowerBound;

  /// @brief Field _timeRangeUpperBound, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__timeRangeUpperBound, put = __cordl_internal_set__timeRangeUpperBound))::System::Nullable_1<::System::DateTime> _timeRangeUpperBound;

  /// @brief Method IsSetBackupType, addr 0x104a614, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBackupType();

  /// @brief Method IsSetExclusiveStartBackupArn, addr 0x104a684, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExclusiveStartBackupArn();

  /// @brief Method IsSetLimit, addr 0x104a738, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLimit();

  /// @brief Method IsSetTableName, addr 0x104a784, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  /// @brief Method IsSetTimeRangeLowerBound, addr 0x104a840, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTimeRangeLowerBound();

  /// @brief Method IsSetTimeRangeUpperBound, addr 0x104a928, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTimeRangeUpperBound();

  static inline ::Amazon::DynamoDBv2::Model::ListBackupsRequest* New_ctor();

  constexpr ::Amazon::DynamoDBv2::BackupTypeFilter*& __cordl_internal_get__backupType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BackupTypeFilter*> const& __cordl_internal_get__backupType() const;

  constexpr ::StringW const& __cordl_internal_get__exclusiveStartBackupArn() const;

  constexpr ::StringW& __cordl_internal_get__exclusiveStartBackupArn();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__limit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__limit();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__timeRangeLowerBound() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__timeRangeLowerBound();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__timeRangeUpperBound() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__timeRangeUpperBound();

  constexpr void __cordl_internal_set__backupType(::Amazon::DynamoDBv2::BackupTypeFilter* value);

  constexpr void __cordl_internal_set__exclusiveStartBackupArn(::StringW value);

  constexpr void __cordl_internal_set__limit(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__timeRangeLowerBound(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__timeRangeUpperBound(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method .ctor, addr 0x104a964, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupType, addr 0x104a604, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BackupTypeFilter* get_BackupType();

  /// @brief Method get_ExclusiveStartBackupArn, addr 0x104a674, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExclusiveStartBackupArn();

  /// @brief Method get_Limit, addr 0x104a694, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_TableName, addr 0x104a774, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_TimeRangeLowerBound, addr 0x104a794, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_TimeRangeLowerBound();

  /// @brief Method get_TimeRangeUpperBound, addr 0x104a87c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_TimeRangeUpperBound();

  /// @brief Method set_BackupType, addr 0x104a60c, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupType(::Amazon::DynamoDBv2::BackupTypeFilter* value);

  /// @brief Method set_ExclusiveStartBackupArn, addr 0x104a67c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveStartBackupArn(::StringW value);

  /// @brief Method set_Limit, addr 0x104a6d0, size 0x68, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_TableName, addr 0x104a77c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_TimeRangeLowerBound, addr 0x104a7d0, size 0x70, virtual false, abstract: false, final false
  inline void set_TimeRangeLowerBound(::System::DateTime value);

  /// @brief Method set_TimeRangeUpperBound, addr 0x104a8b8, size 0x70, virtual false, abstract: false, final false
  inline void set_TimeRangeUpperBound(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListBackupsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListBackupsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListBackupsRequest(ListBackupsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListBackupsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListBackupsRequest(ListBackupsRequest const&) = delete;

  /// @brief Field _backupType, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BackupTypeFilter* ____backupType;

  /// @brief Field _exclusiveStartBackupArn, offset: 0x40, size: 0x8, def value: None
  ::StringW ____exclusiveStartBackupArn;

  /// @brief Field _limit, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____limit;

  /// @brief Field _tableName, offset: 0x50, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _timeRangeLowerBound, offset: 0x58, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____timeRangeLowerBound;

  /// @brief Field _timeRangeUpperBound, offset: 0x68, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____timeRangeUpperBound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListBackupsRequest, 0x78>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListBackupsRequest, ____backupType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListBackupsRequest, ____exclusiveStartBackupArn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListBackupsRequest, ____limit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListBackupsRequest, ____tableName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListBackupsRequest, ____timeRangeLowerBound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListBackupsRequest, ____timeRangeUpperBound) == 0x68, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListBackupsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListBackupsRequest*, "Amazon.DynamoDBv2.Model", "ListBackupsRequest");
