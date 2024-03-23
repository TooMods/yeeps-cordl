#pragma once
#include "System/Collections/ObjectModel/zzzz__Collection_1_impl.hpp"
#include "System/ComponentModel/zzzz__BindingList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__AddingNewEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__AddingNewEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__IBindingList_def.hpp"
#include "System/ComponentModel/zzzz__ICancelAddNew_def.hpp"
#include "System/ComponentModel/zzzz__IRaiseItemChangedEvents_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/ComponentModel/zzzz__ListSortDirection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::ComponentModel::IBindingList"
template <typename T> constexpr System::ComponentModel::BindingList_1<T>::operator ::System::ComponentModel::IBindingList*() noexcept {
  return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IBindingList"
template <typename T> constexpr ::System::ComponentModel::IBindingList* System::ComponentModel::BindingList_1<T>::i___System__ComponentModel__IBindingList() noexcept {
  return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
template <typename T> constexpr System::ComponentModel::BindingList_1<T>::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
template <typename T> constexpr ::System::Collections::IList* System::ComponentModel::BindingList_1<T>::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::ComponentModel::BindingList_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename T> constexpr ::System::Collections::ICollection* System::ComponentModel::BindingList_1<T>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::ComponentModel::BindingList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::ComponentModel::BindingList_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::ICancelAddNew"
template <typename T> constexpr System::ComponentModel::BindingList_1<T>::operator ::System::ComponentModel::ICancelAddNew*() noexcept {
  return static_cast<::System::ComponentModel::ICancelAddNew*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICancelAddNew"
template <typename T> constexpr ::System::ComponentModel::ICancelAddNew* System::ComponentModel::BindingList_1<T>::i___System__ComponentModel__ICancelAddNew() noexcept {
  return static_cast<::System::ComponentModel::ICancelAddNew*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::IRaiseItemChangedEvents"
template <typename T> constexpr System::ComponentModel::BindingList_1<T>::operator ::System::ComponentModel::IRaiseItemChangedEvents*() noexcept {
  return static_cast<::System::ComponentModel::IRaiseItemChangedEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IRaiseItemChangedEvents"
template <typename T> constexpr ::System::ComponentModel::IRaiseItemChangedEvents* System::ComponentModel::BindingList_1<T>::i___System__ComponentModel__IRaiseItemChangedEvents() noexcept {
  return static_cast<::System::ComponentModel::IRaiseItemChangedEvents*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_addNewPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addNewPos;
}
template <typename T> constexpr int32_t const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_addNewPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addNewPos;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set_addNewPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addNewPos = value;
}
template <typename T> constexpr bool& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_raiseListChangedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raiseListChangedEvents;
}
template <typename T> constexpr bool const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_raiseListChangedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raiseListChangedEvents;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set_raiseListChangedEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raiseListChangedEvents = value;
}
template <typename T> constexpr bool& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_raiseItemChangedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raiseItemChangedEvents;
}
template <typename T> constexpr bool const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_raiseItemChangedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raiseItemChangedEvents;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set_raiseItemChangedEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raiseItemChangedEvents = value;
}
template <typename T> constexpr ::System::ComponentModel::PropertyDescriptorCollection*& System::ComponentModel::BindingList_1<T>::__cordl_internal_get__itemTypeProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemTypeProperties;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptorCollection*> const&
System::ComponentModel::BindingList_1<T>::__cordl_internal_get__itemTypeProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemTypeProperties;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set__itemTypeProperties(::System::ComponentModel::PropertyDescriptorCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____itemTypeProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::ComponentModel::PropertyChangedEventHandler*& System::ComponentModel::BindingList_1<T>::__cordl_internal_get__propertyChangedEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyChangedEventHandler;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const&
System::ComponentModel::BindingList_1<T>::__cordl_internal_get__propertyChangedEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyChangedEventHandler;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set__propertyChangedEventHandler(::System::ComponentModel::PropertyChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyChangedEventHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::ComponentModel::AddingNewEventHandler*& System::ComponentModel::BindingList_1<T>::__cordl_internal_get__onAddingNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAddingNew;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::AddingNewEventHandler*> const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get__onAddingNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAddingNew;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set__onAddingNew(::System::ComponentModel::AddingNewEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAddingNew)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::ComponentModel::ListChangedEventHandler*& System::ComponentModel::BindingList_1<T>::__cordl_internal_get__onListChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onListChanged;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ListChangedEventHandler*> const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get__onListChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onListChanged;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set__onListChanged(::System::ComponentModel::ListChangedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onListChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& System::ComponentModel::BindingList_1<T>::__cordl_internal_get__lastChangeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastChangeIndex;
}
template <typename T> constexpr int32_t const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get__lastChangeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastChangeIndex;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set__lastChangeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastChangeIndex = value;
}
template <typename T> constexpr bool& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_allowNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowNew;
}
template <typename T> constexpr bool const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_allowNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowNew;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set_allowNew(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowNew = value;
}
template <typename T> constexpr bool& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_allowEdit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowEdit;
}
template <typename T> constexpr bool const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_allowEdit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowEdit;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set_allowEdit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowEdit = value;
}
template <typename T> constexpr bool& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_allowRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowRemove;
}
template <typename T> constexpr bool const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_allowRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowRemove;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set_allowRemove(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowRemove = value;
}
template <typename T> constexpr bool& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_userSetAllowNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userSetAllowNew;
}
template <typename T> constexpr bool const& System::ComponentModel::BindingList_1<T>::__cordl_internal_get_userSetAllowNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userSetAllowNew;
}
template <typename T> constexpr void System::ComponentModel::BindingList_1<T>::__cordl_internal_set_userSetAllowNew(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userSetAllowNew = value;
}
template <typename T> inline ::System::ComponentModel::BindingList_1<T>* System::ComponentModel::BindingList_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::BindingList_1<T>*>());
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::ComponentModel::BindingList_1<T>* System::ComponentModel::BindingList_1<T>::New_ctor(::System::Collections::Generic::IList_1<T>* list) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::BindingList_1<T>*>(list));
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::_ctor(::System::Collections::Generic::IList_1<T>* list) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_ItemTypeHasDefaultConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "get_ItemTypeHasDefaultConstructor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::add_AddingNew(::System::ComponentModel::AddingNewEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "add_AddingNew", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AddingNewEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::remove_AddingNew(::System::ComponentModel::AddingNewEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "remove_AddingNew", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AddingNewEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::OnAddingNew(::System::ComponentModel::AddingNewEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename T> inline ::System::Object* System::ComponentModel::BindingList_1<T>::FireAddingNew() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                                                             "FireAddingNew", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::add_ListChanged(::System::ComponentModel::ListChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "add_ListChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "remove_ListChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::OnListChanged(::System::ComponentModel::ListChangedEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_RaiseListChangedEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                                                             "get_RaiseListChangedEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::set_RaiseListChangedEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "set_RaiseListChangedEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::ResetBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                                                             "ResetBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::ResetItem(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "ResetItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::FireListChanged(::System::ComponentModel::ListChangedType type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "FireListChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, index);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::ClearItems() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::InsertItem(int32_t index, T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::RemoveItem(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::SetItem(int32_t index, T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::CancelNew(int32_t itemIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemIndex);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::EndNew(int32_t itemIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemIndex);
}
template <typename T> inline T System::ComponentModel::BindingList_1<T>::AddNew() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "AddNew",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_AddNew() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "System.ComponentModel.IBindingList.AddNew",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_AddingNewHandled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                                                             "get_AddingNewHandled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::ComponentModel::BindingList_1<T>::AddNewCore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_AllowNew() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "get_AllowNew",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::set_AllowNew(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "set_AllowNew",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_AllowNew() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.get_AllowNew", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_AllowEdit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                                                             "get_AllowEdit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::set_AllowEdit(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "set_AllowEdit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_AllowEdit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.get_AllowEdit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_AllowRemove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                                                             "get_AllowRemove", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::set_AllowRemove(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "set_AllowRemove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_AllowRemove() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.get_AllowRemove", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_SupportsChangeNotification() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                  "System.ComponentModel.IBindingList.get_SupportsChangeNotification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_SupportsChangeNotificationCore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_SupportsSearching() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.get_SupportsSearching", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_SupportsSearchingCore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_SupportsSorting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.get_SupportsSorting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_SupportsSortingCore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_IsSorted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.get_IsSorted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::get_IsSortedCore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_SortProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.get_SortProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
template <typename T> inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::BindingList_1<T>::get_SortPropertyCore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
template <typename T> inline ::System::ComponentModel::ListSortDirection System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_get_SortDirection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.get_SortDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDirection, false>(this, ___internal_method);
}
template <typename T> inline ::System::ComponentModel::ListSortDirection System::ComponentModel::BindingList_1<T>::get_SortDirectionCore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDirection, false>(this, ___internal_method);
}
template <typename T>
inline void System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor* prop,
                                                                                                   ::System::ComponentModel::ListSortDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.ApplySort", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListSortDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prop, direction);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::ApplySortCore(::System::ComponentModel::PropertyDescriptor* prop, ::System::ComponentModel::ListSortDirection direction) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 70)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prop, direction);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_RemoveSort() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                               "System.ComponentModel.IBindingList.RemoveSort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::RemoveSortCore() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor* prop, ::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "System.ComponentModel.IBindingList.Find", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, prop, key);
}
template <typename T> inline int32_t System::ComponentModel::BindingList_1<T>::FindCore(::System::ComponentModel::PropertyDescriptor* prop, ::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, prop, key);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor* prop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "System.ComponentModel.IBindingList.AddIndex",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prop);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor* prop) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "System.ComponentModel.IBindingList.RemoveIndex",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prop);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::HookPropertyChanged(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "HookPropertyChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::UnhookPropertyChanged(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "UnhookPropertyChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void System::ComponentModel::BindingList_1<T>::Child_PropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(), "Child_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
template <typename T> inline bool System::ComponentModel::BindingList_1<T>::System_ComponentModel_IRaiseItemChangedEvents_get_RaisesItemChangedEvents() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BindingList_1<T>*>::get(),
                                  "System.ComponentModel.IRaiseItemChangedEvents.get_RaisesItemChangedEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::ComponentModel::BindingList_1<T>::BindingList_1() {}
