#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__Marker_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename U> constexpr ::System::Collections::Generic::List_1<U>*& Amazon::Util::Marker_1<U>::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename U> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<U>*> const& Amazon::Util::Marker_1<U>::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename U> constexpr void Amazon::Util::Marker_1<U>::__cordl_internal_set_data(::System::Collections::Generic::List_1<U>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename U> constexpr ::StringW& Amazon::Util::Marker_1<U>::__cordl_internal_get_nextToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextToken;
}
template <typename U> constexpr ::StringW const& Amazon::Util::Marker_1<U>::__cordl_internal_get_nextToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextToken;
}
template <typename U> constexpr void Amazon::Util::Marker_1<U>::__cordl_internal_set_nextToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename U> inline ::Amazon::Util::Marker_1<U>* Amazon::Util::Marker_1<U>::New_ctor(::System::Collections::Generic::List_1<U>* data, ::StringW nextToken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Marker_1<U>*>(data, nextToken));
}
template <typename U> inline void Amazon::Util::Marker_1<U>::_ctor(::System::Collections::Generic::List_1<U>* data, ::StringW nextToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Marker_1<U>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<U>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, nextToken);
}
template <typename U> inline ::System::Collections::Generic::List_1<U>* Amazon::Util::Marker_1<U>::get_Data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Marker_1<U>*>::get(), "get_Data",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<U>*, false>(this, ___internal_method);
}
template <typename U> inline ::StringW Amazon::Util::Marker_1<U>::get_NextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Marker_1<U>*>::get(), "get_NextToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename U> constexpr ::Amazon::Util::Marker_1<U>::Marker_1() {}
