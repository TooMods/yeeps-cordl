#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Condition)
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
class Condition;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Condition);
// Type: Amazon.DynamoDBv2.Model::Condition
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Condition*
class CORDL_TYPE Condition : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeValueList, put = set_AttributeValueList))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* AttributeValueList;

  __declspec(property(get = get_ComparisonOperator, put = set_ComparisonOperator))::Amazon::DynamoDBv2::ComparisonOperator* ComparisonOperator;

  /// @brief Field _attributeValueList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeValueList,
                      put = __cordl_internal_set__attributeValueList))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* _attributeValueList;

  /// @brief Field _comparisonOperator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__comparisonOperator, put = __cordl_internal_set__comparisonOperator))::Amazon::DynamoDBv2::ComparisonOperator* _comparisonOperator;

  /// @brief Method IsSetAttributeValueList, addr 0x1227abc, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributeValueList();

  /// @brief Method IsSetComparisonOperator, addr 0x1227b20, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetComparisonOperator();

  static inline ::Amazon::DynamoDBv2::Model::Condition* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__attributeValueList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__attributeValueList() const;

  constexpr ::Amazon::DynamoDBv2::ComparisonOperator*& __cordl_internal_get__comparisonOperator();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ComparisonOperator*> const& __cordl_internal_get__comparisonOperator() const;

  constexpr void __cordl_internal_set__attributeValueList(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__comparisonOperator(::Amazon::DynamoDBv2::ComparisonOperator* value);

  /// @brief Method .ctor, addr 0x1227a30, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributeValueList, addr 0x1227aac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* get_AttributeValueList();

  /// @brief Method get_ComparisonOperator, addr 0x1227b10, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ComparisonOperator* get_ComparisonOperator();

  /// @brief Method set_AttributeValueList, addr 0x1227ab4, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeValueList(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ComparisonOperator, addr 0x1227b18, size 0x8, virtual false, abstract: false, final false
  inline void set_ComparisonOperator(::Amazon::DynamoDBv2::ComparisonOperator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Condition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Condition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Condition(Condition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Condition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Condition(Condition const&) = delete;

  /// @brief Field _attributeValueList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* ____attributeValueList;

  /// @brief Field _comparisonOperator, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ComparisonOperator* ____comparisonOperator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Condition, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Condition, ____attributeValueList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Condition, ____comparisonOperator) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Condition);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Condition*, "Amazon.DynamoDBv2.Model", "Condition");
