#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PriorityHeap_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PQHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PriorityHeap_1_def.hpp"
template <typename TValue>
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*
UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*>(object, method));
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TValue> inline bool UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>::Invoke(TValue lhs, TValue rhs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lhs, rhs);
}
template <typename TValue>
inline ::System::IAsyncResult* UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>::BeginInvoke(TValue lhs, TValue rhs, ::System::AsyncCallback* callback,
                                                                                                                                    ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, lhs, rhs, callback, object);
}
template <typename TValue> inline bool UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>::__PriorityHeap_1__LessOrEqual() {}
template <typename TValue> constexpr TValue& UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TValue> constexpr TValue const& UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::__cordl_internal_set__key(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::__cordl_internal_get__node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
template <typename TValue> constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::__cordl_internal_get__node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::__cordl_internal_set__node(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____node = value;
}
template <typename TValue>
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>* UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>());
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>::__PriorityHeap_1__HandleElem() {}
template <typename TValue>
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*&
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__leq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leq;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__leq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leq;
}
template <typename TValue>
constexpr void
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_set__leq(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename TValue> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_set__nodes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*,
                   ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>*>&
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__handles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handles;
}
template <typename TValue>
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*,
                   ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__handles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handles;
}
template <typename TValue>
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_set__handles(
    ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*,
             ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename TValue> constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
template <typename TValue> constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_set__max(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____max = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__freeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeList;
}
template <typename TValue> constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__freeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeList;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_set__freeList(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeList = value;
}
template <typename TValue> constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
template <typename TValue> constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
template <typename TValue> inline bool UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::get_Empty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), "get_Empty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue>
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*
UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::New_ctor(int32_t initialSize,
                                                                                   ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* leq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>(initialSize, leq));
}
template <typename TValue>
inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::_ctor(int32_t initialSize,
                                                                                            ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* leq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialSize, leq);
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::FloatDown(int32_t curr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), "FloatDown",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curr);
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::FloatUp(int32_t curr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), "FloatUp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curr);
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::Init() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::Insert(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), "Insert",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle, false>(this, ___internal_method, value);
}
template <typename TValue> inline TValue UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::ExtractMin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), "ExtractMin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::Minimum() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), "Minimum",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::Remove(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>::PriorityHeap_1() {}
