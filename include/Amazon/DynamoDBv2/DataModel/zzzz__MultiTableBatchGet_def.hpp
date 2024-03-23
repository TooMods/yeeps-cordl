#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiTableBatchGet)
namespace Amazon::DynamoDBv2::DataModel {
class BatchGet;
}
namespace Amazon::DynamoDBv2::DataModel {
struct __MultiTableBatchGet___ExecuteHelperAsync_d__7;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class MultiTableBatchGet;
}
namespace Amazon::DynamoDBv2::DataModel {
struct __MultiTableBatchGet___ExecuteHelperAsync_d__7;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet);
MARK_VAL_T(::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7);
// Type: ::<ExecuteHelperAsync>d__7
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: true
// CS Name: ::MultiTableBatchGet::<ExecuteHelperAsync>d__7
struct CORDL_TYPE __MultiTableBatchGet___ExecuteHelperAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1421bfc, size 0x4bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14220b8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiTableBatchGet___ExecuteHelperAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MultiTableBatchGet___ExecuteHelperAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                           ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                           ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7, __u__1) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::MultiTableBatchGet
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::MultiTableBatchGet*
class CORDL_TYPE MultiTableBatchGet : public ::System::Object {
public:
  // Declarations
  using _ExecuteHelperAsync_d__7 = ::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7;

  __declspec(property(get = get_TotalKeys)) int32_t TotalKeys;

  /// @brief Field allBatches, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_allBatches, put = __cordl_internal_set_allBatches))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchGet*>* allBatches;

  /// @brief Method AddBatch, addr 0x1421778, size 0xa8, virtual false, abstract: false, final false
  inline void AddBatch(::Amazon::DynamoDBv2::DataModel::BatchGet* batch);

  /// @brief Method ExecuteAsync, addr 0x1421bf8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteHelper, addr 0x1421820, size 0x2d8, virtual false, abstract: false, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x1421af8, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet* New_ctor(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches);

  static inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet* New_ctor(::Amazon::DynamoDBv2::DataModel::BatchGet* first,
                                                                              ::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> rest);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchGet*>*& __cordl_internal_get_allBatches();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> const& __cordl_internal_get_allBatches() const;

  constexpr void __cordl_internal_set_allBatches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchGet*>* value);

  /// @brief Method .ctor, addr 0x1421408, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches);

  /// @brief Method .ctor, addr 0x14214c8, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::BatchGet* first, ::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> rest);

  /// @brief Method get_TotalKeys, addr 0x142160c, size 0x16c, virtual false, abstract: false, final false
  inline int32_t get_TotalKeys();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiTableBatchGet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiTableBatchGet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiTableBatchGet(MultiTableBatchGet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiTableBatchGet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiTableBatchGet(MultiTableBatchGet const&) = delete;

  /// @brief Field allBatches, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchGet*>* ___allBatches;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet, ___allBatches) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*, "Amazon.DynamoDBv2.DataModel", "MultiTableBatchGet");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__MultiTableBatchGet___ExecuteHelperAsync_d__7, "Amazon.DynamoDBv2.DataModel", "MultiTableBatchGet/<ExecuteHelperAsync>d__7");
