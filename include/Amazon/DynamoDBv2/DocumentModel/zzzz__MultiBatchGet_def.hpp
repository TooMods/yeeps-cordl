#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QuickList_1_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemResponse_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiBatchGet)
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchGet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Key;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __MultiBatchGet__RequestSet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __MultiBatchGet__Results;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchGet___CallUntilCompletionAsync_d__12;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchGet___GetAttributeItemsAsync_d__9;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchGet___GetItemsHelperAsync_d__7;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __MultiBatchGet____c;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemResponse;
}
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBClient;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class MultiBatchGet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __MultiBatchGet__RequestSet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __MultiBatchGet__Results;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __MultiBatchGet____c;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchGet___CallUntilCompletionAsync_d__12;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchGet___GetAttributeItemsAsync_d__9;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchGet___GetItemsHelperAsync_d__7;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7);
// Type: ::RequestSet
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::MultiBatchGet::RequestSet*
class CORDL_TYPE __MultiBatchGet__RequestSet
    : public ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> {
public:
  // Declarations
  __declspec(property(get = get_Batch, put = set_Batch))::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* Batch;

  /// @brief Field <Batch>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Batch_k__BackingField,
                      put = __cordl_internal_set__Batch_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* _Batch_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* items,
           ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* batch);

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*& __cordl_internal_get__Batch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*> const& __cordl_internal_get__Batch_k__BackingField() const;

  constexpr void __cordl_internal_set__Batch_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* value);

  /// @brief Method .ctor, addr 0x1647a50, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* items,
                    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* batch);

  /// @brief Method get_Batch, addr 0x1647ab4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* get_Batch();

  /// @brief Method set_Batch, addr 0x1647abc, size 0x8, virtual false, abstract: false, final false
  inline void set_Batch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchGet__RequestSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiBatchGet__RequestSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiBatchGet__RequestSet(__MultiBatchGet__RequestSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiBatchGet__RequestSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiBatchGet__RequestSet(__MultiBatchGet__RequestSet const&) = delete;

  /// @brief Field <Batch>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* ____Batch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet, ____Batch_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::Results
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::MultiBatchGet::Results*
class CORDL_TYPE __MultiBatchGet__Results : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RetrievedItems, put = set_RetrievedItems))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* RetrievedItems;

  __declspec(property(get = get_TargetTables, put = set_TargetTables))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* TargetTables;

  /// @brief Field <RetrievedItems>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RetrievedItems_k__BackingField, put = __cordl_internal_set__RetrievedItems_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* _RetrievedItems_k__BackingField;

  /// @brief Field <TargetTables>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__TargetTables_k__BackingField,
      put = __cordl_internal_set__TargetTables_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* _TargetTables_k__BackingField;

  /// @brief Method Add, addr 0x164782c, size 0x10c, virtual false, abstract: false, final false
  inline void Add(::StringW tableName, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* items);

  static inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* New_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* batches);

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*&
  __cordl_internal_get__RetrievedItems_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*> const&
  __cordl_internal_get__RetrievedItems_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*& __cordl_internal_get__TargetTables_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*> const&
  __cordl_internal_get__TargetTables_k__BackingField() const;

  constexpr void __cordl_internal_set__RetrievedItems_k__BackingField(
      ::System::Collections::Generic::Dictionary_2<
          ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* value);

  constexpr void __cordl_internal_set__TargetTables_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* value);

  /// @brief Method .ctor, addr 0x16466d8, size 0x460, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* batches);

  /// @brief Method get_RetrievedItems, addr 0x1647ac4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW,
                                                      ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*
  get_RetrievedItems();

  /// @brief Method get_TargetTables, addr 0x1647ad4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* get_TargetTables();

  /// @brief Method set_RetrievedItems, addr 0x1647acc, size 0x8, virtual false, abstract: false, final false
  inline void set_RetrievedItems(::System::Collections::Generic::Dictionary_2<
                                 ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* value);

  /// @brief Method set_TargetTables, addr 0x1647adc, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTables(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchGet__Results();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiBatchGet__Results", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiBatchGet__Results(__MultiBatchGet__Results&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiBatchGet__Results", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiBatchGet__Results(__MultiBatchGet__Results const&) = delete;

  /// @brief Field <RetrievedItems>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* ____RetrievedItems_k__BackingField;

  /// @brief Field <TargetTables>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* ____TargetTables_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results, ____RetrievedItems_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results, ____TargetTables_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<GetItemsHelperAsync>d__7
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::MultiBatchGet::<GetItemsHelperAsync>d__7
struct CORDL_TYPE __MultiBatchGet___GetItemsHelperAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1647ae4, size 0x6dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x16481c0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchGet___GetItemsHelperAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>", modifiers: "", def_value: None }]
  constexpr __MultiBatchGet___GetItemsHelperAsync_d__7(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
          ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
          __t__builder,
      ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
      __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7, __u__1) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<GetAttributeItemsAsync>d__9
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::MultiBatchGet::<GetAttributeItemsAsync>d__9
struct CORDL_TYPE __MultiBatchGet___GetAttributeItemsAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1648218, size 0x30c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1648524, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchGet___GetAttributeItemsAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "_results_5__2", ty: "::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*", modifiers: "", def_value: None }, CppParam { name: "_targetTable_5__3",
  // ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers: "", def_value: None }, CppParam { name: "_clientToUse_5__4", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "",
  // def_value: None }, CppParam { name: "_convertedBatches_5__5", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MultiBatchGet___GetAttributeItemsAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*> __t__builder,
      ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* _results_5__2, ::Amazon::DynamoDBv2::DocumentModel::Table* _targetTable_5__3,
      ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _clientToUse_5__4,
      ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>* _convertedBatches_5__5,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <results>5__2, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* _results_5__2;

