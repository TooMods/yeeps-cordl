#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/Model/zzzz__BatchWriteItemResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiBatchWrite)
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchWrite;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class KeyComparer;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Key;
}
namespace Amazon::DynamoDBv2::DocumentModel {
template <typename T> class QuickList_1;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class WriteRequestDocument;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchWrite___CallUntilCompletionAsync_d__17;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchWrite___SendSetAsync_d__12;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchWrite___WriteItemsHelperAsync_d__10;
}
namespace Amazon::DynamoDBv2::Model {
class BatchWriteItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class BatchWriteItemResponse;
}
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBClient;
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
namespace Amazon::DynamoDBv2::DocumentModel {
class MultiBatchWrite;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchWrite___CallUntilCompletionAsync_d__17;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchWrite___SendSetAsync_d__12;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __MultiBatchWrite___WriteItemsHelperAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10);
// Type: ::<WriteItemsHelperAsync>d__10
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::MultiBatchWrite::<WriteItemsHelperAsync>d__10
struct CORDL_TYPE __MultiBatchWrite___WriteItemsHelperAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x164b690, size 0x298, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x164b928, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchWrite___WriteItemsHelperAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*",
  // modifiers: "", def_value: None }, CppParam { name: "batches", ty: "::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_writeRequestsMap_5__2", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*", modifiers: "", def_value:
  // None }, CppParam { name: "_targetTable_5__3", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MultiBatchWrite___WriteItemsHelperAsync_d__10(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this,
      ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches, ::System::Threading::CancellationToken cancellationToken,
      ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* _writeRequestsMap_5__2,
      ::Amazon::DynamoDBv2::DocumentModel::Table* _targetTable_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this;

  /// @brief Field batches, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <writeRequestsMap>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* _writeRequestsMap_5__2;

  /// @brief Field <targetTable>5__3, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* _targetTable_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, batches) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, _writeRequestsMap_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, _targetTable_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, __u__1) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<SendSetAsync>d__12
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::MultiBatchWrite::<SendSetAsync>d__12
struct CORDL_TYPE __MultiBatchWrite___SendSetAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x164b934, size 0x530, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x164be64, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchWrite___SendSetAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*",
  // modifiers: "", def_value: None }, CppParam { name: "set", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*", modifiers: "", def_value:
  // None }, CppParam { name: "targetTable", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_request_5__2", ty: "::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*", modifiers: "", def_value:
  // None }, CppParam { name: "_shouldTrySmallerRequest_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MultiBatchWrite___SendSetAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this,
      ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* set,
      ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* _request_5__2,
      bool _shouldTrySmallerRequest_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this;

  /// @brief Field set, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* set;

  /// @brief Field targetTable, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <request>5__2, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* _request_5__2;

  /// @brief Field <shouldTrySmallerRequest>5__3, offset: 0x48, size: 0x1, def value: None
  bool _shouldTrySmallerRequest_5__3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, set) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, targetTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, _request_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, _shouldTrySmallerRequest_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, __u__1) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<CallUntilCompletionAsync>d__17
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::MultiBatchWrite::<CallUntilCompletionAsync>d__17
struct CORDL_TYPE __MultiBatchWrite___CallUntilCompletionAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x164be70, size 0xb84, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x164c9f4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiBatchWrite___CallUntilCompletionAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "client", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "",
  // def_value: None }, CppParam { name: "request", ty: "::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*", modifiers: "", def_value:
  // None }, CppParam { name: "documentMap", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*,::Amazon::DynamoDBv2::DocumentModel::Document*>*>*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>", modifiers: "", def_value: None }]
  constexpr __MultiBatchWrite___CallUntilCompletionAsync_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client,
      ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this,
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
          documentMap,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field client, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this;

  /// @brief Field documentMap, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
      documentMap;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, client) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, documentMap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, __u__1) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::MultiBatchWrite
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::MultiBatchWrite*
class CORDL_TYPE MultiBatchWrite : public ::System::Object {
public:
  // Declarations
  using _CallUntilCompletionAsync_d__17 = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17;

