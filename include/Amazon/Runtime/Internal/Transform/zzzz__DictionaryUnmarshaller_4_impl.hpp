#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__DictionaryUnmarshaller_4_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IUnmarshaller_2_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__KeyValueUnmarshaller_4_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey,TValue>*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
constexpr Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey,TValue>*,::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>"
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__Dictionary_2_TKey_TValue_____Amazon__Runtime__Internal__Transform__XmlUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert operator to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey,TValue>*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
constexpr Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::operator ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey,TValue>*,::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>"
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*
Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::
    i___Amazon__Runtime__Internal__Transform__IUnmarshaller_2___System__Collections__Generic__Dictionary_2_TKey_TValue_____Amazon__Runtime__Internal__Transform__JsonUnmarshallerContext__() noexcept {
  return static_cast<
      ::Amazon::Runtime::Internal::Transform::IUnmarshaller_2<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>*>(
      static_cast<void*>(this));
}
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*&
Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::__cordl_internal_get_KVUnmarshaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KVUnmarshaller;
}
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*> const&
Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::__cordl_internal_get_KVUnmarshaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KVUnmarshaller;
}
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
constexpr void Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::__cordl_internal_set_KVUnmarshaller(
    ::Amazon::Runtime::Internal::Transform::KeyValueUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KVUnmarshaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
inline ::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*
Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::New_ctor(TKeyUnmarshaller kUnmarshaller, TValueUnmarshaller vUnmarshaller) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*>(kUnmarshaller, vUnmarshaller));
}
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
inline void Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::_ctor(TKeyUnmarshaller kUnmarshaller,
                                                                                                                                      TValueUnmarshaller vUnmarshaller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKeyUnmarshaller>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueUnmarshaller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, kUnmarshaller, vUnmarshaller);
}
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::Unmarshall(
    ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*>::get(),
      "Unmarshall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(this, ___internal_method, context);
}
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::Unmarshall(
    ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>*>::get(),
      "Unmarshall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(this, ___internal_method, context);
}
// Ctor Parameters []
template <typename TKey, typename TValue, typename TKeyUnmarshaller, typename TValueUnmarshaller>
constexpr ::Amazon::Runtime::Internal::Transform::DictionaryUnmarshaller_4<TKey, TValue, TKeyUnmarshaller, TValueUnmarshaller>::DictionaryUnmarshaller_4() {}
