#pragma once
#include "System/Collections/Generic/zzzz__NodeColor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/Generic/zzzz__NodeColor_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/Generic/zzzz__TreeRotation_def.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr T& System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_get__Item_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Item_k__BackingField;
}
template <typename T> constexpr T const& System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_get__Item_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Item_k__BackingField;
}
template <typename T> constexpr void System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_set__Item_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Item_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>*& System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_get__Left_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Left_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> const&
System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_get__Left_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Left_k__BackingField;
}
template <typename T> constexpr void System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_set__Left_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Left_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>*& System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_get__Right_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Right_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> const&
System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_get__Right_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Right_k__BackingField;
}
template <typename T> constexpr void System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_set__Right_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Right_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::NodeColor& System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_get__Color_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Color_k__BackingField;
}
template <typename T> constexpr ::System::Collections::Generic::NodeColor const& System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_get__Color_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Color_k__BackingField;
}
template <typename T> constexpr void System::Collections::Generic::__SortedSet_1__Node<T>::__cordl_internal_set__Color_k__BackingField(::System::Collections::Generic::NodeColor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Color_k__BackingField = value;
}
template <typename T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::New_ctor(T item, ::System::Collections::Generic::NodeColor color) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::__SortedSet_1__Node<T>*>(item, color));
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::_ctor(T item, ::System::Collections::Generic::NodeColor color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, color);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1__Node<T>::IsNonNullRed(::System::Collections::Generic::__SortedSet_1__Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "IsNonNullRed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1__Node<T>::IsNullOrBlack(::System::Collections::Generic::__SortedSet_1__Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "IsNullOrBlack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
template <typename T> inline T System::Collections::Generic::__SortedSet_1__Node<T>::get_Item() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "get_Item", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::set_Item(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "set_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::get_Left() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "get_Left", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::set_Left(::System::Collections::Generic::__SortedSet_1__Node<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "set_Left", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::get_Right() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "get_Right", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::set_Right(::System::Collections::Generic::__SortedSet_1__Node<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "set_Right", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::NodeColor System::Collections::Generic::__SortedSet_1__Node<T>::get_Color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "get_Color", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::NodeColor, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::set_Color(::System::Collections::Generic::NodeColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "set_Color", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1__Node<T>::get_IsBlack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "get_IsBlack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1__Node<T>::get_IsRed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "get_IsRed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1__Node<T>::get_Is2Node() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "get_Is2Node", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1__Node<T>::get_Is4Node() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "get_Is4Node", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::ColorBlack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "ColorBlack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::ColorRed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "ColorRed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::TreeRotation System::Collections::Generic::__SortedSet_1__Node<T>::GetRotation(::System::Collections::Generic::__SortedSet_1__Node<T>* current,
                                                                                                                      ::System::Collections::Generic::__SortedSet_1__Node<T>* sibling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "GetRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::TreeRotation, false>(this, ___internal_method, current, sibling);
}
template <typename T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::GetSibling(::System::Collections::Generic::__SortedSet_1__Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "GetSibling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method, node);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::Split4Node() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "Split4Node", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::Rotate(::System::Collections::Generic::TreeRotation rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "Rotate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeRotation>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method, rotation);
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::RotateLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "RotateLeft", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::RotateLeftRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "RotateLeftRight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::RotateRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "RotateRight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::RotateRightLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "RotateRightLeft", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Node<T>::Merge2Nodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                                                             "Merge2Nodes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::ReplaceChild(::System::Collections::Generic::__SortedSet_1__Node<T>* child,
                                                                               ::System::Collections::Generic::__SortedSet_1__Node<T>* newChild) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), "ReplaceChild", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, child, newChild);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>::__SortedSet_1__Node() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::__SortedSet_1__Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Collections::Generic::__SortedSet_1__Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Collections::Generic::__SortedSet_1__Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Generic::__SortedSet_1__Enumerator<T>::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T> constexpr System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Collections::Generic::__SortedSet_1__Enumerator<T>::i___System__Runtime__Serialization__IDeserializationCallback() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::setStaticF_s_dummyNode(::System::Collections::Generic::__SortedSet_1__Node<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::__SortedSet_1__Node<T>*, "s_dummyNode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get>(
      std::forward<::System::Collections::Generic::__SortedSet_1__Node<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Enumerator<T>::getStaticF_s_dummyNode() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::__SortedSet_1__Node<T>*, "s_dummyNode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get>();
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::_ctor(::System::Collections::Generic::SortedSet_1<T>* set) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, set);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::_ctor(::System::Collections::Generic::SortedSet_1<T>* set, bool reverse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, set, reverse);
}
template <typename T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                 ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                                  "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                                               "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(), "Initialize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1__Enumerator<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::__SortedSet_1__Enumerator<T>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Generic::__SortedSet_1__Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1__Enumerator<T>::get_NotStartedOrEnded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(), "get_NotStartedOrEnded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_version", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_current", ty: "::System::Collections::Generic::__SortedSet_1__Node<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_reverse", ty: "bool",
// modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Collections::Generic::__SortedSet_1__Enumerator<T>::__SortedSet_1__Enumerator(
    ::System::Collections::Generic::SortedSet_1<T>* _tree, int32_t _version, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>* _stack,
    ::System::Collections::Generic::__SortedSet_1__Node<T>* _current, bool _reverse) noexcept {
  this->_tree = _tree;
  this->_version = _version;
  this->_stack = _stack;
  this->_current = _current;
  this->_reverse = _reverse;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::__SortedSet_1__Enumerator<T>::__SortedSet_1__Enumerator() {}
template <typename T> constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename T> constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_get_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_get_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
template <typename T> constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__cordl_internal_set_array(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___array)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>* System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>*>());
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::_CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>*>::get(), "<CopyTo>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__SortedSet_1____c__DisplayClass52_0() {}
template <typename T> constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename T> constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__cordl_internal_get_objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
template <typename T>
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__cordl_internal_get_objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
template <typename T>
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__cordl_internal_set_objects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>* System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>*>());
}
template <typename T> inline void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline bool System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::_System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>*>::get(),
                                  "<System.Collections.ICollection.CopyTo>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__SortedSet_1____c__DisplayClass53_0() {}
/// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::ISet_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ISet_1<T>* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__Generic__ISet_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename T> constexpr ::System::Collections::ICollection* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* System::Collections::Generic::SortedSet_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Generic::SortedSet_1<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T> constexpr System::Collections::Generic::SortedSet_1<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Collections::Generic::SortedSet_1<T>::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>*& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_root(::System::Collections::Generic::__SortedSet_1__Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::IComparer_1<T>*& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<T>*> const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename T> constexpr int32_t& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
template <typename T> constexpr int32_t const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
template <typename T> constexpr ::System::Object*& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_siInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___siInfo;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& System::Collections::Generic::SortedSet_1<T>::__cordl_internal_get_siInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___siInfo;
}
template <typename T> constexpr void System::Collections::Generic::SortedSet_1<T>::__cordl_internal_set_siInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___siInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::SortedSet_1<T>*>());
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::SortedSet_1<T>*>(comparer));
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::_ctor(::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename T>
inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::SortedSet_1<T>*>(info, context));
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, action);
}
template <typename T> inline int32_t System::Collections::Generic::SortedSet_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                               "System.Collections.Generic.ICollection<T>.get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                               "System.Collections.ICollection.get_IsSynchronized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                               "System.Collections.ICollection.get_SyncRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::VersionCheck() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::IsWithinRange(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "System.Collections.Generic.ICollection<T>.Add",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::AddIfNotPresent(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::DoRemove(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::SortedSet_1<T>::Contains(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index, count);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "System.Collections.ICollection.CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Enumerator<T> System::Collections::Generic::SortedSet_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Enumerator<T>, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedSet_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::InsertionBalance(::System::Collections::Generic::__SortedSet_1__Node<T>* current,
                                                                           ByRef<::System::Collections::Generic::__SortedSet_1__Node<T>*> parent,
                                                                           ::System::Collections::Generic::__SortedSet_1__Node<T>* grandParent,
                                                                           ::System::Collections::Generic::__SortedSet_1__Node<T>* greatGrandParent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "InsertionBalance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::__SortedSet_1__Node<T>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, current, parent, grandParent, greatGrandParent);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::ReplaceChildOrRoot(::System::Collections::Generic::__SortedSet_1__Node<T>* parent,
                                                                             ::System::Collections::Generic::__SortedSet_1__Node<T>* child,
                                                                             ::System::Collections::Generic::__SortedSet_1__Node<T>* newChild) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "ReplaceChildOrRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, child, newChild);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::ReplaceNode(::System::Collections::Generic::__SortedSet_1__Node<T>* match,
                                                                      ::System::Collections::Generic::__SortedSet_1__Node<T>* parentOfMatch,
                                                                      ::System::Collections::Generic::__SortedSet_1__Node<T>* successor,
                                                                      ::System::Collections::Generic::__SortedSet_1__Node<T>* parentOfSuccessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "ReplaceNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, match, parentOfMatch, successor, parentOfSuccessor);
}
template <typename T> inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::SortedSet_1<T>::FindNode(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::UpdateVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                                                             "UpdateVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                   ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                  "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T>
inline void System::Collections::Generic::SortedSet_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                                                             "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
template <typename T> inline void System::Collections::Generic::SortedSet_1<T>::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
template <typename T> inline int32_t System::Collections::Generic::SortedSet_1<T>::Log2(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(), "Log2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1<T>::SortedSet_1() {}
