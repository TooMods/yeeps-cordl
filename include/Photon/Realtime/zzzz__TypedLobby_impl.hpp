#pragma once
#include "Photon/Realtime/zzzz__LobbyType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Photon/Realtime/zzzz__LobbyType_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::TypedLobby.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::TypedLobby::*)()>(&::Photon::Realtime::TypedLobby::get_IsDefault)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2245104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(), "get_IsDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::TypedLobby._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::TypedLobby::*)()>(&::Photon::Realtime::TypedLobby::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::TypedLobby._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::TypedLobby::*)(::StringW, ::Photon::Realtime::LobbyType)>(
    &::Photon::Realtime::TypedLobby::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2247dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LobbyType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::TypedLobby.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::TypedLobby::*)()>(&::Photon::Realtime::TypedLobby::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2247dfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::TypedLobby::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Photon::Realtime::TypedLobby::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Photon::Realtime::TypedLobby::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::LobbyType& Photon::Realtime::TypedLobby::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::Photon::Realtime::LobbyType const& Photon::Realtime::TypedLobby::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Photon::Realtime::TypedLobby::__cordl_internal_set_Type(::Photon::Realtime::LobbyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
inline void Photon::Realtime::TypedLobby::setStaticF_Default(::Photon::Realtime::TypedLobby* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::TypedLobby*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get>(
      std::forward<::Photon::Realtime::TypedLobby*>(value));
}
inline ::Photon::Realtime::TypedLobby* Photon::Realtime::TypedLobby::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::TypedLobby*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get>();
}
inline bool Photon::Realtime::TypedLobby::get_IsDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(), "get_IsDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Photon::Realtime::TypedLobby* Photon::Realtime::TypedLobby::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::TypedLobby*>());
}
inline void Photon::Realtime::TypedLobby::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Photon::Realtime::TypedLobby* Photon::Realtime::TypedLobby::New_ctor(::StringW name, ::Photon::Realtime::LobbyType type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::TypedLobby*>(name, type));
}
inline void Photon::Realtime::TypedLobby::_ctor(::StringW name, ::Photon::Realtime::LobbyType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LobbyType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, type);
}
inline ::StringW Photon::Realtime::TypedLobby::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobby*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::TypedLobby::TypedLobby() {}
