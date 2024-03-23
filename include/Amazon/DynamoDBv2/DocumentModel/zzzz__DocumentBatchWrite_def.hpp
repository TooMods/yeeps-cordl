#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DocumentBatchWrite)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Key;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class MultiTableDocumentBatchWrite;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
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
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchWrite;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite);
// Type: Amazon.DynamoDBv2.DocumentModel::DocumentBatchWrite
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::DocumentBatchWrite*
class CORDL_TYPE DocumentBatchWrite : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TargetTable, put = set_TargetTable))::Amazon::DynamoDBv2::DocumentModel::Table* TargetTable;

  __declspec(property(get = get_ToDelete, put = set_ToDelete))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* ToDelete;

  __declspec(property(get = get_ToPut, put = set_ToPut))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* ToPut;

  /// @brief Field <TargetTable>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetTable_k__BackingField,
                      put = __cordl_internal_set__TargetTable_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Table* _TargetTable_k__BackingField;

  /// @brief Field <ToDelete>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ToDelete_k__BackingField,
                      put = __cordl_internal_set__ToDelete_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* _ToDelete_k__BackingField;

  /// @brief Field <ToPut>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ToPut_k__BackingField,
                      put = __cordl_internal_set__ToPut_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _ToPut_k__BackingField;

  /// @brief Method AddDocumentToPut, addr 0x1648bc8, size 0xa8, virtual false, abstract: false, final false
  inline void AddDocumentToPut(::Amazon::DynamoDBv2::DocumentModel::Document* document);

  /// @brief Method AddItemToDelete, addr 0x1648ba0, size 0x28, virtual false, abstract: false, final false
  inline void AddItemToDelete(::Amazon::DynamoDBv2::DocumentModel::Document* document);

  /// @brief Method AddKeyToDelete, addr 0x1648aa0, size 0x8, virtual false, abstract: false, final false
  inline void AddKeyToDelete(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey);

  /// @brief Method AddKeyToDelete, addr 0x1648aa8, size 0x28, virtual false, abstract: false, final false
  inline void AddKeyToDelete(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey);

  /// @brief Method AddKeyToDelete, addr 0x1648ad0, size 0xa8, virtual false, abstract: false, final false
  inline void AddKeyToDelete(::Amazon::DynamoDBv2::DocumentModel::Key* key);

  /// @brief Method AddKeyToDelete, addr 0x1648b78, size 0x28, virtual false, abstract: false, final false
  inline void AddKeyToDelete(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key);

  /// @brief Method Combine, addr 0x1648c70, size 0xf0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite* Combine(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* otherBatch);

  /// @brief Method ExecuteAsync, addr 0x1649168, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteHelper, addr 0x1648e38, size 0x118, virtual false, abstract: false, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x1649038, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* New_ctor(::Amazon::DynamoDBv2::DocumentModel::Table* targetTable);

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Table*& __cordl_internal_get__TargetTable_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Table*> const& __cordl_internal_get__TargetTable_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*& __cordl_internal_get__ToDelete_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*> const& __cordl_internal_get__ToDelete_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get__ToPut_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get__ToPut_k__BackingField() const;

  constexpr void __cordl_internal_set__TargetTable_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Table* value);

  constexpr void __cordl_internal_set__ToDelete_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value);

  constexpr void __cordl_internal_set__ToPut_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  /// @brief Method .ctor, addr 0x16489cc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DocumentModel::Table* targetTable);

  /// @brief Method get_TargetTable, addr 0x164899c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Table* get_TargetTable();

  /// @brief Method get_ToDelete, addr 0x16489ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* get_ToDelete();

  /// @brief Method get_ToPut, addr 0x16489bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* get_ToPut();

  /// @brief Method set_TargetTable, addr 0x16489a4, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTable(::Amazon::DynamoDBv2::DocumentModel::Table* value);

  /// @brief Method set_ToDelete, addr 0x16489b4, size 0x8, virtual false, abstract: false, final false
  inline void set_ToDelete(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value);

  /// @brief Method set_ToPut, addr 0x16489c4, size 0x8, virtual false, abstract: false, final false
  inline void set_ToPut(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DocumentBatchWrite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DocumentBatchWrite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DocumentBatchWrite(DocumentBatchWrite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DocumentBatchWrite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DocumentBatchWrite(DocumentBatchWrite const&) = delete;

  /// @brief Field <TargetTable>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* ____TargetTable_k__BackingField;

  /// @brief Field <ToDelete>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* ____ToDelete_k__BackingField;

  /// @brief Field <ToPut>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* ____ToPut_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite, ____TargetTable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite, ____ToDelete_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite, ____ToPut_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*, "Amazon.DynamoDBv2.DocumentModel", "DocumentBatchWrite");
