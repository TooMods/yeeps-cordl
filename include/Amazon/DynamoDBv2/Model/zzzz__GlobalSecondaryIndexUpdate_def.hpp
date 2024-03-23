#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlobalSecondaryIndexUpdate)
namespace Amazon::DynamoDBv2::Model {
class CreateGlobalSecondaryIndexAction;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteGlobalSecondaryIndexAction;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateGlobalSecondaryIndexAction;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndexUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate);
// Type: Amazon.DynamoDBv2.Model::GlobalSecondaryIndexUpdate
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GlobalSecondaryIndexUpdate*
class CORDL_TYPE GlobalSecondaryIndexUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Create, put = set_Create))::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction* Create;

  __declspec(property(get = get_Delete, put = set_Delete))::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction* Delete;

  __declspec(property(get = get_Update, put = set_Update))::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction* Update;

  /// @brief Field _create, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__create, put = __cordl_internal_set__create))::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction* _create;

  /// @brief Field _delete, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__delete, put = __cordl_internal_set__delete))::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction* _delete;

  /// @brief Field _update, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__update, put = __cordl_internal_set__update))::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction* _update;

  /// @brief Method IsSetCreate, addr 0x1049834, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCreate();

  /// @brief Method IsSetDelete, addr 0x1049854, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDelete();

  /// @brief Method IsSetUpdate, addr 0x1049874, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUpdate();

  static inline ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*& __cordl_internal_get__create();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*> const& __cordl_internal_get__create() const;

  constexpr ::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction*& __cordl_internal_get__delete();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction*> const& __cordl_internal_get__delete() const;

  constexpr ::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction*& __cordl_internal_get__update();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction*> const& __cordl_internal_get__update() const;

  constexpr void __cordl_internal_set__create(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction* value);

  constexpr void __cordl_internal_set__delete(::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction* value);

  constexpr void __cordl_internal_set__update(::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction* value);

  /// @brief Method .ctor, addr 0x1049884, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Create, addr 0x1049824, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction* get_Create();

  /// @brief Method get_Delete, addr 0x1049844, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction* get_Delete();

  /// @brief Method get_Update, addr 0x1049864, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction* get_Update();

  /// @brief Method set_Create, addr 0x104982c, size 0x8, virtual false, abstract: false, final false
  inline void set_Create(::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction* value);

  /// @brief Method set_Delete, addr 0x104984c, size 0x8, virtual false, abstract: false, final false
  inline void set_Delete(::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction* value);

  /// @brief Method set_Update, addr 0x104986c, size 0x8, virtual false, abstract: false, final false
  inline void set_Update(::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalSecondaryIndexUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalSecondaryIndexUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalSecondaryIndexUpdate(GlobalSecondaryIndexUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalSecondaryIndexUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalSecondaryIndexUpdate(GlobalSecondaryIndexUpdate const&) = delete;

  /// @brief Field _create, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction* ____create;

  /// @brief Field _delete, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::DeleteGlobalSecondaryIndexAction* ____delete;

  /// @brief Field _update, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::UpdateGlobalSecondaryIndexAction* ____update;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate, ____create) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate, ____delete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate, ____update) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*, "Amazon.DynamoDBv2.Model", "GlobalSecondaryIndexUpdate");
