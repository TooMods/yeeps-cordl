#pragma once
#include "Amazon/DynamoDBv2/DataModel/zzzz__IDynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__AsyncSearch_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBOperationConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__MultiTableBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__MultiTableBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ScanCondition_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QueryOperationConfig_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QueryOperator_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanOperationConfig_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext.CreateMultiTableBatchGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet* (
    ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::IDynamoDBContext::CreateMultiTableBatchGet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext.CreateMultiTableBatchWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite* (
    ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::IDynamoDBContext::CreateMultiTableBatchWrite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext.ExecuteBatchGetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>,
                                                          ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DataModel::IDynamoDBContext::ExecuteBatchGetAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext.ExecuteBatchWriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>,
                                                          ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DataModel::IDynamoDBContext::ExecuteBatchWriteAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 25));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::DynamoDBv2::DataModel::IDynamoDBContext::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::ToDocument(T value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method, value);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::ToDocument(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method, value, operationConfig);
}
template <typename T> inline T Amazon::DynamoDBv2::DataModel::IDynamoDBContext::FromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, document);
}
template <typename T>
inline T Amazon::DynamoDBv2::DataModel::IDynamoDBContext::FromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document,
                                                                       ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, document, operationConfig);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>*
Amazon::DynamoDBv2::DataModel::IDynamoDBContext::FromDocuments(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, documents);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>*
Amazon::DynamoDBv2::DataModel::IDynamoDBContext::FromDocuments(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents,
                                                               ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, documents, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::CreateBatchGet(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*, false>(this, ___internal_method, operationConfig);
}
inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*
Amazon::DynamoDBv2::DataModel::IDynamoDBContext::CreateMultiTableBatchGet(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*, false>(this, ___internal_method, batches);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::CreateBatchWrite(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*, false>(this, ___internal_method, operationConfig);
}
inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*
Amazon::DynamoDBv2::DataModel::IDynamoDBContext::CreateMultiTableBatchWrite(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*, false>(this, ___internal_method, batches);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T> inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::SaveAsync(T value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::SaveAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::LoadAsync(::System::Object* hashKey, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::LoadAsync(::System::Object* hashKey,
                                                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::LoadAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, rangeKey, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::LoadAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, rangeKey, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::LoadAsync(T keyObject, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, keyObject, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::LoadAsync(T keyObject, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, keyObject, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T> inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::DeleteAsync(T value, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::DeleteAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::DeleteAsync(::System::Object* hashKey, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::DeleteAsync(::System::Object* hashKey,
                                                                                                      ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::DeleteAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, rangeKey, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::DeleteAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                      ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, rangeKey, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::DynamoDBv2::DataModel::IDynamoDBContext::ExecuteBatchGetAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches,
                                                                      ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, batches, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::DynamoDBv2::DataModel::IDynamoDBContext::ExecuteBatchWriteAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches,
                                                                        ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, batches, cancellationToken);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*
Amazon::DynamoDBv2::DataModel::IDynamoDBContext::ScanAsync(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* conditions,
                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, conditions, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::FromScanAsync(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* scanConfig,
                                                                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, scanConfig, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::QueryAsync(::System::Object* hashKeyValue,
                                                                                                                      ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, hashKeyValue, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::QueryAsync(::System::Object* hashKeyValue,
                                                                                                                      ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                                                                      ::System::Collections::Generic::IEnumerable_1<::System::Object*>* values,
                                                                                                                      ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, hashKeyValue, op, values, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::FromQueryAsync(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig* queryConfig,
                                                                                                                          ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, queryConfig, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DocumentModel::Table* Amazon::DynamoDBv2::DataModel::IDynamoDBContext::GetTargetTable(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Table*, false>(this, ___internal_method, operationConfig);
}
