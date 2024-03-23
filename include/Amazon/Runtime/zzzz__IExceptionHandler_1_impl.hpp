#pragma once
#include "Amazon/Runtime/zzzz__IExceptionHandler_1_def.hpp"
#include "Amazon/Runtime/zzzz__IExceptionHandler_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::IExceptionHandler"
template <typename T> constexpr Amazon::Runtime::IExceptionHandler_1<T>::operator ::Amazon::Runtime::IExceptionHandler*() noexcept {
  return static_cast<::Amazon::Runtime::IExceptionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IExceptionHandler"
template <typename T> constexpr ::Amazon::Runtime::IExceptionHandler* Amazon::Runtime::IExceptionHandler_1<T>::i___Amazon__Runtime__IExceptionHandler() noexcept {
  return static_cast<::Amazon::Runtime::IExceptionHandler*>(static_cast<void*>(this));
}
template <typename T> inline bool Amazon::Runtime::IExceptionHandler_1<T>::HandleException(::Amazon::Runtime::IExecutionContext* executionContext, T exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IExceptionHandler_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
