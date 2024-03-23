#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReplicationGroupUpdate)
namespace Amazon::DynamoDBv2::Model {
class CreateReplicationGroupMemberAction;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteReplicationGroupMemberAction;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateReplicationGroupMemberAction;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicationGroupUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate);
// Type: Amazon.DynamoDBv2.Model::ReplicationGroupUpdate
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicationGroupUpdate*
class CORDL_TYPE ReplicationGroupUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Create, put = set_Create))::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction* Create;

  __declspec(property(get = get_Delete, put = set_Delete))::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction* Delete;

  __declspec(property(get = get_Update, put = set_Update))::Amazon::DynamoDBv2::Model::UpdateReplicationGroupMemberAction* Update;

  /// @brief Field _create, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__create, put = __cordl_internal_set__create))::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction* _create;

  /// @brief Field _delete, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__delete, put = __cordl_internal_set__delete))::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction* _delete;

  /// @brief Field _update, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__update, put = __cordl_internal_set__update))::Amazon::DynamoDBv2::Model::UpdateReplicationGroupMemberAction* _update;

  /// @brief Method IsSetCreate, addr 0x104f6f8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCreate();

  /// @brief Method IsSetDelete, addr 0x104f718, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDelete();

  /// @brief Method IsSetUpdate, addr 0x104f738, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUpdate();

  static inline ::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction*& __cordl_internal_get__create();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction*> const& __cordl_internal_get__create() const;

  constexpr ::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction*& __cordl_internal_get__delete();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction*> const& __cordl_internal_get__delete() const;

  constexpr ::Amazon::DynamoDBv2::Model::UpdateReplicationGroupMemberAction*& __cordl_internal_get__update();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::UpdateReplicationGroupMemberAction*> const& __cordl_internal_get__update() const;

  constexpr void __cordl_internal_set__create(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction* value);

  constexpr void __cordl_internal_set__delete(::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction* value);

  constexpr void __cordl_internal_set__update(::Amazon::DynamoDBv2::Model::UpdateReplicationGroupMemberAction* value);

  /// @brief Method .ctor, addr 0x104f748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Create, addr 0x104f6e8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction* get_Create();

  /// @brief Method get_Delete, addr 0x104f708, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction* get_Delete();

  /// @brief Method get_Update, addr 0x104f728, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateReplicationGroupMemberAction* get_Update();

  /// @brief Method set_Create, addr 0x104f6f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Create(::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction* value);

  /// @brief Method set_Delete, addr 0x104f710, size 0x8, virtual false, abstract: false, final false
  inline void set_Delete(::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction* value);

  /// @brief Method set_Update, addr 0x104f730, size 0x8, virtual false, abstract: false, final false
  inline void set_Update(::Amazon::DynamoDBv2::Model::UpdateReplicationGroupMemberAction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicationGroupUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicationGroupUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicationGroupUpdate(ReplicationGroupUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicationGroupUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicationGroupUpdate(ReplicationGroupUpdate const&) = delete;

  /// @brief Field _create, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::CreateReplicationGroupMemberAction* ____create;

  /// @brief Field _delete, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::DeleteReplicationGroupMemberAction* ____delete;

  /// @brief Field _update, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::UpdateReplicationGroupMemberAction* ____update;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate, ____create) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate, ____delete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate, ____update) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*, "Amazon.DynamoDBv2.Model", "ReplicationGroupUpdate");
