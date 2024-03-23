#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Runtime/zzzz__RetryPolicy_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ILogger_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__RetryCapacity_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceException_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__RetryPolicy_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::*)()>(
    &::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::MoveNext)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x201fd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2020210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::RetryPolicy*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "exception", ty:
// "::System::Exception*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_canRetry_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_isClockSkewError_5__3", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::__RetryPolicy___RetryAsync_d__59(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Amazon::Runtime::RetryPolicy* __4__this,
    ::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception, bool _canRetry_5__2, bool _isClockSkewError_5__3,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->executionContext = executionContext;
  this->exception = exception;
  this->_canRetry_5__2 = _canRetry_5__2;
  this->_isClockSkewError_5__3 = _isClockSkewError_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59::__RetryPolicy___RetryAsync_d__59() {}
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.get_MaxRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::RetryPolicy::*)()>(&::Amazon::Runtime::RetryPolicy::get_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_MaxRetries",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.set_MaxRetries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(int32_t)>(&::Amazon::Runtime::RetryPolicy::set_MaxRetries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_MaxRetries", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.get_Logger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Util::ILogger* (::Amazon::Runtime::RetryPolicy::*)()>(
    &::Amazon::Runtime::RetryPolicy::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_Logger",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.set_Logger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::Internal::Util::ILogger*)>(
    &::Amazon::Runtime::RetryPolicy::set_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_Logger", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::ILogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.get_ThrottlingErrorCodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::Amazon::Runtime::RetryPolicy::*)()>(
    &::Amazon::Runtime::RetryPolicy::get_ThrottlingErrorCodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.set_ThrottlingErrorCodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(
    &::Amazon::Runtime::RetryPolicy::set_ThrottlingErrorCodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d71c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.get_TimeoutErrorCodesToRetryOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::Amazon::Runtime::RetryPolicy::*)()>(
    &::Amazon::Runtime::RetryPolicy::get_TimeoutErrorCodesToRetryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                               "get_TimeoutErrorCodesToRetryOn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.set_TimeoutErrorCodesToRetryOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(
    &::Amazon::Runtime::RetryPolicy::set_TimeoutErrorCodesToRetryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_TimeoutErrorCodesToRetryOn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.get_ErrorCodesToRetryOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::Amazon::Runtime::RetryPolicy::*)()>(
    &::Amazon::Runtime::RetryPolicy::get_ErrorCodesToRetryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                               "get_ErrorCodesToRetryOn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.set_ErrorCodesToRetryOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(
    &::Amazon::Runtime::RetryPolicy::set_ErrorCodesToRetryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_ErrorCodesToRetryOn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.get_HttpStatusCodesToRetryOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* (::Amazon::Runtime::RetryPolicy::*)()>(
    &::Amazon::Runtime::RetryPolicy::get_HttpStatusCodesToRetryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                               "get_HttpStatusCodesToRetryOn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.set_HttpStatusCodesToRetryOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(
    ::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>*)>(&::Amazon::Runtime::RetryPolicy::set_HttpStatusCodesToRetryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_HttpStatusCodesToRetryOn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.get_WebExceptionStatusesToRetryOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* (
    ::Amazon::Runtime::RetryPolicy::*)()>(&::Amazon::Runtime::RetryPolicy::get_WebExceptionStatusesToRetryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_WebExceptionStatusesToRetryOn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.set_WebExceptionStatusesToRetryOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(
    ::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>*)>(&::Amazon::Runtime::RetryPolicy::set_WebExceptionStatusesToRetryOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_WebExceptionStatusesToRetryOn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.get_RetryCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::RetryCapacity* (::Amazon::Runtime::RetryPolicy::*)()>(
    &::Amazon::Runtime::RetryPolicy::get_RetryCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_RetryCapacity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.set_RetryCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::Internal::RetryCapacity*)>(
    &::Amazon::Runtime::RetryPolicy::set_RetryCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201d76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_RetryCapacity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.Retry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(
    &::Amazon::Runtime::RetryPolicy::Retry)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x201d774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "Retry", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.CanRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::RetryPolicy::CanRetry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.RetryForException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(
    &::Amazon::Runtime::RetryPolicy::RetryForException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.RetryLimitReached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::RetryPolicy::RetryLimitReached)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.WaitBeforeRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::RetryPolicy::WaitBeforeRetry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.NotifySuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::RetryPolicy::NotifySuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x201e720;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.OnRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::RetryPolicy::OnRetry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201e724;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.OnRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, bool)>(
    &::Amazon::Runtime::RetryPolicy::OnRetry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201e72c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.OnRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, bool, bool)>(
    &::Amazon::Runtime::RetryPolicy::OnRetry)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x201e734;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.ObtainSendToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(
    &::Amazon::Runtime::RetryPolicy::ObtainSendToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x201e744;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.IsThrottlingError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::System::Exception*)>(&::Amazon::Runtime::RetryPolicy::IsThrottlingError)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x201e748;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.IsTransientError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(
    &::Amazon::Runtime::RetryPolicy::IsTransientError)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x201e8f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.IsTransientSslError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*)>(&::Amazon::Runtime::RetryPolicy::IsTransientSslError)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x201eda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "IsTransientSslError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.IsServiceTimeoutError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::System::Exception*)>(
    &::Amazon::Runtime::RetryPolicy::IsServiceTimeoutError)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x201ee84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.IsClockskew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(
    &::Amazon::Runtime::RetryPolicy::IsClockskew)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0x201db28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "IsClockskew", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.TryParseDateHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::AmazonServiceException*, ByRef<::System::DateTime>)>(
    &::Amazon::Runtime::RetryPolicy::TryParseDateHeader)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x201ef80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "TryParseDateHeader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceException*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.TryParseExceptionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::AmazonServiceException*, ByRef<::System::DateTime>)>(
    &::Amazon::Runtime::RetryPolicy::TryParseExceptionMessage)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x201f144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "TryParseExceptionMessage", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceException*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.GetWebData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::IWebResponseData* (*)(::Amazon::Runtime::AmazonServiceException*)>(
    &::Amazon::Runtime::RetryPolicy::GetWebData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x201f31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "GetWebData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.ContainErrorMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*, ::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::Amazon::Runtime::RetryPolicy::ContainErrorMessage)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x201f3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "ContainErrorMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.RetryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::RetryPolicy::RetryAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x201f45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "RetryAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.ObtainSendTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::RetryPolicy::ObtainSendTokenAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x201f598;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.RetryForExceptionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::RetryPolicy::RetryForExceptionAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy.WaitBeforeRetryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Amazon::Runtime::RetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::RetryPolicy::WaitBeforeRetryAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::RetryPolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::RetryPolicy::*)()>(&::Amazon::Runtime::RetryPolicy::_ctor)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x201f620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Amazon::Runtime::RetryPolicy::__cordl_internal_get__MaxRetries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxRetries_k__BackingField;
}
constexpr int32_t const& Amazon::Runtime::RetryPolicy::__cordl_internal_get__MaxRetries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxRetries_k__BackingField;
}
constexpr void Amazon::Runtime::RetryPolicy::__cordl_internal_set__MaxRetries_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxRetries_k__BackingField = value;
}
constexpr ::Amazon::Runtime::Internal::Util::ILogger*& Amazon::Runtime::RetryPolicy::__cordl_internal_get__Logger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Logger_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& Amazon::Runtime::RetryPolicy::__cordl_internal_get__Logger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Logger_k__BackingField;
}
constexpr void Amazon::Runtime::RetryPolicy::__cordl_internal_set__Logger_k__BackingField(::Amazon::Runtime::Internal::Util::ILogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Logger_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& Amazon::Runtime::RetryPolicy::__cordl_internal_get__ThrottlingErrorCodes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ThrottlingErrorCodes_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::StringW>*> const&
Amazon::Runtime::RetryPolicy::__cordl_internal_get__ThrottlingErrorCodes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ThrottlingErrorCodes_k__BackingField;
}
constexpr void Amazon::Runtime::RetryPolicy::__cordl_internal_set__ThrottlingErrorCodes_k__BackingField(::System::Collections::Generic::ICollection_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ThrottlingErrorCodes_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& Amazon::Runtime::RetryPolicy::__cordl_internal_get__TimeoutErrorCodesToRetryOn_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TimeoutErrorCodesToRetryOn_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::StringW>*> const&
Amazon::Runtime::RetryPolicy::__cordl_internal_get__TimeoutErrorCodesToRetryOn_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TimeoutErrorCodesToRetryOn_k__BackingField;
}
constexpr void Amazon::Runtime::RetryPolicy::__cordl_internal_set__TimeoutErrorCodesToRetryOn_k__BackingField(::System::Collections::Generic::ICollection_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TimeoutErrorCodesToRetryOn_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& Amazon::Runtime::RetryPolicy::__cordl_internal_get__ErrorCodesToRetryOn_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ErrorCodesToRetryOn_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::StringW>*> const&
Amazon::Runtime::RetryPolicy::__cordl_internal_get__ErrorCodesToRetryOn_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ErrorCodesToRetryOn_k__BackingField;
}
constexpr void Amazon::Runtime::RetryPolicy::__cordl_internal_set__ErrorCodesToRetryOn_k__BackingField(::System::Collections::Generic::ICollection_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ErrorCodesToRetryOn_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>*& Amazon::Runtime::RetryPolicy::__cordl_internal_get__HttpStatusCodesToRetryOn_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HttpStatusCodesToRetryOn_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>*> const&
Amazon::Runtime::RetryPolicy::__cordl_internal_get__HttpStatusCodesToRetryOn_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HttpStatusCodesToRetryOn_k__BackingField;
}
constexpr void Amazon::Runtime::RetryPolicy::__cordl_internal_set__HttpStatusCodesToRetryOn_k__BackingField(::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HttpStatusCodesToRetryOn_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>*& Amazon::Runtime::RetryPolicy::__cordl_internal_get__WebExceptionStatusesToRetryOn_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebExceptionStatusesToRetryOn_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>*> const&
Amazon::Runtime::RetryPolicy::__cordl_internal_get__WebExceptionStatusesToRetryOn_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebExceptionStatusesToRetryOn_k__BackingField;
}
constexpr void
Amazon::Runtime::RetryPolicy::__cordl_internal_set__WebExceptionStatusesToRetryOn_k__BackingField(::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____WebExceptionStatusesToRetryOn_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::RetryCapacity*& Amazon::Runtime::RetryPolicy::__cordl_internal_get__RetryCapacity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RetryCapacity_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::RetryCapacity*> const& Amazon::Runtime::RetryPolicy::__cordl_internal_get__RetryCapacity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RetryCapacity_k__BackingField;
}
constexpr void Amazon::Runtime::RetryPolicy::__cordl_internal_set__RetryCapacity_k__BackingField(::Amazon::Runtime::Internal::RetryCapacity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RetryCapacity_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::RetryPolicy::setStaticF_clockSkewErrorCodes(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "clockSkewErrorCodes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::RetryPolicy::getStaticF_clockSkewErrorCodes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "clockSkewErrorCodes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get>();
}
inline void Amazon::Runtime::RetryPolicy::setStaticF_clockSkewMaxThreshold(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "clockSkewMaxThreshold", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Runtime::RetryPolicy::getStaticF_clockSkewMaxThreshold() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "clockSkewMaxThreshold", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get>();
}
inline int32_t Amazon::Runtime::RetryPolicy::get_MaxRetries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_MaxRetries",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RetryPolicy::set_MaxRetries(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_MaxRetries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Util::ILogger* Amazon::Runtime::RetryPolicy::get_Logger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_Logger",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::ILogger*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RetryPolicy::set_Logger(::Amazon::Runtime::Internal::Util::ILogger* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_Logger", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* Amazon::Runtime::RetryPolicy::get_ThrottlingErrorCodes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RetryPolicy::set_ThrottlingErrorCodes(::System::Collections::Generic::ICollection_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* Amazon::Runtime::RetryPolicy::get_TimeoutErrorCodesToRetryOn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                             "get_TimeoutErrorCodesToRetryOn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RetryPolicy::set_TimeoutErrorCodesToRetryOn(::System::Collections::Generic::ICollection_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_TimeoutErrorCodesToRetryOn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* Amazon::Runtime::RetryPolicy::get_ErrorCodesToRetryOn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_ErrorCodesToRetryOn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RetryPolicy::set_ErrorCodesToRetryOn(::System::Collections::Generic::ICollection_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_ErrorCodesToRetryOn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* Amazon::Runtime::RetryPolicy::get_HttpStatusCodesToRetryOn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(),
                                                                             "get_HttpStatusCodesToRetryOn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RetryPolicy::set_HttpStatusCodesToRetryOn(::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_HttpStatusCodesToRetryOn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* Amazon::Runtime::RetryPolicy::get_WebExceptionStatusesToRetryOn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_WebExceptionStatusesToRetryOn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RetryPolicy::set_WebExceptionStatusesToRetryOn(::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_WebExceptionStatusesToRetryOn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::RetryCapacity* Amazon::Runtime::RetryPolicy::get_RetryCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "get_RetryCapacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::RetryCapacity*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::RetryPolicy::set_RetryCapacity(::Amazon::Runtime::Internal::RetryCapacity* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "set_RetryCapacity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::RetryPolicy::Retry(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "Retry", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
inline bool Amazon::Runtime::RetryPolicy::CanRetry(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext);
}
inline bool Amazon::Runtime::RetryPolicy::RetryForException(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
inline bool Amazon::Runtime::RetryPolicy::RetryLimitReached(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::RetryPolicy::WaitBeforeRetry(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::RetryPolicy::NotifySuccess(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline bool Amazon::Runtime::RetryPolicy::OnRetry(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext);
}
inline bool Amazon::Runtime::RetryPolicy::OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, bypassAcquireCapacity);
}
inline bool Amazon::Runtime::RetryPolicy::OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity, bool isThrottlingError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, bypassAcquireCapacity, isThrottlingError);
}
inline void Amazon::Runtime::RetryPolicy::ObtainSendToken(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext, exception);
}
inline bool Amazon::Runtime::RetryPolicy::IsThrottlingError(::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, exception);
}
inline bool Amazon::Runtime::RetryPolicy::IsTransientError(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
inline bool Amazon::Runtime::RetryPolicy::IsTransientSslError(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "IsTransientSslError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exception);
}
inline bool Amazon::Runtime::RetryPolicy::IsServiceTimeoutError(::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, exception);
}
inline bool Amazon::Runtime::RetryPolicy::IsClockskew(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "IsClockskew", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
inline bool Amazon::Runtime::RetryPolicy::TryParseDateHeader(::Amazon::Runtime::AmazonServiceException* ase, ByRef<::System::DateTime> serverTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "TryParseDateHeader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceException*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ase, serverTime);
}
inline bool Amazon::Runtime::RetryPolicy::TryParseExceptionMessage(::Amazon::Runtime::AmazonServiceException* ase, ByRef<::System::DateTime> serverTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "TryParseExceptionMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceException*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ase, serverTime);
}
inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* Amazon::Runtime::RetryPolicy::GetWebData(::Amazon::Runtime::AmazonServiceException* ase) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "GetWebData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::IWebResponseData*, false>(nullptr, ___internal_method, ase);
}
inline bool Amazon::Runtime::RetryPolicy::ContainErrorMessage(::System::Exception* exception, ::System::Collections::Generic::HashSet_1<::StringW>* errorMessages) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "ContainErrorMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exception, errorMessages);
}
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::RetryPolicy::RetryAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), "RetryAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, executionContext, exception);
}
inline ::System::Threading::Tasks::Task* Amazon::Runtime::RetryPolicy::ObtainSendTokenAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, executionContext, exception);
}
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::RetryPolicy::RetryForExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, executionContext, exception);
}
inline ::System::Threading::Tasks::Task* Amazon::Runtime::RetryPolicy::WaitBeforeRetryAsync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, executionContext);
}
inline ::Amazon::Runtime::RetryPolicy* Amazon::Runtime::RetryPolicy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::RetryPolicy*>());
}
inline void Amazon::Runtime::RetryPolicy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::RetryPolicy*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::RetryPolicy::RetryPolicy() {}
