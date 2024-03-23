#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReplicaAutoScalingDescription)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsDescription;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexAutoScalingDescription;
}
namespace Amazon::DynamoDBv2 {
class ReplicaStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaAutoScalingDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription);
// Type: Amazon.DynamoDBv2.Model::ReplicaAutoScalingDescription
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaAutoScalingDescription*
class CORDL_TYPE ReplicaAutoScalingDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_GlobalSecondaryIndexes,
                      put = set_GlobalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* GlobalSecondaryIndexes;

  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  __declspec(property(get = get_ReplicaProvisionedReadCapacityAutoScalingSettings,
                      put = set_ReplicaProvisionedReadCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ReplicaProvisionedReadCapacityAutoScalingSettings;

  __declspec(property(get = get_ReplicaProvisionedWriteCapacityAutoScalingSettings,
                      put = set_ReplicaProvisionedWriteCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ReplicaProvisionedWriteCapacityAutoScalingSettings;

  __declspec(property(get = get_ReplicaStatus, put = set_ReplicaStatus))::Amazon::DynamoDBv2::ReplicaStatus* ReplicaStatus;

  /// @brief Field _globalSecondaryIndexes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__globalSecondaryIndexes, put = __cordl_internal_set__globalSecondaryIndexes))::System::Collections::Generic::List_1<
      ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* _globalSecondaryIndexes;

  /// @brief Field _regionName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__regionName, put = __cordl_internal_set__regionName))::StringW _regionName;

  /// @brief Field _replicaProvisionedReadCapacityAutoScalingSettings, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings,
      put = __cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* _replicaProvisionedReadCapacityAutoScalingSettings;

  /// @brief Field _replicaProvisionedWriteCapacityAutoScalingSettings, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings,
      put = __cordl_internal_set__replicaProvisionedWriteCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* _replicaProvisionedWriteCapacityAutoScalingSettings;

  /// @brief Field _replicaStatus, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaStatus, put = __cordl_internal_set__replicaStatus))::Amazon::DynamoDBv2::ReplicaStatus* _replicaStatus;

  /// @brief Method IsSetGlobalSecondaryIndexes, addr 0x104e5f8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexes();

  /// @brief Method IsSetRegionName, addr 0x104e65c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRegionName();

  /// @brief Method IsSetReplicaProvisionedReadCapacityAutoScalingSettings, addr 0x104e67c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedReadCapacityAutoScalingSettings();

  /// @brief Method IsSetReplicaProvisionedWriteCapacityAutoScalingSettings, addr 0x104e69c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedWriteCapacityAutoScalingSettings();

  /// @brief Method IsSetReplicaStatus, addr 0x104e6bc, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReplicaStatus();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*& __cordl_internal_get__globalSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*> const&
  __cordl_internal_get__globalSecondaryIndexes() const;

  constexpr ::StringW const& __cordl_internal_get__regionName() const;

  constexpr ::StringW& __cordl_internal_get__regionName();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*& __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const& __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings() const;

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*& __cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const& __cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings() const;

  constexpr ::Amazon::DynamoDBv2::ReplicaStatus*& __cordl_internal_get__replicaStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReplicaStatus*> const& __cordl_internal_get__replicaStatus() const;

  constexpr void __cordl_internal_set__globalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* value);

  constexpr void __cordl_internal_set__regionName(::StringW value);

  constexpr void __cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  constexpr void __cordl_internal_set__replicaProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  constexpr void __cordl_internal_set__replicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value);

  /// @brief Method .ctor, addr 0x104e71c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalSecondaryIndexes, addr 0x104e5e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* get_GlobalSecondaryIndexes();

  /// @brief Method get_RegionName, addr 0x104e64c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RegionName();

  /// @brief Method get_ReplicaProvisionedReadCapacityAutoScalingSettings, addr 0x104e66c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* get_ReplicaProvisionedReadCapacityAutoScalingSettings();

  /// @brief Method get_ReplicaProvisionedWriteCapacityAutoScalingSettings, addr 0x104e68c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* get_ReplicaProvisionedWriteCapacityAutoScalingSettings();

  /// @brief Method get_ReplicaStatus, addr 0x104e6ac, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReplicaStatus* get_ReplicaStatus();

  /// @brief Method set_GlobalSecondaryIndexes, addr 0x104e5f0, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* value);

  /// @brief Method set_RegionName, addr 0x104e654, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

  /// @brief Method set_ReplicaProvisionedReadCapacityAutoScalingSettings, addr 0x104e674, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  /// @brief Method set_ReplicaProvisionedWriteCapacityAutoScalingSettings, addr 0x104e694, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  /// @brief Method set_ReplicaStatus, addr 0x104e6b4, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaAutoScalingDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaAutoScalingDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaAutoScalingDescription(ReplicaAutoScalingDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaAutoScalingDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaAutoScalingDescription(ReplicaAutoScalingDescription const&) = delete;

  /// @brief Field _globalSecondaryIndexes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* ____globalSecondaryIndexes;

  /// @brief Field _regionName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____regionName;

  /// @brief Field _replicaProvisionedReadCapacityAutoScalingSettings, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ____replicaProvisionedReadCapacityAutoScalingSettings;

  /// @brief Field _replicaProvisionedWriteCapacityAutoScalingSettings, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ____replicaProvisionedWriteCapacityAutoScalingSettings;

  /// @brief Field _replicaStatus, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReplicaStatus* ____replicaStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription, ____globalSecondaryIndexes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription, ____regionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription, ____replicaProvisionedReadCapacityAutoScalingSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription, ____replicaProvisionedWriteCapacityAutoScalingSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription, ____replicaStatus) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*, "Amazon.DynamoDBv2.Model", "ReplicaAutoScalingDescription");
