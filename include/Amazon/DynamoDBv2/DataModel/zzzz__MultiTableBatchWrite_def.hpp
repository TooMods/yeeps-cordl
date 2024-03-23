#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MultiTableBatchWrite)
namespace Amazon::DynamoDBv2::DataModel {
class BatchWrite;
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
namespace Amazon::DynamoDBv2::DataModel {
class MultiTableBatchWrite;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite);
// Type: Amazon.DynamoDBv2.DataModel::MultiTableBatchWrite
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::MultiTableBatchWrite*
class CORDL_TYPE MultiTableBatchWrite : public ::System::Object {
public:
  // Declarations
  /// @brief Field allBatches, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_allBatches, put = __cordl_internal_set_allBatches))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchWrite*>* allBatches;

  /// @brief Method AddBatch, addr 0x1422330, size 0xa8, virtual false, abstract: false, final false
  inline void AddBatch(::Amazon::DynamoDBv2::DataModel::BatchWrite* batch);

  /// @brief Method ExecuteAsync, addr 0x14227b0, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteHelper, addr 0x14223d8, size 0x1e4, virtual false, abstract: false, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x14225bc, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite* New_ctor(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches);

  static inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite* New_ctor(::Amazon::DynamoDBv2::DataModel::BatchWrite* first,
                                                                                ::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> rest);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*& __cordl_internal_get_allBatches();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> const& __cordl_internal_get_allBatches() const;

  constexpr void __cordl_internal_set_allBatches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchWrite*>* value);

  /// @brief Method .ctor, addr 0x142212c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches);

  /// @brief Method .ctor, addr 0x14221ec, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::BatchWrite* first, ::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> rest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiTableBatchWrite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiTableBatchWrite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiTableBatchWrite(MultiTableBatchWrite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiTableBatchWrite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiTableBatchWrite(MultiTableBatchWrite const&) = delete;

  /// @brief Field allBatches, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchWrite*>* ___allBatches;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite, ___allBatches) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*, "Amazon.DynamoDBv2.DataModel", "MultiTableBatchWrite");
