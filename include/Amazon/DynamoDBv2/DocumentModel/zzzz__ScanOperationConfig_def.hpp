#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__SelectValues_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScanOperationConfig)
namespace Amazon::DynamoDBv2::DocumentModel {
struct ConditionalOperatorValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Expression;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class ScanFilter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct SelectValues;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class ScanOperationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig);
// Type: Amazon.DynamoDBv2.DocumentModel::ScanOperationConfig
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::ScanOperationConfig*
class CORDL_TYPE ScanOperationConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_CollectResults, put = set_CollectResults)) bool CollectResults;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ConditionalOperator;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_Filter, put = set_Filter))::Amazon::DynamoDBv2::DocumentModel::ScanFilter* Filter;

  __declspec(property(get = get_FilterExpression, put = set_FilterExpression))::Amazon::DynamoDBv2::DocumentModel::Expression* FilterExpression;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_PaginationToken, put = set_PaginationToken))::StringW PaginationToken;

  __declspec(property(get = get_Segment, put = set_Segment)) int32_t Segment;

  __declspec(property(get = get_Select, put = set_Select))::Amazon::DynamoDBv2::DocumentModel::SelectValues Select;

  __declspec(property(get = get_TotalSegments, put = set_TotalSegments)) int32_t TotalSegments;

  /// @brief Field <AttributesToGet>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributesToGet_k__BackingField,
                      put = __cordl_internal_set__AttributesToGet_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _AttributesToGet_k__BackingField;

  /// @brief Field <CollectResults>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__CollectResults_k__BackingField, put = __cordl_internal_set__CollectResults_k__BackingField)) bool _CollectResults_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__ConditionalOperator_k__BackingField,
                      put = __cordl_internal_set__ConditionalOperator_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues _ConditionalOperator_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__ConsistentRead_k__BackingField, put = __cordl_internal_set__ConsistentRead_k__BackingField)) bool _ConsistentRead_k__BackingField;

  /// @brief Field <FilterExpression>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__FilterExpression_k__BackingField,
                      put = __cordl_internal_set__FilterExpression_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Expression* _FilterExpression_k__BackingField;

  /// @brief Field <Filter>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Filter_k__BackingField, put = __cordl_internal_set__Filter_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ScanFilter* _Filter_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexName_k__BackingField, put = __cordl_internal_set__IndexName_k__BackingField))::StringW _IndexName_k__BackingField;

  /// @brief Field <Limit>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__Limit_k__BackingField, put = __cordl_internal_set__Limit_k__BackingField)) int32_t _Limit_k__BackingField;

  /// @brief Field <PaginationToken>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__PaginationToken_k__BackingField, put = __cordl_internal_set__PaginationToken_k__BackingField))::StringW _PaginationToken_k__BackingField;

  /// @brief Field <Segment>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__Segment_k__BackingField, put = __cordl_internal_set__Segment_k__BackingField)) int32_t _Segment_k__BackingField;

  /// @brief Field <Select>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__Select_k__BackingField, put = __cordl_internal_set__Select_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::SelectValues _Select_k__BackingField;

  /// @brief Field <TotalSegments>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__TotalSegments_k__BackingField, put = __cordl_internal_set__TotalSegments_k__BackingField)) int32_t _TotalSegments_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__AttributesToGet_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__AttributesToGet_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__CollectResults_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CollectResults_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const& __cordl_internal_get__ConditionalOperator_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& __cordl_internal_get__ConditionalOperator_k__BackingField();

  constexpr bool const& __cordl_internal_get__ConsistentRead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ConsistentRead_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Expression*& __cordl_internal_get__FilterExpression_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Expression*> const& __cordl_internal_get__FilterExpression_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanFilter*& __cordl_internal_get__Filter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::ScanFilter*> const& __cordl_internal_get__Filter_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__IndexName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__IndexName_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Limit_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Limit_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PaginationToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PaginationToken_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Segment_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Segment_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues const& __cordl_internal_get__Select_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues& __cordl_internal_get__Select_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__TotalSegments_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__TotalSegments_k__BackingField();

  constexpr void __cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__CollectResults_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  constexpr void __cordl_internal_set__ConsistentRead_k__BackingField(bool value);

  constexpr void __cordl_internal_set__FilterExpression_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  constexpr void __cordl_internal_set__Filter_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ScanFilter* value);

  constexpr void __cordl_internal_set__IndexName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Limit_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PaginationToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Segment_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Select_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::SelectValues value);

  constexpr void __cordl_internal_set__TotalSegments_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x141f49c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributesToGet, addr 0x141f520, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_CollectResults, addr 0x141f5b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_CollectResults();

  /// @brief Method get_ConditionalOperator, addr 0x141f5c8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues get_ConditionalOperator();

  /// @brief Method get_ConsistentRead, addr 0x141f530, size 0x8, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_Filter, addr 0x141f564, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ScanFilter* get_Filter();

  /// @brief Method get_FilterExpression, addr 0x141f554, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Expression* get_FilterExpression();

  /// @brief Method get_IndexName, addr 0x141f574, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_Limit, addr 0x141f544, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_PaginationToken, addr 0x141f5d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PaginationToken();

  /// @brief Method get_Segment, addr 0x141f5a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Segment();

  /// @brief Method get_Select, addr 0x141f584, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::SelectValues get_Select();

  /// @brief Method get_TotalSegments, addr 0x141f594, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TotalSegments();

  /// @brief Method set_AttributesToGet, addr 0x141f528, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_CollectResults, addr 0x141f5bc, size 0xc, virtual false, abstract: false, final false
  inline void set_CollectResults(bool value);

  /// @brief Method set_ConditionalOperator, addr 0x141f5d0, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  /// @brief Method set_ConsistentRead, addr 0x141f538, size 0xc, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_Filter, addr 0x141f56c, size 0x8, virtual false, abstract: false, final false
  inline void set_Filter(::Amazon::DynamoDBv2::DocumentModel::ScanFilter* value);

  /// @brief Method set_FilterExpression, addr 0x141f55c, size 0x8, virtual false, abstract: false, final false
  inline void set_FilterExpression(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  /// @brief Method set_IndexName, addr 0x141f57c, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_Limit, addr 0x141f54c, size 0x8, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_PaginationToken, addr 0x141f5e0, size 0x8, virtual false, abstract: false, final false
  inline void set_PaginationToken(::StringW value);

  /// @brief Method set_Segment, addr 0x141f5ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Segment(int32_t value);

  /// @brief Method set_Select, addr 0x141f58c, size 0x8, virtual false, abstract: false, final false
  inline void set_Select(::Amazon::DynamoDBv2::DocumentModel::SelectValues value);

  /// @brief Method set_TotalSegments, addr 0x141f59c, size 0x8, virtual false, abstract: false, final false
  inline void set_TotalSegments(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScanOperationConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScanOperationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScanOperationConfig(ScanOperationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScanOperationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScanOperationConfig(ScanOperationConfig const&) = delete;

  /// @brief Field <AttributesToGet>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____AttributesToGet_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____ConsistentRead_k__BackingField;

  /// @brief Field <Limit>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____Limit_k__BackingField;

  /// @brief Field <FilterExpression>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Expression* ____FilterExpression_k__BackingField;

  /// @brief Field <Filter>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ScanFilter* ____Filter_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____IndexName_k__BackingField;

  /// @brief Field <Select>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::SelectValues ____Select_k__BackingField;

  /// @brief Field <TotalSegments>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____TotalSegments_k__BackingField;

  /// @brief Field <Segment>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____Segment_k__BackingField;

  /// @brief Field <CollectResults>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____CollectResults_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ____ConditionalOperator_k__BackingField;

  /// @brief Field <PaginationToken>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____PaginationToken_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____AttributesToGet_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____ConsistentRead_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____Limit_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____FilterExpression_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____Filter_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____IndexName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____Select_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____TotalSegments_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____Segment_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____CollectResults_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____ConditionalOperator_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig, ____PaginationToken_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*, "Amazon.DynamoDBv2.DocumentModel", "ScanOperationConfig");
