#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UpdateTableReplicaAutoScalingRequest)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndexAutoScalingUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaAutoScalingUpdate;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateTableReplicaAutoScalingRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest);
// Type: Amazon.DynamoDBv2.Model::UpdateTableReplicaAutoScalingRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateTableReplicaAutoScalingRequest*
class CORDL_TYPE UpdateTableReplicaAutoScalingRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_GlobalSecondaryIndexUpdates,
                      put = set_GlobalSecondaryIndexUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*>* GlobalSecondaryIndexUpdates;

  __declspec(property(get = get_ProvisionedWriteCapacityAutoScalingUpdate,
                      put = set_ProvisionedWriteCapacityAutoScalingUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ProvisionedWriteCapacityAutoScalingUpdate;

  __declspec(property(get = get_ReplicaUpdates, put = set_ReplicaUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>* ReplicaUpdates;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _globalSecondaryIndexUpdates, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__globalSecondaryIndexUpdates, put = __cordl_internal_set__globalSecondaryIndexUpdates))::System::Collections::Generic::List_1<
      ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*>* _globalSecondaryIndexUpdates;

  /// @brief Field _provisionedWriteCapacityAutoScalingUpdate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedWriteCapacityAutoScalingUpdate,
                      put = __cordl_internal_set__provisionedWriteCapacityAutoScalingUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* _provisionedWriteCapacityAutoScalingUpdate;

  /// @brief Field _replicaUpdates, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaUpdates,
                      put = __cordl_internal_set__replicaUpdates))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>* _replicaUpdates;

  /// @brief Field _tableName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetGlobalSecondaryIndexUpdates, addr 0x10551f4, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexUpdates();

  /// @brief Method IsSetProvisionedWriteCapacityAutoScalingUpdate, addr 0x1055258, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedWriteCapacityAutoScalingUpdate();

  /// @brief Method IsSetReplicaUpdates, addr 0x1055278, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicaUpdates();

  /// @brief Method IsSetTableName, addr 0x10552dc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*>*& __cordl_internal_get__globalSecondaryIndexUpdates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*>*> const&
  __cordl_internal_get__globalSecondaryIndexUpdates() const;

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& __cordl_internal_get__provisionedWriteCapacityAutoScalingUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const& __cordl_internal_get__provisionedWriteCapacityAutoScalingUpdate() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>*& __cordl_internal_get__replicaUpdates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>*> const& __cordl_internal_get__replicaUpdates() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__globalSecondaryIndexUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*>* value);

  constexpr void __cordl_internal_set__provisionedWriteCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  constexpr void __cordl_internal_set__replicaUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x10552ec, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalSecondaryIndexUpdates, addr 0x10551e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*>* get_GlobalSecondaryIndexUpdates();

  /// @brief Method get_ProvisionedWriteCapacityAutoScalingUpdate, addr 0x1055248, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* get_ProvisionedWriteCapacityAutoScalingUpdate();

  /// @brief Method get_ReplicaUpdates, addr 0x1055268, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>* get_ReplicaUpdates();

  /// @brief Method get_TableName, addr 0x10552cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_GlobalSecondaryIndexUpdates, addr 0x10551ec, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*>* value);

  /// @brief Method set_ProvisionedWriteCapacityAutoScalingUpdate, addr 0x1055250, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedWriteCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  /// @brief Method set_ReplicaUpdates, addr 0x1055270, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>* value);

  /// @brief Method set_TableName, addr 0x10552d4, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateTableReplicaAutoScalingRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateTableReplicaAutoScalingRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateTableReplicaAutoScalingRequest(UpdateTableReplicaAutoScalingRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateTableReplicaAutoScalingRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateTableReplicaAutoScalingRequest(UpdateTableReplicaAutoScalingRequest const&) = delete;

  /// @brief Field _globalSecondaryIndexUpdates, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*>* ____globalSecondaryIndexUpdates;

  /// @brief Field _provisionedWriteCapacityAutoScalingUpdate, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ____provisionedWriteCapacityAutoScalingUpdate;

  /// @brief Field _replicaUpdates, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>* ____replicaUpdates;

  /// @brief Field _tableName, offset: 0x50, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest, ____globalSecondaryIndexUpdates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest, ____provisionedWriteCapacityAutoScalingUpdate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest, ____replicaUpdates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest, ____tableName) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateTableReplicaAutoScalingRequest*, "Amazon.DynamoDBv2.Model", "UpdateTableReplicaAutoScalingRequest");
