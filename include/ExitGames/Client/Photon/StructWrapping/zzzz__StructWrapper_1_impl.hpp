#pragma once
#include "ExitGames/Client/Photon/StructWrapping/zzzz__Pooling_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_1_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__Pooling_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_1_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get__ReturnPool_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnPool_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*> const&
ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get__ReturnPool_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnPool_k__BackingField;
}
template <typename T>
constexpr void
ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_set__ReturnPool_k__BackingField(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ReturnPool_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get_pooling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pooling;
}
template <typename T> constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling const& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get_pooling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pooling;
}
template <typename T> constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_set_pooling(::ExitGames::Client::Photon::StructWrapping::Pooling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pooling = value;
}
template <typename T> constexpr T& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr T const& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_set_value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::setStaticF_staticPool(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*, "staticPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get>(
      std::forward<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(value));
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::getStaticF_staticPool() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*, "staticPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get>();
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::get_ReturnPool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), "get_ReturnPool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::set_ReturnPool(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), "set_ReturnPool", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*
ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::New_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling releasing) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(releasing));
}
template <typename T> inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling releasing) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StructWrapping::Pooling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, releasing);
}
template <typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*
ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::New_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling releasing, ::System::Type* tType,
                                                                        ::ExitGames::Client::Photon::StructWrapping::WrappedType wType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(releasing, tType, wType));
}
template <typename T>
inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling releasing, ::System::Type* tType,
                                                                                 ::ExitGames::Client::Photon::StructWrapping::WrappedType wType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StructWrapping::Pooling>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StructWrapping::WrappedType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, releasing, tType, wType);
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Poke(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), "Poke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___internal_method, value);
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Poke(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), "Poke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___internal_method, value);
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Poke(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), "Poke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___internal_method, value);
}
template <typename T> inline T ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Unwrap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), "Unwrap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Peek() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), "Peek",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Box() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::DisconnectFromPool() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::StringW ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::ToString(bool writeTypeInfo) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, writeTypeInfo);
}
template <typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*
ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::op_Implicit___ExitGames__Client__Photon__StructWrapping__StructWrapper_1_T__(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
template <typename T> constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::StructWrapper_1() {}
