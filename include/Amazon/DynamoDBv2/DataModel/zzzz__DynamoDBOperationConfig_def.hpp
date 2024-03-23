#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContextConfig_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBOperationConfig)
namespace Amazon::DynamoDBv2::DataModel {
class ScanCondition;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ConditionalOperatorValues;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBOperationConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig);
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBOperationConfig
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBOperationConfig*
class CORDL_TYPE DynamoDBOperationConfig : public ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig {
public:
  // Declarations
  __declspec(property(get = get_BackwardQuery, put = set_BackwardQuery))::System::Nullable_1<bool> BackwardQuery;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ConditionalOperator;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_IsIndexOperation)) bool IsIndexOperation;

  __declspec(property(get = get_OverrideTableName, put = set_OverrideTableName))::StringW OverrideTableName;

  __declspec(property(get = get_QueryFilter, put = set_QueryFilter))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* QueryFilter;

  /// @brief Field <BackwardQuery>k__BackingField, offset 0x38, size 0x2
  __declspec(property(get = __cordl_internal_get__BackwardQuery_k__BackingField, put = __cordl_internal_set__BackwardQuery_k__BackingField))::System::Nullable_1<bool> _BackwardQuery_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__ConditionalOperator_k__BackingField,
                      put = __cordl_internal_set__ConditionalOperator_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues _ConditionalOperator_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexName_k__BackingField, put = __cordl_internal_set__IndexName_k__BackingField))::StringW _IndexName_k__BackingField;

  /// @brief Field <OverrideTableName>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__OverrideTableName_k__BackingField, put = __cordl_internal_set__OverrideTableName_k__BackingField))::StringW _OverrideTableName_k__BackingField;

  /// @brief Field <QueryFilter>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__QueryFilter_k__BackingField,
                      put = __cordl_internal_set__QueryFilter_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* _QueryFilter_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__BackwardQuery_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__BackwardQuery_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const& __cordl_internal_get__ConditionalOperator_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& __cordl_internal_get__ConditionalOperator_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__IndexName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__IndexName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__OverrideTableName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__OverrideTableName_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*& __cordl_internal_get__QueryFilter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*> const&
  __cordl_internal_get__QueryFilter_k__BackingField() const;

  constexpr void __cordl_internal_set__BackwardQuery_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  constexpr void __cordl_internal_set__IndexName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__OverrideTableName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__QueryFilter_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* value);

  /// @brief Method .ctor, addr 0x142293c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BackwardQuery, addr 0x14228fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_BackwardQuery();

  /// @brief Method get_ConditionalOperator, addr 0x142291c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues get_ConditionalOperator();

  /// @brief Method get_IndexName, addr 0x142290c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_IsIndexOperation, addr 0x14229b8, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsIndexOperation();

  /// @brief Method get_OverrideTableName, addr 0x14228ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_OverrideTableName();

  /// @brief Method get_QueryFilter, addr 0x142292c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* get_QueryFilter();

  /// @brief Method set_BackwardQuery, addr 0x1422904, size 0x8, virtual false, abstract: false, final false
  inline void set_BackwardQuery(::System::Nullable_1<bool> value);

  /// @brief Method set_ConditionalOperator, addr 0x1422924, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  /// @brief Method set_IndexName, addr 0x1422914, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_OverrideTableName, addr 0x14228f4, size 0x8, virtual false, abstract: false, final false
  inline void set_OverrideTableName(::StringW value);

  /// @brief Method set_QueryFilter, addr 0x1422934, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryFilter(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBOperationConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBOperationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBOperationConfig(DynamoDBOperationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBOperationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBOperationConfig(DynamoDBOperationConfig const&) = delete;

  /// @brief Field <OverrideTableName>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____OverrideTableName_k__BackingField;

  /// @brief Field <BackwardQuery>k__BackingField, offset: 0x38, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____BackwardQuery_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____IndexName_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ____ConditionalOperator_k__BackingField;

  /// @brief Field <QueryFilter>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* ____QueryFilter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig, ____OverrideTableName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig, ____BackwardQuery_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig, ____IndexName_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig, ____ConditionalOperator_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig, ____QueryFilter_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*, "Amazon.DynamoDBv2.DataModel", "DynamoDBOperationConfig");
