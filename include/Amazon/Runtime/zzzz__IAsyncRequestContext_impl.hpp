#pragma once
#include "Amazon/Runtime/zzzz__IAsyncRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::IAsyncRequestContext.get_Callback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AsyncCallback* (::Amazon::Runtime::IAsyncRequestContext::*)()>(
    &::Amazon::Runtime::IAsyncRequestContext::get_Callback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncRequestContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncRequestContext*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::IAsyncRequestContext.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::Runtime::IAsyncRequestContext::*)()>(
    &::Amazon::Runtime::IAsyncRequestContext::get_State)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncRequestContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncRequestContext*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IRequestContext"
constexpr Amazon::Runtime::IAsyncRequestContext::operator ::Amazon::Runtime::IRequestContext*() noexcept {
  return static_cast<::Amazon::Runtime::IRequestContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IRequestContext"
constexpr ::Amazon::Runtime::IRequestContext* Amazon::Runtime::IAsyncRequestContext::i___Amazon__Runtime__IRequestContext() noexcept {
  return static_cast<::Amazon::Runtime::IRequestContext*>(static_cast<void*>(this));
}
inline ::System::AsyncCallback* Amazon::Runtime::IAsyncRequestContext::get_Callback() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncRequestContext*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback*, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::Runtime::IAsyncRequestContext::get_State() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IAsyncRequestContext*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
