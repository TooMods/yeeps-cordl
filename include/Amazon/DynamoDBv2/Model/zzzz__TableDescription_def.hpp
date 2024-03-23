#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TableDescription)
namespace Amazon::DynamoDBv2::Model {
class ArchivalSummary;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeDefinition;
}
namespace Amazon::DynamoDBv2::Model {
class BillingModeSummary;
}
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndexDescription;
}
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class LocalSecondaryIndexDescription;
}
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughputDescription;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaDescription;
}
namespace Amazon::DynamoDBv2::Model {
class RestoreSummary;
}
namespace Amazon::DynamoDBv2::Model {
class SSEDescription;
}
namespace Amazon::DynamoDBv2::Model {
class StreamSpecification;
}
namespace Amazon::DynamoDBv2 {
class TableStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TableDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TableDescription);
// Type: Amazon.DynamoDBv2.Model::TableDescription
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TableDescription*
class CORDL_TYPE TableDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArchivalSummary, put = set_ArchivalSummary))::Amazon::DynamoDBv2::Model::ArchivalSummary* ArchivalSummary;

  __declspec(property(get = get_AttributeDefinitions, put = set_AttributeDefinitions))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* AttributeDefinitions;

  __declspec(property(get = get_BillingModeSummary, put = set_BillingModeSummary))::Amazon::DynamoDBv2::Model::BillingModeSummary* BillingModeSummary;

  __declspec(property(get = get_CreationDateTime, put = set_CreationDateTime))::System::DateTime CreationDateTime;

  __declspec(property(get = get_GlobalSecondaryIndexes,
                      put = set_GlobalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* GlobalSecondaryIndexes;

  __declspec(property(get = get_GlobalTableVersion, put = set_GlobalTableVersion))::StringW GlobalTableVersion;

  __declspec(property(get = get_ItemCount, put = set_ItemCount)) int64_t ItemCount;

  __declspec(property(get = get_KeySchema, put = set_KeySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* KeySchema;

  __declspec(property(get = get_LatestStreamArn, put = set_LatestStreamArn))::StringW LatestStreamArn;

  __declspec(property(get = get_LatestStreamLabel, put = set_LatestStreamLabel))::StringW LatestStreamLabel;

  __declspec(property(get = get_LocalSecondaryIndexes,
                      put = set_LocalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* LocalSecondaryIndexes;

  __declspec(property(get = get_ProvisionedThroughput, put = set_ProvisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* ProvisionedThroughput;

  __declspec(property(get = get_Replicas, put = set_Replicas))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* Replicas;

  __declspec(property(get = get_RestoreSummary, put = set_RestoreSummary))::Amazon::DynamoDBv2::Model::RestoreSummary* RestoreSummary;

  __declspec(property(get = get_SSEDescription, put = set_SSEDescription))::Amazon::DynamoDBv2::Model::SSEDescription* SSEDescription;

  __declspec(property(get = get_StreamSpecification, put = set_StreamSpecification))::Amazon::DynamoDBv2::Model::StreamSpecification* StreamSpecification;

  __declspec(property(get = get_TableArn, put = set_TableArn))::StringW TableArn;

  __declspec(property(get = get_TableId, put = set_TableId))::StringW TableId;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_TableSizeBytes, put = set_TableSizeBytes)) int64_t TableSizeBytes;

  __declspec(property(get = get_TableStatus, put = set_TableStatus))::Amazon::DynamoDBv2::TableStatus* TableStatus;

  /// @brief Field _archivalSummary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__archivalSummary, put = __cordl_internal_set__archivalSummary))::Amazon::DynamoDBv2::Model::ArchivalSummary* _archivalSummary;

  /// @brief Field _attributeDefinitions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeDefinitions,
                      put = __cordl_internal_set__attributeDefinitions))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* _attributeDefinitions;

  /// @brief Field _billingModeSummary, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__billingModeSummary, put = __cordl_internal_set__billingModeSummary))::Amazon::DynamoDBv2::Model::BillingModeSummary* _billingModeSummary;

  /// @brief Field _creationDateTime, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__creationDateTime, put = __cordl_internal_set__creationDateTime))::System::Nullable_1<::System::DateTime> _creationDateTime;

  /// @brief Field _globalSecondaryIndexes, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get__globalSecondaryIndexes,
               put = __cordl_internal_set__globalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* _globalSecondaryIndexes;

  /// @brief Field _globalTableVersion, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableVersion, put = __cordl_internal_set__globalTableVersion))::StringW _globalTableVersion;

  /// @brief Field _itemCount, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__itemCount, put = __cordl_internal_set__itemCount))::System::Nullable_1<int64_t> _itemCount;

  /// @brief Field _keySchema, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__keySchema, put = __cordl_internal_set__keySchema))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* _keySchema;

  /// @brief Field _latestStreamArn, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__latestStreamArn, put = __cordl_internal_set__latestStreamArn))::StringW _latestStreamArn;

  /// @brief Field _latestStreamLabel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__latestStreamLabel, put = __cordl_internal_set__latestStreamLabel))::StringW _latestStreamLabel;

  /// @brief Field _localSecondaryIndexes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__localSecondaryIndexes,
                      put = __cordl_internal_set__localSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* _localSecondaryIndexes;

  /// @brief Field _provisionedThroughput, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughput,
                      put = __cordl_internal_set__provisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* _provisionedThroughput;

  /// @brief Field _replicas, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__replicas, put = __cordl_internal_set__replicas))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* _replicas;

  /// @brief Field _restoreSummary, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__restoreSummary, put = __cordl_internal_set__restoreSummary))::Amazon::DynamoDBv2::Model::RestoreSummary* _restoreSummary;

  /// @brief Field _sseDescription, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__sseDescription, put = __cordl_internal_set__sseDescription))::Amazon::DynamoDBv2::Model::SSEDescription* _sseDescription;

  /// @brief Field _streamSpecification, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__streamSpecification, put = __cordl_internal_set__streamSpecification))::Amazon::DynamoDBv2::Model::StreamSpecification* _streamSpecification;

  /// @brief Field _tableArn, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__tableArn, put = __cordl_internal_set__tableArn))::StringW _tableArn;

  /// @brief Field _tableId, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__tableId, put = __cordl_internal_set__tableId))::StringW _tableId;

  /// @brief Field _tableName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Field _tableSizeBytes, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__tableSizeBytes, put = __cordl_internal_set__tableSizeBytes))::System::Nullable_1<int64_t> _tableSizeBytes;

  /// @brief Field _tableStatus, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__tableStatus, put = __cordl_internal_set__tableStatus))::Amazon::DynamoDBv2::TableStatus* _tableStatus;

  /// @brief Method IsSetArchivalSummary, addr 0x1052694, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetArchivalSummary();

  /// @brief Method IsSetAttributeDefinitions, addr 0x10526b4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributeDefinitions();

  /// @brief Method IsSetBillingModeSummary, addr 0x1052718, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetBillingModeSummary();

  /// @brief Method IsSetCreationDateTime, addr 0x10527d4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCreationDateTime();

  /// @brief Method IsSetGlobalSecondaryIndexes, addr 0x1052820, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexes();

  /// @brief Method IsSetGlobalTableVersion, addr 0x1052884, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableVersion();

  /// @brief Method IsSetItemCount, addr 0x1052940, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetItemCount();

  /// @brief Method IsSetKeySchema, addr 0x105298c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKeySchema();

  /// @brief Method IsSetLatestStreamArn, addr 0x10529f0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLatestStreamArn();

  /// @brief Method IsSetLatestStreamLabel, addr 0x1052a10, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLatestStreamLabel();

  /// @brief Method IsSetLocalSecondaryIndexes, addr 0x1052a30, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLocalSecondaryIndexes();

  /// @brief Method IsSetProvisionedThroughput, addr 0x1052a94, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughput();

  /// @brief Method IsSetReplicas, addr 0x1052ab4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicas();

  /// @brief Method IsSetRestoreSummary, addr 0x1052b18, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRestoreSummary();

  /// @brief Method IsSetSSEDescription, addr 0x1052b38, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSSEDescription();

  /// @brief Method IsSetStreamSpecification, addr 0x1052b58, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamSpecification();

  /// @brief Method IsSetTableArn, addr 0x1052b78, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableArn();

  /// @brief Method IsSetTableId, addr 0x1052b98, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableId();

  /// @brief Method IsSetTableName, addr 0x1052bb8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  /// @brief Method IsSetTableSizeBytes, addr 0x1052c74, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTableSizeBytes();

  /// @brief Method IsSetTableStatus, addr 0x1052cc0, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetTableStatus();

  static inline ::Amazon::DynamoDBv2::Model::TableDescription* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::ArchivalSummary*& __cordl_internal_get__archivalSummary();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ArchivalSummary*> const& __cordl_internal_get__archivalSummary() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*& __cordl_internal_get__attributeDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*> const& __cordl_internal_get__attributeDefinitions() const;

  constexpr ::Amazon::DynamoDBv2::Model::BillingModeSummary*& __cordl_internal_get__billingModeSummary();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BillingModeSummary*> const& __cordl_internal_get__billingModeSummary() const;

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__creationDateTime() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__creationDateTime();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*& __cordl_internal_get__globalSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*> const&
  __cordl_internal_get__globalSecondaryIndexes() const;

  constexpr ::StringW const& __cordl_internal_get__globalTableVersion() const;

  constexpr ::StringW& __cordl_internal_get__globalTableVersion();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__itemCount() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__itemCount();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& __cordl_internal_get__keySchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const& __cordl_internal_get__keySchema() const;

  constexpr ::StringW const& __cordl_internal_get__latestStreamArn() const;

  constexpr ::StringW& __cordl_internal_get__latestStreamArn();

  constexpr ::StringW const& __cordl_internal_get__latestStreamLabel() const;

  constexpr ::StringW& __cordl_internal_get__latestStreamLabel();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*& __cordl_internal_get__localSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*> const&
  __cordl_internal_get__localSecondaryIndexes() const;

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*& __cordl_internal_get__provisionedThroughput();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*> const& __cordl_internal_get__provisionedThroughput() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*& __cordl_internal_get__replicas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*> const& __cordl_internal_get__replicas() const;

  constexpr ::Amazon::DynamoDBv2::Model::RestoreSummary*& __cordl_internal_get__restoreSummary();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::RestoreSummary*> const& __cordl_internal_get__restoreSummary() const;

  constexpr ::Amazon::DynamoDBv2::Model::SSEDescription*& __cordl_internal_get__sseDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSEDescription*> const& __cordl_internal_get__sseDescription() const;

  constexpr ::Amazon::DynamoDBv2::Model::StreamSpecification*& __cordl_internal_get__streamSpecification();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamSpecification*> const& __cordl_internal_get__streamSpecification() const;

  constexpr ::StringW const& __cordl_internal_get__tableArn() const;

  constexpr ::StringW& __cordl_internal_get__tableArn();

  constexpr ::StringW const& __cordl_internal_get__tableId() const;

  constexpr ::StringW& __cordl_internal_get__tableId();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__tableSizeBytes() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__tableSizeBytes();

  constexpr ::Amazon::DynamoDBv2::TableStatus*& __cordl_internal_get__tableStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::TableStatus*> const& __cordl_internal_get__tableStatus() const;

  constexpr void __cordl_internal_set__archivalSummary(::Amazon::DynamoDBv2::Model::ArchivalSummary* value);

  constexpr void __cordl_internal_set__attributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value);

  constexpr void __cordl_internal_set__billingModeSummary(::Amazon::DynamoDBv2::Model::BillingModeSummary* value);

  constexpr void __cordl_internal_set__creationDateTime(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__globalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* value);

  constexpr void __cordl_internal_set__globalTableVersion(::StringW value);

  constexpr void __cordl_internal_set__itemCount(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  constexpr void __cordl_internal_set__latestStreamArn(::StringW value);

  constexpr void __cordl_internal_set__latestStreamLabel(::StringW value);

  constexpr void __cordl_internal_set__localSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* value);

  constexpr void __cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* value);

  constexpr void __cordl_internal_set__replicas(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* value);

  constexpr void __cordl_internal_set__restoreSummary(::Amazon::DynamoDBv2::Model::RestoreSummary* value);

  constexpr void __cordl_internal_set__sseDescription(::Amazon::DynamoDBv2::Model::SSEDescription* value);

  constexpr void __cordl_internal_set__streamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value);

  constexpr void __cordl_internal_set__tableArn(::StringW value);

  constexpr void __cordl_internal_set__tableId(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__tableSizeBytes(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__tableStatus(::Amazon::DynamoDBv2::TableStatus* value);

  /// @brief Method .ctor, addr 0x10524f8, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ArchivalSummary, addr 0x1052684, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ArchivalSummary* get_ArchivalSummary();

  /// @brief Method get_AttributeDefinitions, addr 0x10526a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* get_AttributeDefinitions();

  /// @brief Method get_BillingModeSummary, addr 0x1052708, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BillingModeSummary* get_BillingModeSummary();

  /// @brief Method get_CreationDateTime, addr 0x1052728, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_CreationDateTime();

  /// @brief Method get_GlobalSecondaryIndexes, addr 0x1052810, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* get_GlobalSecondaryIndexes();

  /// @brief Method get_GlobalTableVersion, addr 0x1052874, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableVersion();

  /// @brief Method get_ItemCount, addr 0x1052894, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ItemCount();

  /// @brief Method get_KeySchema, addr 0x105297c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* get_KeySchema();

  /// @brief Method get_LatestStreamArn, addr 0x10529e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LatestStreamArn();

  /// @brief Method get_LatestStreamLabel, addr 0x1052a00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LatestStreamLabel();

  /// @brief Method get_LocalSecondaryIndexes, addr 0x1052a20, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* get_LocalSecondaryIndexes();

  /// @brief Method get_ProvisionedThroughput, addr 0x1052a84, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* get_ProvisionedThroughput();

  /// @brief Method get_Replicas, addr 0x1052aa4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* get_Replicas();

  /// @brief Method get_RestoreSummary, addr 0x1052b08, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::RestoreSummary* get_RestoreSummary();

  /// @brief Method get_SSEDescription, addr 0x1052b28, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SSEDescription* get_SSEDescription();

  /// @brief Method get_StreamSpecification, addr 0x1052b48, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::StreamSpecification* get_StreamSpecification();

  /// @brief Method get_TableArn, addr 0x1052b68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableArn();

  /// @brief Method get_TableId, addr 0x1052b88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableId();

  /// @brief Method get_TableName, addr 0x1052ba8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_TableSizeBytes, addr 0x1052bc8, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_TableSizeBytes();

  /// @brief Method get_TableStatus, addr 0x1052cb0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::TableStatus* get_TableStatus();

  /// @brief Method set_ArchivalSummary, addr 0x105268c, size 0x8, virtual false, abstract: false, final false
  inline void set_ArchivalSummary(::Amazon::DynamoDBv2::Model::ArchivalSummary* value);

  /// @brief Method set_AttributeDefinitions, addr 0x10526ac, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value);

  /// @brief Method set_BillingModeSummary, addr 0x1052710, size 0x8, virtual false, abstract: false, final false
  inline void set_BillingModeSummary(::Amazon::DynamoDBv2::Model::BillingModeSummary* value);

  /// @brief Method set_CreationDateTime, addr 0x1052764, size 0x70, virtual false, abstract: false, final false
  inline void set_CreationDateTime(::System::DateTime value);

  /// @brief Method set_GlobalSecondaryIndexes, addr 0x1052818, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* value);

  /// @brief Method set_GlobalTableVersion, addr 0x105287c, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableVersion(::StringW value);

  /// @brief Method set_ItemCount, addr 0x10528d0, size 0x70, virtual false, abstract: false, final false
  inline void set_ItemCount(int64_t value);

  /// @brief Method set_KeySchema, addr 0x1052984, size 0x8, virtual false, abstract: false, final false
  inline void set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value);

  /// @brief Method set_LatestStreamArn, addr 0x10529e8, size 0x8, virtual false, abstract: false, final false
  inline void set_LatestStreamArn(::StringW value);

  /// @brief Method set_LatestStreamLabel, addr 0x1052a08, size 0x8, virtual false, abstract: false, final false
  inline void set_LatestStreamLabel(::StringW value);

  /// @brief Method set_LocalSecondaryIndexes, addr 0x1052a28, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* value);

  /// @brief Method set_ProvisionedThroughput, addr 0x1052a8c, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* value);

  /// @brief Method set_Replicas, addr 0x1052aac, size 0x8, virtual false, abstract: false, final false
  inline void set_Replicas(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* value);

  /// @brief Method set_RestoreSummary, addr 0x1052b10, size 0x8, virtual false, abstract: false, final false
  inline void set_RestoreSummary(::Amazon::DynamoDBv2::Model::RestoreSummary* value);

  /// @brief Method set_SSEDescription, addr 0x1052b30, size 0x8, virtual false, abstract: false, final false
  inline void set_SSEDescription(::Amazon::DynamoDBv2::Model::SSEDescription* value);

  /// @brief Method set_StreamSpecification, addr 0x1052b50, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value);

  /// @brief Method set_TableArn, addr 0x1052b70, size 0x8, virtual false, abstract: false, final false
  inline void set_TableArn(::StringW value);

  /// @brief Method set_TableId, addr 0x1052b90, size 0x8, virtual false, abstract: false, final false
  inline void set_TableId(::StringW value);

  /// @brief Method set_TableName, addr 0x1052bb0, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_TableSizeBytes, addr 0x1052c04, size 0x70, virtual false, abstract: false, final false
  inline void set_TableSizeBytes(int64_t value);

  /// @brief Method set_TableStatus, addr 0x1052cb8, size 0x8, virtual false, abstract: false, final false
  inline void set_TableStatus(::Amazon::DynamoDBv2::TableStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableDescription(TableDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableDescription(TableDescription const&) = delete;

  /// @brief Field _archivalSummary, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ArchivalSummary* ____archivalSummary;

  /// @brief Field _attributeDefinitions, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* ____attributeDefinitions;

  /// @brief Field _billingModeSummary, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BillingModeSummary* ____billingModeSummary;

  /// @brief Field _creationDateTime, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____creationDateTime;

  /// @brief Field _globalSecondaryIndexes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* ____globalSecondaryIndexes;

  /// @brief Field _globalTableVersion, offset: 0x40, size: 0x8, def value: None
  ::StringW ____globalTableVersion;

  /// @brief Field _itemCount, offset: 0x48, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____itemCount;

  /// @brief Field _keySchema, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* ____keySchema;

  /// @brief Field _latestStreamArn, offset: 0x60, size: 0x8, def value: None
  ::StringW ____latestStreamArn;

  /// @brief Field _latestStreamLabel, offset: 0x68, size: 0x8, def value: None
  ::StringW ____latestStreamLabel;

  /// @brief Field _localSecondaryIndexes, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* ____localSecondaryIndexes;

  /// @brief Field _provisionedThroughput, offset: 0x78, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* ____provisionedThroughput;

  /// @brief Field _replicas, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* ____replicas;

  /// @brief Field _restoreSummary, offset: 0x88, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::RestoreSummary* ____restoreSummary;

  /// @brief Field _sseDescription, offset: 0x90, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SSEDescription* ____sseDescription;

  /// @brief Field _streamSpecification, offset: 0x98, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::StreamSpecification* ____streamSpecification;

  /// @brief Field _tableArn, offset: 0xa0, size: 0x8, def value: None
  ::StringW ____tableArn;

  /// @brief Field _tableId, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____tableId;

  /// @brief Field _tableName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _tableSizeBytes, offset: 0xb8, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____tableSizeBytes;

  /// @brief Field _tableStatus, offset: 0xc8, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::TableStatus* ____tableStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TableDescription, 0xd0>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____archivalSummary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____attributeDefinitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____billingModeSummary) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____creationDateTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____globalSecondaryIndexes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____globalTableVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____itemCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____keySchema) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____latestStreamArn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____latestStreamLabel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____localSecondaryIndexes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____provisionedThroughput) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____replicas) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____restoreSummary) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____sseDescription) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____streamSpecification) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____tableArn) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____tableId) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____tableName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____tableSizeBytes) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TableDescription, ____tableStatus) == 0xc8, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TableDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TableDescription*, "Amazon.DynamoDBv2.Model", "TableDescription");
