#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__SearchType_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__SelectValues_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__QueryResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ScanResponse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Search)
namespace Amazon::DynamoDBv2::DocumentModel {
struct ConditionalOperatorValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Expression;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Filter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct SearchType;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct SelectValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Search___GetNextSetHelperAsync_d__76;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Search___GetRemainingHelperAsync_d__78;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __Search____c__DisplayClass90_0;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class Condition;
}
namespace Amazon::DynamoDBv2::Model {
class KeySchemaElement;
}
namespace Amazon::DynamoDBv2::Model {
class QueryResponse;
}
namespace Amazon::DynamoDBv2::Model {
class ScanResponse;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class Search;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __Search____c__DisplayClass90_0;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Search___GetNextSetHelperAsync_d__76;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct __Search___GetRemainingHelperAsync_d__78;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::Search);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__Search____c__DisplayClass90_0);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76);
MARK_VAL_T(::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78);
// Type: ::<GetNextSetHelperAsync>d__76
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Search::<GetNextSetHelperAsync>d__76
struct CORDL_TYPE __Search___GetNextSetHelperAsync_d__76 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x165d154, size 0xc74, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x165ddc8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Search___GetNextSetHelperAsync_d__76();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::Search*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_ret_5__2", ty:
  // "::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::ScanResponse*>", modifiers: "", def_value: None }, CppParam { name: "__u__2",
  // ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::QueryResponse*>", modifiers: "", def_value: None }]
  constexpr __Search___GetNextSetHelperAsync_d__76(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __t__builder,
      ::Amazon::DynamoDBv2::DocumentModel::Search* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _ret_5__2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::ScanResponse*> __u__1,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::QueryResponse*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Search* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <ret>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _ret_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::ScanResponse*> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::QueryResponse*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, _ret_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, __u__2) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<GetRemainingHelperAsync>d__78
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: true
// CS Name: ::Search::<GetRemainingHelperAsync>d__78
struct CORDL_TYPE __Search___GetRemainingHelperAsync_d__78 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x165de20, size 0x418, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x165e238, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Search___GetRemainingHelperAsync_d__78();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::Search*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_ret_5__2", ty:
  // "::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>", modifiers: "",
  // def_value: None }]
  constexpr __Search___GetRemainingHelperAsync_d__78(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __t__builder,
      ::Amazon::DynamoDBv2::DocumentModel::Search* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _ret_5__2,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Search* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <ret>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _ret_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78, _ret_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78, __u__1) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: ::<>c__DisplayClass90_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Search::<>c__DisplayClass90_0*
class CORDL_TYPE __Search____c__DisplayClass90_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeName, put = __cordl_internal_set_attributeName))::StringW attributeName;

  static inline ::Amazon::DynamoDBv2::DocumentModel::__Search____c__DisplayClass90_0* New_ctor();

  /// @brief Method <AttributeIsKey>b__0, addr 0x165e290, size 0x28, virtual false, abstract: false, final false
  inline bool _AttributeIsKey_b__0(::Amazon::DynamoDBv2::Model::KeySchemaElement* kse);

  constexpr ::StringW const& __cordl_internal_get_attributeName() const;

  constexpr ::StringW& __cordl_internal_get_attributeName();

  constexpr void __cordl_internal_set_attributeName(::StringW value);

  /// @brief Method .ctor, addr 0x165d144, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Search____c__DisplayClass90_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Search____c__DisplayClass90_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Search____c__DisplayClass90_0(__Search____c__DisplayClass90_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Search____c__DisplayClass90_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Search____c__DisplayClass90_0(__Search____c__DisplayClass90_0 const&) = delete;

  /// @brief Field attributeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___attributeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Search____c__DisplayClass90_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Search____c__DisplayClass90_0, ___attributeName) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::Search
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::Search*
class CORDL_TYPE Search : public ::System::Object {
public:
  // Declarations
  using _GetNextSetHelperAsync_d__76 = ::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76;

  using _GetRemainingHelperAsync_d__78 = ::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78;

