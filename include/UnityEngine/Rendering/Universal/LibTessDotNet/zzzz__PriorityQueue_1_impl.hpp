#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PriorityQueue_1_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PQHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PriorityHeap_1_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PriorityQueue_1_def.hpp"
template <typename TValue> constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
template <typename TValue> constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::__cordl_internal_set_p(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
template <typename TValue> constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::__cordl_internal_set_r(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
template <typename TValue>
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>* UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>*>());
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>::__PriorityQueue_1__StackItem() {}
template <typename TValue>
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*&
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__leq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leq;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__leq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leq;
}
template <typename TValue>
constexpr void
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_set__leq(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__heap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heap;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__heap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heap;
}
template <typename TValue>
constexpr void
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_set__heap(::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____heap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr ::ArrayW<TValue, ::Array<TValue>*>& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TValue> constexpr ::ArrayW<TValue, ::Array<TValue>*> const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_set__keys(::ArrayW<TValue, ::Array<TValue>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order;
}
template <typename TValue> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_set__order(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____order)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename TValue> constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
template <typename TValue> constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_set__max(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____max = value;
}
template <typename TValue> constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
template <typename TValue> constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
template <typename TValue> inline bool UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::get_Empty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>::get(), "get_Empty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue>
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::New_ctor(int32_t initialSize,
                                                                                    ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* leq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>(initialSize, leq));
}
template <typename TValue>
inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::_ctor(int32_t initialSize,
                                                                                             ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* leq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialSize, leq);
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::Swap(ByRef<int32_t> a, ByRef<int32_t> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>::get(), "Swap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, a, b);
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::Init() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::Insert(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>::get(), "Insert",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle, false>(this, ___internal_method, value);
}
template <typename TValue> inline TValue UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::ExtractMin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>::get(),
                                               "ExtractMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::Minimum() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>::get(), "Minimum",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::Remove(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>::PriorityQueue_1() {}
