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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DocumentBatchGet)
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
class MultiTableDocumentBatchGet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __DocumentBatchGet___ExecuteHelperAsync_d__26;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
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
class DocumentBatchGet;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __DocumentBatchGet___ExecuteHelperAsync_d__26;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26);
// Type: ::<ExecuteHelperAsync>d__26
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::DocumentBatchGet::<ExecuteHelperAsync>d__26
struct CORDL_TYPE __DocumentBatchGet___ExecuteHelperAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x16455b0, size 0x394, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1645a64, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DocumentBatchGet___ExecuteHelperAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>",
  // modifiers: "", def_value: None }]
  constexpr __DocumentBatchGet___ExecuteHelperAsync_d__26(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* __4__this,
      ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<
          ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
          __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* __4__this;

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
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26, __u__1) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::DocumentBatchGet
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::DocumentBatchGet*
class CORDL_TYPE DocumentBatchGet : public ::System::Object {
public:
  // Declarations
  using _ExecuteHelperAsync_d__26 = ::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26;

  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_Keys, put = set_Keys))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* Keys;

  __declspec(property(get = get_Results, put = set_Results))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* Results;

  __declspec(property(get = get_TargetTable, put = set_TargetTable))::Amazon::DynamoDBv2::DocumentModel::Table* TargetTable;

  /// @brief Field <AttributesToGet>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributesToGet_k__BackingField,
                      put = __cordl_internal_set__AttributesToGet_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _AttributesToGet_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__ConsistentRead_k__BackingField, put = __cordl_internal_set__ConsistentRead_k__BackingField)) bool _ConsistentRead_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Keys_k__BackingField,
                      put = __cordl_internal_set__Keys_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* _Keys_k__BackingField;

  /// @brief Field <Results>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Results_k__BackingField,
                      put = __cordl_internal_set__Results_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _Results_k__BackingField;

  /// @brief Field <TargetTable>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetTable_k__BackingField,
                      put = __cordl_internal_set__TargetTable_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Table* _TargetTable_k__BackingField;

  /// @brief Method AddKey, addr 0x1645448, size 0xbc, virtual false, abstract: false, final false
  inline void AddKey(::Amazon::DynamoDBv2::DocumentModel::Document* document);

  /// @brief Method AddKey, addr 0x1643fd8, size 0x8, virtual false, abstract: false, final false
  inline void AddKey(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey);

  /// @brief Method AddKey, addr 0x1643fe0, size 0xd0, virtual false, abstract: false, final false
  inline void AddKey(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey);

  /// @brief Method AddKey, addr 0x1645504, size 0xa8, virtual false, abstract: false, final false
  inline void AddKey(::Amazon::DynamoDBv2::DocumentModel::Key* key);

  /// @brief Method AddKey, addr 0x16444a8, size 0xbc, virtual false, abstract: false, final false
  inline void AddKey(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key);

  /// @brief Method Combine, addr 0x1644b04, size 0xf0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet* Combine(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* otherBatch);

  /// @brief Method ExecuteAsync, addr 0x16455ac, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteHelper, addr 0x1644ccc, size 0x1ac, virtual false, abstract: false, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x1645348, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* New_ctor(::Amazon::DynamoDBv2::DocumentModel::Table* targetTable);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__AttributesToGet_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__AttributesToGet_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__ConsistentRead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ConsistentRead_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*& __cordl_internal_get__Keys_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*> const& __cordl_internal_get__Keys_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get__Results_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get__Results_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Table*& __cordl_internal_get__TargetTable_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Table*> const& __cordl_internal_get__TargetTable_k__BackingField() const;

  constexpr void __cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__ConsistentRead_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Keys_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value);

  constexpr void __cordl_internal_set__Results_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  constexpr void __cordl_internal_set__TargetTable_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Table* value);

  /// @brief Method .ctor, addr 0x1643f48, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DocumentModel::Table* targetTable);

  /// @brief Method get_AttributesToGet, addr 0x1643f24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_ConsistentRead, addr 0x1643f34, size 0x8, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_Keys, addr 0x1643f04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* get_Keys();

  /// @brief Method get_Results, addr 0x1643f14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* get_Results();

  /// @brief Method get_TargetTable, addr 0x1643ef4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Table* get_TargetTable();

  /// @brief Method set_AttributesToGet, addr 0x1643f2c, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_ConsistentRead, addr 0x1643f3c, size 0xc, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_Keys, addr 0x1643f0c, size 0x8, virtual false, abstract: false, final false
  inline void set_Keys(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value);

  /// @brief Method set_Results, addr 0x1643f1c, size 0x8, virtual false, abstract: false, final false
  inline void set_Results(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  /// @brief Method set_TargetTable, addr 0x1643efc, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTable(::Amazon::DynamoDBv2::DocumentModel::Table* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DocumentBatchGet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DocumentBatchGet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DocumentBatchGet(DocumentBatchGet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DocumentBatchGet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DocumentBatchGet(DocumentBatchGet const&) = delete;

  /// @brief Field <TargetTable>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* ____TargetTable_k__BackingField;

  /// @brief Field <Keys>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* ____Keys_k__BackingField;

  /// @brief Field <Results>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* ____Results_k__BackingField;

  /// @brief Field <AttributesToGet>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____AttributesToGet_k__BackingField;

  /// @brief Field <ConsistentRead>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____ConsistentRead_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet, ____TargetTable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet, ____Keys_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet, ____Results_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet, ____AttributesToGet_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet, ____ConsistentRead_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, "Amazon.DynamoDBv2.DocumentModel", "DocumentBatchGet");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__DocumentBatchGet___ExecuteHelperAsync_d__26, "Amazon.DynamoDBv2.DocumentModel", "DocumentBatchGet/<ExecuteHelperAsync>d__26");
