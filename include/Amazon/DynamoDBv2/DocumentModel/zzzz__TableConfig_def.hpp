#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TableConfig)
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table__DynamoDBConsumer;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class TableConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::TableConfig);
// Type: Amazon.DynamoDBv2.DocumentModel::TableConfig
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::TableConfig*
class CORDL_TYPE TableConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributesToStoreAsEpoch, put = set_AttributesToStoreAsEpoch))::System::Collections::Generic::List_1<::StringW>* AttributesToStoreAsEpoch;

  __declspec(property(get = get_Consumer, put = set_Consumer))::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer Consumer;

  __declspec(property(get = get_Conversion, put = set_Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* Conversion;

  __declspec(property(get = get_IsEmptyStringValueEnabled, put = set_IsEmptyStringValueEnabled)) bool IsEmptyStringValueEnabled;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field <AttributesToStoreAsEpoch>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributesToStoreAsEpoch_k__BackingField,
                      put = __cordl_internal_set__AttributesToStoreAsEpoch_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _AttributesToStoreAsEpoch_k__BackingField;

  /// @brief Field <Consumer>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__Consumer_k__BackingField,
                      put = __cordl_internal_set__Consumer_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer _Consumer_k__BackingField;

  /// @brief Field <Conversion>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Conversion_k__BackingField,
                      put = __cordl_internal_set__Conversion_k__BackingField))::Amazon::DynamoDBv2::DynamoDBEntryConversion* _Conversion_k__BackingField;

  /// @brief Field <IsEmptyStringValueEnabled>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField,
                      put = __cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField)) bool _IsEmptyStringValueEnabled_k__BackingField;

  /// @brief Field <TableName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TableName_k__BackingField, put = __cordl_internal_set__TableName_k__BackingField))::StringW _TableName_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::TableConfig* New_ctor(::StringW tableName);

  static inline ::Amazon::DynamoDBv2::DocumentModel::TableConfig* New_ctor(::StringW tableName, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                           ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer consumer,
                                                                           ::System::Collections::Generic::IEnumerable_1<::StringW>* storeAsEpoch, bool isEmptyStringValueEnabled);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__AttributesToStoreAsEpoch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__AttributesToStoreAsEpoch_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer const& __cordl_internal_get__Consumer_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer& __cordl_internal_get__Consumer_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get__Conversion_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get__Conversion_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__TableName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TableName_k__BackingField();

  constexpr void __cordl_internal_set__AttributesToStoreAsEpoch_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__Consumer_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer value);

  constexpr void __cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  constexpr void __cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__TableName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x141f1f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName);

  /// @brief Method .ctor, addr 0x141f270, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer consumer,
                    ::System::Collections::Generic::IEnumerable_1<::StringW>* storeAsEpoch, bool isEmptyStringValueEnabled);

  /// @brief Method get_AttributesToStoreAsEpoch, addr 0x141f1c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToStoreAsEpoch();

  /// @brief Method get_Consumer, addr 0x141f1d0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer get_Consumer();

  /// @brief Method get_Conversion, addr 0x141f1b0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_Conversion();

  /// @brief Method get_IsEmptyStringValueEnabled, addr 0x141f1e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsEmptyStringValueEnabled();

  /// @brief Method get_TableName, addr 0x141f1a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_AttributesToStoreAsEpoch, addr 0x141f1c8, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToStoreAsEpoch(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_Consumer, addr 0x141f1d8, size 0x8, virtual false, abstract: false, final false
  inline void set_Consumer(::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer value);

  /// @brief Method set_Conversion, addr 0x141f1b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_IsEmptyStringValueEnabled, addr 0x141f1e8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsEmptyStringValueEnabled(bool value);

  /// @brief Method set_TableName, addr 0x141f1a8, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableConfig(TableConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableConfig(TableConfig const&) = delete;

  /// @brief Field <TableName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TableName_k__BackingField;

  /// @brief Field <Conversion>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* ____Conversion_k__BackingField;

  /// @brief Field <AttributesToStoreAsEpoch>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____AttributesToStoreAsEpoch_k__BackingField;

  /// @brief Field <Consumer>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer ____Consumer_k__BackingField;

  /// @brief Field <IsEmptyStringValueEnabled>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____IsEmptyStringValueEnabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::TableConfig, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::TableConfig, ____TableName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::TableConfig, ____Conversion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::TableConfig, ____AttributesToStoreAsEpoch_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::TableConfig, ____Consumer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::TableConfig, ____IsEmptyStringValueEnabled_k__BackingField) == 0x2c, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::TableConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::TableConfig*, "Amazon.DynamoDBv2.DocumentModel", "TableConfig");
