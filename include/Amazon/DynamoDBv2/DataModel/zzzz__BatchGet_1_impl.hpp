#pragma once
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBFlatConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__MultiTableBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>::__BatchGet_1___ExecuteHelperAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::__BatchGet_1___ExecuteHelperAsync_d__8<T>::__BatchGet_1___ExecuteHelperAsync_d__8() {}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::__cordl_internal_get__TypedResults_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypedResults_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const&
Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::__cordl_internal_get__TypedResults_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypedResults_k__BackingField;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::__cordl_internal_set__TypedResults_k__BackingField(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TypedResults_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::get_Results() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(),
                                                                             "get_Results", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::AddKey(::System::Object* hashKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), "AddKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashKey);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::AddKey(::System::Object* hashKey, ::System::Object* rangeKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), "AddKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashKey, rangeKey);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::AddKey(T keyObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), "AddKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyObject);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*
Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::Combine(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> otherBatches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*, false>(this, ___internal_method, otherBatches);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context,
                                                                                                              ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>(context, config));
}
template <typename T>
inline void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, config);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::ExecuteHelper() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::get_TypedResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(),
                                                                             "get_TypedResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::set_TypedResults(::System::Collections::Generic::List_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), "set_TypedResults", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::CreateDocumentBatch() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::PopulateResults(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* items) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>::BatchGet_1() {}
