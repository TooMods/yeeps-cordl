#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateTableRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeDefinition;
}
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndexUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughput;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicationGroupUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class SSESpecification;
}
namespace Amazon::DynamoDBv2::Model {
class StreamSpecification;
}
namespace Amazon::DynamoDBv2 {
class BillingMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateTableRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateTableRequest);
// Type: Amazon.DynamoDBv2.Model::UpdateTableRequest
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateTableRequest*
class CORDL_TYPE UpdateTableRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_AttributeDefinitions, put = set_AttributeDefinitions))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* AttributeDefinitions;

  __declspec(property(get = get_BillingMode, put = set_BillingMode))::Amazon::DynamoDBv2::BillingMode* BillingMode;

  __declspec(property(get = get_GlobalSecondaryIndexUpdates,
                      put = set_GlobalSecondaryIndexUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* GlobalSecondaryIndexUpdates;

  __declspec(property(get = get_ProvisionedThroughput, put = set_ProvisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ProvisionedThroughput;

  __declspec(property(get = get_ReplicaUpdates, put = set_ReplicaUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* ReplicaUpdates;

  __declspec(property(get = get_SSESpecification, put = set_SSESpecification))::Amazon::DynamoDBv2::Model::SSESpecification* SSESpecification;

  __declspec(property(get = get_StreamSpecification, put = set_StreamSpecification))::Amazon::DynamoDBv2::Model::StreamSpecification* StreamSpecification;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _attributeDefinitions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeDefinitions,
                      put = __cordl_internal_set__attributeDefinitions))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* _attributeDefinitions;

  /// @brief Field _billingMode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__billingMode, put = __cordl_internal_set__billingMode))::Amazon::DynamoDBv2::BillingMode* _billingMode;

  /// @brief Field _globalSecondaryIndexUpdates, offset 0x48, size 0x8
  __declspec(
      property(get = __cordl_internal_get__globalSecondaryIndexUpdates,
               put = __cordl_internal_set__globalSecondaryIndexUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* _globalSecondaryIndexUpdates;

  /// @brief Field _provisionedThroughput, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughput, put = __cordl_internal_set__provisionedThroughput))::Amazon::DynamoDBv2::Model::ProvisionedThroughput* _provisionedThroughput;

  /// @brief Field _replicaUpdates, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaUpdates,
                      put = __cordl_internal_set__replicaUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* _replicaUpdates;

  /// @brief Field _sseSpecification, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__sseSpecification, put = __cordl_internal_set__sseSpecification))::Amazon::DynamoDBv2::Model::SSESpecification* _sseSpecification;

  /// @brief Field _streamSpecification, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__streamSpecification, put = __cordl_internal_set__streamSpecification))::Amazon::DynamoDBv2::Model::StreamSpecification* _streamSpecification;

  /// @brief Field _tableName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetAttributeDefinitions, addr 0x1055608, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributeDefinitions();

  /// @brief Method IsSetBillingMode, addr 0x105566c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetBillingMode();

  /// @brief Method IsSetGlobalSecondaryIndexUpdates, addr 0x10556dc, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexUpdates();

  /// @brief Method IsSetProvisionedThroughput, addr 0x1055740, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughput();

  /// @brief Method IsSetReplicaUpdates, addr 0x1055760, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicaUpdates();

  /// @brief Method IsSetSSESpecification, addr 0x10557c4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSSESpecification();

  /// @brief Method IsSetStreamSpecification, addr 0x10557e4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamSpecification();

  /// @brief Method IsSetTableName, addr 0x1055804, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::UpdateTableRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::UpdateTableRequest* New_ctor(::StringW tableName, ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* provisionedThroughput);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*& __cordl_internal_get__attributeDefinitions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*> const& __cordl_internal_get__attributeDefinitions() const;

  constexpr ::Amazon::DynamoDBv2::BillingMode*& __cordl_internal_get__billingMode();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const& __cordl_internal_get__billingMode() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>*& __cordl_internal_get__globalSecondaryIndexUpdates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>*> const&
  __cordl_internal_get__globalSecondaryIndexUpdates() const;

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& __cordl_internal_get__provisionedThroughput();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const& __cordl_internal_get__provisionedThroughput() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>*& __cordl_internal_get__replicaUpdates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>*> const& __cordl_internal_get__replicaUpdates() const;

  constexpr ::Amazon::DynamoDBv2::Model::SSESpecification*& __cordl_internal_get__sseSpecification();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSESpecification*> const& __cordl_internal_get__sseSpecification() const;

  constexpr ::Amazon::DynamoDBv2::Model::StreamSpecification*& __cordl_internal_get__streamSpecification();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamSpecification*> const& __cordl_internal_get__streamSpecification() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__attributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value);

  constexpr void __cordl_internal_set__billingMode(::Amazon::DynamoDBv2::BillingMode* value);

  constexpr void __cordl_internal_set__globalSecondaryIndexUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* value);

  constexpr void __cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  constexpr void __cordl_internal_set__replicaUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* value);

  constexpr void __cordl_internal_set__sseSpecification(::Amazon::DynamoDBv2::Model::SSESpecification* value);

  constexpr void __cordl_internal_set__streamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x10553d4, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x10554d8, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* provisionedThroughput);

  /// @brief Method get_AttributeDefinitions, addr 0x10555f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* get_AttributeDefinitions();

  /// @brief Method get_BillingMode, addr 0x105565c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BillingMode* get_BillingMode();

  /// @brief Method get_GlobalSecondaryIndexUpdates, addr 0x10556cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* get_GlobalSecondaryIndexUpdates();

  /// @brief Method get_ProvisionedThroughput, addr 0x1055730, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* get_ProvisionedThroughput();

  /// @brief Method get_ReplicaUpdates, addr 0x1055750, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* get_ReplicaUpdates();

  /// @brief Method get_SSESpecification, addr 0x10557b4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SSESpecification* get_SSESpecification();

  /// @brief Method get_StreamSpecification, addr 0x10557d4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::StreamSpecification* get_StreamSpecification();

  /// @brief Method get_TableName, addr 0x10557f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_AttributeDefinitions, addr 0x1055600, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value);

  /// @brief Method set_BillingMode, addr 0x1055664, size 0x8, virtual false, abstract: false, final false
  inline void set_BillingMode(::Amazon::DynamoDBv2::BillingMode* value);

  /// @brief Method set_GlobalSecondaryIndexUpdates, addr 0x10556d4, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* value);

  /// @brief Method set_ProvisionedThroughput, addr 0x1055738, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value);

  /// @brief Method set_ReplicaUpdates, addr 0x1055758, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* value);

  /// @brief Method set_SSESpecification, addr 0x10557bc, size 0x8, virtual false, abstract: false, final false
  inline void set_SSESpecification(::Amazon::DynamoDBv2::Model::SSESpecification* value);

  /// @brief Method set_StreamSpecification, addr 0x10557dc, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value);

  /// @brief Method set_TableName, addr 0x10557fc, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateTableRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateTableRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateTableRequest(UpdateTableRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateTableRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateTableRequest(UpdateTableRequest const&) = delete;

  /// @brief Field _attributeDefinitions, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* ____attributeDefinitions;

  /// @brief Field _billingMode, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BillingMode* ____billingMode;

  /// @brief Field _globalSecondaryIndexUpdates, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* ____globalSecondaryIndexUpdates;

  /// @brief Field _provisionedThroughput, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* ____provisionedThroughput;

  /// @brief Field _replicaUpdates, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* ____replicaUpdates;

  /// @brief Field _sseSpecification, offset: 0x60, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SSESpecification* ____sseSpecification;

  /// @brief Field _streamSpecification, offset: 0x68, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::StreamSpecification* ____streamSpecification;

  /// @brief Field _tableName, offset: 0x70, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateTableRequest, 0x78>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableRequest, ____attributeDefinitions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableRequest, ____billingMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableRequest, ____globalSecondaryIndexUpdates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableRequest, ____provisionedThroughput) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableRequest, ____replicaUpdates) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableRequest, ____sseSpecification) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableRequest, ____streamSpecification) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableRequest, ____tableName) == 0x70, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateTableRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateTableRequest*, "Amazon.DynamoDBv2.Model", "UpdateTableRequest");
