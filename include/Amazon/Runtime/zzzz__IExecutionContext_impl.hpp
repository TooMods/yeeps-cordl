#pragma once
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__IResponseContext_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::IExecutionContext.get_ResponseContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IResponseContext* (::Amazon::Runtime::IExecutionContext::*)()>(
    &::Amazon::Runtime::IExecutionContext::get_ResponseContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IExecutionContext*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IExecutionContext.get_RequestContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IRequestContext* (::Amazon::Runtime::IExecutionContext::*)()>(
    &::Amazon::Runtime::IExecutionContext::get_RequestContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IExecutionContext*>::get(), 1));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::IResponseContext* Amazon::Runtime::IExecutionContext::get_ResponseContext() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IExecutionContext*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IResponseContext*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::IRequestContext* Amazon::Runtime::IExecutionContext::get_RequestContext() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IExecutionContext*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IRequestContext*, false>(this, ___internal_method);
}
