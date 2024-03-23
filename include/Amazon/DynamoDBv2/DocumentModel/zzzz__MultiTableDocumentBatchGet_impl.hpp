#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__MultiTableDocumentBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DocumentBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__MultiTableDocumentBatchGet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x1645ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1646418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet* __4__this,
    ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<
        ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
        __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9::__MultiTableDocumentBatchGet___ExecuteHelperAsync_d__9() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet.get_Batches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::*)()>(&::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::get_Batches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1645a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "get_Batches",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet.set_Batches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::set_Batches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1645a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "set_Batches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet.get_TotalKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::get_TotalKeys)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1645a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "get_TotalKeys",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::*)(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>)>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1644bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet.AddBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::*)(
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::AddBatch)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1645bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "AddBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet.ExecuteHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::ExecuteHelper)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x1645c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "ExecuteHelper",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet.ExecuteHelperAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::*)(::System::Threading::CancellationToken)>(
        &::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::ExecuteHelperAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1645eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "ExecuteHelperAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::ExecuteAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1645fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*&
Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::__cordl_internal_get__Batches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batches_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*> const&
Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::__cordl_internal_get__Batches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batches_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::__cordl_internal_set__Batches_k__BackingField(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Batches_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::get_Batches() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "get_Batches",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::set_Batches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "set_Batches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::get_TotalKeys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "get_TotalKeys",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet* Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::New_ctor(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*> batches) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>(batches));
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::_ctor(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*> batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batches);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::AddBatch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* batch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "AddBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batch);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::ExecuteHelper() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "ExecuteHelper",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "ExecuteHelperAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::ExecuteAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchGet::MultiTableDocumentBatchGet() {}
