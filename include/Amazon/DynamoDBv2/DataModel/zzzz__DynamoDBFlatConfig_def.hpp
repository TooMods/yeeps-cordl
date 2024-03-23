#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamoDBFlatConfig)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContextConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBOperationConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class ScanCondition;
}
namespace Amazon::DynamoDBv2::DataModel {
class __DynamoDBFlatConfig__OperationState;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ConditionalOperatorValues;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace Amazon::Util {
class CircularReferenceTracking;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class __DynamoDBFlatConfig__OperationState;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState);
// Type: ::OperationState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::DynamoDBFlatConfig::OperationState*
class CORDL_TYPE __DynamoDBFlatConfig__OperationState : public ::System::Object {
public:
  // Declarations
  /// @brief Field referenceTracking, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_referenceTracking, put = __cordl_internal_set_referenceTracking))::Amazon::Util::CircularReferenceTracking* referenceTracking;

  static inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* New_ctor();

  /// @brief Method Track, addr 0x1423084, size 0x1c, virtual false, abstract: false, final false
  inline ::System::IDisposable* Track(::System::Object* target);

  constexpr ::Amazon::Util::CircularReferenceTracking*& __cordl_internal_get_referenceTracking();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::CircularReferenceTracking*> const& __cordl_internal_get_referenceTracking() const;

  constexpr void __cordl_internal_set_referenceTracking(::Amazon::Util::CircularReferenceTracking* value);

  /// @brief Method .ctor, addr 0x1422e2c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBFlatConfig__OperationState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBFlatConfig__OperationState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBFlatConfig__OperationState(__DynamoDBFlatConfig__OperationState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBFlatConfig__OperationState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBFlatConfig__OperationState(__DynamoDBFlatConfig__OperationState const&) = delete;

  /// @brief Field referenceTracking, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::CircularReferenceTracking* ___referenceTracking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState, ___referenceTracking) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBFlatConfig
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBFlatConfig*
class CORDL_TYPE DynamoDBFlatConfig : public ::System::Object {
public:
  // Declarations
  using OperationState = ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState;

  __declspec(property(get = get_BackwardQuery, put = set_BackwardQuery))::System::Nullable_1<bool> BackwardQuery;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ConditionalOperator;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead))::System::Nullable_1<bool> ConsistentRead;

  __declspec(property(get = get_Conversion, put = set_Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* Conversion;

  /// @brief Field DefaultIndexName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultIndexName, put = setStaticF_DefaultIndexName))::StringW DefaultIndexName;

  __declspec(property(get = get_IgnoreNullValues, put = set_IgnoreNullValues))::System::Nullable_1<bool> IgnoreNullValues;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_IsEmptyStringValueEnabled, put = set_IsEmptyStringValueEnabled)) bool IsEmptyStringValueEnabled;

  __declspec(property(get = get_IsIndexOperation)) bool IsIndexOperation;

  __declspec(property(get = get_OverrideTableName, put = set_OverrideTableName))::StringW OverrideTableName;

  __declspec(property(get = get_QueryFilter, put = set_QueryFilter))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* QueryFilter;

  __declspec(property(get = get_SkipVersionCheck, put = set_SkipVersionCheck))::System::Nullable_1<bool> SkipVersionCheck;

  __declspec(property(get = get_State, put = set_State))::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* State;

  __declspec(property(get = get_TableNamePrefix, put = set_TableNamePrefix))::StringW TableNamePrefix;

