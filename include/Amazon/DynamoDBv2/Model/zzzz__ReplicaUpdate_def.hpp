#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReplicaUpdate)
namespace Amazon::DynamoDBv2::Model {
class CreateReplicaAction;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteReplicaAction;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ReplicaUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ReplicaUpdate);
// Type: Amazon.DynamoDBv2.Model::ReplicaUpdate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ReplicaUpdate*
class CORDL_TYPE ReplicaUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Create, put = set_Create))::Amazon::DynamoDBv2::Model::CreateReplicaAction* Create;

  __declspec(property(get = get_Delete, put = set_Delete))::Amazon::DynamoDBv2::Model::DeleteReplicaAction* Delete;

  /// @brief Field _create, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__create, put = __cordl_internal_set__create))::Amazon::DynamoDBv2::Model::CreateReplicaAction* _create;

  /// @brief Field _delete, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__delete, put = __cordl_internal_set__delete))::Amazon::DynamoDBv2::Model::DeleteReplicaAction* _delete;

  /// @brief Method IsSetCreate, addr 0x104f760, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCreate();

  /// @brief Method IsSetDelete, addr 0x104f780, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDelete();

  static inline ::Amazon::DynamoDBv2::Model::ReplicaUpdate* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::CreateReplicaAction*& __cordl_internal_get__create();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::CreateReplicaAction*> const& __cordl_internal_get__create() const;

  constexpr ::Amazon::DynamoDBv2::Model::DeleteReplicaAction*& __cordl_internal_get__delete();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::DeleteReplicaAction*> const& __cordl_internal_get__delete() const;

  constexpr void __cordl_internal_set__create(::Amazon::DynamoDBv2::Model::CreateReplicaAction* value);

  constexpr void __cordl_internal_set__delete(::Amazon::DynamoDBv2::Model::DeleteReplicaAction* value);

  /// @brief Method .ctor, addr 0x104f790, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Create, addr 0x104f750, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::CreateReplicaAction* get_Create();

  /// @brief Method get_Delete, addr 0x104f770, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DeleteReplicaAction* get_Delete();

  /// @brief Method set_Create, addr 0x104f758, size 0x8, virtual false, abstract: false, final false
  inline void set_Create(::Amazon::DynamoDBv2::Model::CreateReplicaAction* value);

  /// @brief Method set_Delete, addr 0x104f778, size 0x8, virtual false, abstract: false, final false
  inline void set_Delete(::Amazon::DynamoDBv2::Model::DeleteReplicaAction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReplicaUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReplicaUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReplicaUpdate(ReplicaUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReplicaUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReplicaUpdate(ReplicaUpdate const&) = delete;

  /// @brief Field _create, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::CreateReplicaAction* ____create;

  /// @brief Field _delete, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::DeleteReplicaAction* ____delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ReplicaUpdate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaUpdate, ____create) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ReplicaUpdate, ____delete) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ReplicaUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ReplicaUpdate*, "Amazon.DynamoDBv2.Model", "ReplicaUpdate");
