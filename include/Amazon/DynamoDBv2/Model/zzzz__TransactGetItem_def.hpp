#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransactGetItem)
namespace Amazon::DynamoDBv2::Model {
class Get;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class TransactGetItem;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::TransactGetItem);
// Type: Amazon.DynamoDBv2.Model::TransactGetItem
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::TransactGetItem*
class CORDL_TYPE TransactGetItem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Get, put = set_Get))::Amazon::DynamoDBv2::Model::Get* Get;

  /// @brief Field _get, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__get, put = __cordl_internal_set__get))::Amazon::DynamoDBv2::Model::Get* _get;

  /// @brief Method IsSetGet, addr 0x1053070, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGet();

  static inline ::Amazon::DynamoDBv2::Model::TransactGetItem* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::Get*& __cordl_internal_get__get();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Get*> const& __cordl_internal_get__get() const;

  constexpr void __cordl_internal_set__get(::Amazon::DynamoDBv2::Model::Get* value);

  /// @brief Method .ctor, addr 0x1053080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Get, addr 0x1053060, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Get* get_Get();

  /// @brief Method set_Get, addr 0x1053068, size 0x8, virtual false, abstract: false, final false
  inline void set_Get(::Amazon::DynamoDBv2::Model::Get* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransactGetItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransactGetItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransactGetItem(TransactGetItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransactGetItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransactGetItem(TransactGetItem const&) = delete;

  /// @brief Field _get, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Get* ____get;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::TransactGetItem, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::TransactGetItem, ____get) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::TransactGetItem);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::TransactGetItem*, "Amazon.DynamoDBv2.Model", "TransactGetItem");
