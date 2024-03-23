#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateGlobalTableSettingsRequest)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class GlobalTableGlobalSecondaryIndexSettingsUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaSettingsUpdate;
}
namespace Amazon::DynamoDBv2 {
class BillingMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalTableSettingsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest);
// Type: Amazon.DynamoDBv2.Model::UpdateGlobalTableSettingsRequest
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UpdateGlobalTableSettingsRequest*
class CORDL_TYPE UpdateGlobalTableSettingsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_GlobalTableBillingMode, put = set_GlobalTableBillingMode))::Amazon::DynamoDBv2::BillingMode* GlobalTableBillingMode;

  __declspec(property(get = get_GlobalTableGlobalSecondaryIndexSettingsUpdate, put = set_GlobalTableGlobalSecondaryIndexSettingsUpdate))::System::Collections::Generic::List_1<
      ::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* GlobalTableGlobalSecondaryIndexSettingsUpdate;

  __declspec(property(get = get_GlobalTableName, put = set_GlobalTableName))::StringW GlobalTableName;

  __declspec(property(
      get = get_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate,
      put = set_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate;

  __declspec(property(get = get_GlobalTableProvisionedWriteCapacityUnits, put = set_GlobalTableProvisionedWriteCapacityUnits)) int64_t GlobalTableProvisionedWriteCapacityUnits;

  __declspec(property(get = get_ReplicaSettingsUpdate,
                      put = set_ReplicaSettingsUpdate))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* ReplicaSettingsUpdate;

  /// @brief Field _globalTableBillingMode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableBillingMode, put = __cordl_internal_set__globalTableBillingMode))::Amazon::DynamoDBv2::BillingMode* _globalTableBillingMode;

  /// @brief Field _globalTableGlobalSecondaryIndexSettingsUpdate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableGlobalSecondaryIndexSettingsUpdate, put = __cordl_internal_set__globalTableGlobalSecondaryIndexSettingsUpdate))::System::Collections::
      Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* _globalTableGlobalSecondaryIndexSettingsUpdate;

  /// @brief Field _globalTableName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableName, put = __cordl_internal_set__globalTableName))::StringW _globalTableName;

  /// @brief Field _globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate,
                      put = __cordl_internal_set__globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate))::Amazon::DynamoDBv2::Model::
      AutoScalingSettingsUpdate* _globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate;

  /// @brief Field _globalTableProvisionedWriteCapacityUnits, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__globalTableProvisionedWriteCapacityUnits,
                      put = __cordl_internal_set__globalTableProvisionedWriteCapacityUnits))::System::Nullable_1<int64_t> _globalTableProvisionedWriteCapacityUnits;

  /// @brief Field _replicaSettingsUpdate, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaSettingsUpdate,
                      put = __cordl_internal_set__replicaSettingsUpdate))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* _replicaSettingsUpdate;

  /// @brief Method IsSetGlobalTableBillingMode, addr 0x10542b0, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableBillingMode();

  /// @brief Method IsSetGlobalTableGlobalSecondaryIndexSettingsUpdate, addr 0x1054320, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableGlobalSecondaryIndexSettingsUpdate();

  /// @brief Method IsSetGlobalTableName, addr 0x1054384, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableName();

  /// @brief Method IsSetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate, addr 0x10543a4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate();

  /// @brief Method IsSetGlobalTableProvisionedWriteCapacityUnits, addr 0x1054460, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableProvisionedWriteCapacityUnits();

  /// @brief Method IsSetReplicaSettingsUpdate, addr 0x10544ac, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicaSettingsUpdate();

  static inline ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest* New_ctor();

  constexpr ::Amazon::DynamoDBv2::BillingMode*& __cordl_internal_get__globalTableBillingMode();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const& __cordl_internal_get__globalTableBillingMode() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*& __cordl_internal_get__globalTableGlobalSecondaryIndexSettingsUpdate();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*> const&
  __cordl_internal_get__globalTableGlobalSecondaryIndexSettingsUpdate() const;

  constexpr ::StringW const& __cordl_internal_get__globalTableName() const;

  constexpr ::StringW& __cordl_internal_get__globalTableName();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& __cordl_internal_get__globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const&
  __cordl_internal_get__globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__globalTableProvisionedWriteCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__globalTableProvisionedWriteCapacityUnits();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>*& __cordl_internal_get__replicaSettingsUpdate();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>*> const&
  __cordl_internal_get__replicaSettingsUpdate() const;

  constexpr void __cordl_internal_set__globalTableBillingMode(::Amazon::DynamoDBv2::BillingMode* value);

  constexpr void
  __cordl_internal_set__globalTableGlobalSecondaryIndexSettingsUpdate(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* value);

  constexpr void __cordl_internal_set__globalTableName(::StringW value);

  constexpr void __cordl_internal_set__globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  constexpr void __cordl_internal_set__globalTableProvisionedWriteCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__replicaSettingsUpdate(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* value);

  /// @brief Method .ctor, addr 0x1054500, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalTableBillingMode, addr 0x10542a0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::BillingMode* get_GlobalTableBillingMode();

  /// @brief Method get_GlobalTableGlobalSecondaryIndexSettingsUpdate, addr 0x1054310, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* get_GlobalTableGlobalSecondaryIndexSettingsUpdate();

  /// @brief Method get_GlobalTableName, addr 0x1054374, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableName();

  /// @brief Method get_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate, addr 0x1054394, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* get_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate();

  /// @brief Method get_GlobalTableProvisionedWriteCapacityUnits, addr 0x10543b4, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_GlobalTableProvisionedWriteCapacityUnits();

  /// @brief Method get_ReplicaSettingsUpdate, addr 0x105449c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* get_ReplicaSettingsUpdate();

  /// @brief Method set_GlobalTableBillingMode, addr 0x10542a8, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableBillingMode(::Amazon::DynamoDBv2::BillingMode* value);

  /// @brief Method set_GlobalTableGlobalSecondaryIndexSettingsUpdate, addr 0x1054318, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableGlobalSecondaryIndexSettingsUpdate(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* value);

  /// @brief Method set_GlobalTableName, addr 0x105437c, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableName(::StringW value);

  /// @brief Method set_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate, addr 0x105439c, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  /// @brief Method set_GlobalTableProvisionedWriteCapacityUnits, addr 0x10543f0, size 0x70, virtual false, abstract: false, final false
  inline void set_GlobalTableProvisionedWriteCapacityUnits(int64_t value);

  /// @brief Method set_ReplicaSettingsUpdate, addr 0x10544a4, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaSettingsUpdate(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateGlobalTableSettingsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableSettingsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateGlobalTableSettingsRequest(UpdateGlobalTableSettingsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateGlobalTableSettingsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateGlobalTableSettingsRequest(UpdateGlobalTableSettingsRequest const&) = delete;

  /// @brief Field _globalTableBillingMode, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::BillingMode* ____globalTableBillingMode;

  /// @brief Field _globalTableGlobalSecondaryIndexSettingsUpdate, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* ____globalTableGlobalSecondaryIndexSettingsUpdate;

  /// @brief Field _globalTableName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____globalTableName;

  /// @brief Field _globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ____globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate;

  /// @brief Field _globalTableProvisionedWriteCapacityUnits, offset: 0x58, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____globalTableProvisionedWriteCapacityUnits;

  /// @brief Field _replicaSettingsUpdate, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* ____replicaSettingsUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest, 0x70>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest, ____globalTableBillingMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest, ____globalTableGlobalSecondaryIndexSettingsUpdate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest, ____globalTableName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest, ____globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest, ____globalTableProvisionedWriteCapacityUnits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest, ____replicaSettingsUpdate) == 0x68, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*, "Amazon.DynamoDBv2.Model", "UpdateGlobalTableSettingsRequest");
