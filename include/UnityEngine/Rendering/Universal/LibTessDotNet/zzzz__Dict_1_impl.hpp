#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Dict_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Dict_1_def.hpp"
template <typename TValue> constexpr TValue& UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TValue> constexpr TValue const& UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TValue> constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_set__key(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*& UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_get__prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prev;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_get__prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prev;
}
template <typename TValue>
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_set__prev(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*& UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
template <typename TValue>
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__cordl_internal_set__next(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> inline TValue UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*>::get(), "get_Key",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::get_Prev() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*>::get(), "get_Prev",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::get_Next() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*>::get(), "get_Next",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*>());
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>::__Dict_1__Node() {}
template <typename TValue>
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*
UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*>(object, method));
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TValue> inline bool UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>::Invoke(TValue lhs, TValue rhs) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lhs, rhs);
}
template <typename TValue>
inline ::System::IAsyncResult* UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>::BeginInvoke(TValue lhs, TValue rhs, ::System::AsyncCallback* callback,
                                                                                                                            ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, lhs, rhs, callback, object);
}
template <typename TValue> inline bool UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>::__Dict_1__LessOrEqual() {}
template <typename TValue>
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*& UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::__cordl_internal_get__leq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leq;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::__cordl_internal_get__leq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leq;
}
template <typename TValue>
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::__cordl_internal_set__leq(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*& UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::__cordl_internal_get__head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::__cordl_internal_get__head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename TValue>
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::__cordl_internal_set__head(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>*
UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::New_ctor(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* leq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>*>(leq));
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::_ctor(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* leq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leq);
}
template <typename TValue> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::Insert(TValue key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>*>::get(), "Insert",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*, false>(this, ___internal_method, key);
}
template <typename TValue>
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*
UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::InsertBefore(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* node, TValue key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>*>::get(), "InsertBefore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*, false>(this, ___internal_method, node, key);
}
template <typename TValue> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::Find(TValue key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>*>::get(), "Find",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*, false>(this, ___internal_method, key);
}
template <typename TValue> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::Min() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>*>::get(), "Min",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::Remove(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>::Dict_1() {}
