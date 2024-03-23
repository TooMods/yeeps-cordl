#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__AsyncSearch_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_1_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContextConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBFlatConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBOperationConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__IDynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__IPropertyConverter_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorageConfigCache_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorageConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorage_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__MultiTableBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__MultiTableBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__PropertyStorage_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__QueryCondition_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ScanCondition_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__SimplePropertyStorage_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Key_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QueryFilter_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QueryOperationConfig_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QueryOperator_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanFilter_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanOperationConfig_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Search_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__IAmazonDynamoDB_def.hpp"
#include "Amazon/Util/Internal/zzzz__ITypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch.get_FlatConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* (
    ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::*)()>(&::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::get_FlatConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), "get_FlatConfig",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch.set_FlatConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(&::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::set_FlatConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), "set_FlatConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch.get_Search
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Search* (
    ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::*)()>(&::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::get_Search)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), "get_Search",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch.set_Search
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Search*)>(&::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::set_Search)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), "set_Search", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Search*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Search*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(&::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x142b5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Search*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::__cordl_internal_get__FlatConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FlatConfig_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::__cordl_internal_get__FlatConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FlatConfig_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::__cordl_internal_set__FlatConfig_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FlatConfig_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::Search*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::__cordl_internal_get__Search_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Search_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Search*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::__cordl_internal_get__Search_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Search_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::__cordl_internal_set__Search_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Search* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Search_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::get_FlatConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), "get_FlatConfig",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::set_FlatConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), "set_FlatConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Search* Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::get_Search() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), "get_Search",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Search*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::set_Search(::Amazon::DynamoDBv2::DocumentModel::Search* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), "set_Search", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Search*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*
Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::New_ctor(::Amazon::DynamoDBv2::DocumentModel::Search* search, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>(search, flatConfig));
}
inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::_ctor(::Amazon::DynamoDBv2::DocumentModel::Search* search,
                                                                                   ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Search*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, search, flatConfig);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch::__DynamoDBContext__ContextSearch() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "operationConfig", ty: "::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::Amazon::DynamoDBv2::DataModel::DynamoDBContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_flatConfig_5__2", ty: "::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_storage_5__3", ty: "::Amazon::DynamoDBv2::DataModel::ItemStorage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>::__DynamoDBContext___SaveHelperAsync_d__33_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* _flatConfig_5__2,
    ::Amazon::DynamoDBv2::DataModel::ItemStorage* _storage_5__3,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->value = value;
  this->operationConfig = operationConfig;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_flatConfig_5__2 = _flatConfig_5__2;
  this->_storage_5__3 = _storage_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___SaveHelperAsync_d__33_1<T>::__DynamoDBContext___SaveHelperAsync_d__33_1() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "flatConfig", ty:
