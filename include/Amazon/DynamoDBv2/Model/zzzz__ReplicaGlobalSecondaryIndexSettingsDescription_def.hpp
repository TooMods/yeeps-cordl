#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReplicaGlobalSecondaryIndexSettingsDescription)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsDescription;
}
namespace Amazon::DynamoDBv2 {
class IndexStatus;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexSettingsDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription);
// Type: Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexSettingsDescription
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexSettingsDescription*
class CORDL_TYPE ReplicaGlobalSecondaryIndexSettingsDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_IndexStatus, put = set_IndexStatus))::Amazon::DynamoDBv2::IndexStatus* IndexStatus;

  __declspec(property(get = get_ProvisionedReadCapacityAutoScalingSettings,
                      put = set_ProvisionedReadCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ProvisionedReadCapacityAutoScalingSettings;

  __declspec(property(get = get_ProvisionedReadCapacityUnits, put = set_ProvisionedReadCapacityUnits)) int64_t ProvisionedReadCapacityUnits;

  __declspec(property(get = get_ProvisionedWriteCapacityAutoScalingSettings,
                      put = set_ProvisionedWriteCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ProvisionedWriteCapacityAutoScalingSettings;

  __declspec(property(get = get_ProvisionedWriteCapacityUnits, put = set_ProvisionedWriteCapacityUnits)) int64_t ProvisionedWriteCapacityUnits;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _indexStatus, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__indexStatus, put = __cordl_internal_set__indexStatus))::Amazon::DynamoDBv2::IndexStatus* _indexStatus;

  /// @brief Field _provisionedReadCapacityAutoScalingSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedReadCapacityAutoScalingSettings,
                      put = __cordl_internal_set__provisionedReadCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* _provisionedReadCapacityAutoScalingSettings;

  /// @brief Field _provisionedReadCapacityUnits, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__provisionedReadCapacityUnits, put = __cordl_internal_set__provisionedReadCapacityUnits))::System::Nullable_1<int64_t> _provisionedReadCapacityUnits;

  /// @brief Field _provisionedWriteCapacityAutoScalingSettings, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get__provisionedWriteCapacityAutoScalingSettings,
               put = __cordl_internal_set__provisionedWriteCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* _provisionedWriteCapacityAutoScalingSettings;

  /// @brief Field _provisionedWriteCapacityUnits, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__provisionedWriteCapacityUnits,
                      put = __cordl_internal_set__provisionedWriteCapacityUnits))::System::Nullable_1<int64_t> _provisionedWriteCapacityUnits;

  /// @brief Method IsSetIndexName, addr 0x104ed50, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetIndexStatus, addr 0x104ed70, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetIndexStatus();

  /// @brief Method IsSetProvisionedReadCapacityAutoScalingSettings, addr 0x104ede0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedReadCapacityAutoScalingSettings();

  /// @brief Method IsSetProvisionedReadCapacityUnits, addr 0x104ee9c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetProvisionedReadCapacityUnits();

  /// @brief Method IsSetProvisionedWriteCapacityAutoScalingSettings, addr 0x104eee8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedWriteCapacityAutoScalingSettings();

  /// @brief Method IsSetProvisionedWriteCapacityUnits, addr 0x104efa4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetProvisionedWriteCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::Amazon::DynamoDBv2::IndexStatus*& __cordl_internal_get__indexStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::IndexStatus*> const& __cordl_internal_get__indexStatus() const;

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*& __cordl_internal_get__provisionedReadCapacityAutoScalingSettings();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const& __cordl_internal_get__provisionedReadCapacityAutoScalingSettings() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__provisionedReadCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__provisionedReadCapacityUnits();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*& __cordl_internal_get__provisionedWriteCapacityAutoScalingSettings();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const& __cordl_internal_get__provisionedWriteCapacityAutoScalingSettings() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__provisionedWriteCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__provisionedWriteCapacityUnits();

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__indexStatus(::Amazon::DynamoDBv2::IndexStatus* value);

  constexpr void __cordl_internal_set__provisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  constexpr void __cordl_internal_set__provisionedReadCapacityUnits(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__provisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  constexpr void __cordl_internal_set__provisionedWriteCapacityUnits(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x104efe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x104ed40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_IndexStatus, addr 0x104ed60, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::IndexStatus* get_IndexStatus();

  /// @brief Method get_ProvisionedReadCapacityAutoScalingSettings, addr 0x104edd0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* get_ProvisionedReadCapacityAutoScalingSettings();

  /// @brief Method get_ProvisionedReadCapacityUnits, addr 0x104edf0, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ProvisionedReadCapacityUnits();

  /// @brief Method get_ProvisionedWriteCapacityAutoScalingSettings, addr 0x104eed8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* get_ProvisionedWriteCapacityAutoScalingSettings();

  /// @brief Method get_ProvisionedWriteCapacityUnits, addr 0x104eef8, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ProvisionedWriteCapacityUnits();

  /// @brief Method set_IndexName, addr 0x104ed48, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_IndexStatus, addr 0x104ed68, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexStatus(::Amazon::DynamoDBv2::IndexStatus* value);

  /// @brief Method set_ProvisionedReadCapacityAutoScalingSettings, addr 0x104edd8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  /// @brief Method set_ProvisionedReadCapacityUnits, addr 0x104ee2c, size 0x70, virtual false, abstract: false, final false
  inline void set_ProvisionedReadCapacityUnits(int64_t value);

  /// @brief Method set_ProvisionedWriteCapacityAutoScalingSettings, addr 0x104eee0, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  /// @brief Method set_ProvisionedWriteCapacityUnits, addr 0x104ef34, size 0x70, virtual false, abstract: false, final false
  inline void set_ProvisionedWriteCapacityUnits(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaGlobalSecondaryIndexSettingsDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexSettingsDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaGlobalSecondaryIndexSettingsDescription(ReplicaGlobalSecondaryIndexSettingsDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexSettingsDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaGlobalSecondaryIndexSettingsDescription(ReplicaGlobalSecondaryIndexSettingsDescription const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _indexStatus, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::IndexStatus* ____indexStatus;

  /// @brief Field _provisionedReadCapacityAutoScalingSettings, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ____provisionedReadCapacityAutoScalingSettings;

  /// @brief Field _provisionedReadCapacityUnits, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____provisionedReadCapacityUnits;

  /// @brief Field _provisionedWriteCapacityAutoScalingSettings, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ____provisionedWriteCapacityAutoScalingSettings;

  /// @brief Field _provisionedWriteCapacityUnits, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____provisionedWriteCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription, ____indexStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription, ____provisionedReadCapacityAutoScalingSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription, ____provisionedReadCapacityUnits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription, ____provisionedWriteCapacityAutoScalingSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription, ____provisionedWriteCapacityUnits) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*, "Amazon.DynamoDBv2.Model", "ReplicaGlobalSecondaryIndexSettingsDescription");
