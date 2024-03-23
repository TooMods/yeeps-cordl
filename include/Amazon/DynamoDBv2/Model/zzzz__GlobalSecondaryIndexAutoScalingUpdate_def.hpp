#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GlobalSecondaryIndexAutoScalingUpdate)
namespace Amazon::DynamoDBv2::Model {
class AutoScalingSettingsUpdate;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndexAutoScalingUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate);
// Type: Amazon.DynamoDBv2.Model::GlobalSecondaryIndexAutoScalingUpdate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GlobalSecondaryIndexAutoScalingUpdate*
class CORDL_TYPE GlobalSecondaryIndexAutoScalingUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_ProvisionedWriteCapacityAutoScalingUpdate,
                      put = set_ProvisionedWriteCapacityAutoScalingUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ProvisionedWriteCapacityAutoScalingUpdate;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _provisionedWriteCapacityAutoScalingUpdate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedWriteCapacityAutoScalingUpdate,
                      put = __cordl_internal_set__provisionedWriteCapacityAutoScalingUpdate))::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* _provisionedWriteCapacityAutoScalingUpdate;

  /// @brief Method IsSetIndexName, addr 0x104922c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetProvisionedWriteCapacityAutoScalingUpdate, addr 0x104924c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedWriteCapacityAutoScalingUpdate();

  static inline ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& __cordl_internal_get__provisionedWriteCapacityAutoScalingUpdate();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const& __cordl_internal_get__provisionedWriteCapacityAutoScalingUpdate() const;

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__provisionedWriteCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

  /// @brief Method .ctor, addr 0x104925c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x104921c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_ProvisionedWriteCapacityAutoScalingUpdate, addr 0x104923c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* get_ProvisionedWriteCapacityAutoScalingUpdate();

  /// @brief Method set_IndexName, addr 0x1049224, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_ProvisionedWriteCapacityAutoScalingUpdate, addr 0x1049244, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedWriteCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalSecondaryIndexAutoScalingUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalSecondaryIndexAutoScalingUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalSecondaryIndexAutoScalingUpdate(GlobalSecondaryIndexAutoScalingUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalSecondaryIndexAutoScalingUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalSecondaryIndexAutoScalingUpdate(GlobalSecondaryIndexAutoScalingUpdate const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _provisionedWriteCapacityAutoScalingUpdate, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* ____provisionedWriteCapacityAutoScalingUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate, ____provisionedWriteCapacityAutoScalingUpdate) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexAutoScalingUpdate*, "Amazon.DynamoDBv2.Model", "GlobalSecondaryIndexAutoScalingUpdate");
