#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DeleteItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__PutItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateItemResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Table)
namespace Amazon::DynamoDBv2::DocumentModel {
class DeleteItemOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchGet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchWrite;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct DynamoDBEntryType;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Expression;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class GetItemOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class IConditionalOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class KeyDescription;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Key;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class PutItemOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class QueryFilter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class QueryOperationConfig;
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
class TableConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class UpdateItemOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table__DynamoDBConsumer;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table___DeleteHelperAsync_d__92;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table___GetItemHelperAsync_d__85;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table___PutItemHelperAsync_d__83;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table___UpdateHelperAsync_d__89;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __Table____c__DisplayClass52_0;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeDefinition;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValueUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ExpectedAttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class GetItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndexDescription;
}
namespace Amazon::DynamoDBv2::Model {
class LocalSecondaryIndexDescription;
}
namespace Amazon::DynamoDBv2::Model {
class PutItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class TableDescription;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateItemResponse;
}
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBClient;
}
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBRequest;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace Amazon::DynamoDBv2 {
class IAmazonDynamoDB;
}
namespace Amazon::Runtime {
class RequestEventArgs;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
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
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table__DynamoDBConsumer;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __Table____c__DisplayClass52_0;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table___DeleteHelperAsync_d__92;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table___GetItemHelperAsync_d__85;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table___PutItemHelperAsync_d__83;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Table___UpdateHelperAsync_d__89;
}
// Write type traits
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::Table);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__Table____c__DisplayClass52_0);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89);
// Type: ::DynamoDBConsumer
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Table::DynamoDBConsumer
struct CORDL_TYPE __Table__DynamoDBConsumer {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Table__DynamoDBConsumer_Unwrapped
  enum struct ____Table__DynamoDBConsumer_Unwrapped : int32_t {
    __E_DocumentModel = static_cast<int32_t>(0x0),
    __E_DataModel = static_cast<int32_t>(0x1),
    __E_SessionStateProvider = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Table__DynamoDBConsumer_Unwrapped() const noexcept {
    return static_cast<____Table__DynamoDBConsumer_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Table__DynamoDBConsumer();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Table__DynamoDBConsumer(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DataModel value: static_cast<int32_t>(0x1)
  static ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer const DataModel;

  /// @brief Field DocumentModel value: static_cast<int32_t>(0x0)
  static ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer const DocumentModel;

  /// @brief Field SessionStateProvider value: static_cast<int32_t>(0x2)
  static ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer const SessionStateProvider;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<>c__DisplayClass52_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Table::<>c__DisplayClass52_0*
class CORDL_TYPE __Table____c__DisplayClass52_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyName, put = __cordl_internal_set_keyName))::StringW keyName;

  static inline ::Amazon::DynamoDBv2::DocumentModel::__Table____c__DisplayClass52_0* New_ctor();

  /// @brief Method <LoadTableInfo>b__0, addr 0x141cda0, size 0x28, virtual false, abstract: false, final false
  inline bool _LoadTableInfo_b__0(::Amazon::DynamoDBv2::Model::AttributeDefinition* a);

  constexpr ::StringW const& __cordl_internal_get_keyName() const;

  constexpr ::StringW& __cordl_internal_get_keyName();

  constexpr void __cordl_internal_set_keyName(::StringW value);

  /// @brief Method .ctor, addr 0x141cd98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Table____c__DisplayClass52_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Table____c__DisplayClass52_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Table____c__DisplayClass52_0(__Table____c__DisplayClass52_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Table____c__DisplayClass52_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Table____c__DisplayClass52_0(__Table____c__DisplayClass52_0 const&) = delete;

