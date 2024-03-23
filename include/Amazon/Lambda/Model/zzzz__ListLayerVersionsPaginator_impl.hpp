#pragma once
#include "Amazon/Lambda/Model/zzzz__ListLayerVersionsResponse_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncIteratorMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__ListLayerVersionsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__IListLayerVersionsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__LayerVersionsListItem_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListLayerVersionsPaginator_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListLayerVersionsRequest_def.hpp"
#include "Amazon/Lambda/Model/zzzz__ListLayerVersionsResponse_def.hpp"
#include "Amazon/Lambda/zzzz__IAmazonLambda_def.hpp"
#include "Amazon/Runtime/zzzz__IPaginatedEnumerable_1_def.hpp"
#include "Amazon/Runtime/zzzz__IPaginator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::*)()>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3112eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c._get_LayerVersions_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* (
    ::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::*)(::Amazon::Lambda::Model::ListLayerVersionsResponse*)>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::_get_LayerVersions_b__6_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3112ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>::get(), "<get_LayerVersions>b__6_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::setStaticF___9(::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>::get>(
      std::forward<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>(value));
}
inline ::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c* Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>::get>();
}
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::setStaticF___9__6_0(
    ::System::Func_2<::Amazon::Lambda::Model::ListLayerVersionsResponse*, ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::Amazon::Lambda::Model::ListLayerVersionsResponse*, ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*>*, "<>9__6_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>::get>(
      std::forward<::System::Func_2<::Amazon::Lambda::Model::ListLayerVersionsResponse*, ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*>*>(value));
}
inline ::System::Func_2<::Amazon::Lambda::Model::ListLayerVersionsResponse*, ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*>*
Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::Amazon::Lambda::Model::ListLayerVersionsResponse*, ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*>*, "<>9__6_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>::get>();
}
inline ::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c* Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>());
}
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*
Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::_get_LayerVersions_b__6_0(::Amazon::Lambda::Model::ListLayerVersionsResponse* i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c*>::get(), "<get_LayerVersions>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*, false>(this, ___internal_method, i);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::__ListLayerVersionsPaginator____c::__ListLayerVersionsPaginator____c() {}
//  Writing Method size for method: ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)(int32_t)>(
        &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3112e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda -
                                                                                           Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)()>(
        &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x3112f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                        Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                                                        ListLayerVersionsResponse_ - PaginateAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31132e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda -
                                                                                           Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Collections_Generic_IAsyncEnumerable_Amazon_Lambda_Model_ListLayerVersionsResponse__GetAsyncEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* (
    ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::*)(::System::Threading::CancellationToken)>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Collections_Generic_IAsyncEnumerable_Amazon_Lambda_Model_ListLayerVersionsResponse__GetAsyncEnumerator)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x31132ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda -
                                                                                           Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                    "System.Collections.Generic.IAsyncEnumerable<Amazon.Lambda.Model.ListLayerVersionsResponse>.GetAsyncEnumerator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListLayerVersionsResponse__MoveNextAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<bool> (
    ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)()>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListLayerVersionsResponse__MoveNextAsync)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x31133b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                        Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                                 "System.Collections.Generic.IAsyncEnumerator<Amazon.Lambda.Model.ListLayerVersionsResponse>.MoveNextAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListLayerVersionsResponse__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::ListLayerVersionsResponse* (
    ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)()>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListLayerVersionsResponse__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31134ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                        Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                                 "System.Collections.Generic.IAsyncEnumerator<Amazon.Lambda.Model.ListLayerVersionsResponse>.get_Current", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)(int16_t)>(
        &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
        PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x31134f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                        Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                                 "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetResult", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Sources::ValueTaskSourceStatus (
    ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)(int16_t)>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x311354c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                        Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                                 "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetStatus", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
                      PaginateAsync_d__8::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(
        &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
        PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x31135a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                               ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
        "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.OnCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Threading_Tasks_Sources_IValueTaskSource_GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)(int16_t)>(
        &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
        PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x311361c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                        Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                                 "System.Threading.Tasks.Sources.IValueTaskSource.GetResult", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Threading_Tasks_Sources_IValueTaskSource_GetStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Sources::ValueTaskSourceStatus (
    ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)(int16_t)>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3113674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                        Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                                 "System.Threading.Tasks.Sources.IValueTaskSource.GetStatus", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
                      PaginateAsync_d__8::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(
        &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
        PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x31136cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                               ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
        "System.Threading.Tasks.Sources.IValueTaskSource.OnCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon-Runtime-IPaginator_Amazon-Lambda-Model-ListLayerVersionsResponse_-PaginateAsync_d__8.System_IAsyncDisposable_DisposeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (
    ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::*)()>(
    &::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_IAsyncDisposable_DisposeAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3113744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                        Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                                 "System.IAsyncDisposable.DisposeAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>"
constexpr Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::operator ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>"
constexpr ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime -
    IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::i___System__Collections__Generic__IAsyncEnumerable_1___Amazon__Lambda__Model__ListLayerVersionsResponse__() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>"
constexpr Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::operator ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>"
constexpr ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime -
    IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::i___System__Collections__Generic__IAsyncEnumerator_1___Amazon__Lambda__Model__ListLayerVersionsResponse__() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
constexpr ::System::IAsyncDisposable* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
constexpr Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::i___System__Threading__Tasks__Sources__IValueTaskSource_1_bool_() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
constexpr int32_t& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___t__builder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____t__builder;
}
constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___t__builder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____t__builder;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___t__builder(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____t__builder = value;
}
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool>& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___v__promiseOfValueOrEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____v__promiseOfValueOrEnd;
}
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda -
    Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___v__promiseOfValueOrEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____v__promiseOfValueOrEnd;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___v__promiseOfValueOrEnd(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____v__promiseOfValueOrEnd = value;
}
constexpr ::Amazon::Lambda::Model::ListLayerVersionsResponse*& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListLayerVersionsResponse*> const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
    Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___2__current(::Amazon::Lambda::Model::ListLayerVersionsResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get___w__disposeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____w__disposeMode;
}
constexpr bool const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get___w__disposeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____w__disposeMode;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___w__disposeMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____w__disposeMode = value;
}
constexpr int32_t& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::Amazon::Lambda::Model::ListLayerVersionsPaginator*& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListLayerVersionsPaginator*> const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
    Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___4__this(::Amazon::Lambda::Model::ListLayerVersionsPaginator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationToken& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationToken& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get___3__cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get___3__cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__cancellationToken;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___3__cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__cancellationToken = value;
}
constexpr ::StringW& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get__marker_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____marker_5__2;
}
constexpr ::StringW const& Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_get__marker_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____marker_5__2;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set__marker_5__2(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____marker_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListLayerVersionsResponse*>&
        Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon -
    Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___u__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____u__1;
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListLayerVersionsResponse*> const&
        Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon -
    Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::__cordl_internal_get___u__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____u__1;
}
constexpr void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__cordl_internal_set___u__1(
        ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Lambda::Model::ListLayerVersionsResponse*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____u__1 = value;
}
inline ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>(
          __1__state));
}
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                                                         ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                      Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                                                         ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
inline ::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime -
    IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Collections_Generic_IAsyncEnumerable_Amazon_Lambda_Model_ListLayerVersionsResponse__GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                                                         ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                  "System.Collections.Generic.IAsyncEnumerable<Amazon.Lambda.Model.ListLayerVersionsResponse>.GetAsyncEnumerator", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IAsyncEnumerator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*, false>(this, ___internal_method,
                                                                                                                                                              cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<bool> Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListLayerVersionsResponse__MoveNextAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                      Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                               "System.Collections.Generic.IAsyncEnumerator<Amazon.Lambda.Model.ListLayerVersionsResponse>.MoveNextAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<bool>, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ListLayerVersionsResponse* Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Collections_Generic_IAsyncEnumerator_Amazon_Lambda_Model_ListLayerVersionsResponse__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                             ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
      "System.Collections.Generic.IAsyncEnumerator<Amazon.Lambda.Model.ListLayerVersionsResponse>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::ListLayerVersionsResponse*, false>(this, ___internal_method);
}
inline bool Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                      Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                               "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetResult", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                      Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                               "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetStatus", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(this, ___internal_method, token);
}
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                                    ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                             ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
      "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.OnCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, token, flags);
}
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                      Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                               "System.Threading.Tasks.Sources.IValueTaskSource.GetResult", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
    ListLayerVersionsResponse_ - PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                      Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                               "System.Threading.Tasks.Sources.IValueTaskSource.GetStatus", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(this, ___internal_method, token);
}
inline void Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                    ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model -
                                                             ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
      "System.Threading.Tasks.Sources.IValueTaskSource.OnCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, token, flags);
}
inline ::System::Threading::Tasks::ValueTask Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::System_IAsyncDisposable_DisposeAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon -
                                                                                                      Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8*>::get(),
                                               "System.IAsyncDisposable.DisposeAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ -
    PaginateAsync_d__8::__ListLayerVersionsPaginator___Amazon - Runtime - IPaginator_Amazon - Lambda - Model - ListLayerVersionsResponse_ - PaginateAsync_d__8() {}
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsPaginator.get_Responses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* (
    ::Amazon::Lambda::Model::ListLayerVersionsPaginator::*)()>(&::Amazon::Lambda::Model::ListLayerVersionsPaginator::get_Responses)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3112c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>::get(),
                                                                               "get_Responses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsPaginator.get_LayerVersions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* (
    ::Amazon::Lambda::Model::ListLayerVersionsPaginator::*)()>(&::Amazon::Lambda::Model::ListLayerVersionsPaginator::get_LayerVersions)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3112c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>::get(),
                                                                               "get_LayerVersions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsPaginator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListLayerVersionsPaginator::*)(
    ::Amazon::Lambda::IAmazonLambda*, ::Amazon::Lambda::Model::ListLayerVersionsRequest*)>(&::Amazon::Lambda::Model::ListLayerVersionsPaginator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x310d5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::IAmazonLambda*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListLayerVersionsRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsPaginator.Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListLayerVersionsResponse__PaginateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* (
    ::Amazon::Lambda::Model::ListLayerVersionsPaginator::*)(::System::Threading::CancellationToken)>(
    &::Amazon::Lambda::Model::ListLayerVersionsPaginator::Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListLayerVersionsResponse__PaginateAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3112dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>::get(),
                                                 "Amazon.Runtime.IPaginator<Amazon.Lambda.Model.ListLayerVersionsResponse>.PaginateAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>"
constexpr Amazon::Lambda::Model::ListLayerVersionsPaginator::operator ::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*() noexcept {
  return static_cast<::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>"
constexpr ::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*
Amazon::Lambda::Model::ListLayerVersionsPaginator::i___Amazon__Runtime__IPaginator_1___Amazon__Lambda__Model__ListLayerVersionsResponse__() noexcept {
  return static_cast<::Amazon::Runtime::IPaginator_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Lambda::Model::IListLayerVersionsPaginator"
constexpr Amazon::Lambda::Model::ListLayerVersionsPaginator::operator ::Amazon::Lambda::Model::IListLayerVersionsPaginator*() noexcept {
  return static_cast<::Amazon::Lambda::Model::IListLayerVersionsPaginator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Lambda::Model::IListLayerVersionsPaginator"
constexpr ::Amazon::Lambda::Model::IListLayerVersionsPaginator* Amazon::Lambda::Model::ListLayerVersionsPaginator::i___Amazon__Lambda__Model__IListLayerVersionsPaginator() noexcept {
  return static_cast<::Amazon::Lambda::Model::IListLayerVersionsPaginator*>(static_cast<void*>(this));
}
constexpr ::Amazon::Lambda::IAmazonLambda*& Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::IAmazonLambda*> const& Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_set__client(::Amazon::Lambda::IAmazonLambda* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Lambda::Model::ListLayerVersionsRequest*& Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_get__request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::ListLayerVersionsRequest*> const& Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_get__request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr void Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_set__request(::Amazon::Lambda::Model::ListLayerVersionsRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_get__isPaginatorInUse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPaginatorInUse;
}
constexpr int32_t const& Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_get__isPaginatorInUse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPaginatorInUse;
}
constexpr void Amazon::Lambda::Model::ListLayerVersionsPaginator::__cordl_internal_set__isPaginatorInUse(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPaginatorInUse = value;
}
inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>* Amazon::Lambda::Model::ListLayerVersionsPaginator::get_Responses() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>::get(),
                                                                             "get_Responses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* Amazon::Lambda::Model::ListLayerVersionsPaginator::get_LayerVersions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>::get(),
                                                                             "get_LayerVersions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IPaginatedEnumerable_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ListLayerVersionsPaginator* Amazon::Lambda::Model::ListLayerVersionsPaginator::New_ctor(::Amazon::Lambda::IAmazonLambda* client,
                                                                                                                        ::Amazon::Lambda::Model::ListLayerVersionsRequest* request) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>(client, request));
}
inline void Amazon::Lambda::Model::ListLayerVersionsPaginator::_ctor(::Amazon::Lambda::IAmazonLambda* client, ::Amazon::Lambda::Model::ListLayerVersionsRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::IAmazonLambda*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::ListLayerVersionsRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client, request);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*
Amazon::Lambda::Model::ListLayerVersionsPaginator::Amazon_Runtime_IPaginator_Amazon_Lambda_Model_ListLayerVersionsResponse__PaginateAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsPaginator*>::get(),
                                               "Amazon.Runtime.IPaginator<Amazon.Lambda.Model.ListLayerVersionsResponse>.PaginateAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IAsyncEnumerable_1<::Amazon::Lambda::Model::ListLayerVersionsResponse*>*, false>(this, ___internal_method,
                                                                                                                                                              cancellationToken);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::ListLayerVersionsPaginator::ListLayerVersionsPaginator() {}
