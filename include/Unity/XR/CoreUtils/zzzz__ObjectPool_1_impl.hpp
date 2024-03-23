#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::Queue_1<T>*& Unity::XR::CoreUtils::ObjectPool_1<T>::__cordl_internal_get_PooledQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PooledQueue;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& Unity::XR::CoreUtils::ObjectPool_1<T>::__cordl_internal_get_PooledQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PooledQueue;
}
template <typename T> constexpr void Unity::XR::CoreUtils::ObjectPool_1<T>::__cordl_internal_set_PooledQueue(::System::Collections::Generic::Queue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PooledQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T Unity::XR::CoreUtils::ObjectPool_1<T>::Get() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ObjectPool_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Unity::XR::CoreUtils::ObjectPool_1<T>::Recycle(T instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ObjectPool_1<T>*>::get(), "Recycle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
template <typename T> inline void Unity::XR::CoreUtils::ObjectPool_1<T>::ClearInstance(T instance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ObjectPool_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
template <typename T> inline ::Unity::XR::CoreUtils::ObjectPool_1<T>* Unity::XR::CoreUtils::ObjectPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::ObjectPool_1<T>*>());
}
template <typename T> inline void Unity::XR::CoreUtils::ObjectPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ObjectPool_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::XR::CoreUtils::ObjectPool_1<T>::ObjectPool_1() {}
