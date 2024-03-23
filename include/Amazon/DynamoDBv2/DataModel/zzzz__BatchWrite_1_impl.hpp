#pragma once
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBFlatConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorageConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__MultiTableBatchWrite_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::__cordl_internal_get__StorageConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StorageConfig_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const&
Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::__cordl_internal_get__StorageConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StorageConfig_k__BackingField;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::__cordl_internal_set__StorageConfig_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____StorageConfig_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*
Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::Combine(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> otherBatches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*, false>(this, ___internal_method, otherBatches);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::AddPutItems(::System::Collections::Generic::IEnumerable_1<T>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), "AddPutItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::AddPutItem(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), "AddPutItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::AddDeleteItems(::System::Collections::Generic::IEnumerable_1<T>* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), "AddDeleteItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::AddDeleteItem(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), "AddDeleteItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::AddDeleteKey(::System::Object* hashKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), "AddDeleteKey",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashKey);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::AddDeleteKey(::System::Object* hashKey, ::System::Object* rangeKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(),
                                                                             "AddDeleteKey", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashKey, rangeKey);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>* Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context,
                                                                                                                  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>(context, config));
}
template <typename T>
inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, config);
}
template <typename T> inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::get_StorageConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(),
                                                                             "get_StorageConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::set_StorageConfig(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), "set_StorageConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::ExecuteHelper() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>::BatchWrite_1() {}
