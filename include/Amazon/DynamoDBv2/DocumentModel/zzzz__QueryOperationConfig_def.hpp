#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__SelectValues_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueryOperationConfig)
namespace Amazon::DynamoDBv2::DocumentModel {
struct ConditionalOperatorValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Expression;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class QueryFilter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct SelectValues;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class QueryOperationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig);
// Type: Amazon.DynamoDBv2.DocumentModel::QueryOperationConfig
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::QueryOperationConfig*
class CORDL_TYPE QueryOperationConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_BackwardSearch, put = set_BackwardSearch)) bool BackwardSearch;

  __declspec(property(get = get_CollectResults, put = set_CollectResults)) bool CollectResults;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ConditionalOperator;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_Filter, put = set_Filter))::Amazon::DynamoDBv2::DocumentModel::QueryFilter* Filter;

  __declspec(property(get = get_FilterExpression, put = set_FilterExpression))::Amazon::DynamoDBv2::DocumentModel::Expression* FilterExpression;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_KeyExpression, put = set_KeyExpression))::Amazon::DynamoDBv2::DocumentModel::Expression* KeyExpression;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_PaginationToken, put = set_PaginationToken))::StringW PaginationToken;

  __declspec(property(get = get_Select, put = set_Select))::Amazon::DynamoDBv2::DocumentModel::SelectValues Select;

  /// @brief Field <AttributesToGet>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributesToGet_k__BackingField,
                      put = __cordl_internal_set__AttributesToGet_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _AttributesToGet_k__BackingField;

  /// @brief Field <BackwardSearch>k__BackingField, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__BackwardSearch_k__BackingField, put = __cordl_internal_set__BackwardSearch_k__BackingField)) bool _BackwardSearch_k__BackingField;

  /// @brief Field <CollectResults>k__BackingField, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__CollectResults_k__BackingField, put = __cordl_internal_set__CollectResults_k__BackingField)) bool _CollectResults_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__ConditionalOperator_k__BackingField,
                      put = __cordl_internal_set__ConditionalOperator_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues _ConditionalOperator_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__ConsistentRead_k__BackingField, put = __cordl_internal_set__ConsistentRead_k__BackingField)) bool _ConsistentRead_k__BackingField;

  /// @brief Field <FilterExpression>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__FilterExpression_k__BackingField,
                      put = __cordl_internal_set__FilterExpression_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Expression* _FilterExpression_k__BackingField;

  /// @brief Field <Filter>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Filter_k__BackingField, put = __cordl_internal_set__Filter_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::QueryFilter* _Filter_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexName_k__BackingField, put = __cordl_internal_set__IndexName_k__BackingField))::StringW _IndexName_k__BackingField;

  /// @brief Field <KeyExpression>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__KeyExpression_k__BackingField,
                      put = __cordl_internal_set__KeyExpression_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Expression* _KeyExpression_k__BackingField;

  /// @brief Field <Limit>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__Limit_k__BackingField, put = __cordl_internal_set__Limit_k__BackingField)) int32_t _Limit_k__BackingField;

  /// @brief Field <PaginationToken>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__PaginationToken_k__BackingField, put = __cordl_internal_set__PaginationToken_k__BackingField))::StringW _PaginationToken_k__BackingField;

  /// @brief Field <Select>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__Select_k__BackingField, put = __cordl_internal_set__Select_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::SelectValues _Select_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__AttributesToGet_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__AttributesToGet_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__BackwardSearch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__BackwardSearch_k__BackingField();

  constexpr bool const& __cordl_internal_get__CollectResults_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CollectResults_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const& __cordl_internal_get__ConditionalOperator_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& __cordl_internal_get__ConditionalOperator_k__BackingField();

  constexpr bool const& __cordl_internal_get__ConsistentRead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ConsistentRead_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Expression*& __cordl_internal_get__FilterExpression_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Expression*> const& __cordl_internal_get__FilterExpression_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryFilter*& __cordl_internal_get__Filter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::QueryFilter*> const& __cordl_internal_get__Filter_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__IndexName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__IndexName_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Expression*& __cordl_internal_get__KeyExpression_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Expression*> const& __cordl_internal_get__KeyExpression_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__Limit_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Limit_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PaginationToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PaginationToken_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues const& __cordl_internal_get__Select_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues& __cordl_internal_get__Select_k__BackingField();

  constexpr void __cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__BackwardSearch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CollectResults_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  constexpr void __cordl_internal_set__ConsistentRead_k__BackingField(bool value);

  constexpr void __cordl_internal_set__FilterExpression_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  constexpr void __cordl_internal_set__Filter_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::QueryFilter* value);

  constexpr void __cordl_internal_set__IndexName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__KeyExpression_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  constexpr void __cordl_internal_set__Limit_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PaginationToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Select_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::SelectValues value);

  /// @brief Method .ctor, addr 0x141f5e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributesToGet, addr 0x141f6a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_BackwardSearch, addr 0x141f6c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_BackwardSearch();

  /// @brief Method get_CollectResults, addr 0x141f6fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_CollectResults();

  /// @brief Method get_ConditionalOperator, addr 0x141f710, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues get_ConditionalOperator();

  /// @brief Method get_ConsistentRead, addr 0x141f694, size 0x8, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_Filter, addr 0x141f684, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* get_Filter();

  /// @brief Method get_FilterExpression, addr 0x141f674, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Expression* get_FilterExpression();

  /// @brief Method get_IndexName, addr 0x141f6dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_KeyExpression, addr 0x141f664, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Expression* get_KeyExpression();

  /// @brief Method get_Limit, addr 0x141f6b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_PaginationToken, addr 0x141f720, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PaginationToken();

  /// @brief Method get_Select, addr 0x141f6ec, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::SelectValues get_Select();

  /// @brief Method set_AttributesToGet, addr 0x141f6b0, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_BackwardSearch, addr 0x141f6d0, size 0xc, virtual false, abstract: false, final false
  inline void set_BackwardSearch(bool value);

  /// @brief Method set_CollectResults, addr 0x141f704, size 0xc, virtual false, abstract: false, final false
  inline void set_CollectResults(bool value);

  /// @brief Method set_ConditionalOperator, addr 0x141f718, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  /// @brief Method set_ConsistentRead, addr 0x141f69c, size 0xc, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_Filter, addr 0x141f68c, size 0x8, virtual false, abstract: false, final false
  inline void set_Filter(::Amazon::DynamoDBv2::DocumentModel::QueryFilter* value);

  /// @brief Method set_FilterExpression, addr 0x141f67c, size 0x8, virtual false, abstract: false, final false
  inline void set_FilterExpression(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  /// @brief Method set_IndexName, addr 0x141f6e4, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_KeyExpression, addr 0x141f66c, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyExpression(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  /// @brief Method set_Limit, addr 0x141f6c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_PaginationToken, addr 0x141f728, size 0x8, virtual false, abstract: false, final false
  inline void set_PaginationToken(::StringW value);

  /// @brief Method set_Select, addr 0x141f6f4, size 0x8, virtual false, abstract: false, final false
  inline void set_Select(::Amazon::DynamoDBv2::DocumentModel::SelectValues value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryOperationConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryOperationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryOperationConfig(QueryOperationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryOperationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryOperationConfig(QueryOperationConfig const&) = delete;

  /// @brief Field <KeyExpression>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Expression* ____KeyExpression_k__BackingField;

  /// @brief Field <FilterExpression>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Expression* ____FilterExpression_k__BackingField;

  /// @brief Field <Filter>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* ____Filter_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____ConsistentRead_k__BackingField;

  /// @brief Field <AttributesToGet>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____AttributesToGet_k__BackingField;

  /// @brief Field <Limit>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____Limit_k__BackingField;

  /// @brief Field <BackwardSearch>k__BackingField, offset: 0x3c, size: 0x1, def value: None
  bool ____BackwardSearch_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____IndexName_k__BackingField;

  /// @brief Field <Select>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::SelectValues ____Select_k__BackingField;

  /// @brief Field <CollectResults>k__BackingField, offset: 0x4c, size: 0x1, def value: None
  bool ____CollectResults_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset: 0x50, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ____ConditionalOperator_k__BackingField;

  /// @brief Field <PaginationToken>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____PaginationToken_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____KeyExpression_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____FilterExpression_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____Filter_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____ConsistentRead_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____AttributesToGet_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____Limit_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____BackwardSearch_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____IndexName_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____Select_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____CollectResults_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____ConditionalOperator_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig, ____PaginationToken_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig*, "Amazon.DynamoDBv2.DocumentModel", "QueryOperationConfig");
