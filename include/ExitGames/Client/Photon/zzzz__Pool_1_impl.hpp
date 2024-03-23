#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Pool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template <typename T> constexpr ::System::Func_1<T>*& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_createFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createFunction;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_createFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createFunction;
}
template <typename T> constexpr void ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_set_createFunction(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___createFunction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::Queue_1<T>*& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
template <typename T> constexpr void ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_set_pool(::System::Collections::Generic::Queue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_resetFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetFunction;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_resetFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetFunction;
}
template <typename T> constexpr void ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_set_resetFunction(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resetFunction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::ExitGames::Client::Photon::Pool_1<T>* ExitGames::Client::Photon::Pool_1<T>::New_ctor(::System::Func_1<T>* createFunction, ::System::Action_1<T>* resetFunction, int32_t poolCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::Pool_1<T>*>(createFunction, resetFunction, poolCapacity));
}
template <typename T> inline void ExitGames::Client::Photon::Pool_1<T>::_ctor(::System::Func_1<T>* createFunction, ::System::Action_1<T>* resetFunction, int32_t poolCapacity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Pool_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createFunction, resetFunction, poolCapacity);
}
template <typename T> inline ::ExitGames::Client::Photon::Pool_1<T>* ExitGames::Client::Photon::Pool_1<T>::New_ctor(::System::Func_1<T>* createFunction, int32_t poolCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::Pool_1<T>*>(createFunction, poolCapacity));
}
template <typename T> inline void ExitGames::Client::Photon::Pool_1<T>::_ctor(::System::Func_1<T>* createFunction, int32_t poolCapacity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Pool_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createFunction, poolCapacity);
}
template <typename T> inline int32_t ExitGames::Client::Photon::Pool_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Pool_1<T>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void ExitGames::Client::Photon::Pool_1<T>::CreatePoolItems(int32_t numItems) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Pool_1<T>*>::get(), "CreatePoolItems",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numItems);
}
template <typename T> inline void ExitGames::Client::Photon::Pool_1<T>::Push(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Pool_1<T>*>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void ExitGames::Client::Photon::Pool_1<T>::Release(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Pool_1<T>*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline T ExitGames::Client::Photon::Pool_1<T>::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Pool_1<T>*>::get(), "Pop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T ExitGames::Client::Photon::Pool_1<T>::Acquire() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Pool_1<T>*>::get(), "Acquire",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::ExitGames::Client::Photon::Pool_1<T>::Pool_1() {}
