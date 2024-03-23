#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreateReplicationGroupMemberAction)
namespace Amazon::DynamoDBv2::Model {
class ProvisionedThroughputOverride;
}
namespace Amazon::DynamoDBv2::Model {
class ReplicaGlobalSecondaryIndex;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class CreateReplicationGroupMemberAction;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction);
// Type: Amazon.DynamoDBv2.Model::CreateReplicationGroupMemberAction
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::CreateReplicationGroupMemberAction*
class CORDL_TYPE CreateReplicationGroupMemberAction : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_GlobalSecondaryIndexes,
                      put = set_GlobalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndex*>* GlobalSecondaryIndexes;

  __declspec(property(get = get_KMSMasterKeyId, put = set_KMSMasterKeyId))::StringW KMSMasterKeyId;

  __declspec(property(get = get_ProvisionedThroughputOverride, put = set_ProvisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* ProvisionedThroughputOverride;

  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  /// @brief Field _globalSecondaryIndexes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__globalSecondaryIndexes,
                      put = __cordl_internal_set__globalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndex*>* _globalSecondaryIndexes;

  /// @brief Field _kmsMasterKeyId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__kmsMasterKeyId, put = __cordl_internal_set__kmsMasterKeyId))::StringW _kmsMasterKeyId;

  /// @brief Field _provisionedThroughputOverride, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedThroughputOverride,
                      put = __cordl_internal_set__provisionedThroughputOverride))::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* _provisionedThroughputOverride;

  /// @brief Field _regionName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__regionName, put = __cordl_internal_set__regionName))::StringW _regionName;

  /// @brief Method IsSetGlobalSecondaryIndexes, addr 0x122875c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexes();

  /// @brief Method IsSetKMSMasterKeyId, addr 0x12287c0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKMSMasterKeyId();

  /// @brief Method IsSetProvisionedThroughputOverride, addr 0x12287e0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProvisionedThroughputOverride();

  /// @brief Method IsSetRegionName, addr 0x1228800, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRegionName();

  static inline ::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndex*>*& __cordl_internal_get__globalSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndex*>*> const&
  __cordl_internal_get__globalSecondaryIndexes() const;

  constexpr ::StringW const& __cordl_internal_get__kmsMasterKeyId() const;

  constexpr ::StringW& __cordl_internal_get__kmsMasterKeyId();

  constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*& __cordl_internal_get__provisionedThroughputOverride();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*> const& __cordl_internal_get__provisionedThroughputOverride() const;

  constexpr ::StringW const& __cordl_internal_get__regionName() const;

  constexpr ::StringW& __cordl_internal_get__regionName();

  constexpr void __cordl_internal_set__globalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndex*>* value);

  constexpr void __cordl_internal_set__kmsMasterKeyId(::StringW value);

  constexpr void __cordl_internal_set__provisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* value);

  constexpr void __cordl_internal_set__regionName(::StringW value);

  /// @brief Method .ctor, addr 0x1228810, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalSecondaryIndexes, addr 0x122874c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndex*>* get_GlobalSecondaryIndexes();

  /// @brief Method get_KMSMasterKeyId, addr 0x12287b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KMSMasterKeyId();

  /// @brief Method get_ProvisionedThroughputOverride, addr 0x12287d0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* get_ProvisionedThroughputOverride();

  /// @brief Method get_RegionName, addr 0x12287f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RegionName();

  /// @brief Method set_GlobalSecondaryIndexes, addr 0x1228754, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndex*>* value);

  /// @brief Method set_KMSMasterKeyId, addr 0x12287b8, size 0x8, virtual false, abstract: false, final false
  inline void set_KMSMasterKeyId(::StringW value);

  /// @brief Method set_ProvisionedThroughputOverride, addr 0x12287d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* value);

  /// @brief Method set_RegionName, addr 0x12287f8, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateReplicationGroupMemberAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateReplicationGroupMemberAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateReplicationGroupMemberAction(CreateReplicationGroupMemberAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateReplicationGroupMemberAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateReplicationGroupMemberAction(CreateReplicationGroupMemberAction const&) = delete;

  /// @brief Field _globalSecondaryIndexes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndex*>* ____globalSecondaryIndexes;

  /// @brief Field _kmsMasterKeyId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____kmsMasterKeyId;

  /// @brief Field _provisionedThroughputOverride, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* ____provisionedThroughputOverride;

  /// @brief Field _regionName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____regionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction, ____globalSecondaryIndexes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction, ____kmsMasterKeyId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction, ____provisionedThroughputOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction, ____regionName) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction*, "Amazon.DynamoDBv2.Model", "CreateReplicationGroupMemberAction");
