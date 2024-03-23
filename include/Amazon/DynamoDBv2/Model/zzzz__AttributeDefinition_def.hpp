#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttributeDefinition)
namespace Amazon::DynamoDBv2 {
class ScalarAttributeType;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class AttributeDefinition;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::AttributeDefinition);
// Type: Amazon.DynamoDBv2.Model::AttributeDefinition
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::AttributeDefinition*
class CORDL_TYPE AttributeDefinition : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeName, put = set_AttributeName))::StringW AttributeName;

  __declspec(property(get = get_AttributeType, put = set_AttributeType))::Amazon::DynamoDBv2::ScalarAttributeType* AttributeType;

  /// @brief Field _attributeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeName, put = __cordl_internal_set__attributeName))::StringW _attributeName;

  /// @brief Field _attributeType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeType, put = __cordl_internal_set__attributeType))::Amazon::DynamoDBv2::ScalarAttributeType* _attributeType;

  /// @brief Method IsSetAttributeName, addr 0x1224478, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAttributeName();

  /// @brief Method IsSetAttributeType, addr 0x1224498, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetAttributeType();

  static inline ::Amazon::DynamoDBv2::Model::AttributeDefinition* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::AttributeDefinition* New_ctor(::StringW attributeName, ::Amazon::DynamoDBv2::ScalarAttributeType* attributeType);

  constexpr ::StringW const& __cordl_internal_get__attributeName() const;

  constexpr ::StringW& __cordl_internal_get__attributeName();

  constexpr ::Amazon::DynamoDBv2::ScalarAttributeType*& __cordl_internal_get__attributeType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ScalarAttributeType*> const& __cordl_internal_get__attributeType() const;

  constexpr void __cordl_internal_set__attributeName(::StringW value);

  constexpr void __cordl_internal_set__attributeType(::Amazon::DynamoDBv2::ScalarAttributeType* value);

  /// @brief Method .ctor, addr 0x1224434, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x122443c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName, ::Amazon::DynamoDBv2::ScalarAttributeType* attributeType);

  /// @brief Method get_AttributeName, addr 0x1224468, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AttributeName();

  /// @brief Method get_AttributeType, addr 0x1224488, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ScalarAttributeType* get_AttributeType();

  /// @brief Method set_AttributeName, addr 0x1224470, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeName(::StringW value);

  /// @brief Method set_AttributeType, addr 0x1224490, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeType(::Amazon::DynamoDBv2::ScalarAttributeType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeDefinition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeDefinition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeDefinition(AttributeDefinition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeDefinition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeDefinition(AttributeDefinition const&) = delete;

  /// @brief Field _attributeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____attributeName;

  /// @brief Field _attributeType, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ScalarAttributeType* ____attributeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::AttributeDefinition, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeDefinition, ____attributeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::AttributeDefinition, ____attributeType) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::AttributeDefinition);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::AttributeDefinition*, "Amazon.DynamoDBv2.Model", "AttributeDefinition");
