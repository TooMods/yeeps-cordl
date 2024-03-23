#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeySchemaElement)
namespace Amazon::DynamoDBv2 {
class KeyType;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::KeySchemaElement);
// Type: Amazon.DynamoDBv2.Model::KeySchemaElement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::KeySchemaElement*
class CORDL_TYPE KeySchemaElement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeName, put = set_AttributeName))::StringW AttributeName;

  __declspec(property(get = get_KeyType, put = set_KeyType))::Amazon::DynamoDBv2::KeyType* KeyType;

  /// @brief Field _attributeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeName, put = __cordl_internal_set__attributeName))::StringW _attributeName;

  /// @brief Field _keyType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__keyType, put = __cordl_internal_set__keyType))::Amazon::DynamoDBv2::KeyType* _keyType;

  /// @brief Method IsSetAttributeName, addr 0x104a4a4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAttributeName();

  /// @brief Method IsSetKeyType, addr 0x104a4c4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetKeyType();

  static inline ::Amazon::DynamoDBv2::Model::KeySchemaElement* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::KeySchemaElement* New_ctor(::StringW attributeName, ::Amazon::DynamoDBv2::KeyType* keyType);

  constexpr ::StringW const& __cordl_internal_get__attributeName() const;

  constexpr ::StringW& __cordl_internal_get__attributeName();

  constexpr ::Amazon::DynamoDBv2::KeyType*& __cordl_internal_get__keyType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::KeyType*> const& __cordl_internal_get__keyType() const;

  constexpr void __cordl_internal_set__attributeName(::StringW value);

  constexpr void __cordl_internal_set__keyType(::Amazon::DynamoDBv2::KeyType* value);

  /// @brief Method .ctor, addr 0x104a460, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x104a468, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, ::Amazon::DynamoDBv2::KeyType* keyType);

  /// @brief Method get_AttributeName, addr 0x104a494, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AttributeName();

  /// @brief Method get_KeyType, addr 0x104a4b4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::KeyType* get_KeyType();

  /// @brief Method set_AttributeName, addr 0x104a49c, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeName(::StringW value);

  /// @brief Method set_KeyType, addr 0x104a4bc, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyType(::Amazon::DynamoDBv2::KeyType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeySchemaElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeySchemaElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeySchemaElement(KeySchemaElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeySchemaElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeySchemaElement(KeySchemaElement const&) = delete;

  /// @brief Field _attributeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____attributeName;

  /// @brief Field _keyType, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::KeyType* ____keyType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::KeySchemaElement, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KeySchemaElement, ____attributeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KeySchemaElement, ____keyType) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::KeySchemaElement);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::KeySchemaElement*, "Amazon.DynamoDBv2.Model", "KeySchemaElement");
