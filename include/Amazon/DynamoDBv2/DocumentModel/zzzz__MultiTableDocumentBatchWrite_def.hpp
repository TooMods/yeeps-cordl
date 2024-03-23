#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MultiTableDocumentBatchWrite)
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchWrite;
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
class MultiTableDocumentBatchWrite;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite);
// Type: Amazon.DynamoDBv2.DocumentModel::MultiTableDocumentBatchWrite
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::MultiTableDocumentBatchWrite*
class CORDL_TYPE MultiTableDocumentBatchWrite : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Batches, put = set_Batches))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* Batches;

  /// @brief Field <Batches>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Batches_k__BackingField,
                      put = __cordl_internal_set__Batches_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* _Batches_k__BackingField;

  /// @brief Method AddBatch, addr 0x164917c, size 0xa8, virtual false, abstract: false, final false
  inline void AddBatch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* batch);

  /// @brief Method ExecuteAsync, addr 0x16492fc, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteHelper, addr 0x1649224, size 0x64, virtual false, abstract: false, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x1649288, size 0x74, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*
  New_ctor(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*> batches);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*& __cordl_internal_get__Batches_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*> const&
  __cordl_internal_get__Batches_k__BackingField() const;

  constexpr void __cordl_internal_set__Batches_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* value);

  /// @brief Method .ctor, addr 0x1648d60, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*> batches);

  /// @brief Method get_Batches, addr 0x164916c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* get_Batches();

  /// @brief Method set_Batches, addr 0x1649174, size 0x8, virtual false, abstract: false, final false
  inline void set_Batches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiTableDocumentBatchWrite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiTableDocumentBatchWrite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiTableDocumentBatchWrite(MultiTableDocumentBatchWrite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiTableDocumentBatchWrite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiTableDocumentBatchWrite(MultiTableDocumentBatchWrite const&) = delete;

  /// @brief Field <Batches>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* ____Batches_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite, ____Batches_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*, "Amazon.DynamoDBv2.DocumentModel", "MultiTableDocumentBatchWrite");
