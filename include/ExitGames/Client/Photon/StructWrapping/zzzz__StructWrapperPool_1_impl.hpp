#pragma once
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_1_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> constexpr ::System::Type*& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_tType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tType;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_tType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tType;
}
template <typename T> constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_set_tType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_wType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wType;
}
template <typename T> constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType const& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_wType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wType;
}
template <typename T> constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_set_wType(::ExitGames::Client::Photon::StructWrapping::WrappedType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wType = value;
}
template <typename T>
constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*&
ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*> const&
ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
template <typename T>
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_set_pool(
    ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_isStaticPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isStaticPool;
}
template <typename T> constexpr bool const& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_isStaticPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isStaticPool;
}
template <typename T> constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_set_isStaticPool(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isStaticPool = value;
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::New_ctor(bool isStaticPool) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(isStaticPool));
}
template <typename T> inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::_ctor(bool isStaticPool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isStaticPool);
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::Acquire() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>::get(), "Acquire",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::Acquire(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>::get(), "Acquire",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::Release(::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
template <typename T> constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::StructWrapperPool_1() {}
