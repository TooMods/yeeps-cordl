#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RestoreTableFromBackupRequest)
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndex;
}
namespace Amazon::DynamoDBv2::Model {
class LocalSecondaryIndex;
}
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughput;
}
namespace Amazon::DynamoDBv2::Model {
class SSESpecification;
}
namespace Amazon::DynamoDBv2 {
class BillingMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class RestoreTableFromBackupRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest);
// Type: Amazon.DynamoDBv2.Model::RestoreTableFromBackupRequest
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::RestoreTableFromBackupRequest*
class CORDL_TYPE RestoreTableFromBackupRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_BackupArn, put = set_BackupArn))::StringW BackupArn;

  __declspec(property(get = get_BillingModeOverride, put = set_BillingModeOverride))::Amazon::DynamoDBv2::BillingMode* BillingModeOverride;

  __declspec(property(get = get_GlobalSecondaryIndexOverride,
                      put = set_GlobalSecondaryIndexOverride))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* GlobalSecondaryIndexOverride;

  __declspec(property(get = get_LocalSecondaryIndexOverride,
                      put = set_LocalSecondaryIndexOverride))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* LocalSecondaryIndexOverride;

  __declspec(property(get = get_ProvisionedThroughputOverride, put = set_ProvisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ProvisionedThroughputOverride;

  __declspec(property(get = get_SSESpecificationOverride, put = set_SSESpecificationOverride))::Amazon::DynamoDBv2::Model::SSESpecification* SSESpecificationOverride;

  __declspec(property(get = get_TargetTableName, put = set_TargetTableName))::StringW TargetTableName;

  /// @brief Field _backupArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__backupArn, put = __cordl_internal_set__backupArn))::StringW _backupArn;

  /// @brief Field _billingModeOverride, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__billingModeOverride, put = __cordl_internal_set__billingModeOverride))::Amazon::DynamoDBv2::BillingMode* _billingModeOverride;

  /// @brief Field _globalSecondaryIndexOverride, offset 0x48, size 0x8
  __declspec(
      property(get = __cordl_internal_get__globalSecondaryIndexOverride,
               put = __cordl_internal_set__globalSecondaryIndexOverride))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* _globalSecondaryIndexOverride;

  /// @brief Field _localSecondaryIndexOverride, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__localSecondaryIndexOverride,
                      put = __cordl_internal_set__localSecondaryIndexOverride))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* _localSecondaryIndexOverride;

  /// @brief Field _provisionedThroughputOverride, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughputOverride,
                      put = __cordl_internal_set__provisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* _provisionedThroughputOverride;

  /// @brief Field _sseSpecificationOverride, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__sseSpecificationOverride,
                      put = __cordl_internal_set__sseSpecificationOverride))::Amazon::DynamoDBv2::Model::SSESpecification* _sseSpecificationOverride;

  /// @brief Field _targetTableName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTableName, put = __cordl_internal_set__targetTableName))::StringW _targetTableName;

  /// @brief Method IsSetBackupArn, addr 0x104fa30, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBackupArn();

  /// @brief Method IsSetBillingModeOverride, addr 0x104fa50, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBillingModeOverride();

  /// @brief Method IsSetGlobalSecondaryIndexOverride, addr 0x104fac0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexOverride();

  /// @brief Method IsSetLocalSecondaryIndexOverride, addr 0x104fb24, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLocalSecondaryIndexOverride();

  /// @brief Method IsSetProvisionedThroughputOverride, addr 0x104fb88, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughputOverride();

  /// @brief Method IsSetSSESpecificationOverride, addr 0x104fba8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSSESpecificationOverride();

  /// @brief Method IsSetTargetTableName, addr 0x104fbc8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTargetTableName();

  static inline ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__backupArn() const;

  constexpr ::StringW& __cordl_internal_get__backupArn();

  constexpr ::Amazon::DynamoDBv2::BillingMode*& __cordl_internal_get__billingModeOverride();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const& __cordl_internal_get__billingModeOverride() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*& __cordl_internal_get__globalSecondaryIndexOverride();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*> const&
  __cordl_internal_get__globalSecondaryIndexOverride() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*& __cordl_internal_get__localSecondaryIndexOverride();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*> const&
  __cordl_internal_get__localSecondaryIndexOverride() const;

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& __cordl_internal_get__provisionedThroughputOverride();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const& __cordl_internal_get__provisionedThroughputOverride() const;

  constexpr ::Amazon::DynamoDBv2::Model::SSESpecification*& __cordl_internal_get__sseSpecificationOverride();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSESpecification*> const& __cordl_internal_get__sseSpecificationOverride() const;

  constexpr ::StringW const& __cordl_internal_get__targetTableName() const;

  constexpr ::StringW& __cordl_internal_get__targetTableName();

  constexpr void __cordl_internal_set__backupArn(::StringW value);

  constexpr void __cordl_internal_set__billingModeOverride(::Amazon::DynamoDBv2::BillingMode* value);

  constexpr void __cordl_internal_set__globalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value);

  constexpr void __cordl_internal_set__localSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value);

  constexpr void __cordl_internal_set__provisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  constexpr void __cordl_internal_set__sseSpecificationOverride(::Amazon::DynamoDBv2::Model::SSESpecification* value);

  constexpr void __cordl_internal_set__targetTableName(::StringW value);

  /// @brief Method .ctor, addr 0x104fbd8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackupArn, addr 0x104fa20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BackupArn();

  /// @brief Method get_BillingModeOverride, addr 0x104fa40, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BillingMode* get_BillingModeOverride();

  /// @brief Method get_GlobalSecondaryIndexOverride, addr 0x104fab0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* get_GlobalSecondaryIndexOverride();

  /// @brief Method get_LocalSecondaryIndexOverride, addr 0x104fb14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* get_LocalSecondaryIndexOverride();

  /// @brief Method get_ProvisionedThroughputOverride, addr 0x104fb78, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* get_ProvisionedThroughputOverride();

  /// @brief Method get_SSESpecificationOverride, addr 0x104fb98, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SSESpecification* get_SSESpecificationOverride();

  /// @brief Method get_TargetTableName, addr 0x104fbb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetTableName();

  /// @brief Method set_BackupArn, addr 0x104fa28, size 0x8, virtual false, abstract: false, final false
  inline void set_BackupArn(::StringW value);

  /// @brief Method set_BillingModeOverride, addr 0x104fa48, size 0x8, virtual false, abstract: false, final false
  inline void set_BillingModeOverride(::Amazon::DynamoDBv2::BillingMode* value);

  /// @brief Method set_GlobalSecondaryIndexOverride, addr 0x104fab8, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value);

  /// @brief Method set_LocalSecondaryIndexOverride, addr 0x104fb1c, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value);

  /// @brief Method set_ProvisionedThroughputOverride, addr 0x104fb80, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  /// @brief Method set_SSESpecificationOverride, addr 0x104fba0, size 0x8, virtual false, abstract: false, final false
  inline void set_SSESpecificationOverride(::Amazon::DynamoDBv2::Model::SSESpecification* value);

  /// @brief Method set_TargetTableName, addr 0x104fbc0, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestoreTableFromBackupRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RestoreTableFromBackupRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestoreTableFromBackupRequest(RestoreTableFromBackupRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestoreTableFromBackupRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestoreTableFromBackupRequest(RestoreTableFromBackupRequest const&) = delete;

  /// @brief Field _backupArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____backupArn;

  /// @brief Field _billingModeOverride, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BillingMode* ____billingModeOverride;

  /// @brief Field _globalSecondaryIndexOverride, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* ____globalSecondaryIndexOverride;

  /// @brief Field _localSecondaryIndexOverride, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* ____localSecondaryIndexOverride;

  /// @brief Field _provisionedThroughputOverride, offset: 0x58, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ____provisionedThroughputOverride;

  /// @brief Field _sseSpecificationOverride, offset: 0x60, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SSESpecification* ____sseSpecificationOverride;

  /// @brief Field _targetTableName, offset: 0x68, size: 0x8, def value: None
  ::StringW ____targetTableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest, 0x70>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest, ____backupArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest, ____billingModeOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest, ____globalSecondaryIndexOverride) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest, ____localSecondaryIndexOverride) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest, ____provisionedThroughputOverride) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest, ____sseSpecificationOverride) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest, ____targetTableName) == 0x68, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*, "Amazon.DynamoDBv2.Model", "RestoreTableFromBackupRequest");
