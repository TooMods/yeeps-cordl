#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__PaginatedResource_1_def.hpp"
#include "Amazon/Util/zzzz__Marker_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<U>"
template <typename U> constexpr Amazon::Util::PaginatedResource_1<U>::operator ::System::Collections::Generic::IEnumerable_1<U>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<U>"
template <typename U> constexpr ::System::Collections::Generic::IEnumerable_1<U>* Amazon::Util::PaginatedResource_1<U>::i___System__Collections__Generic__IEnumerable_1_U_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<U>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename U> constexpr Amazon::Util::PaginatedResource_1<U>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename U> constexpr ::System::Collections::IEnumerable* Amazon::Util::PaginatedResource_1<U>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename U> constexpr ::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>*& Amazon::Util::PaginatedResource_1<U>::__cordl_internal_get_fetcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetcher;
}
template <typename U>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>*> const& Amazon::Util::PaginatedResource_1<U>::__cordl_internal_get_fetcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetcher;
}
template <typename U> constexpr void Amazon::Util::PaginatedResource_1<U>::__cordl_internal_set_fetcher(::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fetcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename U> inline ::Amazon::Util::PaginatedResource_1<U>* Amazon::Util::PaginatedResource_1<U>::New_ctor(::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>* fetcher) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::PaginatedResource_1<U>*>(fetcher));
}
template <typename U> inline void Amazon::Util::PaginatedResource_1<U>::_ctor(::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>* fetcher) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResource_1<U>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fetcher);
}
template <typename U> inline ::System::Collections::IEnumerator* Amazon::Util::PaginatedResource_1<U>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResource_1<U>*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename U> inline ::System::Collections::Generic::IEnumerator_1<U>* Amazon::Util::PaginatedResource_1<U>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::PaginatedResource_1<U>*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<U>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename U> constexpr ::Amazon::Util::PaginatedResource_1<U>::PaginatedResource_1() {}
