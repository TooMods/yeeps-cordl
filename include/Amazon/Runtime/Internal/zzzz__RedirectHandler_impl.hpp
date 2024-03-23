#pragma once
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__RedirectHandler_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__RedirectHandler_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Amazon::Runtime::Internal::__RedirectHandler___InvokeAsync_d__1_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Runtime::Internal::__RedirectHandler___InvokeAsync_d__1_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Amazon::Runtime::Internal::__RedirectHandler___InvokeAsync_d__1_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__RedirectHandler___InvokeAsync_d__1_1<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::__RedirectHandler___InvokeAsync_d__1_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__RedirectHandler___InvokeAsync_d__1_1<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::RedirectHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Amazon::Runtime::Internal::__RedirectHandler___InvokeAsync_d__1_1<T>::__RedirectHandler___InvokeAsync_d__1_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::Runtime::Internal::RedirectHandler* __4__this,
    ::Amazon::Runtime::IExecutionContext* executionContext, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->executionContext = executionContext;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::__RedirectHandler___InvokeAsync_d__1_1<T>::__RedirectHandler___InvokeAsync_d__1_1() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::RedirectHandler.InvokeSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RedirectHandler::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::RedirectHandler::InvokeSync)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23e60c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RedirectHandler.HandleRedirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::RedirectHandler::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::RedirectHandler::HandleRedirect)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x23e6100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), "HandleRedirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RedirectHandler.FinalizeForRedirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RedirectHandler::*)(::Amazon::Runtime::IExecutionContext*, ::StringW)>(
    &::Amazon::Runtime::Internal::RedirectHandler::FinalizeForRedirect)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x23e68e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::RedirectHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::RedirectHandler::*)()>(&::Amazon::Runtime::Internal::RedirectHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e7204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::RedirectHandler::InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::Runtime::Internal::RedirectHandler::InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, executionContext);
}
inline bool Amazon::Runtime::Internal::RedirectHandler::HandleRedirect(::Amazon::Runtime::IExecutionContext* executionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), "HandleRedirect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::Internal::RedirectHandler::FinalizeForRedirect(::Amazon::Runtime::IExecutionContext* executionContext, ::StringW redirectedLocation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext, redirectedLocation);
}
inline ::Amazon::Runtime::Internal::RedirectHandler* Amazon::Runtime::Internal::RedirectHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::RedirectHandler*>());
}
inline void Amazon::Runtime::Internal::RedirectHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::Runtime::Internal::RedirectHandler::__n__0(::Amazon::Runtime::IExecutionContext* executionContext) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::RedirectHandler*>::get(), "<>n__0",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, executionContext);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::RedirectHandler::RedirectHandler() {}
