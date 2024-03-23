#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalTableGlobalSecondaryIndexSettingsUpdate)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GlobalTableGlobalSecondaryIndexSettingsUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate);
// Type: Amazon.DynamoDBv2.Model::GlobalTableGlobalSecondaryIndexSettingsUpdate
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*
class CORDL_TYPE GlobalTableGlobalSecondaryIndexSettingsUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_ProvisionedWriteCapacityAutoScalingSettingsUpdate,
                      put = set_ProvisionedWriteCapacityAutoScalingSettingsUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ProvisionedWriteCapacityAutoScalingSettingsUpdate;

  __declspec(property(get = get_ProvisionedWriteCapacityUnits, put = set_ProvisionedWriteCapacityUnits)) int64_t ProvisionedWriteCapacityUnits;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _provisionedWriteCapacityAutoScalingSettingsUpdate, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__provisionedWriteCapacityAutoScalingSettingsUpdate,
      put = __cordl_internal_set__provisionedWriteCapacityAutoScalingSettingsUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* _provisionedWriteCapacityAutoScalingSettingsUpdate;

  /// @brief Field _provisionedWriteCapacityUnits, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__provisionedWriteCapacityUnits,
                      put = __cordl_internal_set__provisionedWriteCapacityUnits))::System::Nullable_1<int64_t> _provisionedWriteCapacityUnits;

  /// @brief Method IsSetIndexName, addr 0x1049c3c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetProvisionedWriteCapacityAutoScalingSettingsUpdate, addr 0x1049c5c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedWriteCapacityAutoScalingSettingsUpdate();

  /// @brief Method IsSetProvisionedWriteCapacityUnits, addr 0x1049d18, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetProvisionedWriteCapacityUnits();

  static inline ::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& __cordl_internal_get__provisionedWriteCapacityAutoScalingSettingsUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const& __cordl_internal_get__provisionedWriteCapacityAutoScalingSettingsUpdate() const;

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__provisionedWriteCapacityUnits() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__provisionedWriteCapacityUnits();

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__provisionedWriteCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  constexpr void __cordl_internal_set__provisionedWriteCapacityUnits(::System::Nullable_1<int64_t> value);

  /// @brief Method .ctor, addr 0x1049d54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x1049c2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_ProvisionedWriteCapacityAutoScalingSettingsUpdate, addr 0x1049c4c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* get_ProvisionedWriteCapacityAutoScalingSettingsUpdate();

  /// @brief Method get_ProvisionedWriteCapacityUnits, addr 0x1049c6c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_ProvisionedWriteCapacityUnits();

  /// @brief Method set_IndexName, addr 0x1049c34, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_ProvisionedWriteCapacityAutoScalingSettingsUpdate, addr 0x1049c54, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedWriteCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  /// @brief Method set_ProvisionedWriteCapacityUnits, addr 0x1049ca8, size 0x70, virtual false, abstract: false, final false
  inline void set_ProvisionedWriteCapacityUnits(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalTableGlobalSecondaryIndexSettingsUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalTableGlobalSecondaryIndexSettingsUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalTableGlobalSecondaryIndexSettingsUpdate(GlobalTableGlobalSecondaryIndexSettingsUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalTableGlobalSecondaryIndexSettingsUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalTableGlobalSecondaryIndexSettingsUpdate(GlobalTableGlobalSecondaryIndexSettingsUpdate const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _provisionedWriteCapacityAutoScalingSettingsUpdate, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ____provisionedWriteCapacityAutoScalingSettingsUpdate;

  /// @brief Field _provisionedWriteCapacityUnits, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____provisionedWriteCapacityUnits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate, ____provisionedWriteCapacityAutoScalingSettingsUpdate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate, ____provisionedWriteCapacityUnits) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*, "Amazon.DynamoDBv2.Model", "GlobalTableGlobalSecondaryIndexSettingsUpdate");
