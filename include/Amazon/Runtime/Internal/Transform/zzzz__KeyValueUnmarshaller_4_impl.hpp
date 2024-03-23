#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__KeyValueUnmarshaller_4_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K,V>,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K,V>,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__KeyValuePair_2_K_V____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K,V>,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K,V>,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__KeyValuePair_2_K_V____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr KUnmarshaller& Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::__cordl_internal_get_keyUnmarshaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyUnmarshaller;
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr KUnmarshaller const& Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::__cordl_internal_get_keyUnmarshaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyUnmarshaller;
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr void Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::__cordl_internal_set_keyUnmarshaller(KUnmarshaller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyUnmarshaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr VUnmarshaller& Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::__cordl_internal_get_valueUnmarshaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueUnmarshaller;
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr VUnmarshaller const& Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::__cordl_internal_get_valueUnmarshaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueUnmarshaller;
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr void Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::__cordl_internal_set_valueUnmarshaller(VUnmarshaller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueUnmarshaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
inline ::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>*
Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::New_ctor(KUnmarshaller keyUnmarshaller, VUnmarshaller valueUnmarshaller) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>*>(keyUnmarshaller, valueUnmarshaller));
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
inline void Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::_ctor(KUnmarshaller keyUnmarshaller, VUnmarshaller valueUnmarshaller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<KUnmarshaller>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<VUnmarshaller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyUnmarshaller, valueUnmarshaller);
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
inline ::System::Collections::Generic::KeyValuePair_2<K, V>
Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::Unmarshall(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>*>::get(),
                                 "Unmarshall", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<K, V>, false>(this, ___internal_method, context);
}
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
inline ::System::Collections::Generic::KeyValuePair_2<K, V>
Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::Unmarshall(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>*>::get(), "Unmarshall",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<K, V>, false>(this, ___internal_method, context);
}
// Ctor Parameters []
template <typename K, typename V, typename KUnmarshaller, typename VUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<K, V, KUnmarshaller, VUnmarshaller>::KeyValueUnmarshaller_4() {}
