#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AttributeValueUpdate)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2 {
class AttributeAction;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class AttributeValueUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::AttributeValueUpdate);
// Type: Amazon.DynamoDBv2.Model::AttributeValueUpdate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::AttributeValueUpdate*
class CORDL_TYPE AttributeValueUpdate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Action, put = set_Action))::Amazon::DynamoDBv2::AttributeAction* Action;

  __declspec(property(get = get_Value, put = set_Value))::Amazon::DynamoDBv2::Model::AttributeValue* Value;

  /// @brief Field _action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action))::Amazon::DynamoDBv2::AttributeAction* _action;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::Amazon::DynamoDBv2::Model::AttributeValue* _value;

  /// @brief Method IsSetAction, addr 0x1224fa4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetAction();

  /// @brief Method IsSetValue, addr 0x1225014, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetValue();

  static inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* New_ctor(::Amazon::DynamoDBv2::Model::AttributeValue* value, ::Amazon::DynamoDBv2::AttributeAction* action);

  constexpr ::Amazon::DynamoDBv2::AttributeAction*& __cordl_internal_get__action();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::AttributeAction*> const& __cordl_internal_get__action() const;

  constexpr ::Amazon::DynamoDBv2::Model::AttributeValue*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AttributeValue*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__action(::Amazon::DynamoDBv2::AttributeAction* value);

  constexpr void __cordl_internal_set__value(::Amazon::DynamoDBv2::Model::AttributeValue* value);

  /// @brief Method .ctor, addr 0x1224f60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1224f68, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::Model::AttributeValue* value, ::Amazon::DynamoDBv2::AttributeAction* action);

  /// @brief Method get_Action, addr 0x1224f94, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::AttributeAction* get_Action();

  /// @brief Method get_Value, addr 0x1225004, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* get_Value();

  /// @brief Method set_Action, addr 0x1224f9c, size 0x8, virtual false, abstract: false, final false
  inline void set_Action(::Amazon::DynamoDBv2::AttributeAction* value);

  /// @brief Method set_Value, addr 0x122500c, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::Amazon::DynamoDBv2::Model::AttributeValue* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeValueUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeValueUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeValueUpdate(AttributeValueUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeValueUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeValueUpdate(AttributeValueUpdate const&) = delete;

  /// @brief Field _action, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AttributeAction* ____action;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AttributeValue* ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::AttributeValueUpdate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValueUpdate, ____action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeValueUpdate, ____value) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::AttributeValueUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::AttributeValueUpdate*, "Amazon.DynamoDBv2.Model", "AttributeValueUpdate");
