#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReplicaAutoScalingUpdate)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexAutoScalingUpdate;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaAutoScalingUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate);
// Type: Amazon.DynamoDBv2.Model::ReplicaAutoScalingUpdate
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaAutoScalingUpdate*
class CORDL_TYPE ReplicaAutoScalingUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  __declspec(property(get = get_ReplicaGlobalSecondaryIndexUpdates, put = set_ReplicaGlobalSecondaryIndexUpdates))::System::Collections::Generic::List_1<
      ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* ReplicaGlobalSecondaryIndexUpdates;

  __declspec(property(get = get_ReplicaProvisionedReadCapacityAutoScalingUpdate,
                      put = set_ReplicaProvisionedReadCapacityAutoScalingUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ReplicaProvisionedReadCapacityAutoScalingUpdate;

  /// @brief Field _regionName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__regionName, put = __cordl_internal_set__regionName))::StringW _regionName;

  /// @brief Field _replicaGlobalSecondaryIndexUpdates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaGlobalSecondaryIndexUpdates, put = __cordl_internal_set__replicaGlobalSecondaryIndexUpdates))::System::Collections::Generic::List_1<
      ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* _replicaGlobalSecondaryIndexUpdates;

  /// @brief Field _replicaProvisionedReadCapacityAutoScalingUpdate, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingUpdate,
               put = __cordl_internal_set__replicaProvisionedReadCapacityAutoScalingUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* _replicaProvisionedReadCapacityAutoScalingUpdate;

  /// @brief Method IsSetRegionName, addr 0x104e7a8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRegionName();

  /// @brief Method IsSetReplicaGlobalSecondaryIndexUpdates, addr 0x104e7c8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicaGlobalSecondaryIndexUpdates();

  /// @brief Method IsSetReplicaProvisionedReadCapacityAutoScalingUpdate, addr 0x104e82c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedReadCapacityAutoScalingUpdate();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__regionName() const;

  constexpr ::StringW& __cordl_internal_get__regionName();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*& __cordl_internal_get__replicaGlobalSecondaryIndexUpdates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*> const&
  __cordl_internal_get__replicaGlobalSecondaryIndexUpdates() const;

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const& __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingUpdate() const;

  constexpr void __cordl_internal_set__regionName(::StringW value);

  constexpr void __cordl_internal_set__replicaGlobalSecondaryIndexUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* value);

  constexpr void __cordl_internal_set__replicaProvisionedReadCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  /// @brief Method .ctor, addr 0x104e83c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RegionName, addr 0x104e798, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RegionName();

  /// @brief Method get_ReplicaGlobalSecondaryIndexUpdates, addr 0x104e7b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* get_ReplicaGlobalSecondaryIndexUpdates();

  /// @brief Method get_ReplicaProvisionedReadCapacityAutoScalingUpdate, addr 0x104e81c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* get_ReplicaProvisionedReadCapacityAutoScalingUpdate();

  /// @brief Method set_RegionName, addr 0x104e7a0, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

  /// @brief Method set_ReplicaGlobalSecondaryIndexUpdates, addr 0x104e7c0, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaGlobalSecondaryIndexUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* value);

  /// @brief Method set_ReplicaProvisionedReadCapacityAutoScalingUpdate, addr 0x104e824, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedReadCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaAutoScalingUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaAutoScalingUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaAutoScalingUpdate(ReplicaAutoScalingUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaAutoScalingUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaAutoScalingUpdate(ReplicaAutoScalingUpdate const&) = delete;

  /// @brief Field _regionName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____regionName;

  /// @brief Field _replicaGlobalSecondaryIndexUpdates, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* ____replicaGlobalSecondaryIndexUpdates;

  /// @brief Field _replicaProvisionedReadCapacityAutoScalingUpdate, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ____replicaProvisionedReadCapacityAutoScalingUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate, ____regionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate, ____replicaGlobalSecondaryIndexUpdates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate, ____replicaProvisionedReadCapacityAutoScalingUpdate) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*, "Amazon.DynamoDBv2.Model", "ReplicaAutoScalingUpdate");
