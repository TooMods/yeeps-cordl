#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__ListUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
template <typename I, typename IUnmarshaller>
constexpr Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
template <typename I, typename IUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__List_1_I_____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
template <typename I, typename IUnmarshaller>
constexpr Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
template <typename I, typename IUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__List_1_I_____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::List_1<I>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
template <typename I, typename IUnmarshaller> constexpr IUnmarshaller& Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::__cordl_internal_get_iUnmarshaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iUnmarshaller;
}
template <typename I, typename IUnmarshaller> constexpr IUnmarshaller const& Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::__cordl_internal_get_iUnmarshaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iUnmarshaller;
}
template <typename I, typename IUnmarshaller> constexpr void Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::__cordl_internal_set_iUnmarshaller(IUnmarshaller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___iUnmarshaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename I, typename IUnmarshaller>
inline ::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>* Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::New_ctor(IUnmarshaller iUnmarshaller) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>*>(iUnmarshaller));
}
template <typename I, typename IUnmarshaller> inline void Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::_ctor(IUnmarshaller iUnmarshaller) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IUnmarshaller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iUnmarshaller);
}
template <typename I, typename IUnmarshaller>
inline ::System::Collections::Generic::List_1<I>*
Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>*>::get(), "Unmarshall",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<I>*, false>(this, ___internal_method, context);
}
template <typename I, typename IUnmarshaller>
inline ::System::Collections::Generic::List_1<I>*
Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<I>*, false>(this, ___internal_method, context);
}
// Ctor Parameters []
template <typename I, typename IUnmarshaller> constexpr ::Amazon::Runtime::Internal::Transform::ListUnmarshaller_2<I, IUnmarshaller>::ListUnmarshaller_2() {}
