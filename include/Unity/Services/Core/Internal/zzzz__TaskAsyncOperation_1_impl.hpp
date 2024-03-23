#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_1_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__TaskAsyncOperation_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationStatus_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__TaskAsyncOperation_1_def.hpp"
template <typename T> inline void Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>::setStaticF___9(::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*>::get>(
      std::forward<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*>(value));
}
template <typename T> inline ::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>* Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*>::get>();
}
template <typename T>
inline void Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>::setStaticF___9__11_0(::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*>::get>(
      std::forward<::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>*>(value));
}
template <typename T> inline ::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>* Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Action_2<::System::Threading::Tasks::Task_1<T>*, ::System::Object*>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*>::get>();
}
template <typename T> inline ::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>* Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*>());
}
template <typename T> inline void Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>::__ctor_b__11_0(::System::Threading::Tasks::Task_1<T>* t, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>*>::get(), "<.ctor>b__11_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, state);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::__TaskAsyncOperation_1____c<T>::__TaskAsyncOperation_1____c() {}
template <typename T> constexpr ::System::Threading::Tasks::Task_1<T>*& Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::__cordl_internal_get_m_Task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Task;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<T>*> const& Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::__cordl_internal_get_m_Task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Task;
}
template <typename T> constexpr void Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::__cordl_internal_set_m_Task(::System::Threading::Tasks::Task_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline bool Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::get_IsCompleted() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::get_Result() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::GetResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Core::Internal::AsyncOperationBase_1<T>* Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::GetAwaiter() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::get_Status() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationStatus, false>(this, ___internal_method);
}
template <typename T> inline ::System::Exception* Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::get_Exception() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
template <typename T>
inline ::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>* Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::New_ctor(::System::Threading::Tasks::Task_1<T>* task) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>(task));
}
template <typename T> inline void Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::_ctor(::System::Threading::Tasks::Task_1<T>* task) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
template <typename T> inline ::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>* Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::Run(::System::Func_1<T>* func) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*>::get(), "Run",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>*, false>(nullptr, ___internal_method, func);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::TaskAsyncOperation_1<T>::TaskAsyncOperation_1() {}
