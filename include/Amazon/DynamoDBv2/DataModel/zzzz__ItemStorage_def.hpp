#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ItemStorage)
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorageConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorage;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::ItemStorage);
// Type: Amazon.DynamoDBv2.DataModel::ItemStorage
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::ItemStorage*
class CORDL_TYPE ItemStorage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Config, put = set_Config))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* Config;

  __declspec(property(get = get_ConvertedObjects, put = set_ConvertedObjects))::System::Collections::Generic::HashSet_1<::System::Object*>* ConvertedObjects;

  __declspec(property(get = get_CurrentVersion, put = set_CurrentVersion))::Amazon::DynamoDBv2::DocumentModel::Primitive* CurrentVersion;

  __declspec(property(get = get_Document, put = set_Document))::Amazon::DynamoDBv2::DocumentModel::Document* Document;

  /// @brief Field <Config>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Config_k__BackingField,
                      put = __cordl_internal_set__Config_k__BackingField))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* _Config_k__BackingField;

  /// @brief Field <ConvertedObjects>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ConvertedObjects_k__BackingField,
                      put = __cordl_internal_set__ConvertedObjects_k__BackingField))::System::Collections::Generic::HashSet_1<::System::Object*>* _ConvertedObjects_k__BackingField;

  /// @brief Field <CurrentVersion>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentVersion_k__BackingField,
                      put = __cordl_internal_set__CurrentVersion_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Primitive* _CurrentVersion_k__BackingField;

  /// @brief Field <Document>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Document_k__BackingField,
                      put = __cordl_internal_set__Document_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Document* _Document_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::ItemStorage* New_ctor(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig);

  constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& __cordl_internal_get__Config_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const& __cordl_internal_get__Config_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& __cordl_internal_get__ConvertedObjects_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Object*>*> const& __cordl_internal_get__ConvertedObjects_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Primitive*& __cordl_internal_get__CurrentVersion_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Primitive*> const& __cordl_internal_get__CurrentVersion_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Document*& __cordl_internal_get__Document_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Document*> const& __cordl_internal_get__Document_k__BackingField() const;

  constexpr void __cordl_internal_set__Config_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

  constexpr void __cordl_internal_set__ConvertedObjects_k__BackingField(::System::Collections::Generic::HashSet_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__CurrentVersion_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Primitive* value);

  constexpr void __cordl_internal_set__Document_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Document* value);

  /// @brief Method .ctor, addr 0x14263b0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig);

  /// @brief Method get_Config, addr 0x142cb54, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* get_Config();

  /// @brief Method get_ConvertedObjects, addr 0x142cb74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::System::Object*>* get_ConvertedObjects();

  /// @brief Method get_CurrentVersion, addr 0x142cb64, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* get_CurrentVersion();

  /// @brief Method get_Document, addr 0x142cb44, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* get_Document();

  /// @brief Method set_Config, addr 0x142cb5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Config(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

  /// @brief Method set_ConvertedObjects, addr 0x142cb7c, size 0x8, virtual false, abstract: false, final false
  inline void set_ConvertedObjects(::System::Collections::Generic::HashSet_1<::System::Object*>* value);

  /// @brief Method set_CurrentVersion, addr 0x142cb6c, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentVersion(::Amazon::DynamoDBv2::DocumentModel::Primitive* value);

  /// @brief Method set_Document, addr 0x142cb4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Document(::Amazon::DynamoDBv2::DocumentModel::Document* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemStorage(ItemStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemStorage(ItemStorage const&) = delete;

  /// @brief Field <Document>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Document* ____Document_k__BackingField;

  /// @brief Field <Config>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* ____Config_k__BackingField;

  /// @brief Field <CurrentVersion>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Primitive* ____CurrentVersion_k__BackingField;

  /// @brief Field <ConvertedObjects>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Object*>* ____ConvertedObjects_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::ItemStorage, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorage, ____Document_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorage, ____Config_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorage, ____CurrentVersion_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::ItemStorage, ____ConvertedObjects_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::ItemStorage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::ItemStorage*, "Amazon.DynamoDBv2.DataModel", "ItemStorage");
