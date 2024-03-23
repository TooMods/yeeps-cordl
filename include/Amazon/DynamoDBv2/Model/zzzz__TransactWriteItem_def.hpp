#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransactWriteItem)
namespace Amazon::DynamoDBv2::Model {
class ConditionCheck;
}
namespace Amazon::DynamoDBv2::Model {
class Delete;
}
namespace Amazon::DynamoDBv2::Model {
class Put;
}
namespace Amazon::DynamoDBv2::Model {
class Update;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TransactWriteItem;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TransactWriteItem);
// Type: Amazon.DynamoDBv2.Model::TransactWriteItem
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TransactWriteItem*
class CORDL_TYPE TransactWriteItem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConditionCheck, put = set_ConditionCheck))::Amazon::DynamoDBv2::Model::ConditionCheck* ConditionCheck;

  __declspec(property(get = get_Delete, put = set_Delete))::Amazon::DynamoDBv2::Model::Delete* Delete;

  __declspec(property(get = get_Put, put = set_Put))::Amazon::DynamoDBv2::Model::Put* Put;

  __declspec(property(get = get_Update, put = set_Update))::Amazon::DynamoDBv2::Model::Update* Update;

  /// @brief Field _conditionCheck, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionCheck, put = __cordl_internal_set__conditionCheck))::Amazon::DynamoDBv2::Model::ConditionCheck* _conditionCheck;

  /// @brief Field _delete, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__delete, put = __cordl_internal_set__delete))::Amazon::DynamoDBv2::Model::Delete* _delete;

  /// @brief Field _put, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__put, put = __cordl_internal_set__put))::Amazon::DynamoDBv2::Model::Put* _put;

  /// @brief Field _update, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__update, put = __cordl_internal_set__update))::Amazon::DynamoDBv2::Model::Update* _update;

  /// @brief Method IsSetConditionCheck, addr 0x1053750, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConditionCheck();

  /// @brief Method IsSetDelete, addr 0x1053770, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDelete();

  /// @brief Method IsSetPut, addr 0x1053790, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPut();

  /// @brief Method IsSetUpdate, addr 0x10537b0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUpdate();

  static inline ::Amazon::DynamoDBv2::Model::TransactWriteItem* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::ConditionCheck*& __cordl_internal_get__conditionCheck();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ConditionCheck*> const& __cordl_internal_get__conditionCheck() const;

  constexpr ::Amazon::DynamoDBv2::Model::Delete*& __cordl_internal_get__delete();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Delete*> const& __cordl_internal_get__delete() const;

  constexpr ::Amazon::DynamoDBv2::Model::Put*& __cordl_internal_get__put();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Put*> const& __cordl_internal_get__put() const;

  constexpr ::Amazon::DynamoDBv2::Model::Update*& __cordl_internal_get__update();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Update*> const& __cordl_internal_get__update() const;

  constexpr void __cordl_internal_set__conditionCheck(::Amazon::DynamoDBv2::Model::ConditionCheck* value);

  constexpr void __cordl_internal_set__delete(::Amazon::DynamoDBv2::Model::Delete* value);

  constexpr void __cordl_internal_set__put(::Amazon::DynamoDBv2::Model::Put* value);

  constexpr void __cordl_internal_set__update(::Amazon::DynamoDBv2::Model::Update* value);

  /// @brief Method .ctor, addr 0x10537c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConditionCheck, addr 0x1053740, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ConditionCheck* get_ConditionCheck();

  /// @brief Method get_Delete, addr 0x1053760, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Delete* get_Delete();

  /// @brief Method get_Put, addr 0x1053780, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Put* get_Put();

  /// @brief Method get_Update, addr 0x10537a0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Update* get_Update();

  /// @brief Method set_ConditionCheck, addr 0x1053748, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionCheck(::Amazon::DynamoDBv2::Model::ConditionCheck* value);

  /// @brief Method set_Delete, addr 0x1053768, size 0x8, virtual false, abstract: false, final false
  inline void set_Delete(::Amazon::DynamoDBv2::Model::Delete* value);

  /// @brief Method set_Put, addr 0x1053788, size 0x8, virtual false, abstract: false, final false
  inline void set_Put(::Amazon::DynamoDBv2::Model::Put* value);

  /// @brief Method set_Update, addr 0x10537a8, size 0x8, virtual false, abstract: false, final false
  inline void set_Update(::Amazon::DynamoDBv2::Model::Update* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransactWriteItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransactWriteItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransactWriteItem(TransactWriteItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransactWriteItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransactWriteItem(TransactWriteItem const&) = delete;

  /// @brief Field _conditionCheck, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::ConditionCheck* ____conditionCheck;

  /// @brief Field _delete, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Delete* ____delete;

  /// @brief Field _put, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Put* ____put;

  /// @brief Field _update, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Update* ____update;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TransactWriteItem, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItem, ____conditionCheck) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItem, ____delete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItem, ____put) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactWriteItem, ____update) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TransactWriteItem);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TransactWriteItem*, "Amazon.DynamoDBv2.Model", "TransactWriteItem");