  /// @brief Field <BackwardQuery>k__BackingField, offset 0x30, size 0x2
  __declspec(property(get = __cordl_internal_get__BackwardQuery_k__BackingField, put = __cordl_internal_set__BackwardQuery_k__BackingField))::System::Nullable_1<bool> _BackwardQuery_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__ConditionalOperator_k__BackingField,
                      put = __cordl_internal_set__ConditionalOperator_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues _ConditionalOperator_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__ConsistentRead_k__BackingField,
                      put = __cordl_internal_set__ConsistentRead_k__BackingField))::System::Nullable_1<bool> _ConsistentRead_k__BackingField;

  /// @brief Field <Conversion>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Conversion_k__BackingField,
                      put = __cordl_internal_set__Conversion_k__BackingField))::Amazon::DynamoDBv2::DynamoDBEntryConversion* _Conversion_k__BackingField;

  /// @brief Field <IgnoreNullValues>k__BackingField, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__IgnoreNullValues_k__BackingField,
                      put = __cordl_internal_set__IgnoreNullValues_k__BackingField))::System::Nullable_1<bool> _IgnoreNullValues_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexName_k__BackingField, put = __cordl_internal_set__IndexName_k__BackingField))::StringW _IndexName_k__BackingField;

  /// @brief Field <IsEmptyStringValueEnabled>k__BackingField, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField,
                      put = __cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField)) bool _IsEmptyStringValueEnabled_k__BackingField;

  /// @brief Field <OverrideTableName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__OverrideTableName_k__BackingField, put = __cordl_internal_set__OverrideTableName_k__BackingField))::StringW _OverrideTableName_k__BackingField;

  /// @brief Field <QueryFilter>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__QueryFilter_k__BackingField,
                      put = __cordl_internal_set__QueryFilter_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* _QueryFilter_k__BackingField;

  /// @brief Field <SkipVersionCheck>k__BackingField, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get__SkipVersionCheck_k__BackingField,
                      put = __cordl_internal_set__SkipVersionCheck_k__BackingField))::System::Nullable_1<bool> _SkipVersionCheck_k__BackingField;

  /// @brief Field <State>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__State_k__BackingField,
                      put = __cordl_internal_set__State_k__BackingField))::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* _State_k__BackingField;

  /// @brief Field <TableNamePrefix>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__TableNamePrefix_k__BackingField, put = __cordl_internal_set__TableNamePrefix_k__BackingField))::StringW _TableNamePrefix_k__BackingField;

  /// @brief Field _emptyContextConfig, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__emptyContextConfig, put = setStaticF__emptyContextConfig))::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* _emptyContextConfig;

  /// @brief Field _emptyOperationConfig, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__emptyOperationConfig, put = setStaticF__emptyOperationConfig))::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* _emptyOperationConfig;

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                              ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* contextConfig);

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__BackwardQuery_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__BackwardQuery_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const& __cordl_internal_get__ConditionalOperator_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& __cordl_internal_get__ConditionalOperator_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__ConsistentRead_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__ConsistentRead_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get__Conversion_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get__Conversion_k__BackingField() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__IgnoreNullValues_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__IgnoreNullValues_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__IndexName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__IndexName_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__OverrideTableName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__OverrideTableName_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*& __cordl_internal_get__QueryFilter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*> const&
  __cordl_internal_get__QueryFilter_k__BackingField() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__SkipVersionCheck_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__SkipVersionCheck_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*& __cordl_internal_get__State_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*> const& __cordl_internal_get__State_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__TableNamePrefix_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TableNamePrefix_k__BackingField();

  constexpr void __cordl_internal_set__BackwardQuery_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  constexpr void __cordl_internal_set__ConsistentRead_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  constexpr void __cordl_internal_set__IgnoreNullValues_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__IndexName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__OverrideTableName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__QueryFilter_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* value);

  constexpr void __cordl_internal_set__SkipVersionCheck_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__State_k__BackingField(::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* value);

  constexpr void __cordl_internal_set__TableNamePrefix_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1422ab8, size 0x374, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* contextConfig);

  static inline ::StringW getStaticF_DefaultIndexName();

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* getStaticF__emptyContextConfig();

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* getStaticF__emptyOperationConfig();

  /// @brief Method get_BackwardQuery, addr 0x1422efc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_BackwardQuery();

  /// @brief Method get_ConditionalOperator, addr 0x1422f1c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues get_ConditionalOperator();

  /// @brief Method get_ConsistentRead, addr 0x1422e98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_ConsistentRead();

  /// @brief Method get_Conversion, addr 0x1422f3c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_Conversion();

  /// @brief Method get_IgnoreNullValues, addr 0x1422ec8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_IgnoreNullValues();

  /// @brief Method get_IndexName, addr 0x1422f0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_IsEmptyStringValueEnabled, addr 0x1422ed8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsEmptyStringValueEnabled();

  /// @brief Method get_IsIndexOperation, addr 0x1422f4c, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsIndexOperation();

  /// @brief Method get_OverrideTableName, addr 0x1422eec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_OverrideTableName();

  /// @brief Method get_QueryFilter, addr 0x1422f2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* get_QueryFilter();

  /// @brief Method get_SkipVersionCheck, addr 0x1422ea8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_SkipVersionCheck();

  /// @brief Method get_State, addr 0x1422f6c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* get_State();

  /// @brief Method get_TableNamePrefix, addr 0x1422eb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableNamePrefix();

  static inline void setStaticF_DefaultIndexName(::StringW value);

  static inline void setStaticF__emptyContextConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* value);

  static inline void setStaticF__emptyOperationConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* value);

  /// @brief Method set_BackwardQuery, addr 0x1422f04, size 0x8, virtual false, abstract: false, final false
  inline void set_BackwardQuery(::System::Nullable_1<bool> value);

  /// @brief Method set_ConditionalOperator, addr 0x1422f24, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  /// @brief Method set_ConsistentRead, addr 0x1422ea0, size 0x8, virtual false, abstract: false, final false
  inline void set_ConsistentRead(::System::Nullable_1<bool> value);

  /// @brief Method set_Conversion, addr 0x1422f44, size 0x8, virtual false, abstract: false, final false
  inline void set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_IgnoreNullValues, addr 0x1422ed0, size 0x8, virtual false, abstract: false, final false
  inline void set_IgnoreNullValues(::System::Nullable_1<bool> value);

  /// @brief Method set_IndexName, addr 0x1422f14, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_IsEmptyStringValueEnabled, addr 0x1422ee0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsEmptyStringValueEnabled(bool value);

  /// @brief Method set_OverrideTableName, addr 0x1422ef4, size 0x8, virtual false, abstract: false, final false
  inline void set_OverrideTableName(::StringW value);

  /// @brief Method set_QueryFilter, addr 0x1422f34, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryFilter(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* value);

  /// @brief Method set_SkipVersionCheck, addr 0x1422eb0, size 0x8, virtual false, abstract: false, final false
  inline void set_SkipVersionCheck(::System::Nullable_1<bool> value);

  /// @brief Method set_State, addr 0x1422f74, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* value);

  /// @brief Method set_TableNamePrefix, addr 0x1422ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_TableNamePrefix(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBFlatConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBFlatConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBFlatConfig(DynamoDBFlatConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBFlatConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBFlatConfig(DynamoDBFlatConfig const&) = delete;

  /// @brief Field <ConsistentRead>k__BackingField, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____ConsistentRead_k__BackingField;

  /// @brief Field <SkipVersionCheck>k__BackingField, offset: 0x12, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____SkipVersionCheck_k__BackingField;

  /// @brief Field <TableNamePrefix>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____TableNamePrefix_k__BackingField;

  /// @brief Field <IgnoreNullValues>k__BackingField, offset: 0x20, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____IgnoreNullValues_k__BackingField;

  /// @brief Field <IsEmptyStringValueEnabled>k__BackingField, offset: 0x22, size: 0x1, def value: None
  bool ____IsEmptyStringValueEnabled_k__BackingField;

  /// @brief Field <OverrideTableName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____OverrideTableName_k__BackingField;

  /// @brief Field <BackwardQuery>k__BackingField, offset: 0x30, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____BackwardQuery_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____IndexName_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ____ConditionalOperator_k__BackingField;

  /// @brief Field <QueryFilter>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* ____QueryFilter_k__BackingField;

  /// @brief Field <Conversion>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* ____Conversion_k__BackingField;

  /// @brief Field <State>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState* ____State_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____ConsistentRead_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____SkipVersionCheck_k__BackingField) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____TableNamePrefix_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____IgnoreNullValues_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____IsEmptyStringValueEnabled_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____OverrideTableName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____BackwardQuery_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____IndexName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____ConditionalOperator_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____QueryFilter_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____Conversion_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig, ____State_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, "Amazon.DynamoDBv2.DataModel", "DynamoDBFlatConfig");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__DynamoDBFlatConfig__OperationState*, "Amazon.DynamoDBv2.DataModel", "DynamoDBFlatConfig/OperationState");
