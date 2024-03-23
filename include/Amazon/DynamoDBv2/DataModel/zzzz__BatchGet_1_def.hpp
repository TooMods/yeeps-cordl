#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchGet_1)
namespace Amazon::DynamoDBv2::DataModel {
class BatchGet;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class MultiTableBatchGet;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __BatchGet_1___ExecuteHelperAsync_d__8;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class BatchGet_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __BatchGet_1___ExecuteHelperAsync_d__8;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::BatchGet_1);
MARK_GEN_VAL_T(::Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8);
// Type: ::<ExecuteHelperAsync>d__8
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::BatchGet`1::<ExecuteHelperAsync>d__8<T>
struct CORDL_TYPE __BatchGet_1___ExecuteHelperAsync_d__8 {
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
  constexpr __BatchGet_1___ExecuteHelperAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*", modifiers:
  // "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __BatchGet_1___ExecuteHelperAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                   ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::BatchGet`1
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::BatchGet`1<T>*
class CORDL_TYPE BatchGet_1 : public ::Amazon::DynamoDBv2::DataModel::BatchGet {
public:
  // Declarations
  using _ExecuteHelperAsync_d__8 = ::Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>;

  __declspec(property(get = get_Results))::System::Collections::Generic::List_1<T>* Results;

  __declspec(property(get = get_TypedResults, put = set_TypedResults))::System::Collections::Generic::List_1<T>* TypedResults;

  /// @brief Field <TypedResults>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__TypedResults_k__BackingField,
                      put = __cordl_internal_set__TypedResults_k__BackingField))::System::Collections::Generic::List_1<T>* _TypedResults_k__BackingField;

  /// @brief Method AddKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddKey(::System::Object* hashKey);

  /// @brief Method AddKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddKey(::System::Object* hashKey, ::System::Object* rangeKey);

  /// @brief Method AddKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddKey(T keyObject);

  /// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet* Combine(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> otherBatches);

  /// @brief Method CreateDocumentBatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CreateDocumentBatch();

  /// @brief Method ExecuteHelper, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config);

  /// @brief Method PopulateResults, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PopulateResults(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* items);

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__TypedResults_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get__TypedResults_k__BackingField() const;

  constexpr void __cordl_internal_set__TypedResults_k__BackingField(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config);

  /// @brief Method get_Results, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_Results();

  /// @brief Method get_TypedResults, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_TypedResults();

  /// @brief Method set_TypedResults, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_TypedResults(::System::Collections::Generic::List_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchGet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchGet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchGet_1(BatchGet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchGet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchGet_1(BatchGet_1 const&) = delete;

  /// @brief Field <TypedResults>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____TypedResults_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::DataModel::BatchGet_1, "Amazon.DynamoDBv2.DataModel", "BatchGet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8, "Amazon.DynamoDBv2.DataModel", "BatchGet`1/<ExecuteHelperAsync>d__8");