  using __c__DisplayClass90_0 = ::Amazon::DynamoDBv2::DocumentModel::__Search____c__DisplayClass90_0;

  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_CollectResults, put = set_CollectResults)) bool CollectResults;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ConditionalOperator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Filter, put = set_Filter))::Amazon::DynamoDBv2::DocumentModel::Filter* Filter;

  __declspec(property(get = get_FilterExpression, put = set_FilterExpression))::Amazon::DynamoDBv2::DocumentModel::Expression* FilterExpression;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_IsBackwardSearch, put = set_IsBackwardSearch)) bool IsBackwardSearch;

  __declspec(property(get = get_IsConsistentRead, put = set_IsConsistentRead)) bool IsConsistentRead;

  __declspec(property(get = get_IsDone, put = set_IsDone)) bool IsDone;

  __declspec(property(get = get_KeyExpression, put = set_KeyExpression))::Amazon::DynamoDBv2::DocumentModel::Expression* KeyExpression;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_Matches, put = set_Matches))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* Matches;

  __declspec(property(get = get_NextKey, put = set_NextKey))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* NextKey;

  __declspec(property(get = get_PaginationToken, put = set_PaginationToken))::StringW PaginationToken;

  __declspec(property(get = get_SearchMethod, put = set_SearchMethod))::Amazon::DynamoDBv2::DocumentModel::SearchType SearchMethod;

  __declspec(property(get = get_Segment, put = set_Segment)) int32_t Segment;

  __declspec(property(get = get_Select, put = set_Select))::Amazon::DynamoDBv2::DocumentModel::SelectValues Select;

  __declspec(property(get = get_SourceTable, put = set_SourceTable))::Amazon::DynamoDBv2::DocumentModel::Table* SourceTable;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_TotalSegments, put = set_TotalSegments)) int32_t TotalSegments;

  /// @brief Field <AttributesToGet>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributesToGet_k__BackingField,
                      put = __cordl_internal_set__AttributesToGet_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _AttributesToGet_k__BackingField;

  /// @brief Field <CollectResults>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__CollectResults_k__BackingField, put = __cordl_internal_set__CollectResults_k__BackingField)) bool _CollectResults_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__ConditionalOperator_k__BackingField,
                      put = __cordl_internal_set__ConditionalOperator_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues _ConditionalOperator_k__BackingField;

  /// @brief Field <FilterExpression>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__FilterExpression_k__BackingField,
                      put = __cordl_internal_set__FilterExpression_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Expression* _FilterExpression_k__BackingField;

  /// @brief Field <Filter>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Filter_k__BackingField, put = __cordl_internal_set__Filter_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Filter* _Filter_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__IndexName_k__BackingField, put = __cordl_internal_set__IndexName_k__BackingField))::StringW _IndexName_k__BackingField;

  /// @brief Field <IsBackwardSearch>k__BackingField, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__IsBackwardSearch_k__BackingField, put = __cordl_internal_set__IsBackwardSearch_k__BackingField)) bool _IsBackwardSearch_k__BackingField;

  /// @brief Field <IsConsistentRead>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__IsConsistentRead_k__BackingField, put = __cordl_internal_set__IsConsistentRead_k__BackingField)) bool _IsConsistentRead_k__BackingField;

  /// @brief Field <IsDone>k__BackingField, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDone_k__BackingField, put = __cordl_internal_set__IsDone_k__BackingField)) bool _IsDone_k__BackingField;

  /// @brief Field <KeyExpression>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__KeyExpression_k__BackingField,
                      put = __cordl_internal_set__KeyExpression_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Expression* _KeyExpression_k__BackingField;

  /// @brief Field <Limit>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__Limit_k__BackingField, put = __cordl_internal_set__Limit_k__BackingField)) int32_t _Limit_k__BackingField;

  /// @brief Field <Matches>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Matches_k__BackingField,
                      put = __cordl_internal_set__Matches_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* _Matches_k__BackingField;

  /// @brief Field <NextKey>k__BackingField, offset 0x50, size 0x8
  __declspec(
      property(get = __cordl_internal_get__NextKey_k__BackingField,
               put = __cordl_internal_set__NextKey_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _NextKey_k__BackingField;

  /// @brief Field <SearchMethod>k__BackingField, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__SearchMethod_k__BackingField,
                      put = __cordl_internal_set__SearchMethod_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::SearchType _SearchMethod_k__BackingField;

  /// @brief Field <Segment>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__Segment_k__BackingField, put = __cordl_internal_set__Segment_k__BackingField)) int32_t _Segment_k__BackingField;

  /// @brief Field <Select>k__BackingField, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__Select_k__BackingField, put = __cordl_internal_set__Select_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::SelectValues _Select_k__BackingField;

  /// @brief Field <SourceTable>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__SourceTable_k__BackingField,
                      put = __cordl_internal_set__SourceTable_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Table* _SourceTable_k__BackingField;

  /// @brief Field <TableName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TableName_k__BackingField, put = __cordl_internal_set__TableName_k__BackingField))::StringW _TableName_k__BackingField;

  /// @brief Field <TotalSegments>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__TotalSegments_k__BackingField, put = __cordl_internal_set__TotalSegments_k__BackingField)) int32_t _TotalSegments_k__BackingField;

  /// @brief Field count, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Method AttributeIsKey, addr 0x165d098, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Func_2<::Amazon::DynamoDBv2::Model::KeySchemaElement*, bool>* AttributeIsKey(::StringW attributeName);

  /// @brief Method GetCount, addr 0x165bae0, size 0x42c, virtual false, abstract: false, final false
  inline int32_t GetCount();

  /// @brief Method GetNextSetAsync, addr 0x165d14c, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
  GetNextSetAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetNextSetHelper, addr 0x165bf2c, size 0x838, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* GetNextSetHelper();

  /// @brief Method GetNextSetHelperAsync, addr 0x165ca50, size 0x128, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
  GetNextSetHelperAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRemainingAsync, addr 0x165d150, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
  GetRemainingAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRemainingHelper, addr 0x165cb78, size 0x208, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* GetRemainingHelper();

  /// @brief Method GetRemainingHelperAsync, addr 0x165cd80, size 0x124, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
  GetRemainingHelperAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method IsKeyAttribute, addr 0x165cec4, size 0x1d4, virtual false, abstract: false, final false
  static inline bool IsKeyAttribute(::Amazon::DynamoDBv2::DocumentModel::Table* table, ::StringW indexName, ::StringW attributeName);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Search* New_ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::Search* New_ctor(::Amazon::DynamoDBv2::DocumentModel::SearchType searchMethod);

  /// @brief Method Reset, addr 0x165b924, size 0x8c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SplitQueryFilter, addr 0x165c764, size 0x2ec, virtual false, abstract: false, final false
  static inline void SplitQueryFilter(::Amazon::DynamoDBv2::DocumentModel::Filter* filter, ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable, ::StringW indexName,
                                      ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*> keyConditions,
                                      ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*> filterConditions);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__AttributesToGet_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__AttributesToGet_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__CollectResults_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CollectResults_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const& __cordl_internal_get__ConditionalOperator_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& __cordl_internal_get__ConditionalOperator_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Expression*& __cordl_internal_get__FilterExpression_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Expression*> const& __cordl_internal_get__FilterExpression_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Filter*& __cordl_internal_get__Filter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Filter*> const& __cordl_internal_get__Filter_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__IndexName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__IndexName_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsBackwardSearch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsBackwardSearch_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsConsistentRead_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsConsistentRead_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDone_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDone_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Expression*& __cordl_internal_get__KeyExpression_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Expression*> const& __cordl_internal_get__KeyExpression_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__Limit_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Limit_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*& __cordl_internal_get__Matches_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const& __cordl_internal_get__Matches_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__NextKey_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__NextKey_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::SearchType const& __cordl_internal_get__SearchMethod_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::SearchType& __cordl_internal_get__SearchMethod_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Segment_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Segment_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues const& __cordl_internal_get__Select_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::SelectValues& __cordl_internal_get__Select_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Table*& __cordl_internal_get__SourceTable_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Table*> const& __cordl_internal_get__SourceTable_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__TableName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TableName_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__TotalSegments_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__TotalSegments_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr void __cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__CollectResults_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  constexpr void __cordl_internal_set__FilterExpression_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  constexpr void __cordl_internal_set__Filter_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Filter* value);

  constexpr void __cordl_internal_set__IndexName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsBackwardSearch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsConsistentRead_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDone_k__BackingField(bool value);

  constexpr void __cordl_internal_set__KeyExpression_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  constexpr void __cordl_internal_set__Limit_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Matches_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  constexpr void __cordl_internal_set__NextKey_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__SearchMethod_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::SearchType value);

  constexpr void __cordl_internal_set__Segment_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Select_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::SelectValues value);

  constexpr void __cordl_internal_set__SourceTable_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Table* value);

  constexpr void __cordl_internal_set__TableName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__TotalSegments_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_count(int32_t value);

  /// @brief Method .ctor, addr 0x165b8d8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x165b8f8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DocumentModel::SearchType searchMethod);

  /// @brief Method get_AttributesToGet, addr 0x165ba24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_CollectResults, addr 0x165b9c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_CollectResults();

  /// @brief Method get_ConditionalOperator, addr 0x165ba14, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues get_ConditionalOperator();

  /// @brief Method get_Count, addr 0x165badc, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Filter, addr 0x165ba04, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Filter* get_Filter();

  /// @brief Method get_FilterExpression, addr 0x165b9f4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Expression* get_FilterExpression();

  /// @brief Method get_IndexName, addr 0x165bf0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_IsBackwardSearch, addr 0x165ba48, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsBackwardSearch();

  /// @brief Method get_IsConsistentRead, addr 0x165ba34, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsConsistentRead();

  /// @brief Method get_IsDone, addr 0x165ba5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDone();

  /// @brief Method get_KeyExpression, addr 0x165b9e4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Expression* get_KeyExpression();

  /// @brief Method get_Limit, addr 0x165b9d4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_Matches, addr 0x165baac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* get_Matches();

  /// @brief Method get_NextKey, addr 0x165ba70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_NextKey();

  /// @brief Method get_PaginationToken, addr 0x165ba80, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_PaginationToken();

  /// @brief Method get_SearchMethod, addr 0x165cea4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::SearchType get_SearchMethod();

  /// @brief Method get_Segment, addr 0x165bacc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Segment();

  /// @brief Method get_Select, addr 0x165bf1c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::SelectValues get_Select();

  /// @brief Method get_SourceTable, addr 0x165ceb4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Table* get_SourceTable();

  /// @brief Method get_TableName, addr 0x165b9b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_TotalSegments, addr 0x165babc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TotalSegments();

  /// @brief Method set_AttributesToGet, addr 0x165ba2c, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_CollectResults, addr 0x165b9c8, size 0xc, virtual false, abstract: false, final false
  inline void set_CollectResults(bool value);

  /// @brief Method set_ConditionalOperator, addr 0x165ba1c, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  /// @brief Method set_Filter, addr 0x165ba0c, size 0x8, virtual false, abstract: false, final false
  inline void set_Filter(::Amazon::DynamoDBv2::DocumentModel::Filter* value);

  /// @brief Method set_FilterExpression, addr 0x165b9fc, size 0x8, virtual false, abstract: false, final false
  inline void set_FilterExpression(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  /// @brief Method set_IndexName, addr 0x165bf14, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_IsBackwardSearch, addr 0x165ba50, size 0xc, virtual false, abstract: false, final false
  inline void set_IsBackwardSearch(bool value);

  /// @brief Method set_IsConsistentRead, addr 0x165ba3c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsConsistentRead(bool value);

  /// @brief Method set_IsDone, addr 0x165ba64, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDone(bool value);

  /// @brief Method set_KeyExpression, addr 0x165b9ec, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyExpression(::Amazon::DynamoDBv2::DocumentModel::Expression* value);

  /// @brief Method set_Limit, addr 0x165b9dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_Matches, addr 0x165bab4, size 0x8, virtual false, abstract: false, final false
  inline void set_Matches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value);

  /// @brief Method set_NextKey, addr 0x165ba78, size 0x8, virtual false, abstract: false, final false
  inline void set_NextKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_PaginationToken, addr 0x165ba8c, size 0x20, virtual false, abstract: false, final false
  inline void set_PaginationToken(::StringW value);

  /// @brief Method set_SearchMethod, addr 0x165ceac, size 0x8, virtual false, abstract: false, final false
  inline void set_SearchMethod(::Amazon::DynamoDBv2::DocumentModel::SearchType value);

  /// @brief Method set_Segment, addr 0x165bad4, size 0x8, virtual false, abstract: false, final false
  inline void set_Segment(int32_t value);

  /// @brief Method set_Select, addr 0x165bf24, size 0x8, virtual false, abstract: false, final false
  inline void set_Select(::Amazon::DynamoDBv2::DocumentModel::SelectValues value);

  /// @brief Method set_SourceTable, addr 0x165cebc, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceTable(::Amazon::DynamoDBv2::DocumentModel::Table* value);

  /// @brief Method set_TableName, addr 0x165b9b8, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_TotalSegments, addr 0x165bac4, size 0x8, virtual false, abstract: false, final false
  inline void set_TotalSegments(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Search();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Search", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Search(Search&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Search", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Search(Search const&) = delete;

  /// @brief Field <TableName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TableName_k__BackingField;

  /// @brief Field <CollectResults>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____CollectResults_k__BackingField;

  /// @brief Field <Limit>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____Limit_k__BackingField;

  /// @brief Field <KeyExpression>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Expression* ____KeyExpression_k__BackingField;

  /// @brief Field <FilterExpression>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Expression* ____FilterExpression_k__BackingField;

  /// @brief Field <Filter>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Filter* ____Filter_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ____ConditionalOperator_k__BackingField;

  /// @brief Field <AttributesToGet>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____AttributesToGet_k__BackingField;

  /// @brief Field <IsConsistentRead>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____IsConsistentRead_k__BackingField;

  /// @brief Field <IsBackwardSearch>k__BackingField, offset: 0x49, size: 0x1, def value: None
  bool ____IsBackwardSearch_k__BackingField;

  /// @brief Field <IsDone>k__BackingField, offset: 0x4a, size: 0x1, def value: None
  bool ____IsDone_k__BackingField;

  /// @brief Field <NextKey>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____NextKey_k__BackingField;

  /// @brief Field <Matches>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* ____Matches_k__BackingField;

  /// @brief Field <TotalSegments>k__BackingField, offset: 0x60, size: 0x4, def value: None
  int32_t ____TotalSegments_k__BackingField;

  /// @brief Field <Segment>k__BackingField, offset: 0x64, size: 0x4, def value: None
  int32_t ____Segment_k__BackingField;

  /// @brief Field <IndexName>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::StringW ____IndexName_k__BackingField;

  /// @brief Field <Select>k__BackingField, offset: 0x70, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::SelectValues ____Select_k__BackingField;

  /// @brief Field count, offset: 0x74, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field <SearchMethod>k__BackingField, offset: 0x78, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::SearchType ____SearchMethod_k__BackingField;

  /// @brief Field <SourceTable>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Table* ____SourceTable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::Search, 0x88>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____TableName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____CollectResults_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____Limit_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____KeyExpression_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____FilterExpression_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____Filter_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____ConditionalOperator_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____AttributesToGet_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____IsConsistentRead_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____IsBackwardSearch_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____IsDone_k__BackingField) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____NextKey_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____Matches_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____TotalSegments_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____Segment_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____IndexName_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____Select_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ___count) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____SearchMethod_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Search, ____SourceTable_k__BackingField) == 0x80, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::Search);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::Search*, "Amazon.DynamoDBv2.DocumentModel", "Search");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__Search____c__DisplayClass90_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Search____c__DisplayClass90_0*, "Amazon.DynamoDBv2.DocumentModel", "Search/<>c__DisplayClass90_0");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Search___GetNextSetHelperAsync_d__76, "Amazon.DynamoDBv2.DocumentModel", "Search/<GetNextSetHelperAsync>d__76");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Search___GetRemainingHelperAsync_d__78, "Amazon.DynamoDBv2.DocumentModel", "Search/<GetRemainingHelperAsync>d__78");
