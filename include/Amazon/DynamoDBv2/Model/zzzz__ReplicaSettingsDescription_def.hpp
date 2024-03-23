#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReplicaSettingsDescription)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsDescription;
}
namespace Amazon::DynamoDBv2::Model {
class BillingModeSummary;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexSettingsDescription;
}
namespace Amazon::DynamoDBv2 {
class ReplicaStatus;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaSettingsDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription);
// Type: Amazon.DynamoDBv2.Model::ReplicaSettingsDescription
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaSettingsDescription*
class CORDL_TYPE ReplicaSettingsDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  __declspec(property(get = get_ReplicaBillingModeSummary, put = set_ReplicaBillingModeSummary))::Amazon::DynamoDBv2::Model::BillingModeSummary* ReplicaBillingModeSummary;

  __declspec(property(get = get_ReplicaGlobalSecondaryIndexSettings, put = set_ReplicaGlobalSecondaryIndexSettings))::System::Collections::Generic::List_1<
      ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* ReplicaGlobalSecondaryIndexSettings;

  __declspec(property(get = get_ReplicaProvisionedReadCapacityAutoScalingSettings,
                      put = set_ReplicaProvisionedReadCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ReplicaProvisionedReadCapacityAutoScalingSettings;

  __declspec(property(get = get_ReplicaProvisionedReadCapacityUnits, put = set_ReplicaProvisionedReadCapacityUnits)) int64_t ReplicaProvisionedReadCapacityUnits;

  __declspec(property(get = get_ReplicaProvisionedWriteCapacityAutoScalingSettings,
                      put = set_ReplicaProvisionedWriteCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ReplicaProvisionedWriteCapacityAutoScalingSettings;

  __declspec(property(get = get_ReplicaProvisionedWriteCapacityUnits, put = set_ReplicaProvisionedWriteCapacityUnits)) int64_t ReplicaProvisionedWriteCapacityUnits;

  __declspec(property(get = get_ReplicaStatus, put = set_ReplicaStatus))::Amazon::DynamoDBv2::ReplicaStatus* ReplicaStatus;

  /// @brief Field _regionName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__regionName, put = __cordl_internal_set__regionName))::StringW _regionName;

  /// @brief Field _replicaBillingModeSummary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaBillingModeSummary,
                      put = __cordl_internal_set__replicaBillingModeSummary))::Amazon::DynamoDBv2::Model::BillingModeSummary* _replicaBillingModeSummary;

  /// @brief Field _replicaGlobalSecondaryIndexSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaGlobalSecondaryIndexSettings, put = __cordl_internal_set__replicaGlobalSecondaryIndexSettings))::System::Collections::Generic::List_1<
      ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* _replicaGlobalSecondaryIndexSettings;

  /// @brief Field _replicaProvisionedReadCapacityAutoScalingSettings, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings,
      put = __cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* _replicaProvisionedReadCapacityAutoScalingSettings;

  /// @brief Field _replicaProvisionedReadCapacityUnits, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__replicaProvisionedReadCapacityUnits,
                      put = __cordl_internal_set__replicaProvisionedReadCapacityUnits))::System::Nullable_1<int64_t> _replicaProvisionedReadCapacityUnits;

  /// @brief Field _replicaProvisionedWriteCapacityAutoScalingSettings, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings,
      put = __cordl_internal_set__replicaProvisionedWriteCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* _replicaProvisionedWriteCapacityAutoScalingSettings;

  /// @brief Field _replicaProvisionedWriteCapacityUnits, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__replicaProvisionedWriteCapacityUnits,
                      put = __cordl_internal_set__replicaProvisionedWriteCapacityUnits))::System::Nullable_1<int64_t> _replicaProvisionedWriteCapacityUnits;

  /// @brief Field _replicaStatus, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__replicaStatus, put = __cordl_internal_set__replicaStatus))::Amazon::DynamoDBv2::ReplicaStatus* _replicaStatus;

  /// @brief Method IsSetRegionName, addr 0x104f150, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRegionName();

  /// @brief Method IsSetReplicaBillingModeSummary, addr 0x104f170, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaBillingModeSummary();

  /// @brief Method IsSetReplicaGlobalSecondaryIndexSettings, addr 0x104f190, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetReplicaGlobalSecondaryIndexSettings();

  /// @brief Method IsSetReplicaProvisionedReadCapacityAutoScalingSettings, addr 0x104f1f4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedReadCapacityAutoScalingSettings();

  /// @brief Method IsSetReplicaProvisionedReadCapacityUnits, addr 0x104f2b0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedReadCapacityUnits();

  /// @brief Method IsSetReplicaProvisionedWriteCapacityAutoScalingSettings, addr 0x104f2fc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedWriteCapacityAutoScalingSettings();

  /// @brief Method IsSetReplicaProvisionedWriteCapacityUnits, addr 0x104f3b8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReplicaProvisionedWriteCapacityUnits();

  /// @brief Method IsSetReplicaStatus, addr 0x104f404, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReplicaStatus();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__regionName() const;

  constexpr ::StringW& __cordl_internal_get__regionName();

  constexpr ::Amazon::DynamoDBv2::Model::BillingModeSummary*& __cordl_internal_get__replicaBillingModeSummary();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BillingModeSummary*> const& __cordl_internal_get__replicaBillingModeSummary() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*& __cordl_internal_get__replicaGlobalSecondaryIndexSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*> const&
  __cordl_internal_get__replicaGlobalSecondaryIndexSettings() const;

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*& __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const& __cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__replicaProvisionedReadCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__replicaProvisionedReadCapacityUnits();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*& __cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const& __cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__replicaProvisionedWriteCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__replicaProvisionedWriteCapacityUnits();

  constexpr ::Amazon::DynamoDBv2::ReplicaStatus*& __cordl_internal_get__replicaStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReplicaStatus*> const& __cordl_internal_get__replicaStatus() const;

  constexpr void __cordl_internal_set__regionName(::StringW value);

  constexpr void __cordl_internal_set__replicaBillingModeSummary(::Amazon::DynamoDBv2::Model::BillingModeSummary* value);

  constexpr void __cordl_internal_set__replicaGlobalSecondaryIndexSettings(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* value);

  constexpr void __cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  constexpr void __cordl_internal_set__replicaProvisionedReadCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__replicaProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  constexpr void __cordl_internal_set__replicaProvisionedWriteCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__replicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value);

  /// @brief Method .ctor, addr 0x104f464, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RegionName, addr 0x104f140, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RegionName();

  /// @brief Method get_ReplicaBillingModeSummary, addr 0x104f160, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BillingModeSummary* get_ReplicaBillingModeSummary();

  /// @brief Method get_ReplicaGlobalSecondaryIndexSettings, addr 0x104f180, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* get_ReplicaGlobalSecondaryIndexSettings();

  /// @brief Method get_ReplicaProvisionedReadCapacityAutoScalingSettings, addr 0x104f1e4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* get_ReplicaProvisionedReadCapacityAutoScalingSettings();

  /// @brief Method get_ReplicaProvisionedReadCapacityUnits, addr 0x104f204, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ReplicaProvisionedReadCapacityUnits();

  /// @brief Method get_ReplicaProvisionedWriteCapacityAutoScalingSettings, addr 0x104f2ec, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* get_ReplicaProvisionedWriteCapacityAutoScalingSettings();

  /// @brief Method get_ReplicaProvisionedWriteCapacityUnits, addr 0x104f30c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ReplicaProvisionedWriteCapacityUnits();

  /// @brief Method get_ReplicaStatus, addr 0x104f3f4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReplicaStatus* get_ReplicaStatus();

  /// @brief Method set_RegionName, addr 0x104f148, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

  /// @brief Method set_ReplicaBillingModeSummary, addr 0x104f168, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaBillingModeSummary(::Amazon::DynamoDBv2::Model::BillingModeSummary* value);

  /// @brief Method set_ReplicaGlobalSecondaryIndexSettings, addr 0x104f188, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaGlobalSecondaryIndexSettings(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* value);

  /// @brief Method set_ReplicaProvisionedReadCapacityAutoScalingSettings, addr 0x104f1ec, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  /// @brief Method set_ReplicaProvisionedReadCapacityUnits, addr 0x104f240, size 0x70, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedReadCapacityUnits(int64_t value);

  /// @brief Method set_ReplicaProvisionedWriteCapacityAutoScalingSettings, addr 0x104f2f4, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  /// @brief Method set_ReplicaProvisionedWriteCapacityUnits, addr 0x104f348, size 0x70, virtual false, abstract: false, final false
  inline void set_ReplicaProvisionedWriteCapacityUnits(int64_t value);

  /// @brief Method set_ReplicaStatus, addr 0x104f3fc, size 0x8, virtual false, abstract: false, final false
  inline void set_ReplicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaSettingsDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaSettingsDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaSettingsDescription(ReplicaSettingsDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaSettingsDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaSettingsDescription(ReplicaSettingsDescription const&) = delete;

  /// @brief Field _regionName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____regionName;

  /// @brief Field _replicaBillingModeSummary, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BillingModeSummary* ____replicaBillingModeSummary;

  /// @brief Field _replicaGlobalSecondaryIndexSettings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* ____replicaGlobalSecondaryIndexSettings;

  /// @brief Field _replicaProvisionedReadCapacityAutoScalingSettings, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ____replicaProvisionedReadCapacityAutoScalingSettings;

  /// @brief Field _replicaProvisionedReadCapacityUnits, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____replicaProvisionedReadCapacityUnits;

  /// @brief Field _replicaProvisionedWriteCapacityAutoScalingSettings, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ____replicaProvisionedWriteCapacityAutoScalingSettings;

  /// @brief Field _replicaProvisionedWriteCapacityUnits, offset: 0x48, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____replicaProvisionedWriteCapacityUnits;

  /// @brief Field _replicaStatus, offset: 0x58, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReplicaStatus* ____replicaStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, ____regionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, ____replicaBillingModeSummary) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, ____replicaGlobalSecondaryIndexSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, ____replicaProvisionedReadCapacityAutoScalingSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, ____replicaProvisionedReadCapacityUnits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, ____replicaProvisionedWriteCapacityAutoScalingSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, ____replicaProvisionedWriteCapacityUnits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription, ____replicaStatus) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*, "Amazon.DynamoDBv2.Model", "ReplicaSettingsDescription");