  using _SendSetAsync_d__12 = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12;

  using _WriteItemsHelperAsync_d__10 = ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10;

  __declspec(property(get = get_Batches, put = set_Batches))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* Batches;

  /// @brief Field <Batches>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Batches_k__BackingField,
                      put = __cordl_internal_set__Batches_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* _Batches_k__BackingField;

  /// @brief Field keyComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_keyComparer, put = setStaticF_keyComparer))::Amazon::DynamoDBv2::DocumentModel::KeyComparer* keyComparer;

  /// @brief Field tableMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tableMap,
                      put = __cordl_internal_set_tableMap))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* tableMap;

  /// @brief Method CallUntilCompletion, addr 0x164a904, size 0x928, virtual false, abstract: false, final false
  inline void CallUntilCompletion(
      ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request,
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
          documentMap,
      ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client);

  /// @brief Method CallUntilCompletionAsync, addr 0x164b4ac, size 0x130, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CallUntilCompletionAsync(
      ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request,
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
          documentMap,
      ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ConstructRequest, addr 0x164a264, size 0x6a0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* ConstructRequest(
      ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* writeItems,
      ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable,
      ByRef<::System::Collections::Generic::Dictionary_2<::StringW,
                                                         ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
          documentMap,
      bool isAsync);

  /// @brief Method ConvertBatches, addr 0x164953c, size 0x820, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*
  ConvertBatches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches);

  /// @brief Method GetNextWriteItems, addr 0x1649d5c, size 0x350, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*
  GetNextWriteItems(
      ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*> writeRequestsMap,
      int32_t maxNumberOfItems);

  /// @brief Method GetNumberOfWrites, addr 0x164b22c, size 0x168, virtual false, abstract: false, final false
  static inline int32_t GetNumberOfWrites(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request);

  static inline ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* New_ctor();

  /// @brief Method SendSet, addr 0x164a0ac, size 0x1b8, virtual false, abstract: false, final false
  inline void SendSet(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* set,
                      ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable);

  /// @brief Method SendSetAsync, addr 0x164b394, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task*
  SendSetAsync(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* set,
               ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteItems, addr 0x1649030, size 0x8, virtual false, abstract: false, final false
  inline void WriteItems();

  /// @brief Method WriteItemsAsync, addr 0x1649158, size 0x10, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteItemsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteItemsHelper, addr 0x1649310, size 0x110, virtual false, abstract: false, final false
  inline void WriteItemsHelper(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches);

  /// @brief Method WriteItemsHelperAsync, addr 0x1649420, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteItemsHelperAsync(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches,
                                                                 ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*& __cordl_internal_get__Batches_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*> const&
  __cordl_internal_get__Batches_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*& __cordl_internal_get_tableMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*> const& __cordl_internal_get_tableMap() const;

  constexpr void __cordl_internal_set__Batches_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* value);

  constexpr void __cordl_internal_set_tableMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* value);

  /// @brief Method .ctor, addr 0x1648f50, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::KeyComparer* getStaticF_keyComparer();

  /// @brief Method get_Batches, addr 0x1649300, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* get_Batches();

  static inline void setStaticF_keyComparer(::Amazon::DynamoDBv2::DocumentModel::KeyComparer* value);

  /// @brief Method set_Batches, addr 0x1649308, size 0x8, virtual false, abstract: false, final false
  inline void set_Batches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiBatchWrite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiBatchWrite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiBatchWrite(MultiBatchWrite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiBatchWrite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiBatchWrite(MultiBatchWrite const&) = delete;

  /// @brief Field tableMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* ___tableMap;

  /// @brief Field <Batches>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* ____Batches_k__BackingField;

  /// @brief Field MaxItemsPerCall offset 0xffffffff size 0x4
  static constexpr int32_t MaxItemsPerCall{ static_cast<int32_t>(0x19) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite, ___tableMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite, ____Batches_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchWrite");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchWrite/<CallUntilCompletionAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchWrite/<SendSetAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10, "Amazon.DynamoDBv2.DocumentModel", "MultiBatchWrite/<WriteItemsHelperAsync>d__10");
