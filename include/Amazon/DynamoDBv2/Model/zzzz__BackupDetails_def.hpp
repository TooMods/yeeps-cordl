#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BackupDetails)
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
class BackupDetails;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BackupDetails);
// Type: Amazon.DynamoDBv2.Model::BackupDetails
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BackupDetails*
class CORDL_TYPE BackupDetails : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BackupArn, put = set_BackupArn))::StringW BackupArn;

  __declspec(property(get = get_BackupCreationDateTime, put = set_BackupCreationDateTime))::System::DateTime BackupCreationDateTime;

  __declspec(property(get = get_BackupExpiryDateTime, put = set_BackupExpiryDateTime))::System::DateTime BackupExpiryDateTime;

  __declspec(property(get = get_BackupName, put = set_BackupName))::StringW BackupName;

  __declspec(property(get = get_BackupSizeBytes, put = set_BackupSizeBytes)) int64_t BackupSizeBytes;

  __declspec(property(get = get_BackupStatus, put = set_BackupStatus))::Amazon::DynamoDBv2::BackupStatus* BackupStatus;

  __declspec(property(get = get_BackupType, put = set_BackupType))::Amazon::DynamoDBv2::BackupType* BackupType;

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

  /// @brief Method IsSetBackupArn, addr 0x1225ef4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupArn();

  /// @brief Method IsSetBackupCreationDateTime, addr 0x1225fb0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBackupCreationDateTime();

  /// @brief Method IsSetBackupExpiryDateTime, addr 0x1226098, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBackupExpiryDateTime();

  /// @brief Method IsSetBackupName, addr 0x12260e4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupName();

  /// @brief Method IsSetBackupSizeBytes, addr 0x12261a0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetBackupSizeBytes();

  /// @brief Method IsSetBackupStatus, addr 0x12261ec, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBackupStatus();

  /// @brief Method IsSetBackupType, addr 0x122625c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBackupType();

  static inline ::Amazon::DynamoDBv2::Model::BackupDetails* New_ctor();

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

  constexpr void __cordl_internal_set__backupArn(::StringW value);

  constexpr void __cordl_internal_set__backupCreationDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__backupExpiryDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__backupName(::StringW value);

  constexpr void __cordl_internal_set__backupSizeBytes(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__backupStatus(::Amazon::DynamoDBv2::BackupStatus* value);

  constexpr void __cordl_internal_set__backupType(::Amazon::DynamoDBv2::BackupType* value);

  /// @brief Method .ctor, addr 0x12262bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupArn, addr 0x1225ee4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BackupArn();

  /// @brief Method get_BackupCreationDateTime, addr 0x1225f04, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_BackupCreationDateTime();

  /// @brief Method get_BackupExpiryDateTime, addr 0x1225fec, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_BackupExpiryDateTime();

  /// @brief Method get_BackupName, addr 0x12260d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BackupName();

  /// @brief Method get_BackupSizeBytes, addr 0x12260f4, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_BackupSizeBytes();

  /// @brief Method get_BackupStatus, addr 0x12261dc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BackupStatus* get_BackupStatus();

  /// @brief Method get_BackupType, addr 0x122624c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BackupType* get_BackupType();

  /// @brief Method set_BackupArn, addr 0x1225eec, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupArn(::StringW value);

  /// @brief Method set_BackupCreationDateTime, addr 0x1225f40, size 0x70, virtual false, abstract: false, final false
  inline void set_BackupCreationDateTime(::System::DateTime value);

  /// @brief Method set_BackupExpiryDateTime, addr 0x1226028, size 0x70, virtual false, abstract: false, final false
  inline void set_BackupExpiryDateTime(::System::DateTime value);

  /// @brief Method set_BackupName, addr 0x12260dc, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupName(::StringW value);

  /// @brief Method set_BackupSizeBytes, addr 0x1226130, size 0x70, virtual false, abstract: false, final false
  inline void set_BackupSizeBytes(int64_t value);

  /// @brief Method set_BackupStatus, addr 0x12261e4, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupStatus(::Amazon::DynamoDBv2::BackupStatus* value);

  /// @brief Method set_BackupType, addr 0x1226254, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupType(::Amazon::DynamoDBv2::BackupType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackupDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackupDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackupDetails(BackupDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackupDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackupDetails(BackupDetails const&) = delete;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BackupDetails, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDetails, ____backupArn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDetails, ____backupCreationDateTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDetails, ____backupExpiryDateTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDetails, ____backupName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDetails, ____backupSizeBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDetails, ____backupStatus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BackupDetails, ____backupType) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BackupDetails);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BackupDetails*, "Amazon.DynamoDBv2.Model", "BackupDetails");
