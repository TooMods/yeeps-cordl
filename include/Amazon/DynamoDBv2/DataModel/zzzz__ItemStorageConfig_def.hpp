#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__StorageConfig_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ItemStorageConfig)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class GSIConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class PropertyStorage;
}
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorageConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig);
// Type: Amazon.DynamoDBv2.DataModel::ItemStorageConfig
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::ItemStorageConfig*
class CORDL_TYPE ItemStorageConfig : public ::Amazon::DynamoDBv2::DataModel::StorageConfig {
public:
  // Declarations
  __declspec(
      property(get = get_AttributeToIndexesNameMapping,
               put = set_AttributeToIndexesNameMapping))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* AttributeToIndexesNameMapping;

  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_AttributesToStoreAsEpoch, put = set_AttributesToStoreAsEpoch))::System::Collections::Generic::HashSet_1<::StringW>* AttributesToStoreAsEpoch;

  __declspec(property(get = get_HasVersion)) bool HasVersion;

  __declspec(property(get = get_HashKeyPropertyNames, put = set_HashKeyPropertyNames))::System::Collections::Generic::List_1<::StringW>* HashKeyPropertyNames;

  __declspec(property(get = get_IndexNameToGSIMapping,
                      put = set_IndexNameToGSIMapping))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* IndexNameToGSIMapping;

  __declspec(property(
      get = get_IndexNameToLSIRangePropertiesMapping,
      put = set_IndexNameToLSIRangePropertiesMapping))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* IndexNameToLSIRangePropertiesMapping;

  __declspec(property(get = get_LowerCamelCaseProperties, put = set_LowerCamelCaseProperties)) bool LowerCamelCaseProperties;

  __declspec(property(get = get_RangeKeyPropertyNames, put = set_RangeKeyPropertyNames))::System::Collections::Generic::List_1<::StringW>* RangeKeyPropertyNames;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_VersionPropertyName, put = set_VersionPropertyName))::StringW VersionPropertyName;

  __declspec(property(get = get_VersionPropertyStorage))::Amazon::DynamoDBv2::DataModel::PropertyStorage* VersionPropertyStorage;

  /// @brief Field <AttributeToIndexesNameMapping>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributeToIndexesNameMapping_k__BackingField, put = __cordl_internal_set__AttributeToIndexesNameMapping_k__BackingField))::System::Collections::
      Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* _AttributeToIndexesNameMapping_k__BackingField;

  /// @brief Field <AttributesToGet>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributesToGet_k__BackingField,
                      put = __cordl_internal_set__AttributesToGet_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _AttributesToGet_k__BackingField;

  /// @brief Field <AttributesToStoreAsEpoch>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributesToStoreAsEpoch_k__BackingField,
                      put = __cordl_internal_set__AttributesToStoreAsEpoch_k__BackingField))::System::Collections::Generic::HashSet_1<::StringW>* _AttributesToStoreAsEpoch_k__BackingField;

  /// @brief Field <HashKeyPropertyNames>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__HashKeyPropertyNames_k__BackingField,
                      put = __cordl_internal_set__HashKeyPropertyNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _HashKeyPropertyNames_k__BackingField;

  /// @brief Field <IndexNameToGSIMapping>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexNameToGSIMapping_k__BackingField, put = __cordl_internal_set__IndexNameToGSIMapping_k__BackingField))::System::Collections::Generic::
      Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* _IndexNameToGSIMapping_k__BackingField;

  /// @brief Field <IndexNameToLSIRangePropertiesMapping>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexNameToLSIRangePropertiesMapping_k__BackingField, put = __cordl_internal_set__IndexNameToLSIRangePropertiesMapping_k__BackingField))::System::
      Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* _IndexNameToLSIRangePropertiesMapping_k__BackingField;

  /// @brief Field <LowerCamelCaseProperties>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__LowerCamelCaseProperties_k__BackingField,
                      put = __cordl_internal_set__LowerCamelCaseProperties_k__BackingField)) bool _LowerCamelCaseProperties_k__BackingField;

  /// @brief Field <RangeKeyPropertyNames>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__RangeKeyPropertyNames_k__BackingField,
                      put = __cordl_internal_set__RangeKeyPropertyNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _RangeKeyPropertyNames_k__BackingField;

  /// @brief Field <TableName>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__TableName_k__BackingField, put = __cordl_internal_set__TableName_k__BackingField))::StringW _TableName_k__BackingField;

  /// @brief Field <VersionPropertyName>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__VersionPropertyName_k__BackingField, put = __cordl_internal_set__VersionPropertyName_k__BackingField))::StringW _VersionPropertyName_k__BackingField;

  /// @brief Method AddGSIConfigs, addr 0x142e4a8, size 0x204, virtual false, abstract: false, final false
  inline void AddGSIConfigs(::System::Collections::Generic::List_1<::StringW>* gsiIndexNames, ::StringW propertyName, bool isHashKey);

  /// @brief Method AddLSIConfigs, addr 0x142e6ac, size 0x348, virtual false, abstract: false, final false
  inline void AddLSIConfigs(::System::Collections::Generic::List_1<::StringW>* lsiIndexNames, ::StringW propertyName);

  /// @brief Method AddPropertyStorage, addr 0x142dfb8, size 0x4f0, virtual false, abstract: false, final false
  inline void AddPropertyStorage(::Amazon::DynamoDBv2::DataModel::PropertyStorage* value);

  /// @brief Method Denormalize, addr 0x142dba8, size 0x410, virtual false, abstract: false, final false
  inline void Denormalize(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context);

  /// @brief Method GetCorrectHashKeyProperty, addr 0x1429be4, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetCorrectHashKeyProperty(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* currentConfig, ::StringW hashKeyProperty);

  /// @brief Method GetGSIConfig, addr 0x142db28, size 0x80, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::GSIConfig* GetGSIConfig(::StringW indexName);

  /// @brief Method GetRangeKeyByIndex, addr 0x142ab14, size 0x138, virtual false, abstract: false, final false
  inline ::StringW GetRangeKeyByIndex(::StringW indexName);

  static inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* New_ctor(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get__AttributeToIndexesNameMapping_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*> const&
  __cordl_internal_get__AttributeToIndexesNameMapping_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__AttributesToGet_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__AttributesToGet_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__AttributesToStoreAsEpoch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__AttributesToStoreAsEpoch_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__HashKeyPropertyNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__HashKeyPropertyNames_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>*& __cordl_internal_get__IndexNameToGSIMapping_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>*> const&
  __cordl_internal_get__IndexNameToGSIMapping_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get__IndexNameToLSIRangePropertiesMapping_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*> const&
  __cordl_internal_get__IndexNameToLSIRangePropertiesMapping_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__LowerCamelCaseProperties_k__BackingField() const;

  constexpr bool& __cordl_internal_get__LowerCamelCaseProperties_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__RangeKeyPropertyNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__RangeKeyPropertyNames_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__TableName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TableName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__VersionPropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__VersionPropertyName_k__BackingField();

  constexpr void
  __cordl_internal_set__AttributeToIndexesNameMapping_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

  constexpr void __cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__AttributesToStoreAsEpoch_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__HashKeyPropertyNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__IndexNameToGSIMapping_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* value);

  constexpr void
  __cordl_internal_set__IndexNameToLSIRangePropertiesMapping_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

  constexpr void __cordl_internal_set__LowerCamelCaseProperties_k__BackingField(bool value);

  constexpr void __cordl_internal_set__RangeKeyPropertyNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__TableName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__VersionPropertyName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x142e9f4, size 0x290, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo);

  /// @brief Method get_AttributeToIndexesNameMapping, addr 0x142daf8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* get_AttributeToIndexesNameMapping();

  /// @brief Method get_AttributesToGet, addr 0x142dad8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_AttributesToStoreAsEpoch, addr 0x142daa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* get_AttributesToStoreAsEpoch();

  /// @brief Method get_HasVersion, addr 0x14239b4, size 0x20, virtual false, abstract: false, final false
  inline bool get_HasVersion();

  /// @brief Method get_HashKeyPropertyNames, addr 0x142dab8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_HashKeyPropertyNames();

  /// @brief Method get_IndexNameToGSIMapping, addr 0x142db18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* get_IndexNameToGSIMapping();

  /// @brief Method get_IndexNameToLSIRangePropertiesMapping, addr 0x142db08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* get_IndexNameToLSIRangePropertiesMapping();

  /// @brief Method get_LowerCamelCaseProperties, addr 0x142da94, size 0x8, virtual false, abstract: false, final false
  inline bool get_LowerCamelCaseProperties();

  /// @brief Method get_RangeKeyPropertyNames, addr 0x142dac8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_RangeKeyPropertyNames();

  /// @brief Method get_TableName, addr 0x142da84, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_VersionPropertyName, addr 0x142dae8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_VersionPropertyName();

  /// @brief Method get_VersionPropertyStorage, addr 0x14239d4, size 0x74, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::PropertyStorage* get_VersionPropertyStorage();

  /// @brief Method set_AttributeToIndexesNameMapping, addr 0x142db00, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeToIndexesNameMapping(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

  /// @brief Method set_AttributesToGet, addr 0x142dae0, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_AttributesToStoreAsEpoch, addr 0x142dab0, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToStoreAsEpoch(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method set_HashKeyPropertyNames, addr 0x142dac0, size 0x8, virtual false, abstract: false, final false
  inline void set_HashKeyPropertyNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_IndexNameToGSIMapping, addr 0x142db20, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexNameToGSIMapping(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* value);

  /// @brief Method set_IndexNameToLSIRangePropertiesMapping, addr 0x142db10, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexNameToLSIRangePropertiesMapping(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

  /// @brief Method set_LowerCamelCaseProperties, addr 0x142da9c, size 0xc, virtual false, abstract: false, final false
  inline void set_LowerCamelCaseProperties(bool value);

  /// @brief Method set_RangeKeyPropertyNames, addr 0x142dad0, size 0x8, virtual false, abstract: false, final false
  inline void set_RangeKeyPropertyNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_TableName, addr 0x142da8c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_VersionPropertyName, addr 0x142daf0, size 0x8, virtual false, abstract: false, final false
  inline void set_VersionPropertyName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemStorageConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemStorageConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemStorageConfig(ItemStorageConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemStorageConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemStorageConfig(ItemStorageConfig const&) = delete;

  /// @brief Field <TableName>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____TableName_k__BackingField;

  /// @brief Field <LowerCamelCaseProperties>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____LowerCamelCaseProperties_k__BackingField;

  /// @brief Field <AttributesToStoreAsEpoch>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____AttributesToStoreAsEpoch_k__BackingField;

  /// @brief Field <HashKeyPropertyNames>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____HashKeyPropertyNames_k__BackingField;

  /// @brief Field <RangeKeyPropertyNames>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____RangeKeyPropertyNames_k__BackingField;

  /// @brief Field <AttributesToGet>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____AttributesToGet_k__BackingField;

  /// @brief Field <VersionPropertyName>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____VersionPropertyName_k__BackingField;

  /// @brief Field <AttributeToIndexesNameMapping>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* ____AttributeToIndexesNameMapping_k__BackingField;

  /// @brief Field <IndexNameToLSIRangePropertiesMapping>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* ____IndexNameToLSIRangePropertiesMapping_k__BackingField;

  /// @brief Field <IndexNameToGSIMapping>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* ____IndexNameToGSIMapping_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, 0x80>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____TableName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____LowerCamelCaseProperties_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____AttributesToStoreAsEpoch_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____HashKeyPropertyNames_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____RangeKeyPropertyNames_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____AttributesToGet_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____VersionPropertyName_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____AttributeToIndexesNameMapping_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____IndexNameToLSIRangePropertiesMapping_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig, ____IndexNameToGSIMapping_k__BackingField) == 0x78, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, "Amazon.DynamoDBv2.DataModel", "ItemStorageConfig");
