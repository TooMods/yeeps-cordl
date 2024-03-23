#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReplicaGlobalSecondaryIndexAutoScalingDescription)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsDescription;
}
namespace Amazon::DynamoDBv2 {
class IndexStatus;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexAutoScalingDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription);
// Type: Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexAutoScalingDescription
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*
class CORDL_TYPE ReplicaGlobalSecondaryIndexAutoScalingDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_IndexStatus, put = set_IndexStatus))::Amazon::DynamoDBv2::IndexStatus* IndexStatus;

  __declspec(property(get = get_ProvisionedReadCapacityAutoScalingSettings,
                      put = set_ProvisionedReadCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ProvisionedReadCapacityAutoScalingSettings;

  __declspec(property(get = get_ProvisionedWriteCapacityAutoScalingSettings,
                      put = set_ProvisionedWriteCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ProvisionedWriteCapacityAutoScalingSettings;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _indexStatus, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__indexStatus, put = __cordl_internal_set__indexStatus))::Amazon::DynamoDBv2::IndexStatus* _indexStatus;

  /// @brief Field _provisionedReadCapacityAutoScalingSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedReadCapacityAutoScalingSettings,
                      put = __cordl_internal_set__provisionedReadCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* _provisionedReadCapacityAutoScalingSettings;

  /// @brief Field _provisionedWriteCapacityAutoScalingSettings, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get__provisionedWriteCapacityAutoScalingSettings,
               put = __cordl_internal_set__provisionedWriteCapacityAutoScalingSettings))::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* _provisionedWriteCapacityAutoScalingSettings;

  /// @brief Method IsSetIndexName, addr 0x104ebe8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetIndexStatus, addr 0x104ec08, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetIndexStatus();

  /// @brief Method IsSetProvisionedReadCapacityAutoScalingSettings, addr 0x104ec78, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedReadCapacityAutoScalingSettings();

  /// @brief Method IsSetProvisionedWriteCapacityAutoScalingSettings, addr 0x104ec98, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedWriteCapacityAutoScalingSettings();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::Amazon::DynamoDBv2::IndexStatus*& __cordl_internal_get__indexStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::IndexStatus*> const& __cordl_internal_get__indexStatus() const;

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*& __cordl_internal_get__provisionedReadCapacityAutoScalingSettings();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const& __cordl_internal_get__provisionedReadCapacityAutoScalingSettings() const;

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*& __cordl_internal_get__provisionedWriteCapacityAutoScalingSettings();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const& __cordl_internal_get__provisionedWriteCapacityAutoScalingSettings() const;

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__indexStatus(::Amazon::DynamoDBv2::IndexStatus* value);

  constexpr void __cordl_internal_set__provisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  constexpr void __cordl_internal_set__provisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  /// @brief Method .ctor, addr 0x104eca8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x104ebd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_IndexStatus, addr 0x104ebf8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::IndexStatus* get_IndexStatus();

  /// @brief Method get_ProvisionedReadCapacityAutoScalingSettings, addr 0x104ec68, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* get_ProvisionedReadCapacityAutoScalingSettings();

  /// @brief Method get_ProvisionedWriteCapacityAutoScalingSettings, addr 0x104ec88, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* get_ProvisionedWriteCapacityAutoScalingSettings();

  /// @brief Method set_IndexName, addr 0x104ebe0, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_IndexStatus, addr 0x104ec00, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexStatus(::Amazon::DynamoDBv2::IndexStatus* value);

  /// @brief Method set_ProvisionedReadCapacityAutoScalingSettings, addr 0x104ec70, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

  /// @brief Method set_ProvisionedWriteCapacityAutoScalingSettings, addr 0x104ec90, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaGlobalSecondaryIndexAutoScalingDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexAutoScalingDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaGlobalSecondaryIndexAutoScalingDescription(ReplicaGlobalSecondaryIndexAutoScalingDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexAutoScalingDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaGlobalSecondaryIndexAutoScalingDescription(ReplicaGlobalSecondaryIndexAutoScalingDescription const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _indexStatus, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::IndexStatus* ____indexStatus;

  /// @brief Field _provisionedReadCapacityAutoScalingSettings, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ____provisionedReadCapacityAutoScalingSettings;

  /// @brief Field _provisionedWriteCapacityAutoScalingSettings, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* ____provisionedWriteCapacityAutoScalingSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription, ____indexStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription, ____provisionedReadCapacityAutoScalingSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription, ____provisionedWriteCapacityAutoScalingSettings) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*, "Amazon.DynamoDBv2.Model", "ReplicaGlobalSecondaryIndexAutoScalingDescription");
