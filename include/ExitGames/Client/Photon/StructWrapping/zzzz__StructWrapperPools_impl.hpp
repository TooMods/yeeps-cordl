#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPools_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_1_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools.Acquire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>* (
    ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)(uint8_t)>(&::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ac4504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), "Acquire",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools.Acquire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>* (
    ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)(bool)>(&::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ac4580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), "Acquire",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)()>(
    &::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Clear)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2ac4604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)()>(
    &::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2ac47fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>*&
ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_get_pools() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pools;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>*> const&
ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_get_pools() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pools;
}
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_set_pools(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pools)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_get_used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___used;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::IDisposable*>*> const&
ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_get_used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___used;
}
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_set_used(::System::Collections::Generic::List_1<::System::IDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___used)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::setStaticF_mappedByteWrappers(
    ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>*>,
                                    "mappedByteWrappers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get>(
      std::forward<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>*>>(value));
}
inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>*>
ExitGames::Client::Photon::StructWrapping::StructWrapperPools::getStaticF_mappedByteWrappers() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>*>, "mappedByteWrappers",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get>();
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::setStaticF_mappedBoolWrappers(
    ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>*>,
                                    "mappedBoolWrappers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get>(
      std::forward<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>*>>(value));
}
inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>*>
ExitGames::Client::Photon::StructWrapping::StructWrapperPools::getStaticF_mappedBoolWrappers() {
  return ::cordl_internals::getStaticField<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>*>,
                                           "mappedBoolWrappers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get>();
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::GetPoolForType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), "GetPoolForType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), "Acquire",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), "Acquire",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*, false>(this, ___internal_method, value);
}
template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), "Acquire",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*, false>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>());
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::StructWrapperPools() {}
