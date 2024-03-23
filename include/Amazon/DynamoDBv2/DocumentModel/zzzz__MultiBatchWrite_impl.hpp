#pragma once
#include "Amazon/DynamoDBv2/Model/zzzz__BatchWriteItemResponse_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__MultiBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DocumentBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__KeyComparer_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Key_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__MultiBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QuickList_1_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__WriteRequestDocument_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchWriteItemRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchWriteItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x164b690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x164b928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "batches", ty: "::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_writeRequestsMap_5__2",
// ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_targetTable_5__3", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::__MultiBatchWrite___WriteItemsHelperAsync_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this,
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches, ::System::Threading::CancellationToken cancellationToken,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* _writeRequestsMap_5__2,
    ::Amazon::DynamoDBv2::DocumentModel::Table* _targetTable_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->batches = batches;
  this->cancellationToken = cancellationToken;
  this->_writeRequestsMap_5__2 = _writeRequestsMap_5__2;
  this->_targetTable_5__3 = _targetTable_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___WriteItemsHelperAsync_d__10::__MultiBatchWrite___WriteItemsHelperAsync_d__10() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x164b934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x164be64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "set", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "targetTable", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_request_5__2", ty: "::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_shouldTrySmallerRequest_5__3", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::__MultiBatchWrite___SendSetAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* set,
    ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* _request_5__2,
    bool _shouldTrySmallerRequest_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->set = set;
  this->targetTable = targetTable;
  this->cancellationToken = cancellationToken;
  this->_request_5__2 = _request_5__2;
  this->_shouldTrySmallerRequest_5__3 = _shouldTrySmallerRequest_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___SendSetAsync_d__12::__MultiBatchWrite___SendSetAsync_d__12() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0xb84;
  constexpr static std::size_t addrs = 0x164be70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x164c9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "client", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "request", ty: "::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "documentMap", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*,::Amazon::DynamoDBv2::DocumentModel::Document*>*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::__MultiBatchWrite___CallUntilCompletionAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client,
    ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* __4__this,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
        documentMap,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchWriteItemResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->client = client;
  this->request = request;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->documentMap = documentMap;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchWrite___CallUntilCompletionAsync_d__17::__MultiBatchWrite___CallUntilCompletionAsync_d__17() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.get_Batches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)()>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::get_Batches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1649300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(),
                                                                               "get_Batches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.set_Batches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::set_Batches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1649308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "set_Batches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.WriteItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::WriteItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1649030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(),
                                                                               "WriteItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.WriteItemsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::WriteItemsAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1649158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "WriteItemsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.WriteItemsHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::WriteItemsHelper)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1649310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "WriteItemsHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.WriteItemsHelperAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*,
                                                             ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::WriteItemsHelperAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1649420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "WriteItemsHelperAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.SendSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*,
    ::Amazon::DynamoDBv2::DocumentModel::Table*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::SendSet)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x164a0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "SendSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.SendSetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DocumentModel::
        MultiBatchWrite::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*,
                            ::Amazon::DynamoDBv2::DocumentModel::Table*, ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::SendSetAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x164b394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "SendSetAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.GetNumberOfWrites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*)>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::GetNumberOfWrites)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x164b22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "GetNumberOfWrites", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.ConstructRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* (
    ::Amazon::DynamoDBv2::DocumentModel::
        MultiBatchWrite::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*,
                            ::Amazon::DynamoDBv2::DocumentModel::Table*,
                            ByRef<::System::Collections::Generic::Dictionary_2<
                                ::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>,
                            bool)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::ConstructRequest)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x164a264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "ConstructRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
                ::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.GetNextWriteItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::Amazon::DynamoDBv2::DocumentModel::
                   QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* (*)(ByRef<::System::Collections::Generic::Dictionary_2<
                                                                                                      ::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<
                                                                                                                     ::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>,
                                                                                                  int32_t)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::GetNextWriteItems)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1649d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "GetNextWriteItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.CallUntilCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)(
    ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*,
    ::Amazon::DynamoDBv2::AmazonDynamoDBClient*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::CallUntilCompletion)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x164a904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "CallUntilCompletion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
                ::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.CallUntilCompletionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DocumentModel::
        MultiBatchWrite::*)(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*,
                            ::System::Collections::Generic::Dictionary_2<
                                ::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*,
                            ::Amazon::DynamoDBv2::AmazonDynamoDBClient*, ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::CallUntilCompletionAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x164b4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "CallUntilCompletionAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
                ::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite.ConvertBatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* (
        ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::ConvertBatches)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x164953c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "ConvertBatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1648f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*& Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::__cordl_internal_get_tableMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tableMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*> const&
Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::__cordl_internal_get_tableMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tableMap;
}
constexpr void
Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::__cordl_internal_set_tableMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tableMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*&
Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::__cordl_internal_get__Batches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batches_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*> const&
Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::__cordl_internal_get__Batches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batches_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::__cordl_internal_set__Batches_k__BackingField(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Batches_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::setStaticF_keyComparer(::Amazon::DynamoDBv2::DocumentModel::KeyComparer* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DocumentModel::KeyComparer*, "keyComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get>(
      std::forward<::Amazon::DynamoDBv2::DocumentModel::KeyComparer*>(value));
}
inline ::Amazon::DynamoDBv2::DocumentModel::KeyComparer* Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::getStaticF_keyComparer() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DocumentModel::KeyComparer*, "keyComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get>();
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::get_Batches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(),
                                                                             "get_Batches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::set_Batches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "set_Batches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::WriteItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(),
                                                                             "WriteItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::WriteItemsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "WriteItemsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::WriteItemsHelper(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "WriteItemsHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batches);
}
inline ::System::Threading::Tasks::Task*
Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::WriteItemsHelperAsync(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches,
                                                                          ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "WriteItemsHelperAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, batches, cancellationToken);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::SendSet(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* set,
    ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "SendSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, set, targetTable);
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::SendSetAsync(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* set,
    ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "SendSetAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, set, targetTable, cancellationToken);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::GetNumberOfWrites(::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "GetNumberOfWrites", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, request);
}
inline ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::ConstructRequest(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>* writeItems,
    ::Amazon::DynamoDBv2::DocumentModel::Table* targetTable,
    ByRef<::System::Collections::Generic::Dictionary_2<::StringW,
                                                       ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
        documentMap,
    bool isAsync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "ConstructRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<
              ::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*, false>(this, ___internal_method, writeItems, targetTable, documentMap, isAsync);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*
Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::GetNextWriteItems(
    ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*> writeRequestsMap,
    int32_t maxNumberOfItems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "GetNextWriteItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*, false>(
      nullptr, ___internal_method, writeRequestsMap, maxNumberOfItems);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::CallUntilCompletion(
    ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
        documentMap,
    ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "CallUntilCompletion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
              ::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, documentMap, client);
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::CallUntilCompletionAsync(
    ::Amazon::DynamoDBv2::Model::BatchWriteItemRequest* request,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
        documentMap,
    ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "CallUntilCompletionAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchWriteItemRequest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
              ::StringW, ::System::Collections::Generic::Dictionary_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, request, documentMap, client, cancellationToken);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*
Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::ConvertBatches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(), "ConvertBatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<::Amazon::DynamoDBv2::DocumentModel::WriteRequestDocument*>*>*, false>(
      this, ___internal_method, batches);
}
inline ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite* Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::MultiBatchWrite::MultiBatchWrite() {}
