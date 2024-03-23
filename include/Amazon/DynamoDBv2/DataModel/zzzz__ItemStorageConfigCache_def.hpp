#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ItemStorageConfigCache)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorageConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class PropertyStorage;
}
namespace Amazon::DynamoDBv2::DataModel {
class __ItemStorageConfigCache__ConfigTableCache;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace Amazon::Util {
class TypeMapping;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorageConfigCache;
}
namespace Amazon::DynamoDBv2::DataModel {
class __ItemStorageConfigCache__ConfigTableCache;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache);
// Type: ::ConfigTableCache
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::ItemStorageConfigCache::ConfigTableCache*
class CORDL_TYPE __ItemStorageConfigCache__ConfigTableCache : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseTableName, put = set_BaseTableName))::StringW BaseTableName;

  __declspec(property(get = get_BaseTypeConfig, put = set_BaseTypeConfig))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* BaseTypeConfig;

  __declspec(property(get = get_Cache, put = set_Cache))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* Cache;

  /// @brief Field <BaseTableName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseTableName_k__BackingField, put = __cordl_internal_set__BaseTableName_k__BackingField))::StringW _BaseTableName_k__BackingField;

  /// @brief Field <BaseTypeConfig>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseTypeConfig_k__BackingField,
                      put = __cordl_internal_set__BaseTypeConfig_k__BackingField))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* _BaseTypeConfig_k__BackingField;

  /// @brief Field <Cache>k__BackingField, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get__Cache_k__BackingField,
               put = __cordl_internal_set__Cache_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* _Cache_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache* New_ctor(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* baseTypeConfig);

  constexpr ::StringW const& __cordl_internal_get__BaseTableName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__BaseTableName_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& __cordl_internal_get__BaseTypeConfig_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const& __cordl_internal_get__BaseTypeConfig_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*& __cordl_internal_get__Cache_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*> const&
  __cordl_internal_get__Cache_k__BackingField() const;

  constexpr void __cordl_internal_set__BaseTableName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__BaseTypeConfig_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

  constexpr void __cordl_internal_set__Cache_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* value);

  /// @brief Method .ctor, addr 0x142eee0, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* baseTypeConfig);

  /// @brief Method get_BaseTableName, addr 0x1430be8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BaseTableName();

  /// @brief Method get_BaseTypeConfig, addr 0x1430bd8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* get_BaseTypeConfig();

  /// @brief Method get_Cache, addr 0x1430bc8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* get_Cache();

  /// @brief Method set_BaseTableName, addr 0x1430bf0, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseTableName(::StringW value);

  /// @brief Method set_BaseTypeConfig, addr 0x1430be0, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseTypeConfig(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

  /// @brief Method set_Cache, addr 0x1430bd0, size 0x8, virtual false, abstract: false, final false
  inline void set_Cache(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ItemStorageConfigCache__ConfigTableCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ItemStorageConfigCache__ConfigTableCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ItemStorageConfigCache__ConfigTableCache(__ItemStorageConfigCache__ConfigTableCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ItemStorageConfigCache__ConfigTableCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ItemStorageConfigCache__ConfigTableCache(__ItemStorageConfigCache__ConfigTableCache const&) = delete;

  /// @brief Field <Cache>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* ____Cache_k__BackingField;

  /// @brief Field <BaseTypeConfig>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* ____BaseTypeConfig_k__BackingField;

  /// @brief Field <BaseTableName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____BaseTableName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache, ____Cache_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache, ____BaseTypeConfig_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache, ____BaseTableName_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::ItemStorageConfigCache
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::ItemStorageConfigCache*
class CORDL_TYPE ItemStorageConfigCache : public ::System::Object {
public:
  // Declarations
  using ConfigTableCache = ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache;

  /// @brief Field Cache, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_Cache,
               put = __cordl_internal_set_Cache))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>* Cache;

  /// @brief Field Context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Context, put = __cordl_internal_set_Context))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* Context;

  /// @brief Field _readerWriterLockSlim, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__readerWriterLockSlim, put = __cordl_internal_set__readerWriterLockSlim))::System::Threading::ReaderWriterLockSlim* _readerWriterLockSlim;

  /// @brief Field disposedValue, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_disposedValue, put = __cordl_internal_set_disposedValue)) bool disposedValue;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateStorageConfig, addr 0x142ec84, size 0x25c, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* CreateStorageConfig(::System::Type* baseType, ::StringW actualTableName);

  /// @brief Method Dispose, addr 0x142359c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1430b90, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetAccurateCase, addr 0x142efd8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetAccurateCase(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::StringW value);

  /// @brief Method GetConfig, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* GetConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, bool conversionOnly);

  /// @brief Method GetConfig, addr 0x1425e64, size 0x4a4, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* GetConfig(::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, bool conversionOnly);

  /// @brief Method GetProperty, addr 0x14307c8, size 0x1dc, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DataModel::PropertyStorage* GetProperty(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::StringW attributeName, bool optional);

  static inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context);

  /// @brief Method PopulateConfigFromMappings, addr 0x142f898, size 0x3bc, virtual false, abstract: false, final false
  static inline void PopulateConfigFromMappings(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config,
                                                ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* typeMappings);

  /// @brief Method PopulateConfigFromTable, addr 0x142fc54, size 0x930, virtual false, abstract: false, final false
  static inline void PopulateConfigFromTable(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* table);

  /// @brief Method PopulateConfigFromType, addr 0x142f174, size 0x724, virtual false, abstract: false, final false
  static inline void PopulateConfigFromType(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::Amazon::Util::Internal::ITypeInfo* typeInfo);

  /// @brief Method Validate, addr 0x1430ab8, size 0xd8, virtual false, abstract: false, final false
  static inline void Validate(bool value, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method ValidateProperty, addr 0x14309a4, size 0x114, virtual false, abstract: false, final false
  static inline void ValidateProperty(bool value, ::StringW propertyName, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>*& __cordl_internal_get_Cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>*> const&
  __cordl_internal_get_Cache() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& __cordl_internal_get_Context();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& __cordl_internal_get_Context() const;

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__readerWriterLockSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __cordl_internal_get__readerWriterLockSlim() const;

  constexpr bool const& __cordl_internal_get_disposedValue() const;

  constexpr bool& __cordl_internal_get_disposedValue();

  constexpr void __cordl_internal_set_Cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>* value);

  constexpr void __cordl_internal_set_Context(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  constexpr void __cordl_internal_set__readerWriterLockSlim(::System::Threading::ReaderWriterLockSlim* value);

  constexpr void __cordl_internal_set_disposedValue(bool value);

  /// @brief Method .ctor, addr 0x1423404, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemStorageConfigCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemStorageConfigCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemStorageConfigCache(ItemStorageConfigCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemStorageConfigCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemStorageConfigCache(ItemStorageConfigCache const&) = delete;

  /// @brief Field Cache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>* ___Cache;

  /// @brief Field Context, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* ___Context;

  /// @brief Field disposedValue, offset: 0x20, size: 0x1, def value: None
  bool ___disposedValue;

  /// @brief Field _readerWriterLockSlim, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____readerWriterLockSlim;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache, ___Cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache, ___Context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache, ___disposedValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache, ____readerWriterLockSlim) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*, "Amazon.DynamoDBv2.DataModel", "ItemStorageConfigCache");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*, "Amazon.DynamoDBv2.DataModel", "ItemStorageConfigCache/ConfigTableCache");
