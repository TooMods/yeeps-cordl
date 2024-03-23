#pragma once
#include "Amazon/Runtime/zzzz__IAsyncExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IAsyncRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__IAsyncResponseContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::IAsyncExecutionContext.get_ResponseContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IAsyncResponseContext* (::Amazon::Runtime::IAsyncExecutionContext::*)()>(
    &::Amazon::Runtime::IAsyncExecutionContext::get_ResponseContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IAsyncExecutionContext.get_RequestContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IAsyncRequestContext* (::Amazon::Runtime::IAsyncExecutionContext::*)()>(
    &::Amazon::Runtime::IAsyncExecutionContext::get_RequestContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IAsyncExecutionContext.get_RuntimeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::Runtime::IAsyncExecutionContext::*)()>(
    &::Amazon::Runtime::IAsyncExecutionContext::get_RuntimeState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IAsyncExecutionContext.set_RuntimeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::IAsyncExecutionContext::*)(::System::Object*)>(
    &::Amazon::Runtime::IAsyncExecutionContext::set_RuntimeState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(), 3));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::IAsyncResponseContext* Amazon::Runtime::IAsyncExecutionContext::get_ResponseContext() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IAsyncResponseContext*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::IAsyncRequestContext* Amazon::Runtime::IAsyncExecutionContext::get_RequestContext() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IAsyncRequestContext*, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::Runtime::IAsyncExecutionContext::get_RuntimeState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::IAsyncExecutionContext::set_RuntimeState(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncExecutionContext*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
