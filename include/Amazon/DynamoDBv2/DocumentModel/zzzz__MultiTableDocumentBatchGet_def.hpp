#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiTableDocumentBatchGet)
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchGet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class MultiTableDocumentBatchGet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9);
// Type: ::<ExecuteHelperAsync>d__9
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::MultiTableDocumentBatchGet::<ExecuteHelperAsync>d__9
struct CORDL_TYPE __MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1645ff0, size 0x428, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1646418, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>",
  // modifiers: "", def_value: None }]
  constexpr __MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet* __4__this,
      ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<
          ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
          __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
      __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9, __u__1) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::MultiTableDocumentBatchGet
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::MultiTableDocumentBatchGet*
class CORDL_TYPE MultiTableDocumentBatchGet : public ::System::Object {
public:
  // Declarations
  using _ExecuteHelperAsync_d__9 = ::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9;

  __declspec(property(get = get_Batches, put = set_Batches))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* Batches;

  __declspec(property(get = get_TotalKeys)) int32_t TotalKeys;

  /// @brief Field <Batches>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Batches_k__BackingField,
                      put = __cordl_internal_set__Batches_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* _Batches_k__BackingField;

  /// @brief Method AddBatch, addr 0x1645bec, size 0xa8, virtual false, abstract: false, final false
  inline void AddBatch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* batch);

  /// @brief Method ExecuteAsync, addr 0x1645fec, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteHelper, addr 0x1645c94, size 0x258, virtual false, abstract: false, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x1645eec, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*
  New_ctor(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*> batches);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*& __cordl_internal_get__Batches_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*> const&
  __cordl_internal_get__Batches_k__BackingField() const;

  constexpr void __cordl_internal_set__Batches_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* value);

  /// @brief Method .ctor, addr 0x1644bf4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*> batches);

  /// @brief Method get_Batches, addr 0x1645a70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* get_Batches();

  /// @brief Method get_TotalKeys, addr 0x1645a80, size 0x16c, virtual false, abstract: false, final false
  inline int32_t get_TotalKeys();

  /// @brief Method set_Batches, addr 0x1645a78, size 0x8, virtual false, abstract: false, final false
  inline void set_Batches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiTableDocumentBatchGet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiTableDocumentBatchGet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiTableDocumentBatchGet(MultiTableDocumentBatchGet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiTableDocumentBatchGet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiTableDocumentBatchGet(MultiTableDocumentBatchGet const&) = delete;

  /// @brief Field <Batches>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* ____Batches_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet, ____Batches_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*, "Amazon.DynamoDBv2.DocumentModel", "MultiTableDocumentBatchGet");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9, "Amazon.DynamoDBv2.DocumentModel",
                       "MultiTableDocumentBatchGet/<ExecuteHelperAsync>d__9");
