#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BatchGet)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorageConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchGet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Key;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class BatchGet;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::BatchGet);
// Type: Amazon.DynamoDBv2.DataModel::BatchGet
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::BatchGet*
class CORDL_TYPE BatchGet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Config, put = set_Config))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* Config;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_Context, put = set_Context))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* Context;

  __declspec(property(get = get_DocumentBatch, put = set_DocumentBatch))::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* DocumentBatch;

  __declspec(property(get = get_ItemStorageConfig, put = set_ItemStorageConfig))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* ItemStorageConfig;

  __declspec(property(get = get_Keys, put = set_Keys))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* Keys;

  __declspec(property(get = get_Results))::System::Collections::Generic::List_1<::System::Object*>* Results;

  __declspec(property(get = get_UntypedResults, put = set_UntypedResults))::System::Collections::Generic::List_1<::System::Object*>* UntypedResults;

  /// @brief Field <Config>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Config_k__BackingField,
                      put = __cordl_internal_set__Config_k__BackingField))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* _Config_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__ConsistentRead_k__BackingField, put = __cordl_internal_set__ConsistentRead_k__BackingField)) bool _ConsistentRead_k__BackingField;

  /// @brief Field <Context>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Context_k__BackingField,
                      put = __cordl_internal_set__Context_k__BackingField))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* _Context_k__BackingField;

  /// @brief Field <DocumentBatch>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__DocumentBatch_k__BackingField,
                      put = __cordl_internal_set__DocumentBatch_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* _DocumentBatch_k__BackingField;

  /// @brief Field <ItemStorageConfig>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemStorageConfig_k__BackingField,
                      put = __cordl_internal_set__ItemStorageConfig_k__BackingField))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* _ItemStorageConfig_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Keys_k__BackingField,
                      put = __cordl_internal_set__Keys_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* _Keys_k__BackingField;

  /// @brief Field <UntypedResults>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__UntypedResults_k__BackingField,
                      put = __cordl_internal_set__UntypedResults_k__BackingField))::System::Collections::Generic::List_1<::System::Object*>* _UntypedResults_k__BackingField;

  /// @brief Method CreateDocumentBatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CreateDocumentBatch();

  /// @brief Method ExecuteAsync, addr 0x14213fc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteHelper, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DataModel::BatchGet* New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config);

  /// @brief Method PopulateResults, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PopulateResults(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* items);

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& __cordl_internal_get__Config_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const& __cordl_internal_get__Config_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__ConsistentRead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ConsistentRead_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& __cordl_internal_get__Context_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& __cordl_internal_get__Context_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*& __cordl_internal_get__DocumentBatch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*> const& __cordl_internal_get__DocumentBatch_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& __cordl_internal_get__ItemStorageConfig_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const& __cordl_internal_get__ItemStorageConfig_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*& __cordl_internal_get__Keys_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*> const& __cordl_internal_get__Keys_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__UntypedResults_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get__UntypedResults_k__BackingField() const;

  constexpr void __cordl_internal_set__Config_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  constexpr void __cordl_internal_set__ConsistentRead_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Context_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  constexpr void __cordl_internal_set__DocumentBatch_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* value);

  constexpr void __cordl_internal_set__ItemStorageConfig_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

  constexpr void __cordl_internal_set__Keys_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value);

  constexpr void __cordl_internal_set__UntypedResults_k__BackingField(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x142134c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config);

  /// @brief Method get_Config, addr 0x142130c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* get_Config();

  /// @brief Method get_ConsistentRead, addr 0x14213e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_Context, addr 0x14212fc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* get_Context();

  /// @brief Method get_DocumentBatch, addr 0x142132c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* get_DocumentBatch();

  /// @brief Method get_ItemStorageConfig, addr 0x142133c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* get_ItemStorageConfig();

  /// @brief Method get_Keys, addr 0x142131c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* get_Keys();

  /// @brief Method get_Results, addr 0x14213e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* get_Results();

  /// @brief Method get_UntypedResults, addr 0x14212ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* get_UntypedResults();

  /// @brief Method set_Config, addr 0x1421314, size 0x8, virtual false, abstract: false, final false
  inline void set_Config(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  /// @brief Method set_ConsistentRead, addr 0x14213f0, size 0xc, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_Context, addr 0x1421304, size 0x8, virtual false, abstract: false, final false
  inline void set_Context(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  /// @brief Method set_DocumentBatch, addr 0x1421334, size 0x8, virtual false, abstract: false, final false
  inline void set_DocumentBatch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* value);

  /// @brief Method set_ItemStorageConfig, addr 0x1421344, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemStorageConfig(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

  /// @brief Method set_Keys, addr 0x1421324, size 0x8, virtual false, abstract: false, final false
  inline void set_Keys(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value);

  /// @brief Method set_UntypedResults, addr 0x14212f4, size 0x8, virtual false, abstract: false, final false
  inline void set_UntypedResults(::System::Collections::Generic::List_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchGet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchGet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchGet(BatchGet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchGet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchGet(BatchGet const&) = delete;

  /// @brief Field <UntypedResults>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____UntypedResults_k__BackingField;

  /// @brief Field <Context>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* ____Context_k__BackingField;

  /// @brief Field <Config>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* ____Config_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* ____Keys_k__BackingField;

  /// @brief Field <DocumentBatch>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* ____DocumentBatch_k__BackingField;

  /// @brief Field <ItemStorageConfig>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* ____ItemStorageConfig_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____ConsistentRead_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::BatchGet, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchGet, ____UntypedResults_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchGet, ____Context_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchGet, ____Config_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchGet, ____Keys_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchGet, ____DocumentBatch_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchGet, ____ItemStorageConfig_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchGet, ____ConsistentRead_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::BatchGet);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::BatchGet*, "Amazon.DynamoDBv2.DataModel", "BatchGet");
