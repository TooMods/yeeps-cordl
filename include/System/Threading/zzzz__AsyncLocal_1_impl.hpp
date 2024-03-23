#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*& System::Threading::AsyncLocal_1<T>::__cordl_internal_get_m_valueChangedHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueChangedHandler;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*> const&
System::Threading::AsyncLocal_1<T>::__cordl_internal_get_m_valueChangedHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueChangedHandler;
}
template <typename T> constexpr void System::Threading::AsyncLocal_1<T>::__cordl_internal_set_m_valueChangedHandler(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_valueChangedHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::AsyncLocal_1<T>::AsyncLocal_1() {}
