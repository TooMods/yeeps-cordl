#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExpectedAttributeValue)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2 {
class ComparisonOperator;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ExpectedAttributeValue;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ExpectedAttributeValue);
// Type: Amazon.DynamoDBv2.Model::ExpectedAttributeValue
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ExpectedAttributeValue*
class CORDL_TYPE ExpectedAttributeValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeValueList, put = set_AttributeValueList))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* AttributeValueList;

  __declspec(property(get = get_ComparisonOperator, put = set_ComparisonOperator))::Amazon::DynamoDBv2::ComparisonOperator* ComparisonOperator;

  __declspec(property(get = get_Exists, put = set_Exists)) bool Exists;

  __declspec(property(get = get_Value, put = set_Value))::Amazon::DynamoDBv2::Model::AttributeValue* Value;

  /// @brief Field _attributeValueList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeValueList,
                      put = __cordl_internal_set__attributeValueList))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* _attributeValueList;

  /// @brief Field _comparisonOperator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__comparisonOperator, put = __cordl_internal_set__comparisonOperator))::Amazon::DynamoDBv2::ComparisonOperator* _comparisonOperator;

  /// @brief Field _exists, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__exists, put = __cordl_internal_set__exists))::System::Nullable_1<bool> _exists;

  /// @brief Field _value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::Amazon::DynamoDBv2::Model::AttributeValue* _value;

  /// @brief Method IsSetAttributeValueList, addr 0x122b2c8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributeValueList();

  /// @brief Method IsSetComparisonOperator, addr 0x122b32c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetComparisonOperator();

  /// @brief Method IsSetExists, addr 0x122b430, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetExists();

  /// @brief Method IsSetValue, addr 0x122b47c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetValue();

  static inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* New_ctor(bool exists);

  static inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* New_ctor(::Amazon::DynamoDBv2::Model::AttributeValue* value);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__attributeValueList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__attributeValueList() const;

  constexpr ::Amazon::DynamoDBv2::ComparisonOperator*& __cordl_internal_get__comparisonOperator();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ComparisonOperator*> const& __cordl_internal_get__comparisonOperator() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__exists() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__exists();

  constexpr ::Amazon::DynamoDBv2::Model::AttributeValue*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AttributeValue*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__attributeValueList(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__comparisonOperator(::Amazon::DynamoDBv2::ComparisonOperator* value);

  constexpr void __cordl_internal_set__exists(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__value(::Amazon::DynamoDBv2::Model::AttributeValue* value);

  /// @brief Method .ctor, addr 0x122b0f0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x122b1fc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(bool exists);

  /// @brief Method .ctor, addr 0x122b16c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::Model::AttributeValue* value);

  /// @brief Method get_AttributeValueList, addr 0x122b2b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* get_AttributeValueList();

  /// @brief Method get_ComparisonOperator, addr 0x122b31c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ComparisonOperator* get_ComparisonOperator();

  /// @brief Method get_Exists, addr 0x122b38c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_Exists();

  /// @brief Method get_Value, addr 0x122b46c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::AttributeValue* get_Value();

  /// @brief Method set_AttributeValueList, addr 0x122b2c0, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeValueList(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ComparisonOperator, addr 0x122b324, size 0x8, virtual false, abstract: false, final false
  inline void set_ComparisonOperator(::Amazon::DynamoDBv2::ComparisonOperator* value);

  /// @brief Method set_Exists, addr 0x122b3c8, size 0x68, virtual false, abstract: false, final false
  inline void set_Exists(bool value);

  /// @brief Method set_Value, addr 0x122b474, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::Amazon::DynamoDBv2::Model::AttributeValue* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpectedAttributeValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpectedAttributeValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpectedAttributeValue(ExpectedAttributeValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpectedAttributeValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpectedAttributeValue(ExpectedAttributeValue const&) = delete;

  /// @brief Field _attributeValueList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* ____attributeValueList;

  /// @brief Field _comparisonOperator, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ComparisonOperator* ____comparisonOperator;

  /// @brief Field _exists, offset: 0x20, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____exists;

  /// @brief Field _value, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AttributeValue* ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExpectedAttributeValue, ____attributeValueList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExpectedAttributeValue, ____comparisonOperator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExpectedAttributeValue, ____exists) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ExpectedAttributeValue, ____value) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ExpectedAttributeValue);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*, "Amazon.DynamoDBv2.Model", "ExpectedAttributeValue");
