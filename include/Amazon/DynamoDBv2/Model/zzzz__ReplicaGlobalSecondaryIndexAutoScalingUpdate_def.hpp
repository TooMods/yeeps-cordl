#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReplicaGlobalSecondaryIndexAutoScalingUpdate)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexAutoScalingUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate);
// Type: Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*
class CORDL_TYPE ReplicaGlobalSecondaryIndexAutoScalingUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_ProvisionedReadCapacityAutoScalingUpdate,
                      put = set_ProvisionedReadCapacityAutoScalingUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ProvisionedReadCapacityAutoScalingUpdate;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _provisionedReadCapacityAutoScalingUpdate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedReadCapacityAutoScalingUpdate,
                      put = __cordl_internal_set__provisionedReadCapacityAutoScalingUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* _provisionedReadCapacityAutoScalingUpdate;

  /// @brief Method IsSetIndexName, addr 0x104ecc0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetProvisionedReadCapacityAutoScalingUpdate, addr 0x104ece0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedReadCapacityAutoScalingUpdate();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& __cordl_internal_get__provisionedReadCapacityAutoScalingUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const& __cordl_internal_get__provisionedReadCapacityAutoScalingUpdate() const;

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__provisionedReadCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  /// @brief Method .ctor, addr 0x104ecf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x104ecb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_ProvisionedReadCapacityAutoScalingUpdate, addr 0x104ecd0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* get_ProvisionedReadCapacityAutoScalingUpdate();

  /// @brief Method set_IndexName, addr 0x104ecb8, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_ProvisionedReadCapacityAutoScalingUpdate, addr 0x104ecd8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedReadCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaGlobalSecondaryIndexAutoScalingUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexAutoScalingUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaGlobalSecondaryIndexAutoScalingUpdate(ReplicaGlobalSecondaryIndexAutoScalingUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexAutoScalingUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaGlobalSecondaryIndexAutoScalingUpdate(ReplicaGlobalSecondaryIndexAutoScalingUpdate const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _provisionedReadCapacityAutoScalingUpdate, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ____provisionedReadCapacityAutoScalingUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate, ____provisionedReadCapacityAutoScalingUpdate) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*, "Amazon.DynamoDBv2.Model", "ReplicaGlobalSecondaryIndexAutoScalingUpdate");