// "::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "storageConfig", ty: "::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DataModel::DynamoDBContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "key", ty: "::Amazon::DynamoDBv2::DocumentModel::Key*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_storage_5__2", ty: "::Amazon::DynamoDBv2::DataModel::ItemStorage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap2", ty:
// "::Amazon::DynamoDBv2::DataModel::ItemStorage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>::__DynamoDBContext___LoadHelperAsync_d__41_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig, ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* __4__this, ::Amazon::DynamoDBv2::DocumentModel::Key* key,
    ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DataModel::ItemStorage* _storage_5__2, ::Amazon::DynamoDBv2::DataModel::ItemStorage* __7__wrap2,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::Document*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->flatConfig = flatConfig;
  this->storageConfig = storageConfig;
  this->__4__this = __4__this;
  this->key = key;
  this->cancellationToken = cancellationToken;
  this->_storage_5__2 = _storage_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___LoadHelperAsync_d__41_1<T>::__DynamoDBContext___LoadHelperAsync_d__41_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get_documents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documents;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get_documents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documents;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set_documents(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___documents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___3__documents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__documents;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___3__documents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__documents;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set___3__documents(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__documents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set___4__this(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get_operationConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operationConfig;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get_operationConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operationConfig;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set_operationConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___operationConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___3__operationConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__operationConfig;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___3__operationConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__operationConfig;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set___3__operationConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__operationConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>(__1__state));
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocuments_d__46_1<T>::__DynamoDBContext___FromDocuments_d__46_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>*
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>*
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get_documents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documents;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get_documents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___documents;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set_documents(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___documents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___3__documents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__documents;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___3__documents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__documents;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set___3__documents(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__documents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set___4__this(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get_flatConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flatConfig;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get_flatConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flatConfig;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set_flatConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___flatConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___3__flatConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__flatConfig;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___3__flatConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__flatConfig;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set___3__flatConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__flatConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>(__1__state));
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromDocumentsHelper_d__47_1<T>::__DynamoDBContext___FromDocumentsHelper_d__47_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get_cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get_cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_set_cs(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___3__cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__cs;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___3__cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__cs;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_set___3__cs(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__cs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_set___4__this(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get__storageConfig_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storageConfig_5__2;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get__storageConfig_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storageConfig_5__2;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_set__storageConfig_5__2(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____storageConfig_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::__List_1__Enumerator<::Amazon::DynamoDBv2::DocumentModel::Document*>&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename T>
constexpr ::System::Collections::Generic::__List_1__Enumerator<::Amazon::DynamoDBv2::DocumentModel::Document*> const&
Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__cordl_internal_set___7__wrap2(
    ::System::Collections::Generic::__List_1__Enumerator<::Amazon::DynamoDBv2::DocumentModel::Document*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>(__1__state));
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext___FromSearch_d__98_1<T>::__DynamoDBContext___FromSearch_d__98_1() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.get_Client
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::IAmazonDynamoDB* (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14230a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                               "get_Client", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.set_Client
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::IAmazonDynamoDB*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::set_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14230a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "set_Client", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.get_Config
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::get_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14230b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                               "get_Config", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.set_Config
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::set_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14230b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "set_Config", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.get_StorageConfigCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::get_StorageConfigCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14230c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                               "get_StorageConfigCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.set_StorageConfigCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::set_StorageConfigCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14230c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "set_StorageConfigCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.get_ConverterCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)()>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::get_ConverterCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14230d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                               "get_ConverterCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.set_ConverterCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::set_ConverterCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14230d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "set_ConverterCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::IAmazonDynamoDB*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x14230e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::Amazon::DynamoDBv2::IAmazonDynamoDB*, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14233d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::Amazon::DynamoDBv2::IAmazonDynamoDB*, bool, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x1423154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::Dispose)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x14234c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1423608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::Finalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1423678;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.CreateMultiTableBatchGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateMultiTableBatchGet)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x142371c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateMultiTableBatchGet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.CreateMultiTableBatchWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateMultiTableBatchWrite)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x142377c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateMultiTableBatchWrite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.SetNewVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::DataModel::ItemStorage*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::SetNewVersion)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x14237dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "SetNewVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.IncrementVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::IncrementVersion)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0x1423a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "IncrementVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.CreateExpectedDocumentForVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Document* (*)(::Amazon::DynamoDBv2::DataModel::ItemStorage*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateExpectedDocumentForVersion)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x14242b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateExpectedDocumentForVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.GetTargetTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Table* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*,
                                                         ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetTargetTable)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1424354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetTargetTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.GetUnconfiguredTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Table* (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetUnconfiguredTable)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1424558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetUnconfiguredTable",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.GetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetTableName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x14244ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetTableName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ValidateConfigAgainstTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::Amazon::DynamoDBv2::DocumentModel::Table*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ValidateConfigAgainstTable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1424868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ValidateConfigAgainstTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.CompareKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::Amazon::DynamoDBv2::DocumentModel::Table*, ::System::Collections::Generic::List_1<::StringW>*,
                         ::System::Collections::Generic::List_1<::StringW>*, ::StringW)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::CompareKeys)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x1424934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CompareKeys", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ShouldSave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, bool)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ShouldSave)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x1424eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ShouldSave", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.DocumentToObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::System::Type*, ::Amazon::DynamoDBv2::DataModel::ItemStorage*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::DocumentToObject)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x14250dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DocumentToObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.PopulateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::Amazon::DynamoDBv2::DataModel::ItemStorage*, ::System::Object*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::PopulateInstance)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x142529c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "PopulateInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ObjectToItemStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::ItemStorage* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::System::Object*, ::System::Type*, bool, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ObjectToItemStorage)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1425dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ObjectToItemStorage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ObjectToItemStorageHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::ItemStorage* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::System::Object*, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, bool, bool)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ObjectToItemStorageHelper)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1426308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ObjectToItemStorageHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.PopulateItemStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Object*, ::Amazon::DynamoDBv2::DataModel::ItemStorage*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, bool, bool)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::PopulateItemStorage)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x142646c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "PopulateItemStorage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.FromDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*,
                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromDynamoDBEntry)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x14258ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromDynamoDBEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TryFromList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Type*, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ByRef<::System::Object*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryFromList)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x14271b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryFromList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TryFromListToIList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Type*, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ByRef<::System::Object*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryFromListToIList)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x14272f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryFromListToIList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TryFromListToArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Type*, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ByRef<::System::Object*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryFromListToArray)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x1427848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryFromListToArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TryFromMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Type*, ::Amazon::DynamoDBv2::DocumentModel::Document*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ByRef<::System::Object*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryFromMap)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x1426cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryFromMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ToDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*, ::System::Object*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ToDynamoDBEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1426cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ToDynamoDBEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ToDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*, ::System::Object*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, bool)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ToDynamoDBEntry)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1428208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ToDynamoDBEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TryToMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Object*, ::System::Type*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryToMap)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x14286a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryToMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TryToList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Object*, ::System::Type*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryToList)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1428bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryToList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TryToScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(
    ::System::Object*, ::System::Type*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryToScalar)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x14283c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryToScalar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.IsSupportedDictionaryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ByRef<::System::Type*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::IsSupportedDictionaryType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1428184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "IsSupportedDictionaryType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.IsSupportedDictionaryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ByRef<::Amazon::Util::Internal::ITypeInfo*>, ByRef<::System::Type*>,
                                                                                           ByRef<::System::Type*>)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::IsSupportedDictionaryType)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x1429160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "IsSupportedDictionaryType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Util::Internal::ITypeInfo*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.DeserializeFromDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DocumentModel::Document*, ::System::Type*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeserializeFromDocument)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x142710c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeserializeFromDocument", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.SerializeToDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Document* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::System::Object*, ::System::Type*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::SerializeToDocument)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x14290a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "SerializeToDocument", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TrySetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::System::Reflection::MemberInfo*, ::System::Object*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TrySetValue)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1425c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TrySetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.TryGetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::System::Reflection::MemberInfo*, ByRef<::System::Object*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryGetValue)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1426b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ComposeScanFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::ScanFilter* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*,
                                                         ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ComposeScanFilter)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x1429408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ComposeScanFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ComposeQueryFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::QueryFilter* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ::System::Object*,
                                                         ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*,
                                                         ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ByRef<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ComposeQueryFilter)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1429a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ComposeQueryFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ComposeQueryFilterHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::QueryFilter* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ::Amazon::DynamoDBv2::DocumentModel::Document*,
                                                         ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*,
                                                         ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ByRef<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ComposeQueryFilterHelper)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x1429c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ComposeQueryFilterHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ConvertConditionValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Amazon::DynamoDBv2::DataModel::PropertyStorage*,
                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, bool)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ConvertConditionValues)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x142a4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ConvertConditionValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.GetQueryIndexName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ::System::Collections::Generic::List_1<::StringW>*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetQueryIndexName)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x142a684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetQueryIndexName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.CreateQueryConditions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::Amazon::DynamoDBv2::DataModel::QueryCondition*>* (*)(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator,
                                                           ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateQueryConditions)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x142a968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateQueryConditions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::QueryOperator>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ValueToDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::Amazon::DynamoDBv2::DataModel::PropertyStorage*, ::System::Object*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ValueToDynamoDBEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1429c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ValueToDynamoDBEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ValidateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ValidateKey)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x142ac4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ValidateKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Key*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.MakeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Key* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::System::Object*, ::System::Object*, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*,
                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::MakeKey)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x142b054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "MakeKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ExecuteBatchGetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ExecuteBatchGetAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ExecuteBatchGetAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ExecuteBatchGetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>,
                                                         ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ExecuteBatchGetAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x142b434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ExecuteBatchGetAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBContext.ExecuteBatchWriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::*)(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>,
                                                         ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBContext::ExecuteBatchWriteAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x142b4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ExecuteBatchWriteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::DynamoDBv2::DataModel::IDynamoDBContext"
constexpr Amazon::DynamoDBv2::DataModel::DynamoDBContext::operator ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*() noexcept {
  return static_cast<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::DynamoDBv2::DataModel::IDynamoDBContext"
constexpr ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext* Amazon::DynamoDBv2::DataModel::DynamoDBContext::i___Amazon__DynamoDBv2__DataModel__IDynamoDBContext() noexcept {
  return static_cast<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::DynamoDBv2::DataModel::DynamoDBContext::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::DynamoDBv2::DataModel::DynamoDBContext::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get_ownClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownClient;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get_ownClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownClient;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_set_ownClient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ownClient = value;
}
constexpr ::Amazon::DynamoDBv2::IAmazonDynamoDB*& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__Client_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Client_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::IAmazonDynamoDB*> const& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__Client_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Client_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_set__Client_k__BackingField(::Amazon::DynamoDBv2::IAmazonDynamoDB* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Client_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get_tablesMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tablesMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*> const&
Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get_tablesMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tablesMap;
}
constexpr void
Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_set_tablesMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tablesMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ReaderWriterLockSlim*& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__readerWriterLockSlim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readerWriterLockSlim;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__readerWriterLockSlim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readerWriterLockSlim;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_set__readerWriterLockSlim(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____readerWriterLockSlim)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__Config_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Config_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*> const&
Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__Config_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Config_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_set__Config_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Config_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*& Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__StorageConfigCache_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StorageConfigCache_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*> const&
Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__StorageConfigCache_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StorageConfigCache_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_set__StorageConfigCache_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____StorageConfigCache_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>*&
Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__ConverterCache_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterCache_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>*> const&
Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_get__ConverterCache_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterCache_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBContext::__cordl_internal_set__ConverterCache_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConverterCache_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::setStaticF_CompletedTask(::System::Threading::Tasks::Task* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task*, "CompletedTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get>(
      std::forward<::System::Threading::Tasks::Task*>(value));
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::getStaticF_CompletedTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task*, "CompletedTask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get>();
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::setStaticF_NO_INDEX(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NO_INDEX", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::DynamoDBv2::DataModel::DynamoDBContext::getStaticF_NO_INDEX() {
  return ::cordl_internals::getStaticField<::StringW, "NO_INDEX", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get>();
}
inline ::Amazon::DynamoDBv2::IAmazonDynamoDB* Amazon::DynamoDBv2::DataModel::DynamoDBContext::get_Client() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                             "get_Client", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::IAmazonDynamoDB*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::set_Client(::Amazon::DynamoDBv2::IAmazonDynamoDB* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "set_Client", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* Amazon::DynamoDBv2::DataModel::DynamoDBContext::get_Config() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                             "get_Config", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::set_Config(::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "set_Config", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* Amazon::DynamoDBv2::DataModel::DynamoDBContext::get_StorageConfigCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                             "get_StorageConfigCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::set_StorageConfigCache(::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "set_StorageConfigCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::get_ConverterCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                             "get_ConverterCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>*, false>(this, ___internal_method);
}
inline void
Amazon::DynamoDBv2::DataModel::DynamoDBContext::set_ConverterCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "set_ConverterCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* Amazon::DynamoDBv2::DataModel::DynamoDBContext::New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>(client));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* Amazon::DynamoDBv2::DataModel::DynamoDBContext::New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client,
                                                                                                                  ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>(client, config));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client, config);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* Amazon::DynamoDBv2::DataModel::DynamoDBContext::New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, bool ownClient,
                                                                                                                  ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>(client, ownClient, config));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client, bool ownClient, ::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContextConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client, ownClient, config);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateBatchGet() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateBatchGet",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*, false>(this, ___internal_method);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateBatchGet(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateBatchGet",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>*, false>(this, ___internal_method, operationConfig);
}
inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateMultiTableBatchGet(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateMultiTableBatchGet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*, false>(this, ___internal_method, batches);
}
template <typename T> inline ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateBatchWrite() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateBatchWrite",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*, false>(this, ___internal_method);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateBatchWrite(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateBatchWrite",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>*, false>(this, ___internal_method, operationConfig);
}
inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateMultiTableBatchWrite(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateMultiTableBatchWrite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*, false>(this, ___internal_method, batches);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::SaveHelper(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "SaveHelper",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, operationConfig);
}
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::SaveHelperAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "SaveHelperAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, operationConfig, cancellationToken);
}
template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ToDocument(T value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                                  "ToDocument", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method, value);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ToDocument(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ToDocument",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method, value, operationConfig);
}
template <typename T>
inline T Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadHelper(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadHelper",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, hashKey, rangeKey, operationConfig);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadHelperAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                              ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadHelperAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, rangeKey, operationConfig, cancellationToken);
}
template <typename T> inline T Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadHelper(T keyObject, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadHelper",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, keyObject, operationConfig);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadHelperAsync(T keyObject, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadHelperAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, keyObject, operationConfig, cancellationToken);
}
template <typename T>
inline T Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadHelper(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadHelper",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Key*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, key, flatConfig, storageConfig);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadHelperAsync(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadHelperAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Key*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, key, flatConfig, storageConfig, cancellationToken);
}
template <typename T> inline T Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromDocument",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, document);
}
template <typename T>
inline T Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document,
                                                                      ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromDocument",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, document, operationConfig);
}
template <typename T>
inline T Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromDocumentHelper(::Amazon::DynamoDBv2::DocumentModel::Document* document, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromDocumentHelper",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, document, flatConfig);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromDocuments(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromDocuments",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, documents);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromDocuments(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents,
                                                              ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromDocuments",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, documents, operationConfig);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromDocumentsHelper(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents,
                                                                    ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromDocumentsHelper",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, documents, flatConfig);
}
template <typename T>
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteHelper(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteHelper",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashKey, rangeKey, operationConfig);
}
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteHelperAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                           ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteHelperAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, rangeKey, operationConfig, cancellationToken);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteHelper(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteHelper",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, operationConfig);
}
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteHelperAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                           ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteHelperAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, operationConfig, cancellationToken);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::SetNewVersion(::Amazon::DynamoDBv2::DataModel::ItemStorage* storage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "SetNewVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, storage);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::IncrementVersion(::System::Type* memberType, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "IncrementVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, memberType, version);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateExpectedDocumentForVersion(::Amazon::DynamoDBv2::DataModel::ItemStorage* storage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateExpectedDocumentForVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(nullptr, ___internal_method, storage);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DocumentModel::Table* Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetTargetTableInternal(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetTargetTableInternal",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Table*, false>(this, ___internal_method, operationConfig);
}
/// @param consumer: ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer (default: static_cast<int32_t>(0x1))
inline ::Amazon::DynamoDBv2::DocumentModel::Table* Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetTargetTable(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                                                                                  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                                                                  ::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer consumer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetTargetTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__Table__DynamoDBConsumer>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Table*, false>(this, ___internal_method, storageConfig, flatConfig, consumer);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Table* Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetUnconfiguredTable(::StringW tableName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetUnconfiguredTable",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Table*, false>(this, ___internal_method, tableName);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetTableName(::StringW baseTableName, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetTableName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, baseTableName, flatConfig);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::ValidateConfigAgainstTable(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ValidateConfigAgainstTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, config, table);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::CompareKeys(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::Amazon::DynamoDBv2::DocumentModel::Table* table,
                                                                        ::System::Collections::Generic::List_1<::StringW>* attributes, ::System::Collections::Generic::List_1<::StringW>* properties,
                                                                        ::StringW keyType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CompareKeys", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, config, table, attributes, properties, keyType);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::ShouldSave(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, bool ignoreNullValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ShouldSave", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, entry, ignoreNullValues);
}
template <typename T>
inline T Amazon::DynamoDBv2::DataModel::DynamoDBContext::DocumentToObject(::Amazon::DynamoDBv2::DataModel::ItemStorage* storage, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DocumentToObject",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, storage, flatConfig);
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DocumentToObject(::System::Type* objectType, ::Amazon::DynamoDBv2::DataModel::ItemStorage* storage,
                                                                                          ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DocumentToObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, objectType, storage, flatConfig);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::PopulateInstance(::Amazon::DynamoDBv2::DataModel::ItemStorage* storage, ::System::Object* instance,
                                                                             ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "PopulateInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storage, instance, flatConfig);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::ItemStorage* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ObjectToItemStorage(T toStore, bool keysOnly,
                                                                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ObjectToItemStorage",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorage*, false>(this, ___internal_method, toStore, keysOnly, flatConfig);
}
inline ::Amazon::DynamoDBv2::DataModel::ItemStorage* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ObjectToItemStorage(::System::Object* toStore, ::System::Type* objectType, bool keysOnly,
                                                                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ObjectToItemStorage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorage*, false>(this, ___internal_method, toStore, objectType, keysOnly, flatConfig);
}
inline ::Amazon::DynamoDBv2::DataModel::ItemStorage* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ObjectToItemStorageHelper(::System::Object* toStore,
                                                                                                                               ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config,
                                                                                                                               ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                                                                               bool keysOnly, bool ignoreNullValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ObjectToItemStorageHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorage*, false>(this, ___internal_method, toStore, config, flatConfig, keysOnly, ignoreNullValues);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::PopulateItemStorage(::System::Object* toStore, ::Amazon::DynamoDBv2::DataModel::ItemStorage* storage,
                                                                                ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, bool keysOnly, bool ignoreNullValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "PopulateItemStorage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toStore, storage, flatConfig, keysOnly, ignoreNullValues);
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromDynamoDBEntry(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage* propertyStorage,
                                                                                           ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry,
                                                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromDynamoDBEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, propertyStorage, entry, flatConfig);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryFromList(::System::Type* targetType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* list,
                                                                        ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, ByRef<::System::Object*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryFromList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetType, list, flatConfig, output);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryFromListToIList(::System::Type* targetType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* list,
                                                                               ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, ByRef<::System::Object*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryFromListToIList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetType, list, flatConfig, output);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryFromListToArray(::System::Type* targetType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* list,
                                                                               ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, ByRef<::System::Object*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryFromListToArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetType, list, flatConfig, output);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryFromMap(::System::Type* targetType, ::Amazon::DynamoDBv2::DocumentModel::Document* map,
                                                                       ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, ByRef<::System::Object*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryFromMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetType, map, flatConfig, output);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ToDynamoDBEntry(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage* propertyStorage,
                                                                                                                           ::System::Object* value,
                                                                                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ToDynamoDBEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, propertyStorage, value, flatConfig);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ToDynamoDBEntry(::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage* propertyStorage,
                                                                                                                           ::System::Object* value,
                                                                                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                                                                           bool canReturnScalarInsteadOfList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ToDynamoDBEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::SimplePropertyStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, propertyStorage, value, flatConfig, canReturnScalarInsteadOfList);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryToMap(::System::Object* value, ::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                     ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*> output) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryToMap", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, type, flatConfig, output);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryToList(::System::Object* value, ::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                      ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryToList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, type, flatConfig, output);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryToScalar(::System::Object* value, ::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                        ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryToScalar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, type, flatConfig, entry);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::IsSupportedDictionaryType(::System::Type* type, ByRef<::System::Type*> valueType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "IsSupportedDictionaryType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, valueType);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::IsSupportedDictionaryType(::System::Type* type, ByRef<::Amazon::Util::Internal::ITypeInfo*> typeWrapper, ByRef<::System::Type*> keyType,
                                                                                      ByRef<::System::Type*> valueType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "IsSupportedDictionaryType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Util::Internal::ITypeInfo*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, typeWrapper, keyType, valueType);
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeserializeFromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document, ::System::Type* targetType,
                                                                                                 ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeserializeFromDocument", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, document, targetType, flatConfig);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DataModel::DynamoDBContext::SerializeToDocument(::System::Object* value, ::System::Type* type,
                                                                                                                          ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "SerializeToDocument", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method, value, type, flatConfig);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TrySetValue(::System::Object* instance, ::System::Reflection::MemberInfo* member, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TrySetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, instance, member, value);
}
inline bool Amazon::DynamoDBv2::DataModel::DynamoDBContext::TryGetValue(::System::Object* instance, ::System::Reflection::MemberInfo* member, ByRef<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, instance, member, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::ScanFilter*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ComposeScanFilter(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* conditions,
                                                                  ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ComposeScanFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::ScanFilter*, false>(this, ___internal_method, conditions, storageConfig, flatConfig);
}
inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ComposeQueryFilter(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* currentConfig, ::System::Object* hashKeyValue,
                                                                   ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>* conditions,
                                                                   ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                                   ByRef<::System::Collections::Generic::List_1<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ComposeQueryFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::QueryFilter*, false>(this, ___internal_method, currentConfig, hashKeyValue, conditions, storageConfig, indexNames);
}
inline ::Amazon::DynamoDBv2::DocumentModel::QueryFilter*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ComposeQueryFilterHelper(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* currentConfig, ::Amazon::DynamoDBv2::DocumentModel::Document* hashKey,
                                                                         ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>* conditions,
                                                                         ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                                         ByRef<::System::Collections::Generic::List_1<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ComposeQueryFilterHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::QueryFilter*, false>(this, ___internal_method, currentConfig, hashKey, conditions, storageConfig, indexNames);
}
/// @param canReturnScalarInsteadOfList: bool (default: false)
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ConvertConditionValues(::ArrayW<::System::Object*, ::Array<::System::Object*>*> conditionValues,
                                                                       ::Amazon::DynamoDBv2::DataModel::PropertyStorage* conditionProperty,
                                                                       ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, bool canReturnScalarInsteadOfList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ConvertConditionValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*, false>(this, ___internal_method, conditionValues, conditionProperty,
                                                                                                                                           flatConfig, canReturnScalarInsteadOfList);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetQueryIndexName(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                                   ::System::Collections::Generic::List_1<::StringW>* indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetQueryIndexName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, flatConfig, indexNames);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::CreateQueryConditions(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                      ::System::Collections::Generic::IEnumerable_1<::System::Object*>* values,
                                                                      ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "CreateQueryConditions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::QueryOperator>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*, false>(nullptr, ___internal_method, flatConfig, op, values,
                                                                                                                                               storageConfig);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ValueToDynamoDBEntry(::Amazon::DynamoDBv2::DataModel::PropertyStorage* propertyStorage,
                                                                                                                                ::System::Object* value,
                                                                                                                                ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ValueToDynamoDBEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, propertyStorage, value, flatConfig);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBContext::ValidateKey(::Amazon::DynamoDBv2::DocumentModel::Key* key, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ValidateKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Key*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, storageConfig);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Key* Amazon::DynamoDBv2::DataModel::DynamoDBContext::MakeKey(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                         ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "MakeKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Key*, false>(this, ___internal_method, hashKey, rangeKey, storageConfig, flatConfig);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DocumentModel::Key* Amazon::DynamoDBv2::DataModel::DynamoDBContext::MakeKey(T keyObject, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig,
                                                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "MakeKey",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Key*, false>(this, ___internal_method, keyObject, storageConfig, flatConfig);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromSearch(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* cs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromSearch",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, cs);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ConvertScan(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* conditions,
                                                            ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ConvertScan",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*, false>(this, ___internal_method, conditions, operationConfig);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ConvertFromScan(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* scanConfig,
                                                                ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ConvertFromScan",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*, false>(this, ___internal_method, scanConfig, operationConfig);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ConvertFromQuery(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig* queryConfig,
                                                                 ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ConvertFromQuery",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*, false>(this, ___internal_method, queryConfig, operationConfig);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ConvertQueryByValue(::System::Object* hashKeyValue, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                    ::System::Collections::Generic::IEnumerable_1<::System::Object*>* values,
                                                                    ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ConvertQueryByValue",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::QueryOperator>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*, false>(this, ___internal_method, hashKeyValue, op, values, operationConfig);
}
/// @param storageConfig: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* Amazon::DynamoDBv2::DataModel::DynamoDBContext::ConvertQueryByValue(
    ::System::Object* hashKeyValue, ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>* conditions,
    ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ConvertQueryByValue",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::QueryCondition*>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*, false>(this, ___internal_method, hashKeyValue, conditions, operationConfig,
                                                                                                                        storageConfig);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ConvertQueryHelper(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* currentConfig,
                                                                   ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* storageConfig, ::Amazon::DynamoDBv2::DocumentModel::QueryFilter* filter,
                                                                   ::System::Collections::Generic::List_1<::StringW>* indexNames) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ConvertQueryHelper",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::QueryFilter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*, false>(this, ___internal_method, currentConfig, storageConfig, filter, indexNames);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromSearchAsync(::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* contextSearch) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromSearchAsync",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, contextSearch);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T> inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::SaveAsync(T value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "SaveAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::SaveAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "SaveAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadAsync(::System::Object* hashKey, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadAsync(::System::Object* hashKey,
                                                                                                        ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, rangeKey, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                        ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, hashKey, rangeKey, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadAsync(T keyObject, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, keyObject, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::LoadAsync(T keyObject, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "LoadAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, keyObject, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T> inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteAsync(T value, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteAsync(::System::Object* hashKey, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteAsync(::System::Object* hashKey,
                                                                                                     ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, operationConfig, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, rangeKey, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::DynamoDBContext::DeleteAsync(::System::Object* hashKey, ::System::Object* rangeKey,
                                                                                                     ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "DeleteAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, hashKey, rangeKey, operationConfig, cancellationToken);
}
inline ::System::Threading::Tasks::Task*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ExecuteBatchGetAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ExecuteBatchGetAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, batches);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ExecuteBatchGetAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches,
                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ExecuteBatchGetAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, batches, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ExecuteBatchWriteAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches,
                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ExecuteBatchWriteAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, batches, cancellationToken);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*
Amazon::DynamoDBv2::DataModel::DynamoDBContext::ScanAsync(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* conditions,
                                                          ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "ScanAsync",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, conditions, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromScanAsync(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* scanConfig,
                                                                                                                        ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromScanAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, scanConfig, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::QueryAsync(::System::Object* hashKeyValue,
                                                                                                                     ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "QueryAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, hashKeyValue, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::QueryAsync(::System::Object* hashKeyValue,
                                                                                                                     ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Object*>* values,
                                                                                                                     ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "QueryAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::QueryOperator>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, hashKeyValue, op, values, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* Amazon::DynamoDBv2::DataModel::DynamoDBContext::FromQueryAsync(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig* queryConfig,
                                                                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "FromQueryAsync",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*, false>(this, ___internal_method, queryConfig, operationConfig);
}
/// @param operationConfig: ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* (default: nullptr)
template <typename T>
inline ::Amazon::DynamoDBv2::DocumentModel::Table* Amazon::DynamoDBv2::DataModel::DynamoDBContext::GetTargetTable(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(), "GetTargetTable",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Table*, false>(this, ___internal_method, operationConfig);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext::DynamoDBContext() {}
