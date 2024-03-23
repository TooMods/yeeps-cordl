#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamoDBContext)
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class AsyncSearch_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class BatchGet_1;
}
namespace Amazon::DynamoDBv2::DataModel {
class BatchGet;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class BatchWrite_1;
}
namespace Amazon::DynamoDBv2::DataModel {
class BatchWrite;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContextConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBOperationConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class IDynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class IPropertyConverter;
}
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorageConfigCache;
}
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorageConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorage;
}
namespace Amazon::DynamoDBv2::DataModel {
class MultiTableBatchGet;
}
namespace Amazon::DynamoDBv2::DataModel {
class MultiTableBatchWrite;
}
namespace Amazon::DynamoDBv2::DataModel {
class PropertyStorage;
}
namespace Amazon::DynamoDBv2::DataModel {
class QueryCondition;
}
namespace Amazon::DynamoDBv2::DataModel {
class ScanCondition;
}
namespace Amazon::DynamoDBv2::DataModel {
class SimplePropertyStorage;
}
namespace Amazon::DynamoDBv2::DataModel {
class __DynamoDBContext__ContextSearch;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class __DynamoDBContext___FromDocumentsHelper_d__47_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class __DynamoDBContext___FromDocuments_d__46_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class __DynamoDBContext___FromSearch_d__98_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __DynamoDBContext___LoadHelperAsync_d__41_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __DynamoDBContext___SaveHelperAsync_d__33_1;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Key;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class QueryFilter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class QueryOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct QueryOperator;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class ScanFilter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class ScanOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Search;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table__DynamoDBConsumer;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2 {
class IAmazonDynamoDB;
}
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class MemberInfo;
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
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
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
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class __DynamoDBContext__ContextSearch;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class __DynamoDBContext___FromDocumentsHelper_d__47_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class __DynamoDBContext___FromDocuments_d__46_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class __DynamoDBContext___FromSearch_d__98_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __DynamoDBContext___LoadHelperAsync_d__41_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __DynamoDBContext___SaveHelperAsync_d__33_1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::DynamoDBContext);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch);
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1);
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1);
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1);
MARK_GEN_VAL_T(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1);
MARK_GEN_VAL_T(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1);
// Type: ::ContextSearch
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::DynamoDBContext::ContextSearch*
class CORDL_TYPE __DynamoDBContext__ContextSearch : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FlatConfig, put = set_FlatConfig))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* FlatConfig;

  __declspec(property(get = get_Search, put = set_Search))::Amazon::DynamoDBv2::DocumentModel::Search* Search;

  /// @brief Field <FlatConfig>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__FlatConfig_k__BackingField,
                      put = __cordl_internal_set__FlatConfig_k__BackingField))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* _FlatConfig_k__BackingField;

  /// @brief Field <Search>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Search_k__BackingField, put = __cordl_internal_set__Search_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Search* _Search_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* New_ctor(::Amazon::DynamoDBv2::DocumentModel::Search* search,
                                                                                            ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& __cordl_internal_get__FlatConfig_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const& __cordl_internal_get__FlatConfig_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Search*& __cordl_internal_get__Search_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Search*> const& __cordl_internal_get__Search_k__BackingField() const;

  constexpr void __cordl_internal_set__FlatConfig_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  constexpr void __cordl_internal_set__Search_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Search* value);

  /// @brief Method .ctor, addr 0x142b5fc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DocumentModel::Search* search, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method get_FlatConfig, addr 0x142b5dc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* get_FlatConfig();

  /// @brief Method get_Search, addr 0x142b5ec, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* get_Search();

  /// @brief Method set_FlatConfig, addr 0x142b5e4, size 0x8, virtual false, abstract: false, final false
  inline void set_FlatConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  /// @brief Method set_Search, addr 0x142b5f4, size 0x8, virtual false, abstract: false, final false
  inline void set_Search(::Amazon::DynamoDBv2::DocumentModel::Search* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBContext__ContextSearch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBContext__ContextSearch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBContext__ContextSearch(__DynamoDBContext__ContextSearch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBContext__ContextSearch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBContext__ContextSearch(__DynamoDBContext__ContextSearch const&) = delete;

  /// @brief Field <FlatConfig>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* ____FlatConfig_k__BackingField;

  /// @brief Field <Search>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Search* ____Search_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch, ____FlatConfig_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch, ____Search_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<SaveHelperAsync>d__33`1
// SizeInfo { instance_size: 96, native_size: 112, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::DynamoDBContext::<SaveHelperAsync>d__33`1<T>
struct CORDL_TYPE __DynamoDBContext___SaveHelperAsync_d__33_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBContext___SaveHelperAsync_d__33_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None }, CppParam { name:
  // "operationConfig", ty: "::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::DynamoDBv2::DataModel::DynamoDBContext*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "_flatConfig_5__2", ty: "::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*", modifiers: "", def_value: None }, CppParam { name: "_storage_5__3", ty:
  // "::Amazon::DynamoDBv2::DataModel::ItemStorage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*>", modifiers: "", def_value: None }]
  constexpr __DynamoDBContext___SaveHelperAsync_d__33_1(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
      ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* _flatConfig_5__2,
      ::Amazon::DynamoDBv2::DataModel::ItemStorage* _storage_5__3,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field value, offset: 0x20, size: 0x8, def value: None
  T value;

  /// @brief Field operationConfig, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <flatConfig>5__2, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* _flatConfig_5__2;

  /// @brief Field <storage>5__3, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorage* _storage_5__3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<LoadHelperAsync>d__41`1
// SizeInfo { instance_size: 104, native_size: 120, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::DynamoDBContext::<LoadHelperAsync>d__41`1<T>
struct CORDL_TYPE __DynamoDBContext___LoadHelperAsync_d__41_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBContext___LoadHelperAsync_d__41_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "flatConfig", ty: "::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*",
  // modifiers: "", def_value: None }, CppParam { name: "storageConfig", ty: "::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::DynamoDBv2::DataModel::DynamoDBContext*", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::Amazon::DynamoDBv2::DocumentModel::Key*", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_storage_5__2", ty:
  // "::Amazon::DynamoDBv2::DataModel::ItemStorage*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::Amazon::DynamoDBv2::DataModel::ItemStorage*", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*>", modifiers: "",
  // def_value: None }]
  constexpr __DynamoDBContext___LoadHelperAsync_d__41_1(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
      ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig, ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this, ::Amazon::DynamoDBv2::DocumentModel::Key* key,
      ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DataModel::ItemStorage* _storage_5__2, ::Amazon::DynamoDBv2::DataModel::ItemStorage* __7__wrap2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field flatConfig, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig;

  /// @brief Field storageConfig, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this;

  /// @brief Field key, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Key* key;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <storage>5__2, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorage* _storage_5__2;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorage* __7__wrap2;

  /// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<FromDocuments>d__46`1
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::DynamoDBContext::<FromDocuments>d__46`1<T>*
class CORDL_TYPE __DynamoDBContext___FromDocuments_d__46_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>3__documents, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__documents,
                      put = __cordl_internal_set___3__documents))::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* __3__documents;

  /// @brief Field <>3__operationConfig, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__operationConfig, put = __cordl_internal_set___3__operationConfig))::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* __3__operationConfig;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field documents, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_documents,
                      put = __cordl_internal_set_documents))::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents;

  /// @brief Field operationConfig, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_operationConfig, put = __cordl_internal_set_operationConfig))::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get___3__documents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get___3__documents() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*& __cordl_internal_get___3__operationConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*> const& __cordl_internal_get___3__operationConfig() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get_documents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get_documents() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*& __cordl_internal_get_operationConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*> const& __cordl_internal_get_operationConfig() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___3__documents(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  constexpr void __cordl_internal_set___3__operationConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_documents(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  constexpr void __cordl_internal_set_operationConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBContext___FromDocuments_d__46_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBContext___FromDocuments_d__46_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBContext___FromDocuments_d__46_1(__DynamoDBContext___FromDocuments_d__46_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBContext___FromDocuments_d__46_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBContext___FromDocuments_d__46_1(__DynamoDBContext___FromDocuments_d__46_1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field documents, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* ___documents;

  /// @brief Field <>3__documents, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _____3__documents;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* _____4__this;

  /// @brief Field operationConfig, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* ___operationConfig;

  /// @brief Field <>3__operationConfig, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* _____3__operationConfig;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<FromDocumentsHelper>d__47`1
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::DynamoDBContext::<FromDocumentsHelper>d__47`1<T>*
class CORDL_TYPE __DynamoDBContext___FromDocumentsHelper_d__47_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>3__documents, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__documents,
                      put = __cordl_internal_set___3__documents))::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* __3__documents;

  /// @brief Field <>3__flatConfig, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__flatConfig, put = __cordl_internal_set___3__flatConfig))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* __3__flatConfig;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field documents, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_documents,
                      put = __cordl_internal_set_documents))::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents;

  /// @brief Field flatConfig, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_flatConfig, put = __cordl_internal_set_flatConfig))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get___3__documents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get___3__documents() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& __cordl_internal_get___3__flatConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const& __cordl_internal_get___3__flatConfig() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get_documents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get_documents() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& __cordl_internal_get_flatConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const& __cordl_internal_get_flatConfig() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___3__documents(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  constexpr void __cordl_internal_set___3__flatConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_documents(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  constexpr void __cordl_internal_set_flatConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBContext___FromDocumentsHelper_d__47_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBContext___FromDocumentsHelper_d__47_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBContext___FromDocumentsHelper_d__47_1(__DynamoDBContext___FromDocumentsHelper_d__47_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBContext___FromDocumentsHelper_d__47_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBContext___FromDocumentsHelper_d__47_1(__DynamoDBContext___FromDocumentsHelper_d__47_1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field documents, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* ___documents;

  /// @brief Field <>3__documents, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _____3__documents;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* _____4__this;

  /// @brief Field flatConfig, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* ___flatConfig;

  /// @brief Field <>3__flatConfig, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* _____3__flatConfig;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<FromSearch>d__98`1
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::DynamoDBContext::<FromSearch>d__98`1<T>*
class CORDL_TYPE __DynamoDBContext___FromSearch_d__98_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>3__cs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__cs, put = __cordl_internal_set___3__cs))::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* __3__cs;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this;

  /// @brief Field <>7__wrap2, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap2,
                      put = __cordl_internal_set___7__wrap2))::System::Collections::Generic::__List_1__Enumerator<::Amazon::DynamoDBv2::DocumentModel::Document*> __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <storageConfig>5__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__storageConfig_5__2, put = __cordl_internal_set__storageConfig_5__2))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* _storageConfig_5__2;

  /// @brief Field cs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cs, put = __cordl_internal_set_cs))::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* cs;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*& __cordl_internal_get___3__cs();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*> const& __cordl_internal_get___3__cs() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::Amazon::DynamoDBv2::DocumentModel::Document*> const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::Amazon::DynamoDBv2::DocumentModel::Document*>& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& __cordl_internal_get__storageConfig_5__2();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const& __cordl_internal_get__storageConfig_5__2() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*& __cordl_internal_get_cs();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*> const& __cordl_internal_get_cs() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___3__cs(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::__List_1__Enumerator<::Amazon::DynamoDBv2::DocumentModel::Document*> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__storageConfig_5__2(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

  constexpr void __cordl_internal_set_cs(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBContext___FromSearch_d__98_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBContext___FromSearch_d__98_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBContext___FromSearch_d__98_1(__DynamoDBContext___FromSearch_d__98_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBContext___FromSearch_d__98_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBContext___FromSearch_d__98_1(__DynamoDBContext___FromSearch_d__98_1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field cs, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* ___cs;

  /// @brief Field <>3__cs, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* _____3__cs;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* _____4__this;

  /// @brief Field <storageConfig>5__2, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* ____storageConfig_5__2;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::Amazon::DynamoDBv2::DocumentModel::Document*> _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::DynamoDBContext
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::DynamoDBContext*
class CORDL_TYPE DynamoDBContext : public ::System::Object {
public:
  // Declarations
  using ContextSearch = ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch;

  template <typename T> using _FromDocumentsHelper_d__47_1 = ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>;

  template <typename T> using _FromDocuments_d__46_1 = ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>;

  template <typename T> using _FromSearch_d__98_1 = ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>;

  template <typename T> using _LoadHelperAsync_d__41_1 = ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>;

  template <typename T> using _SaveHelperAsync_d__33_1 = ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>;

  __declspec(property(get = get_Client, put = set_Client))::Amazon::DynamoDBv2::IAmazonDynamoDB* Client;

  /// @brief Field CompletedTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CompletedTask, put = setStaticF_CompletedTask))::System::Threading::Tasks::Task* CompletedTask;

  __declspec(property(get = get_Config, put = set_Config))::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* Config;

  __declspec(property(get = get_ConverterCache,
                      put = set_ConverterCache))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* ConverterCache;

  /// @brief Field NO_INDEX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NO_INDEX, put = setStaticF_NO_INDEX))::StringW NO_INDEX;

  __declspec(property(get = get_StorageConfigCache, put = set_StorageConfigCache))::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* StorageConfigCache;

  /// @brief Field <Client>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Client_k__BackingField, put = __cordl_internal_set__Client_k__BackingField))::Amazon::DynamoDBv2::IAmazonDynamoDB* _Client_k__BackingField;

  /// @brief Field <Config>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Config_k__BackingField,
                      put = __cordl_internal_set__Config_k__BackingField))::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* _Config_k__BackingField;

  /// @brief Field <ConverterCache>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ConverterCache_k__BackingField, put = __cordl_internal_set__ConverterCache_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* _ConverterCache_k__BackingField;

  /// @brief Field <StorageConfigCache>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__StorageConfigCache_k__BackingField,
                      put = __cordl_internal_set__StorageConfigCache_k__BackingField))::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* _StorageConfigCache_k__BackingField;

  /// @brief Field _readerWriterLockSlim, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__readerWriterLockSlim, put = __cordl_internal_set__readerWriterLockSlim))::System::Threading::ReaderWriterLockSlim* _readerWriterLockSlim;

  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field ownClient, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_ownClient, put = __cordl_internal_set_ownClient)) bool ownClient;

  /// @brief Field tablesMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tablesMap,
                      put = __cordl_internal_set_tablesMap))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* tablesMap;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::DataModel::IDynamoDBContext"
  constexpr operator ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CompareKeys, addr 0x1424934, size 0x4e4, virtual false, abstract: false, final false
  static inline void CompareKeys(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* table,
                                 ::System::Collections::Generic::List_1<::StringW>* attributes, ::System::Collections::Generic::List_1<::StringW>* properties, ::StringW keyType);

  /// @brief Method ComposeQueryFilter, addr 0x1429a10, size 0x1d4, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* ComposeQueryFilter(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* currentConfig, ::System::Object* hashKeyValue,
                                                                              ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>* conditions,
                                                                              ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                                              ByRef<::System::Collections::Generic::List_1<::StringW>*> indexNames);

  /// @brief Method ComposeQueryFilterHelper, addr 0x1429c50, size 0x848, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* ComposeQueryFilterHelper(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* currentConfig,
                                                                                    ::Amazon::DynamoDBv2::DocumentModel::Document* hashKey,
                                                                                    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>* conditions,
                                                                                    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                                                    ByRef<::System::Collections::Generic::List_1<::StringW>*> indexNames);

  /// @brief Method ComposeScanFilter, addr 0x1429408, size 0x608, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ScanFilter* ComposeScanFilter(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* conditions,
                                                                            ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                                            ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method ConvertConditionValues, addr 0x142a4b8, size 0x1cc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* ConvertConditionValues(::ArrayW<::System::Object*, ::Array<::System::Object*>*> conditionValues,
                                                                                                                      ::Amazon::DynamoDBv2::DataModel::PropertyStorage* conditionProperty,
                                                                                                                      ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                                                                      bool canReturnScalarInsteadOfList);

  /// @brief Method ConvertFromQuery, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* ConvertFromQuery(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig* queryConfig,
                                                                                             ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method ConvertFromScan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* ConvertFromScan(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* scanConfig,
                                                                                            ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method ConvertQueryByValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*
  ConvertQueryByValue(::System::Object* hashKeyValue, ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>* conditions,
                      ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig);

  /// @brief Method ConvertQueryByValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* ConvertQueryByValue(::System::Object* hashKeyValue, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                                                ::System::Collections::Generic::IEnumerable_1<::System::Object*>* values,
                                                                                                ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method ConvertQueryHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*
  ConvertQueryHelper(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* currentConfig, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                     ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* filter, ::System::Collections::Generic::List_1<::StringW>* indexNames);

  /// @brief Method ConvertScan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* ConvertScan(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* conditions,
                                                                                        ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method CreateBatchGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* CreateBatchGet();

  /// @brief Method CreateBatchGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* CreateBatchGet(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method CreateBatchWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>* CreateBatchWrite();

  /// @brief Method CreateBatchWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>* CreateBatchWrite(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method CreateExpectedDocumentForVersion, addr 0x14242b4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Document* CreateExpectedDocumentForVersion(::Amazon::DynamoDBv2::DataModel::ItemStorage* storage);

  /// @brief Method CreateMultiTableBatchGet, addr 0x142371c, size 0x60, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*
  CreateMultiTableBatchGet(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches);

  /// @brief Method CreateMultiTableBatchWrite, addr 0x142377c, size 0x60, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*
  CreateMultiTableBatchWrite(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches);

  /// @brief Method CreateQueryConditions, addr 0x142a968, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*
  CreateQueryConditions(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                        ::System::Collections::Generic::IEnumerable_1<::System::Object*>* values, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task* DeleteAsync(::System::Object* hashKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Threading::Tasks::Task* DeleteAsync(::System::Object* hashKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task* DeleteAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Threading::Tasks::Task* DeleteAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task* DeleteAsync(T value, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Threading::Tasks::Task* DeleteAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DeleteHelper(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method DeleteHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DeleteHelper(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method DeleteHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task* DeleteHelperAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task* DeleteHelperAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeserializeFromDocument, addr 0x142710c, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* DeserializeFromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document, ::System::Type* targetType,
                                                   ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method Dispose, addr 0x1423608, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x14234c0, size 0xdc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DocumentToObject, addr 0x14250dc, size 0xec, virtual false, abstract: false, final false
  inline ::System::Object* DocumentToObject(::System::Type* objectType, ::Amazon::DynamoDBv2::DataModel::ItemStorage* storage, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method DocumentToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T DocumentToObject(::Amazon::DynamoDBv2::DataModel::ItemStorage* storage, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method ExecuteBatchGetAsync, addr 0x142b42c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteBatchGetAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches);

  /// @brief Method ExecuteBatchGetAsync, addr 0x142b434, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* ExecuteBatchGetAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches,
                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteBatchWriteAsync, addr 0x142b4a4, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* ExecuteBatchWriteAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches,
                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Finalize, addr 0x1423678, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FromDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T FromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document);

  /// @brief Method FromDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T FromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method FromDocumentHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T FromDocumentHelper(::Amazon::DynamoDBv2::DocumentModel::Document* document, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method FromDocuments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Collections::Generic::IEnumerable_1<T>* FromDocuments(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents);

  /// @brief Method FromDocuments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Collections::Generic::IEnumerable_1<T>* FromDocuments(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents,
                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method FromDocumentsHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::System::Collections::Generic::IEnumerable_1<T>* FromDocumentsHelper(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents,
                                                                               ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method FromDynamoDBEntry, addr 0x14258ec, size 0x370, virtual false, abstract: false, final false
  inline ::System::Object* FromDynamoDBEntry(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage* propertyStorage, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry,
                                             ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method FromQueryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* FromQueryAsync(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig* queryConfig,
                                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method FromScanAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* FromScanAsync(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* scanConfig,
                                                                          ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method FromSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* FromSearch(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* cs);

  /// @brief Method FromSearchAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* FromSearchAsync(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* contextSearch);

  /// @brief Method GetQueryIndexName, addr 0x142a684, size 0x2e4, virtual false, abstract: false, final false
  static inline ::StringW GetQueryIndexName(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, ::System::Collections::Generic::List_1<::StringW>* indexNames);

  /// @brief Method GetTableName, addr 0x14244ac, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW GetTableName(::StringW baseTableName, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method GetTargetTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Table* GetTargetTable(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method GetTargetTable, addr 0x1424354, size 0x158, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Table* GetTargetTable(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                    ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer consumer);

  /// @brief Method GetTargetTableInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Table* GetTargetTableInternal(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method GetUnconfiguredTable, addr 0x1424558, size 0x310, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Table* GetUnconfiguredTable(::StringW tableName);

  /// @brief Method IncrementVersion, addr 0x1423a48, size 0x86c, virtual false, abstract: false, final false
  static inline void IncrementVersion(::System::Type* memberType, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> version);

  /// @brief Method IsSupportedDictionaryType, addr 0x1429160, size 0x2a8, virtual false, abstract: false, final false
  static inline bool IsSupportedDictionaryType(::System::Type* type, ByRef<::Amazon::Util::Internal::ITypeInfo*> typeWrapper, ByRef<::System::Type*> keyType, ByRef<::System::Type*> valueType);

  /// @brief Method IsSupportedDictionaryType, addr 0x1428184, size 0x84, virtual false, abstract: false, final false
  static inline bool IsSupportedDictionaryType(::System::Type* type, ByRef<::System::Type*> valueType);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(::System::Object* hashKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(::System::Object* hashKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(T keyObject, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(T keyObject, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T LoadHelper(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method LoadHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline T LoadHelper(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                      ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig);

  /// @brief Method LoadHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T LoadHelper(T keyObject, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method LoadHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadHelperAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadHelperAsync(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadHelperAsync(T keyObject, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MakeKey, addr 0x142b054, size 0x3d8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Key* MakeKey(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method MakeKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DocumentModel::Key* MakeKey(T keyObject, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* config);

  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, bool ownClient,
                                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* config);

  /// @brief Method ObjectToItemStorage, addr 0x1425dac, size 0xb8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorage* ObjectToItemStorage(::System::Object* toStore, ::System::Type* objectType, bool keysOnly,
                                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method ObjectToItemStorage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::ItemStorage* ObjectToItemStorage(T toStore, bool keysOnly, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method ObjectToItemStorageHelper, addr 0x1426308, size 0xa8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorage* ObjectToItemStorageHelper(::System::Object* toStore, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config,
                                                                                 ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, bool keysOnly, bool ignoreNullValues);

  /// @brief Method PopulateInstance, addr 0x142529c, size 0x600, virtual false, abstract: false, final false
  inline void PopulateInstance(::Amazon::DynamoDBv2::DataModel::ItemStorage* storage, ::System::Object* instance, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method PopulateItemStorage, addr 0x142646c, size 0x6ec, virtual false, abstract: false, final false
  inline void PopulateItemStorage(::System::Object* toStore, ::Amazon::DynamoDBv2::DataModel::ItemStorage* storage, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, bool keysOnly,
                                  bool ignoreNullValues);

  /// @brief Method QueryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* QueryAsync(::System::Object* hashKeyValue, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Object*>* values,
                                                                       ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method QueryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* QueryAsync(::System::Object* hashKeyValue, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method SaveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task* SaveAsync(T value, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SaveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::System::Threading::Tasks::Task* SaveAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SaveHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SaveHelper(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method SaveHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task* SaveHelperAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ScanAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* ScanAsync(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* conditions,
                                                                      ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method SerializeToDocument, addr 0x14290a4, size 0xbc, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* SerializeToDocument(::System::Object* value, ::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method SetNewVersion, addr 0x14237dc, size 0x1d8, virtual false, abstract: false, final false
  static inline void SetNewVersion(::Amazon::DynamoDBv2::DataModel::ItemStorage* storage);

  /// @brief Method ShouldSave, addr 0x1424eb8, size 0x224, virtual false, abstract: false, final false
  static inline bool ShouldSave(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, bool ignoreNullValues);

  /// @brief Method ToDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Document* ToDocument(T value);

  /// @brief Method ToDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Document* ToDocument(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method ToDynamoDBEntry, addr 0x1426cb0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToDynamoDBEntry(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage* propertyStorage, ::System::Object* value,
                                                                             ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  /// @brief Method ToDynamoDBEntry, addr 0x1428208, size 0x1c0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToDynamoDBEntry(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage* propertyStorage, ::System::Object* value,
                                                                             ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, bool canReturnScalarInsteadOfList);

  /// @brief Method TryFromList, addr 0x14271b8, size 0x138, virtual false, abstract: false, final false
  inline bool TryFromList(::System::Type* targetType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* list, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                          ByRef<::System::Object*> output);

  /// @brief Method TryFromListToArray, addr 0x1427848, size 0x1cc, virtual false, abstract: false, final false
  inline bool TryFromListToArray(::System::Type* targetType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* list, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                 ByRef<::System::Object*> output);

  /// @brief Method TryFromListToIList, addr 0x14272f0, size 0x558, virtual false, abstract: false, final false
  inline bool TryFromListToIList(::System::Type* targetType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* list, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                 ByRef<::System::Object*> output);

  /// @brief Method TryFromMap, addr 0x1426cb8, size 0x454, virtual false, abstract: false, final false
  inline bool TryFromMap(::System::Type* targetType, ::Amazon::DynamoDBv2::DocumentModel::Document* map, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                         ByRef<::System::Object*> output);

  /// @brief Method TryGetValue, addr 0x1426b58, size 0x158, virtual false, abstract: false, final false
  static inline bool TryGetValue(::System::Object* instance, ::System::Reflection::MemberInfo* member, ByRef<::System::Object*> value);

  /// @brief Method TrySetValue, addr 0x1425c5c, size 0x150, virtual false, abstract: false, final false
  static inline bool TrySetValue(::System::Object* instance, ::System::Reflection::MemberInfo* member, ::System::Object* value);

  /// @brief Method TryToList, addr 0x1428bf4, size 0x4b0, virtual false, abstract: false, final false
  inline bool TryToList(::System::Object* value, ::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                        ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> output);

  /// @brief Method TryToMap, addr 0x14286a0, size 0x554, virtual false, abstract: false, final false
  inline bool TryToMap(::System::Object* value, ::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*> output);

  /// @brief Method TryToScalar, addr 0x14283c8, size 0x2d8, virtual false, abstract: false, final false
  inline bool TryToScalar(::System::Object* value, ::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                          ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry);

  /// @brief Method ValidateConfigAgainstTable, addr 0x1424868, size 0xcc, virtual false, abstract: false, final false
  static inline void ValidateConfigAgainstTable(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* table);

  /// @brief Method ValidateKey, addr 0x142ac4c, size 0x408, virtual false, abstract: false, final false
  static inline void ValidateKey(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig);

  /// @brief Method ValueToDynamoDBEntry, addr 0x1429c48, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ValueToDynamoDBEntry(::Amazon::DynamoDBv2::DataModel::PropertyStorage* propertyStorage, ::System::Object* value,
                                                                                  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig);

  constexpr ::Amazon::DynamoDBv2::IAmazonDynamoDB*& __cordl_internal_get__Client_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::IAmazonDynamoDB*> const& __cordl_internal_get__Client_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*& __cordl_internal_get__Config_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*> const& __cordl_internal_get__Config_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>*& __cordl_internal_get__ConverterCache_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>*> const&
  __cordl_internal_get__ConverterCache_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*& __cordl_internal_get__StorageConfigCache_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*> const& __cordl_internal_get__StorageConfigCache_k__BackingField() const;

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__readerWriterLockSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __cordl_internal_get__readerWriterLockSlim() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr bool const& __cordl_internal_get_ownClient() const;

  constexpr bool& __cordl_internal_get_ownClient();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*& __cordl_internal_get_tablesMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*> const& __cordl_internal_get_tablesMap() const;

  constexpr void __cordl_internal_set__Client_k__BackingField(::Amazon::DynamoDBv2::IAmazonDynamoDB* value);

  constexpr void __cordl_internal_set__Config_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* value);

  constexpr void __cordl_internal_set__ConverterCache_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* value);

  constexpr void __cordl_internal_set__StorageConfigCache_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* value);

  constexpr void __cordl_internal_set__readerWriterLockSlim(::System::Threading::ReaderWriterLockSlim* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_ownClient(bool value);

  constexpr void __cordl_internal_set_tablesMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* value);

  /// @brief Method .ctor, addr 0x14230e0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client);

  /// @brief Method .ctor, addr 0x14233d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* config);

  /// @brief Method .ctor, addr 0x1423154, size 0x27c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, bool ownClient, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* config);

  static inline ::System::Threading::Tasks::Task* getStaticF_CompletedTask();

  static inline ::StringW getStaticF_NO_INDEX();

  /// @brief Method get_Client, addr 0x14230a0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::IAmazonDynamoDB* get_Client();

  /// @brief Method get_Config, addr 0x14230b0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* get_Config();

  /// @brief Method get_ConverterCache, addr 0x14230d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* get_ConverterCache();

  /// @brief Method get_StorageConfigCache, addr 0x14230c0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* get_StorageConfigCache();

  /// @brief Convert to "::Amazon::DynamoDBv2::DataModel::IDynamoDBContext"
  constexpr ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext* i___Amazon__DynamoDBv2__DataModel__IDynamoDBContext() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_CompletedTask(::System::Threading::Tasks::Task* value);

  static inline void setStaticF_NO_INDEX(::StringW value);

  /// @brief Method set_Client, addr 0x14230a8, size 0x8, virtual false, abstract: false, final false
  inline void set_Client(::Amazon::DynamoDBv2::IAmazonDynamoDB* value);

  /// @brief Method set_Config, addr 0x14230b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Config(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* value);

  /// @brief Method set_ConverterCache, addr 0x14230d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ConverterCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* value);

  /// @brief Method set_StorageConfigCache, addr 0x14230c8, size 0x8, virtual false, abstract: false, final false
  inline void set_StorageConfigCache(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBContext(DynamoDBContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBContext(DynamoDBContext const&) = delete;

  /// @brief Field disposed, offset: 0x10, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field ownClient, offset: 0x11, size: 0x1, def value: None
  bool ___ownClient;

  /// @brief Field <Client>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::IAmazonDynamoDB* ____Client_k__BackingField;

  /// @brief Field tablesMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* ___tablesMap;

  /// @brief Field _readerWriterLockSlim, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____readerWriterLockSlim;

  /// @brief Field <Config>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* ____Config_k__BackingField;

  /// @brief Field <StorageConfigCache>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* ____StorageConfigCache_k__BackingField;

  /// @brief Field <ConverterCache>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* ____ConverterCache_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::DynamoDBContext, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContext, ___disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContext, ___ownClient) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContext, ____Client_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContext, ___tablesMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContext, ____readerWriterLockSlim) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContext, ____Config_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContext, ____StorageConfigCache_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::DynamoDBContext, ____ConverterCache_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::DynamoDBContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, "Amazon.DynamoDBv2.DataModel", "DynamoDBContext");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*, "Amazon.DynamoDBv2.DataModel", "DynamoDBContext/ContextSearch");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1, "Amazon.DynamoDBv2.DataModel", "DynamoDBContext/<FromDocumentsHelper>d__47`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1, "Amazon.DynamoDBv2.DataModel", "DynamoDBContext/<FromDocuments>d__46`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1, "Amazon.DynamoDBv2.DataModel", "DynamoDBContext/<FromSearch>d__98`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1, "Amazon.DynamoDBv2.DataModel", "DynamoDBContext/<LoadHelperAsync>d__41`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1, "Amazon.DynamoDBv2.DataModel", "DynamoDBContext/<SaveHelperAsync>d__33`1");
