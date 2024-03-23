#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeysAndAttributes)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class KeysAndAttributes;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::KeysAndAttributes);
// Type: Amazon.DynamoDBv2.Model::KeysAndAttributes
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::KeysAndAttributes*
class CORDL_TYPE KeysAndAttributes : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_ExpressionAttributeNames, put = set_ExpressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ExpressionAttributeNames;

  __declspec(property(get = get_Keys,
                      put = set_Keys))::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* Keys;

  __declspec(property(get = get_ProjectionExpression, put = set_ProjectionExpression))::StringW ProjectionExpression;

  /// @brief Field _attributesToGet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__attributesToGet, put = __cordl_internal_set__attributesToGet))::System::Collections::Generic::List_1<::StringW>* _attributesToGet;

  /// @brief Field _consistentRead, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get__consistentRead, put = __cordl_internal_set__consistentRead))::System::Nullable_1<bool> _consistentRead;

  /// @brief Field _expressionAttributeNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__expressionAttributeNames,
                      put = __cordl_internal_set__expressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _expressionAttributeNames;

  /// @brief Field _keys, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get__keys,
               put = __cordl_internal_set__keys))::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* _keys;

  /// @brief Field _projectionExpression, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__projectionExpression, put = __cordl_internal_set__projectionExpression))::StringW _projectionExpression;

  /// @brief Method IsSetAttributesToGet, addr 0x104a13c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributesToGet();

  /// @brief Method IsSetConsistentRead, addr 0x104a234, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetConsistentRead();

  /// @brief Method IsSetExpressionAttributeNames, addr 0x104a280, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeNames();

  /// @brief Method IsSetKeys, addr 0x104a2e8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetKeys();

  /// @brief Method IsSetProjectionExpression, addr 0x104a34c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProjectionExpression();

  static inline ::Amazon::DynamoDBv2::Model::KeysAndAttributes* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__attributesToGet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__attributesToGet() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__consistentRead() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__consistentRead();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__expressionAttributeNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__expressionAttributeNames() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*& __cordl_internal_get__keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*> const&
  __cordl_internal_get__keys() const;

  constexpr ::StringW const& __cordl_internal_get__projectionExpression() const;

  constexpr ::StringW& __cordl_internal_get__projectionExpression();

  constexpr void __cordl_internal_set__attributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__consistentRead(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__keys(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* value);

  constexpr void __cordl_internal_set__projectionExpression(::StringW value);

  /// @brief Method .ctor, addr 0x104a35c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributesToGet, addr 0x104a12c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_ConsistentRead, addr 0x104a190, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_ExpressionAttributeNames, addr 0x104a270, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_Keys, addr 0x104a2d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* get_Keys();

  /// @brief Method get_ProjectionExpression, addr 0x104a33c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProjectionExpression();

  /// @brief Method set_AttributesToGet, addr 0x104a134, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_ConsistentRead, addr 0x104a1cc, size 0x68, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_ExpressionAttributeNames, addr 0x104a278, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Keys, addr 0x104a2e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Keys(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* value);

  /// @brief Method set_ProjectionExpression, addr 0x104a344, size 0x8, virtual false, abstract: false, final false
  inline void set_ProjectionExpression(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeysAndAttributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeysAndAttributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeysAndAttributes(KeysAndAttributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeysAndAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeysAndAttributes(KeysAndAttributes const&) = delete;

  /// @brief Field _attributesToGet, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____attributesToGet;

  /// @brief Field _consistentRead, offset: 0x18, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____consistentRead;

  /// @brief Field _expressionAttributeNames, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____expressionAttributeNames;

  /// @brief Field _keys, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* ____keys;

  /// @brief Field _projectionExpression, offset: 0x30, size: 0x8, def value: None
  ::StringW ____projectionExpression;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::KeysAndAttributes, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KeysAndAttributes, ____attributesToGet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KeysAndAttributes, ____consistentRead) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KeysAndAttributes, ____expressionAttributeNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KeysAndAttributes, ____keys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KeysAndAttributes, ____projectionExpression) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::KeysAndAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::KeysAndAttributes*, "Amazon.DynamoDBv2.Model", "KeysAndAttributes");
