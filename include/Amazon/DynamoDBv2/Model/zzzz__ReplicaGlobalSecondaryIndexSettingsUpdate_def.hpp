#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReplicaGlobalSecondaryIndexSettingsUpdate)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexSettingsUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate);
// Type: Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexSettingsUpdate
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexSettingsUpdate*
class CORDL_TYPE ReplicaGlobalSecondaryIndexSettingsUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_ProvisionedReadCapacityAutoScalingSettingsUpdate,
                      put = set_ProvisionedReadCapacityAutoScalingSettingsUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ProvisionedReadCapacityAutoScalingSettingsUpdate;

  __declspec(property(get = get_ProvisionedReadCapacityUnits, put = set_ProvisionedReadCapacityUnits)) int64_t ProvisionedReadCapacityUnits;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _provisionedReadCapacityAutoScalingSettingsUpdate, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__provisionedReadCapacityAutoScalingSettingsUpdate,
               put = __cordl_internal_set__provisionedReadCapacityAutoScalingSettingsUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* _provisionedReadCapacityAutoScalingSettingsUpdate;

  /// @brief Field _provisionedReadCapacityUnits, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__provisionedReadCapacityUnits, put = __cordl_internal_set__provisionedReadCapacityUnits))::System::Nullable_1<int64_t> _provisionedReadCapacityUnits;

  /// @brief Method IsSetIndexName, addr 0x104eff8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetProvisionedReadCapacityAutoScalingSettingsUpdate, addr 0x104f018, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedReadCapacityAutoScalingSettingsUpdate();

  /// @brief Method IsSetProvisionedReadCapacityUnits, addr 0x104f0d4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetProvisionedReadCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& __cordl_internal_get__provisionedReadCapacityAutoScalingSettingsUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const& __cordl_internal_get__provisionedReadCapacityAutoScalingSettingsUpdate() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__provisionedReadCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__provisionedReadCapacityUnits();

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__provisionedReadCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  constexpr void __cordl_internal_set__provisionedReadCapacityUnits(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x104f110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x104efe8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_ProvisionedReadCapacityAutoScalingSettingsUpdate, addr 0x104f008, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* get_ProvisionedReadCapacityAutoScalingSettingsUpdate();

  /// @brief Method get_ProvisionedReadCapacityUnits, addr 0x104f028, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ProvisionedReadCapacityUnits();

  /// @brief Method set_IndexName, addr 0x104eff0, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_ProvisionedReadCapacityAutoScalingSettingsUpdate, addr 0x104f010, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedReadCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  /// @brief Method set_ProvisionedReadCapacityUnits, addr 0x104f064, size 0x70, virtual false, abstract: false, final false
  inline void set_ProvisionedReadCapacityUnits(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaGlobalSecondaryIndexSettingsUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexSettingsUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaGlobalSecondaryIndexSettingsUpdate(ReplicaGlobalSecondaryIndexSettingsUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexSettingsUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaGlobalSecondaryIndexSettingsUpdate(ReplicaGlobalSecondaryIndexSettingsUpdate const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _provisionedReadCapacityAutoScalingSettingsUpdate, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ____provisionedReadCapacityAutoScalingSettingsUpdate;

  /// @brief Field _provisionedReadCapacityUnits, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____provisionedReadCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate, ____provisionedReadCapacityAutoScalingSettingsUpdate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate, ____provisionedReadCapacityUnits) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*, "Amazon.DynamoDBv2.Model", "ReplicaGlobalSecondaryIndexSettingsUpdate");