  /// @brief Field <targetTable>5__3, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* _targetTable_5__3;

  /// @brief Field <clientToUse>5__4, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _clientToUse_5__4;

  /// @brief Field <convertedBatches>5__5, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>* _convertedBatches_5__5;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, _results_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, _targetTable_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, _clientToUse_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, _convertedBatches_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, __u__1) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<CallUntilCompletionAsync>d__12
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::MultiBatchGet::<CallUntilCompletionAsync>d__12
struct CORDL_TYPE __MultiBatchGet___CallUntilCompletionAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x164857c, size 0x3a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x164891c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchGet___CallUntilCompletionAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "client", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "",
  // def_value: None }, CppParam { name: "request", ty: "::Amazon::DynamoDBv2::Model::BatchGetItemRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "allResults", ty: "::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>",
  // modifiers: "", def_value: None }]
  constexpr __MultiBatchGet___CallUntilCompletionAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client,
      ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* allResults,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field client, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field allResults, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* allResults;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, client) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, allResults) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::MultiBatchGet::<>c*
class CORDL_TYPE __MultiBatchGet____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0,
                             put = setStaticF___9__14_0))::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::Key*,
                                                                          ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* __9__14_0;

  static inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c* New_ctor();

  /// @brief Method <ConvertBatches>b__14_0, addr 0x1648994, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _ConvertBatches_b__14_0(::Amazon::DynamoDBv2::DocumentModel::Key* k);

  /// @brief Method .ctor, addr 0x164898c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*
  getStaticF___9__14_0();

  static inline void setStaticF___9(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c* value);

  static inline void
  setStaticF___9__14_0(::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchGet____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiBatchGet____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiBatchGet____c(__MultiBatchGet____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiBatchGet____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiBatchGet____c(__MultiBatchGet____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::MultiBatchGet
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::MultiBatchGet*
class CORDL_TYPE MultiBatchGet : public ::System::Object {
public:
  // Declarations
  using RequestSet = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet;

  using Results = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results;

  using _CallUntilCompletionAsync_d__12 = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12;

  using _GetAttributeItemsAsync_d__9 = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9;

  using _GetItemsHelperAsync_d__7 = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7;

  using __c = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c;

  __declspec(property(get = get_Batches, put = set_Batches))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* Batches;

  /// @brief Field <Batches>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Batches_k__BackingField,
                      put = __cordl_internal_set__Batches_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* _Batches_k__BackingField;

  /// @brief Method CallUntilCompletion, addr 0x1647644, size 0x1e8, virtual false, abstract: false, final false
  static inline void CallUntilCompletion(::Amazon::DynamoDBv2::AmazonDynamoDBClient* client, ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request,
                                         ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* allResults);

  /// @brief Method CallUntilCompletionAsync, addr 0x1647938, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* CallUntilCompletionAsync(::Amazon::DynamoDBv2::AmazonDynamoDBClient* client, ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request,
                                                                           ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* allResults,
                                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ConvertBatches, addr 0x1646b38, size 0x3ec, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>* ConvertBatches();

  /// @brief Method CreateRequest, addr 0x164726c, size 0x2c0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::BatchGetItemRequest*
  CreateRequest(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>* set);

  /// @brief Method GetAttributeItems, addr 0x164643c, size 0x148, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* GetAttributeItems();

  /// @brief Method GetAttributeItemsAsync, addr 0x16465a8, size 0x130, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>* GetAttributeItemsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItems, addr 0x1646434, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>* GetItems();

  /// @brief Method GetItemsAsync, addr 0x1646438, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>*
  GetItemsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemsHelper, addr 0x1644e80, size 0x4ac, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>* GetItemsHelper();

  /// @brief Method GetItemsHelperAsync, addr 0x1645944, size 0x120, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>*
  GetItemsHelperAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetNextRequestItems, addr 0x1646f24, size 0x348, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*
  GetNextRequestItems(ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*> getRequestsMap, int32_t maxNumberOfItems);

  static inline ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*& __cordl_internal_get__Batches_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*> const&
  __cordl_internal_get__Batches_k__BackingField() const;

  constexpr void __cordl_internal_set__Batches_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* value);

  /// @brief Method .ctor, addr 0x1644e78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Batches, addr 0x1646424, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* get_Batches();

  /// @brief Method set_Batches, addr 0x164642c, size 0x8, virtual false, abstract: false, final false
  inline void set_Batches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiBatchGet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiBatchGet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiBatchGet(MultiBatchGet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiBatchGet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiBatchGet(MultiBatchGet const&) = delete;

  /// @brief Field <Batches>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* ____Batches_k__BackingField;

  /// @brief Field MaxItemsPerCall offset 0xffffffff size 0x4
  static constexpr int32_t MaxItemsPerCall{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet, ____Batches_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchGet");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchGet/RequestSet");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchGet/Results");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchGet/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchGet/<CallUntilCompletionAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchGet/<GetAttributeItemsAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchGet/<GetItemsHelperAsync>d__7");
