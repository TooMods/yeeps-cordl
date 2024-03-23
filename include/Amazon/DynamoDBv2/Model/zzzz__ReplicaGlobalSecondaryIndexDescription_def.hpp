#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReplicaGlobalSecondaryIndexDescription)
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughputOverride;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndexDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription);
// Type: Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexDescription
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaGlobalSecondaryIndexDescription*
class CORDL_TYPE ReplicaGlobalSecondaryIndexDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_ProvisionedThroughputOverride, put = set_ProvisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* ProvisionedThroughputOverride;

  /// @brief Field _indexName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _provisionedThroughputOverride, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughputOverride,
                      put = __cordl_internal_set__provisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* _provisionedThroughputOverride;

  /// @brief Method IsSetIndexName, addr 0x104ed08, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetProvisionedThroughputOverride, addr 0x104ed28, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughputOverride();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*& __cordl_internal_get__provisionedThroughputOverride();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*> const& __cordl_internal_get__provisionedThroughputOverride() const;

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__provisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* value);

  /// @brief Method .ctor, addr 0x104ed38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IndexName, addr 0x104ecf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_ProvisionedThroughputOverride, addr 0x104ed18, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* get_ProvisionedThroughputOverride();

  /// @brief Method set_IndexName, addr 0x104ed00, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_ProvisionedThroughputOverride, addr 0x104ed20, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaGlobalSecondaryIndexDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaGlobalSecondaryIndexDescription(ReplicaGlobalSecondaryIndexDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaGlobalSecondaryIndexDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaGlobalSecondaryIndexDescription(ReplicaGlobalSecondaryIndexDescription const&) = delete;

  /// @brief Field _indexName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _provisionedThroughputOverride, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* ____provisionedThroughputOverride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription, ____indexName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription, ____provisionedThroughputOverride) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*, "Amazon.DynamoDBv2.Model", "ReplicaGlobalSecondaryIndexDescription");
