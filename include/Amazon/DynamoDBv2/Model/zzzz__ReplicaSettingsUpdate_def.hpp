#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReplicaSettingsUpdate)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexSettingsUpdate;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaSettingsUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate);
// Type: Amazon.DynamoDBv2.Model::ReplicaSettingsUpdate
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaSettingsUpdate*
class CORDL_TYPE ReplicaSettingsUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  __declspec(property(get = get_ReplicaGlobalSecondaryIndexSettingsUpdate, put = set_ReplicaGlobalSecondaryIndexSettingsUpdate))::System::Collections::Generic::List_1<
      ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* ReplicaGlobalSecondaryIndexSettingsUpdate;

  __declspec(
      property(get = get_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate,
               put = set_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate;

  __declspec(property(get = get_ReplicaProvisionedReadCapacityUnits, put = set_ReplicaProvisionedReadCapacityUnits)) int64_t ReplicaProvisionedReadCapacityUnits;

  /// @brief Field _regionName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__regionName, put = __cordl_internal_set__regionName))::StringW _regionName;

  /// @brief Field _replicaGlobalSecondaryIndexSettingsUpdate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaGlobalSecondaryIndexSettingsUpdate, put = __cordl_internal_set__replicaGlobalSecondaryIndexSettingsUpdate))::System::Collections::Generic::
      List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* _replicaGlobalSecondaryIndexSettingsUpdate;

  /// @brief Field _replicaProvisionedReadCapacityAutoScalingSettingsUpdate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettingsUpdate, put = __cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettingsUpdate))::
      Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* _replicaProvisionedReadCapacityAutoScalingSettingsUpdate;

  /// @brief Field _replicaProvisionedReadCapacityUnits, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__replicaProvisionedReadCapacityUnits,
                      put = __cordl_internal_set__replicaProvisionedReadCapacityUnits))::System::Nullable_1<int64_t> _replicaProvisionedReadCapacityUnits;

  /// @brief Method IsSetRegionName, addr 0x104f4f0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRegionName();

  /// @brief Method IsSetReplicaGlobalSecondaryIndexSettingsUpdate, addr 0x104f510, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicaGlobalSecondaryIndexSettingsUpdate();

  /// @brief Method IsSetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate, addr 0x104f574, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate();

  /// @brief Method IsSetReplicaProvisionedReadCapacityUnits, addr 0x104f630, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedReadCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__regionName() const;

  constexpr ::StringW& __cordl_internal_get__regionName();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*& __cordl_internal_get__replicaGlobalSecondaryIndexSettingsUpdate();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*> const&
  __cordl_internal_get__replicaGlobalSecondaryIndexSettingsUpdate() const;

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettingsUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const& __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettingsUpdate() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__replicaProvisionedReadCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__replicaProvisionedReadCapacityUnits();

  constexpr void __cordl_internal_set__regionName(::StringW value);

  constexpr void
  __cordl_internal_set__replicaGlobalSecondaryIndexSettingsUpdate(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* value);

  constexpr void __cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  constexpr void __cordl_internal_set__replicaProvisionedReadCapacityUnits(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x104f66c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RegionName, addr 0x104f4e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RegionName();

  /// @brief Method get_ReplicaGlobalSecondaryIndexSettingsUpdate, addr 0x104f500, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* get_ReplicaGlobalSecondaryIndexSettingsUpdate();

  /// @brief Method get_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate, addr 0x104f564, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* get_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate();

  /// @brief Method get_ReplicaProvisionedReadCapacityUnits, addr 0x104f584, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ReplicaProvisionedReadCapacityUnits();

  /// @brief Method set_RegionName, addr 0x104f4e8, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

  /// @brief Method set_ReplicaGlobalSecondaryIndexSettingsUpdate, addr 0x104f508, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaGlobalSecondaryIndexSettingsUpdate(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* value);

  /// @brief Method set_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate, addr 0x104f56c, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  /// @brief Method set_ReplicaProvisionedReadCapacityUnits, addr 0x104f5c0, size 0x70, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedReadCapacityUnits(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaSettingsUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaSettingsUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaSettingsUpdate(ReplicaSettingsUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaSettingsUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaSettingsUpdate(ReplicaSettingsUpdate const&) = delete;

  /// @brief Field _regionName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____regionName;

  /// @brief Field _replicaGlobalSecondaryIndexSettingsUpdate, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* ____replicaGlobalSecondaryIndexSettingsUpdate;

  /// @brief Field _replicaProvisionedReadCapacityAutoScalingSettingsUpdate, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ____replicaProvisionedReadCapacityAutoScalingSettingsUpdate;

  /// @brief Field _replicaProvisionedReadCapacityUnits, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____replicaProvisionedReadCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate, ____regionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate, ____replicaGlobalSecondaryIndexSettingsUpdate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate, ____replicaProvisionedReadCapacityAutoScalingSettingsUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate, ____replicaProvisionedReadCapacityUnits) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*, "Amazon.DynamoDBv2.Model", "ReplicaSettingsUpdate");
