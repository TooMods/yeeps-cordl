#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RestoreTableToPointInTimeRequest)
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
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class RestoreTableToPointInTimeRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest);
// Type: Amazon.DynamoDBv2.Model::RestoreTableToPointInTimeRequest
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 138, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::RestoreTableToPointInTimeRequest*
class CORDL_TYPE RestoreTableToPointInTimeRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_BillingModeOverride, put = set_BillingModeOverride))::Amazon::DynamoDBv2::BillingMode* BillingModeOverride;

  __declspec(property(get = get_GlobalSecondaryIndexOverride,
                      put = set_GlobalSecondaryIndexOverride))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* GlobalSecondaryIndexOverride;

  __declspec(property(get = get_LocalSecondaryIndexOverride,
                      put = set_LocalSecondaryIndexOverride))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* LocalSecondaryIndexOverride;

  __declspec(property(get = get_ProvisionedThroughputOverride, put = set_ProvisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ProvisionedThroughputOverride;

  __declspec(property(get = get_RestoreDateTime, put = set_RestoreDateTime))::System::DateTime RestoreDateTime;

  __declspec(property(get = get_SSESpecificationOverride, put = set_SSESpecificationOverride))::Amazon::DynamoDBv2::Model::SSESpecification* SSESpecificationOverride;

  __declspec(property(get = get_SourceTableArn, put = set_SourceTableArn))::StringW SourceTableArn;

  __declspec(property(get = get_SourceTableName, put = set_SourceTableName))::StringW SourceTableName;

  __declspec(property(get = get_TargetTableName, put = set_TargetTableName))::StringW TargetTableName;

  __declspec(property(get = get_UseLatestRestorableTime, put = set_UseLatestRestorableTime)) bool UseLatestRestorableTime;

  /// @brief Field _billingModeOverride, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__billingModeOverride, put = __cordl_internal_set__billingModeOverride))::Amazon::DynamoDBv2::BillingMode* _billingModeOverride;

  /// @brief Field _globalSecondaryIndexOverride, offset 0x40, size 0x8
  __declspec(
      property(get = __cordl_internal_get__globalSecondaryIndexOverride,
               put = __cordl_internal_set__globalSecondaryIndexOverride))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* _globalSecondaryIndexOverride;

  /// @brief Field _localSecondaryIndexOverride, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__localSecondaryIndexOverride,
                      put = __cordl_internal_set__localSecondaryIndexOverride))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* _localSecondaryIndexOverride;

  /// @brief Field _provisionedThroughputOverride, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughputOverride,
                      put = __cordl_internal_set__provisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* _provisionedThroughputOverride;

  /// @brief Field _restoreDateTime, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__restoreDateTime, put = __cordl_internal_set__restoreDateTime))::System::Nullable_1<::System::DateTime> _restoreDateTime;

  /// @brief Field _sourceTableArn, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceTableArn, put = __cordl_internal_set__sourceTableArn))::StringW _sourceTableArn;

  /// @brief Field _sourceTableName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceTableName, put = __cordl_internal_set__sourceTableName))::StringW _sourceTableName;

  /// @brief Field _sseSpecificationOverride, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__sseSpecificationOverride,
                      put = __cordl_internal_set__sseSpecificationOverride))::Amazon::DynamoDBv2::Model::SSESpecification* _sseSpecificationOverride;

  /// @brief Field _targetTableName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__targetTableName, put = __cordl_internal_set__targetTableName))::StringW _targetTableName;

  /// @brief Field _useLatestRestorableTime, offset 0x88, size 0x2
  __declspec(property(get = __cordl_internal_get__useLatestRestorableTime, put = __cordl_internal_set__useLatestRestorableTime))::System::Nullable_1<bool> _useLatestRestorableTime;

  /// @brief Method IsSetBillingModeOverride, addr 0x104fcd0, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBillingModeOverride();

  /// @brief Method IsSetGlobalSecondaryIndexOverride, addr 0x104fd40, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexOverride();

  /// @brief Method IsSetLocalSecondaryIndexOverride, addr 0x104fda4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLocalSecondaryIndexOverride();

  /// @brief Method IsSetProvisionedThroughputOverride, addr 0x104fe08, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughputOverride();

  /// @brief Method IsSetRestoreDateTime, addr 0x104fec4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetRestoreDateTime();

  /// @brief Method IsSetSSESpecificationOverride, addr 0x104ff50, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSSESpecificationOverride();

  /// @brief Method IsSetSourceTableArn, addr 0x104ff10, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSourceTableArn();

  /// @brief Method IsSetSourceTableName, addr 0x104ff30, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSourceTableName();

  /// @brief Method IsSetTargetTableName, addr 0x104ff70, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTargetTableName();

  /// @brief Method IsSetUseLatestRestorableTime, addr 0x1050024, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetUseLatestRestorableTime();

  static inline ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest* New_ctor();

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

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__restoreDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__restoreDateTime();

  constexpr ::StringW const& __cordl_internal_get__sourceTableArn() const;

  constexpr ::StringW& __cordl_internal_get__sourceTableArn();

  constexpr ::StringW const& __cordl_internal_get__sourceTableName() const;

  constexpr ::StringW& __cordl_internal_get__sourceTableName();

  constexpr ::Amazon::DynamoDBv2::Model::SSESpecification*& __cordl_internal_get__sseSpecificationOverride();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSESpecification*> const& __cordl_internal_get__sseSpecificationOverride() const;

  constexpr ::StringW const& __cordl_internal_get__targetTableName() const;

  constexpr ::StringW& __cordl_internal_get__targetTableName();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__useLatestRestorableTime() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__useLatestRestorableTime();

  constexpr void __cordl_internal_set__billingModeOverride(::Amazon::DynamoDBv2::BillingMode* value);

  constexpr void __cordl_internal_set__globalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value);

  constexpr void __cordl_internal_set__localSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value);

  constexpr void __cordl_internal_set__provisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  constexpr void __cordl_internal_set__restoreDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__sourceTableArn(::StringW value);

  constexpr void __cordl_internal_set__sourceTableName(::StringW value);

  constexpr void __cordl_internal_set__sseSpecificationOverride(::Amazon::DynamoDBv2::Model::SSESpecification* value);

  constexpr void __cordl_internal_set__targetTableName(::StringW value);

  constexpr void __cordl_internal_set__useLatestRestorableTime(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x1050060, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BillingModeOverride, addr 0x104fcc0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BillingMode* get_BillingModeOverride();

  /// @brief Method get_GlobalSecondaryIndexOverride, addr 0x104fd30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* get_GlobalSecondaryIndexOverride();

  /// @brief Method get_LocalSecondaryIndexOverride, addr 0x104fd94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* get_LocalSecondaryIndexOverride();

  /// @brief Method get_ProvisionedThroughputOverride, addr 0x104fdf8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* get_ProvisionedThroughputOverride();

  /// @brief Method get_RestoreDateTime, addr 0x104fe18, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_RestoreDateTime();

  /// @brief Method get_SSESpecificationOverride, addr 0x104ff40, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SSESpecification* get_SSESpecificationOverride();

  /// @brief Method get_SourceTableArn, addr 0x104ff00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceTableArn();

  /// @brief Method get_SourceTableName, addr 0x104ff20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceTableName();

  /// @brief Method get_TargetTableName, addr 0x104ff60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetTableName();

  /// @brief Method get_UseLatestRestorableTime, addr 0x104ff80, size 0x3c, virtual false, abstract: false, final false
  inline bool get_UseLatestRestorableTime();

  /// @brief Method set_BillingModeOverride, addr 0x104fcc8, size 0x8, virtual false, abstract: false, final false
  inline void set_BillingModeOverride(::Amazon::DynamoDBv2::BillingMode* value);

  /// @brief Method set_GlobalSecondaryIndexOverride, addr 0x104fd38, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value);

  /// @brief Method set_LocalSecondaryIndexOverride, addr 0x104fd9c, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value);

  /// @brief Method set_ProvisionedThroughputOverride, addr 0x104fe00, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  /// @brief Method set_RestoreDateTime, addr 0x104fe54, size 0x70, virtual false, abstract: false, final false
  inline void set_RestoreDateTime(::System::DateTime value);

  /// @brief Method set_SSESpecificationOverride, addr 0x104ff48, size 0x8, virtual false, abstract: false, final false
  inline void set_SSESpecificationOverride(::Amazon::DynamoDBv2::Model::SSESpecification* value);

  /// @brief Method set_SourceTableArn, addr 0x104ff08, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceTableArn(::StringW value);

  /// @brief Method set_SourceTableName, addr 0x104ff28, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceTableName(::StringW value);

  /// @brief Method set_TargetTableName, addr 0x104ff68, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTableName(::StringW value);

  /// @brief Method set_UseLatestRestorableTime, addr 0x104ffbc, size 0x68, virtual false, abstract: false, final false
  inline void set_UseLatestRestorableTime(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RestoreTableToPointInTimeRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RestoreTableToPointInTimeRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RestoreTableToPointInTimeRequest(RestoreTableToPointInTimeRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RestoreTableToPointInTimeRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RestoreTableToPointInTimeRequest(RestoreTableToPointInTimeRequest const&) = delete;

  /// @brief Field _billingModeOverride, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BillingMode* ____billingModeOverride;

  /// @brief Field _globalSecondaryIndexOverride, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* ____globalSecondaryIndexOverride;

  /// @brief Field _localSecondaryIndexOverride, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* ____localSecondaryIndexOverride;

  /// @brief Field _provisionedThroughputOverride, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ____provisionedThroughputOverride;

  /// @brief Field _restoreDateTime, offset: 0x58, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____restoreDateTime;

  /// @brief Field _sourceTableArn, offset: 0x68, size: 0x8, def value: None
  ::StringW ____sourceTableArn;

  /// @brief Field _sourceTableName, offset: 0x70, size: 0x8, def value: None
  ::StringW ____sourceTableName;

  /// @brief Field _sseSpecificationOverride, offset: 0x78, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SSESpecification* ____sseSpecificationOverride;

  /// @brief Field _targetTableName, offset: 0x80, size: 0x8, def value: None
  ::StringW ____targetTableName;

  /// @brief Field _useLatestRestorableTime, offset: 0x88, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____useLatestRestorableTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, 0x90>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____billingModeOverride) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____globalSecondaryIndexOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____localSecondaryIndexOverride) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____provisionedThroughputOverride) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____restoreDateTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____sourceTableArn) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____sourceTableName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____sseSpecificationOverride) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____targetTableName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest, ____useLatestRestorableTime) == 0x88, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*, "Amazon.DynamoDBv2.Model", "RestoreTableToPointInTimeRequest");
