#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__PaginationEnumerator_1_def.hpp"
#include "Amazon/Util/zzzz__Marker_1_def.hpp"
#include "Amazon/Util/zzzz__PaginatedResource_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<U>"
template <typename U> constexpr Amazon::Util::PaginationEnumerator_1<U>::operator ::System::Collections::Generic::IEnumerator_1<U>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<U>"
template <typename U> constexpr ::System::Collections::Generic::IEnumerator_1<U>* Amazon::Util::PaginationEnumerator_1<U>::i___System__Collections__Generic__IEnumerator_1_U_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename U> constexpr Amazon::Util::PaginationEnumerator_1<U>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename U> constexpr ::System::Collections::IEnumerator* Amazon::Util::PaginationEnumerator_1<U>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename U> constexpr Amazon::Util::PaginationEnumerator_1<U>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename U> constexpr ::System::IDisposable* Amazon::Util::PaginationEnumerator_1<U>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename U> constexpr ::Amazon::Util::PaginatedResource_1<U>*& Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_get_paginatedResource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paginatedResource;
}
template <typename U>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::PaginatedResource_1<U>*> const& Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_get_paginatedResource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paginatedResource;
}
template <typename U> constexpr void Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_set_paginatedResource(::Amazon::Util::PaginatedResource_1<U>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___paginatedResource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename U> constexpr int32_t& Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
template <typename U> constexpr int32_t const& Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
template <typename U> constexpr void Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_set_position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
template <typename U> constexpr ::Amazon::Util::Marker_1<U>*& Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_get_currentSpot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSpot;
}
template <typename U> constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Marker_1<U>*> const& Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_get_currentSpot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSpot;
}
template <typename U> constexpr void Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_set_currentSpot(::Amazon::Util::Marker_1<U>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentSpot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename U> constexpr bool& Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_get_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
template <typename U> constexpr bool const& Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_get_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
template <typename U> constexpr void Amazon::Util::PaginationEnumerator_1<U>::__cordl_internal_set_started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___started = value;
}
template <typename U> inline void Amazon::Util::PaginationEnumerator_1<U>::setStaticF_blankSpot(::Amazon::Util::Marker_1<U>* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Marker_1<U>*, "blankSpot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginationEnumerator_1<U>*>::get>(
      std::forward<::Amazon::Util::Marker_1<U>*>(value));
}
template <typename U> inline ::Amazon::Util::Marker_1<U>* Amazon::Util::PaginationEnumerator_1<U>::getStaticF_blankSpot() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Marker_1<U>*, "blankSpot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginationEnumerator_1<U>*>::get>();
}
template <typename U> inline ::Amazon::Util::PaginationEnumerator_1<U>* Amazon::Util::PaginationEnumerator_1<U>::New_ctor(::Amazon::Util::PaginatedResource_1<U>* paginatedResource) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::PaginationEnumerator_1<U>*>(paginatedResource));
}
template <typename U> inline void Amazon::Util::PaginationEnumerator_1<U>::_ctor(::Amazon::Util::PaginatedResource_1<U>* paginatedResource) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginationEnumerator_1<U>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::PaginatedResource_1<U>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paginatedResource);
}
template <typename U> inline bool Amazon::Util::PaginationEnumerator_1<U>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginationEnumerator_1<U>*>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename U> inline void Amazon::Util::PaginationEnumerator_1<U>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginationEnumerator_1<U>*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename U> inline ::System::Object* Amazon::Util::PaginationEnumerator_1<U>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginationEnumerator_1<U>*>::get(), "System.Collections.IEnumerator.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename U> inline U Amazon::Util::PaginationEnumerator_1<U>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginationEnumerator_1<U>*>::get(), "get_Current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<U, false>(this, ___internal_method);
}
template <typename U> inline void Amazon::Util::PaginationEnumerator_1<U>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginationEnumerator_1<U>*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename U> constexpr ::Amazon::Util::PaginationEnumerator_1<U>::PaginationEnumerator_1() {}