  /// @brief Field keyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___keyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Table____c__DisplayClass52_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table____c__DisplayClass52_0, ___keyName) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<PutItemHelperAsync>d__83
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Table::<PutItemHelperAsync>d__83
struct CORDL_TYPE __Table___PutItemHelperAsync_d__83 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x141cdc8, size 0x580, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x141d4f8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Table___PutItemHelperAsync_d__83();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*>", modifiers: "", def_value: None }, CppParam { name: "config", ty:
  // "::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers: "",
  // def_value: None }, CppParam { name: "doc", ty: "::Amazon::DynamoDBv2::DocumentModel::Document*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_currentConfig_5__2", ty: "::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::PutItemResponse*>",
  // modifiers: "", def_value: None }]
  constexpr __Table___PutItemHelperAsync_d__83(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*> __t__builder,
                                               ::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* __4__this,
                                               ::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::System::Threading::CancellationToken cancellationToken,
                                               ::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig* _currentConfig_5__2,
                                               ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::PutItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*> __t__builder;

  /// @brief Field config, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig* config;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* __4__this;

  /// @brief Field doc, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Document* doc;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <currentConfig>5__2, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig* _currentConfig_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::PutItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, doc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, _currentConfig_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, __u__1) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<GetItemHelperAsync>d__85
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Table::<GetItemHelperAsync>d__85
struct CORDL_TYPE __Table___GetItemHelperAsync_d__85 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x141d550, size 0x358, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x141d8b0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Table___GetItemHelperAsync_d__85();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*>", modifiers: "", def_value: None }, CppParam { name: "config", ty:
  // "::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers: "",
  // def_value: None }, CppParam { name: "key", ty: "::Amazon::DynamoDBv2::DocumentModel::Key*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::GetItemResponse*>", modifiers: "", def_value: None }]
  constexpr __Table___GetItemHelperAsync_d__85(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*> __t__builder,
                                               ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* __4__this,
                                               ::Amazon::DynamoDBv2::DocumentModel::Key* key, ::System::Threading::CancellationToken cancellationToken,
                                               ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::GetItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*> __t__builder;

  /// @brief Field config, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* config;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* __4__this;

  /// @brief Field key, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Key* key;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::GetItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, key) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<UpdateHelperAsync>d__89
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Table::<UpdateHelperAsync>d__89
struct CORDL_TYPE __Table___UpdateHelperAsync_d__89 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x141d908, size 0xc30, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x141eb98, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Table___UpdateHelperAsync_d__89();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*>", modifiers: "", def_value: None }, CppParam { name: "config", ty:
  // "::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers:
  // "", def_value: None }, CppParam { name: "doc", ty: "::Amazon::DynamoDBv2::DocumentModel::Document*", modifiers: "", def_value: None }, CppParam { name: "key", ty:
  // "::Amazon::DynamoDBv2::DocumentModel::Key*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None
  // }, CppParam { name: "_currentConfig_5__2", ty: "::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::UpdateItemResponse*>", modifiers: "", def_value: None }]
  constexpr __Table___UpdateHelperAsync_d__89(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*> __t__builder,
      ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* __4__this, ::Amazon::DynamoDBv2::DocumentModel::Document* doc,
      ::Amazon::DynamoDBv2::DocumentModel::Key* key, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* _currentConfig_5__2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::UpdateItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*> __t__builder;

  /// @brief Field config, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* __4__this;

  /// @brief Field doc, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Document* doc;

  /// @brief Field key, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Key* key;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <currentConfig>5__2, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* _currentConfig_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::UpdateItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, doc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, key) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, _currentConfig_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, __u__1) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<DeleteHelperAsync>d__92
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Table::<DeleteHelperAsync>d__92
struct CORDL_TYPE __Table___DeleteHelperAsync_d__92 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x141ebf0, size 0x550, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x141f148, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Table___DeleteHelperAsync_d__92();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*>", modifiers: "", def_value: None }, CppParam { name: "config", ty:
  // "::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers:
  // "", def_value: None }, CppParam { name: "key", ty: "::Amazon::DynamoDBv2::DocumentModel::Key*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_currentConfig_5__2", ty: "::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::DeleteItemResponse*>", modifiers: "", def_value: None }]
  constexpr __Table___DeleteHelperAsync_d__92(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*> __t__builder,
      ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* __4__this, ::Amazon::DynamoDBv2::DocumentModel::Key* key,
      ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* _currentConfig_5__2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::DeleteItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::Document*> __t__builder;

  /// @brief Field config, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* config;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* __4__this;

  /// @brief Field key, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Key* key;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <currentConfig>5__2, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* _currentConfig_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::DeleteItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, key) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, _currentConfig_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, __u__1) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::Table
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::Table*
class CORDL_TYPE Table : public ::System::Object {
public:
  // Declarations
  using DynamoDBConsumer = ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer;

  using _DeleteHelperAsync_d__92 = ::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92;

  using _GetItemHelperAsync_d__85 = ::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85;

  using _PutItemHelperAsync_d__83 = ::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83;

  using _UpdateHelperAsync_d__89 = ::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89;

  using __c__DisplayClass52_0 = ::Amazon::DynamoDBv2::DocumentModel::__Table____c__DisplayClass52_0;

  __declspec(property(get = get_Attributes, put = set_Attributes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* Attributes;

  /// @brief Field Config, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Config, put = __cordl_internal_set_Config))::Amazon::DynamoDBv2::DocumentModel::TableConfig* Config;

  __declspec(property(get = get_Conversion))::Amazon::DynamoDBv2::DynamoDBEntryConversion* Conversion;

  __declspec(property(get = get_DDBClient, put = set_DDBClient))::Amazon::DynamoDBv2::AmazonDynamoDBClient* DDBClient;

  __declspec(property(get = get_GlobalSecondaryIndexNames, put = set_GlobalSecondaryIndexNames))::System::Collections::Generic::List_1<::StringW>* GlobalSecondaryIndexNames;

  __declspec(property(get = get_GlobalSecondaryIndexes,
                      put = set_GlobalSecondaryIndexes))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* GlobalSecondaryIndexes;

  __declspec(property(get = get_HashKeys, put = set_HashKeys))::System::Collections::Generic::List_1<::StringW>* HashKeys;

  __declspec(property(get = get_IsEmptyStringValueEnabled)) bool IsEmptyStringValueEnabled;

  __declspec(property(get = get_KeyNames))::System::Collections::Generic::IEnumerable_1<::StringW>* KeyNames;

  __declspec(property(get = get_Keys, put = set_Keys))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::KeyDescription*>* Keys;

  __declspec(property(get = get_LocalSecondaryIndexNames, put = set_LocalSecondaryIndexNames))::System::Collections::Generic::List_1<::StringW>* LocalSecondaryIndexNames;

  __declspec(property(get = get_LocalSecondaryIndexes,
                      put = set_LocalSecondaryIndexes))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* LocalSecondaryIndexes;

  __declspec(property(get = get_RangeKeys, put = set_RangeKeys))::System::Collections::Generic::List_1<::StringW>* RangeKeys;

  __declspec(property(get = get_StoreAsEpoch))::System::Collections::Generic::IEnumerable_1<::StringW>* StoreAsEpoch;

  __declspec(property(get = get_TableConsumer))::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer TableConsumer;

  /// @brief Field TableInfoCacheIdentifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TableInfoCacheIdentifier, put = setStaticF_TableInfoCacheIdentifier))::StringW TableInfoCacheIdentifier;

  __declspec(property(get = get_TableName))::StringW TableName;

  /// @brief Field <Attributes>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Attributes_k__BackingField,
                      put = __cordl_internal_set__Attributes_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* _Attributes_k__BackingField;

  /// @brief Field <DDBClient>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DDBClient_k__BackingField,
                      put = __cordl_internal_set__DDBClient_k__BackingField))::Amazon::DynamoDBv2::AmazonDynamoDBClient* _DDBClient_k__BackingField;

  /// @brief Field <GlobalSecondaryIndexNames>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__GlobalSecondaryIndexNames_k__BackingField,
                      put = __cordl_internal_set__GlobalSecondaryIndexNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _GlobalSecondaryIndexNames_k__BackingField;

  /// @brief Field <GlobalSecondaryIndexes>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__GlobalSecondaryIndexes_k__BackingField, put = __cordl_internal_set__GlobalSecondaryIndexes_k__BackingField))::System::Collections::Generic::
      Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* _GlobalSecondaryIndexes_k__BackingField;

  /// @brief Field <HashKeys>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__HashKeys_k__BackingField,
                      put = __cordl_internal_set__HashKeys_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _HashKeys_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__Keys_k__BackingField,
               put = __cordl_internal_set__Keys_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::KeyDescription*>* _Keys_k__BackingField;

  /// @brief Field <LocalSecondaryIndexNames>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__LocalSecondaryIndexNames_k__BackingField,
                      put = __cordl_internal_set__LocalSecondaryIndexNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _LocalSecondaryIndexNames_k__BackingField;

  /// @brief Field <LocalSecondaryIndexes>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__LocalSecondaryIndexes_k__BackingField, put = __cordl_internal_set__LocalSecondaryIndexes_k__BackingField))::System::Collections::Generic::
      Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* _LocalSecondaryIndexes_k__BackingField;

  /// @brief Field <RangeKeys>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__RangeKeys_k__BackingField,
                      put = __cordl_internal_set__RangeKeys_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _RangeKeys_k__BackingField;

  /// @brief Method AddRequestHandler, addr 0x164752c, size 0x118, virtual false, abstract: false, final false
  inline void AddRequestHandler(::Amazon::DynamoDBv2::AmazonDynamoDBRequest* request, bool isAsync);

  /// @brief Method ClearTableCache, addr 0x1660060, size 0x88, virtual false, abstract: false, final false
  static inline void ClearTableCache();

  /// @brief Method ClearTableData, addr 0x165f194, size 0x1e0, virtual false, abstract: false, final false
  inline void ClearTableData();

  /// @brief Method Copy, addr 0x165fe7c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Table* Copy();

  /// @brief Method Copy, addr 0x165fe84, size 0x9c, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Table* Copy(::Amazon::DynamoDBv2::DocumentModel::TableConfig* newConfig);

  /// @brief Method CreateBatchGet, addr 0x1662614, size 0x60, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* CreateBatchGet();

  /// @brief Method CreateBatchWrite, addr 0x1662674, size 0x60, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* CreateBatchWrite();

  /// @brief Method DeleteHelper, addr 0x1661c38, size 0x284, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* DeleteHelper(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* config);

  /// @brief Method DeleteHelperAsync, addr 0x1661ebc, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  DeleteHelperAsync(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x1662948, size 0x30, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* DeleteItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* document,
                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x1662978, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* DeleteItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* document,
                                                                                                             ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* config,
                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x16629ac, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* DeleteItemAsync(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey,
                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x16629e0, size 0x38, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* DeleteItemAsync(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey,
                                                                                                             ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* config,
                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x1662a18, size 0x30, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  DeleteItemAsync(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x1662a48, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* DeleteItemAsync(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey,
                                                                                                             ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey,
                                                                                                             ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* config,
                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x1662a7c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  DeleteItemAsync(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteItemAsync, addr 0x1662aac, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  DeleteItemAsync(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key,
                  ::Amazon::DynamoDBv2::DocumentModel::DeleteItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DescribeTable, addr 0x165fd4c, size 0x130, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TableDescription* DescribeTable(::StringW tableName);

  /// @brief Method FromAttributeMap, addr 0x1646584, size 0x24, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* FromAttributeMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* data);

  /// @brief Method GetItemAsync, addr 0x16626e4, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* GetItemAsync(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey,
                                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemAsync, addr 0x1662718, size 0x38, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  GetItemAsync(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemAsync, addr 0x1662750, size 0x30, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  GetItemAsync(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemAsync, addr 0x1662780, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* GetItemAsync(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey,
                                                                                                          ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey,
                                                                                                          ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* config,
                                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemAsync, addr 0x16627b4, size 0x30, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  GetItemAsync(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemAsync, addr 0x16627e4, size 0x34, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  GetItemAsync(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key, ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* config,
               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetItemHelper, addr 0x1660bf4, size 0x148, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* GetItemHelper(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* config);

  /// @brief Method GetItemHelperAsync, addr 0x1660d3c, size 0x144, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  GetItemHelperAsync(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetType, addr 0x165e3b4, size 0x104, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType GetType(::StringW attributeType);

  /// @brief Method HaveKeysChanged, addr 0x1661914, size 0x324, virtual false, abstract: false, final false
  inline bool HaveKeysChanged(::Amazon::DynamoDBv2::DocumentModel::Document* doc);

  /// @brief Method KeyDateTimeToEpochSeconds, addr 0x165f374, size 0x8c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* KeyDateTimeToEpochSeconds(::Amazon::DynamoDBv2::DocumentModel::Primitive* key, ::StringW attributeName);

  /// @brief Method LoadTable, addr 0x16600e8, size 0x78, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Table* LoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::Amazon::DynamoDBv2::DocumentModel::TableConfig* config);

  /// @brief Method LoadTable, addr 0x1660160, size 0xa0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Table* LoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::StringW tableName);

  /// @brief Method LoadTable, addr 0x16602b8, size 0x70, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Table* LoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::StringW tableName, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method LoadTable, addr 0x1660200, size 0xb8, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Table* LoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::StringW tableName, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                      bool isEmptyStringValueEnabled);

  /// @brief Method LoadTable, addr 0x1660328, size 0xa4, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Table* LoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::StringW tableName, bool isEmptyStringValueEnabled);

  /// @brief Method LoadTableInfo, addr 0x165e4b8, size 0xcdc, virtual false, abstract: false, final false
  inline void LoadTableInfo();

  /// @brief Method MakeKey, addr 0x1644564, size 0x5a0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Key* MakeKey(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* doc);

  /// @brief Method MakeKey, addr 0x16440b0, size 0x3f8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Key* MakeKey(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Table* New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::Amazon::DynamoDBv2::DocumentModel::TableConfig* config);

  /// @brief Method PutItemAsync, addr 0x16626d4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* PutItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc,
                                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method PutItemAsync, addr 0x16626e0, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  PutItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method PutItemHelper, addr 0x1660808, size 0x2b0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* PutItemHelper(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig* config);

  /// @brief Method PutItemHelperAsync, addr 0x1660ab8, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  PutItemHelperAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::PutItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Query, addr 0x16624dc, size 0x138, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* Query(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig* config);

  /// @brief Method Query, addr 0x1662320, size 0x74, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* Query(::Amazon::DynamoDBv2::DocumentModel::QueryFilter* filter);

  /// @brief Method Query, addr 0x1662204, size 0x11c, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* Query(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* filter);

  /// @brief Method Query, addr 0x1662394, size 0x148, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* Query(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Expression* filterExpression);

  /// @brief Method Scan, addr 0x166206c, size 0x124, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* Scan(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* config);

  /// @brief Method Scan, addr 0x1661ff8, size 0x74, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* Scan(::Amazon::DynamoDBv2::DocumentModel::ScanFilter* filter);

  /// @brief Method Scan, addr 0x1662190, size 0x74, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* Scan(::Amazon::DynamoDBv2::DocumentModel::Expression* filterExpression);

  /// @brief Method ToAttributeMap, addr 0x164b5e4, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ToAttributeMap(::Amazon::DynamoDBv2::DocumentModel::Document* doc);

  /// @brief Method ToAttributeMap, addr 0x166002c, size 0x34, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ToAttributeMap(::Amazon::DynamoDBv2::DocumentModel::Document* doc,
                                                                                                                               ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToAttributeUpdateMap, addr 0x16607d8, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* ToAttributeUpdateMap(::Amazon::DynamoDBv2::DocumentModel::Document* doc,
                                                                                                                                           bool changedAttributesOnly);

  /// @brief Method ToExpectedAttributeMap, addr 0x16607ac, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* ToExpectedAttributeMap(::Amazon::DynamoDBv2::DocumentModel::Document* doc);

  /// @brief Method TryLoadTable, addr 0x1660668, size 0x144, virtual false, abstract: false, final false
  static inline bool TryLoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::Amazon::DynamoDBv2::DocumentModel::TableConfig* config, ByRef<::Amazon::DynamoDBv2::DocumentModel::Table*> table);

  /// @brief Method TryLoadTable, addr 0x1660474, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryLoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::StringW tableName, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled,
                                  ByRef<::Amazon::DynamoDBv2::DocumentModel::Table*> table);

  /// @brief Method TryLoadTable, addr 0x1660534, size 0x80, virtual false, abstract: false, final false
  static inline bool TryLoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::StringW tableName, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                  ByRef<::Amazon::DynamoDBv2::DocumentModel::Table*> table);

  /// @brief Method TryLoadTable, addr 0x16605b4, size 0xb4, virtual false, abstract: false, final false
  static inline bool TryLoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::StringW tableName, bool isEmptyStringValueEnabled, ByRef<::Amazon::DynamoDBv2::DocumentModel::Table*> table);

  /// @brief Method TryLoadTable, addr 0x16603cc, size 0xa8, virtual false, abstract: false, final false
  static inline bool TryLoadTable(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::StringW tableName, ByRef<::Amazon::DynamoDBv2::DocumentModel::Table*> table);

  /// @brief Method UpdateHelper, addr 0x1660e80, size 0x50, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* UpdateHelper(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey,
                                                                     ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey, ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config);

  /// @brief Method UpdateHelper, addr 0x1660ed0, size 0x898, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Document* UpdateHelper(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::Key* key,
                                                                     ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config);

  /// @brief Method UpdateHelperAsync, addr 0x1661768, size 0x60, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  UpdateHelperAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey,
                    ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateHelperAsync, addr 0x16617c8, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* UpdateHelperAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc,
                                                                                                               ::Amazon::DynamoDBv2::DocumentModel::Key* key,
                                                                                                               ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1662818, size 0x38, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* UpdateItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc,
                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1662850, size 0x44, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  UpdateItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1662918, size 0x10, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  UpdateItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1662928, size 0x10, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* UpdateItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc,
                                                                                                             ::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey,
                                                                                                             ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config,
                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1662938, size 0xc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* UpdateItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc,
                                                                                                             ::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey,
                                                                                                             ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey,
                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1662944, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  UpdateItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey,
                  ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x1662894, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  UpdateItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key,
                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UpdateItemAsync, addr 0x16628d0, size 0x48, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
  UpdateItemAsync(::Amazon::DynamoDBv2::DocumentModel::Document* doc, ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key,
                  ::Amazon::DynamoDBv2::DocumentModel::UpdateItemOperationConfig* config, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UserAgentRequestEventHandler, addr 0x165f408, size 0x6fc, virtual false, abstract: false, final false
  inline void UserAgentRequestEventHandler(::System::Object* sender, ::Amazon::Runtime::RequestEventArgs* args, bool isAsync);

  /// @brief Method UserAgentRequestEventHandlerAsync, addr 0x165fb04, size 0x8, virtual false, abstract: false, final false
  inline void UserAgentRequestEventHandlerAsync(::System::Object* sender, ::Amazon::Runtime::RequestEventArgs* args);

  /// @brief Method UserAgentRequestEventHandlerSync, addr 0x165f400, size 0x8, virtual false, abstract: false, final false
  inline void UserAgentRequestEventHandlerSync(::System::Object* sender, ::Amazon::Runtime::RequestEventArgs* args);

  /// @brief Method ValidateConditional, addr 0x165fb0c, size 0x240, virtual false, abstract: false, final false
  static inline void ValidateConditional(::Amazon::DynamoDBv2::DocumentModel::IConditionalOperationConfig* config);

  constexpr ::Amazon::DynamoDBv2::DocumentModel::TableConfig*& __cordl_internal_get_Config();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::TableConfig*> const& __cordl_internal_get_Config() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*& __cordl_internal_get__Attributes_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*> const&
  __cordl_internal_get__Attributes_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::AmazonDynamoDBClient*& __cordl_internal_get__DDBClient_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::AmazonDynamoDBClient*> const& __cordl_internal_get__DDBClient_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__GlobalSecondaryIndexNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__GlobalSecondaryIndexNames_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*& __cordl_internal_get__GlobalSecondaryIndexes_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*> const&
  __cordl_internal_get__GlobalSecondaryIndexes_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__HashKeys_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__HashKeys_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::KeyDescription*>*& __cordl_internal_get__Keys_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::KeyDescription*>*> const&
  __cordl_internal_get__Keys_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__LocalSecondaryIndexNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__LocalSecondaryIndexNames_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*& __cordl_internal_get__LocalSecondaryIndexes_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*> const&
  __cordl_internal_get__LocalSecondaryIndexes_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__RangeKeys_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__RangeKeys_k__BackingField() const;

  constexpr void __cordl_internal_set_Config(::Amazon::DynamoDBv2::DocumentModel::TableConfig* value);

  constexpr void __cordl_internal_set__Attributes_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value);

  constexpr void __cordl_internal_set__DDBClient_k__BackingField(::Amazon::DynamoDBv2::AmazonDynamoDBClient* value);

  constexpr void __cordl_internal_set__GlobalSecondaryIndexNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void
  __cordl_internal_set__GlobalSecondaryIndexes_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* value);

  constexpr void __cordl_internal_set__HashKeys_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__Keys_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::KeyDescription*>* value);

  constexpr void __cordl_internal_set__LocalSecondaryIndexNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void
  __cordl_internal_set__LocalSecondaryIndexes_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* value);

  constexpr void __cordl_internal_set__RangeKeys_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x165ff20, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* ddbClient, ::Amazon::DynamoDBv2::DocumentModel::TableConfig* config);

  static inline ::StringW getStaticF_TableInfoCacheIdentifier();

  /// @brief Method get_Attributes, addr 0x165e3a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* get_Attributes();

  /// @brief Method get_Conversion, addr 0x16546c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_Conversion();

  /// @brief Method get_DDBClient, addr 0x165e324, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* get_DDBClient();

  /// @brief Method get_GlobalSecondaryIndexNames, addr 0x165e374, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_GlobalSecondaryIndexNames();

  /// @brief Method get_GlobalSecondaryIndexes, addr 0x165e344, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* get_GlobalSecondaryIndexes();

  /// @brief Method get_HashKeys, addr 0x165e384, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_HashKeys();

  /// @brief Method get_IsEmptyStringValueEnabled, addr 0x16546f8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsEmptyStringValueEnabled();

  /// @brief Method get_KeyNames, addr 0x165e2d4, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_KeyNames();

  /// @brief Method get_Keys, addr 0x165e334, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::KeyDescription*>* get_Keys();

  /// @brief Method get_LocalSecondaryIndexNames, addr 0x165e364, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_LocalSecondaryIndexNames();

  /// @brief Method get_LocalSecondaryIndexes, addr 0x165e354, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* get_LocalSecondaryIndexes();

  /// @brief Method get_RangeKeys, addr 0x165e394, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_RangeKeys();

  /// @brief Method get_StoreAsEpoch, addr 0x16546dc, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_StoreAsEpoch();

  /// @brief Method get_TableConsumer, addr 0x165e2b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer get_TableConsumer();

  /// @brief Method get_TableName, addr 0x164532c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  static inline void setStaticF_TableInfoCacheIdentifier(::StringW value);

  /// @brief Method set_Attributes, addr 0x165e3ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Attributes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value);

  /// @brief Method set_DDBClient, addr 0x165e32c, size 0x8, virtual false, abstract: false, final false
  inline void set_DDBClient(::Amazon::DynamoDBv2::AmazonDynamoDBClient* value);

  /// @brief Method set_GlobalSecondaryIndexNames, addr 0x165e37c, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_GlobalSecondaryIndexes, addr 0x165e34c, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexes(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* value);

  /// @brief Method set_HashKeys, addr 0x165e38c, size 0x8, virtual false, abstract: false, final false
  inline void set_HashKeys(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_Keys, addr 0x165e33c, size 0x8, virtual false, abstract: false, final false
  inline void set_Keys(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::KeyDescription*>* value);

  /// @brief Method set_LocalSecondaryIndexNames, addr 0x165e36c, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalSecondaryIndexNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_LocalSecondaryIndexes, addr 0x165e35c, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalSecondaryIndexes(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* value);

  /// @brief Method set_RangeKeys, addr 0x165e39c, size 0x8, virtual false, abstract: false, final false
  inline void set_RangeKeys(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Table();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Table", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Table(Table&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Table", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Table(Table const&) = delete;

  /// @brief Field Config, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::TableConfig* ___Config;

  /// @brief Field <DDBClient>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* ____DDBClient_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::KeyDescription*>* ____Keys_k__BackingField;

  /// @brief Field <GlobalSecondaryIndexes>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* ____GlobalSecondaryIndexes_k__BackingField;

  /// @brief Field <LocalSecondaryIndexes>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* ____LocalSecondaryIndexes_k__BackingField;

  /// @brief Field <LocalSecondaryIndexNames>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____LocalSecondaryIndexNames_k__BackingField;

  /// @brief Field <GlobalSecondaryIndexNames>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____GlobalSecondaryIndexNames_k__BackingField;

  /// @brief Field <HashKeys>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____HashKeys_k__BackingField;

  /// @brief Field <RangeKeys>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____RangeKeys_k__BackingField;

  /// @brief Field <Attributes>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* ____Attributes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::Table, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ___Config) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____DDBClient_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____Keys_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____GlobalSecondaryIndexes_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____LocalSecondaryIndexes_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____LocalSecondaryIndexNames_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____GlobalSecondaryIndexNames_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____HashKeys_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____RangeKeys_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Table, ____Attributes_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer, "Amazon.DynamoDBv2.DocumentModel", "Table/DynamoDBConsumer");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::Table);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::Table*, "Amazon.DynamoDBv2.DocumentModel", "Table");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__Table____c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Table____c__DisplayClass52_0*, "Amazon.DynamoDBv2.DocumentModel", "Table/<>c__DisplayClass52_0");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Table___DeleteHelperAsync_d__92, "Amazon.DynamoDBv2.DocumentModel", "Table/<DeleteHelperAsync>d__92");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Table___GetItemHelperAsync_d__85, "Amazon.DynamoDBv2.DocumentModel", "Table/<GetItemHelperAsync>d__85");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Table___PutItemHelperAsync_d__83, "Amazon.DynamoDBv2.DocumentModel", "Table/<PutItemHelperAsync>d__83");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Table___UpdateHelperAsync_d__89, "Amazon.DynamoDBv2.DocumentModel", "Table/<UpdateHelperAsync>d__89");
