#pragma once
#include "Photon/Realtime/zzzz__TypedLobby_impl.hpp"
#include "Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::TypedLobbyInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::TypedLobbyInfo::*)()>(&::Photon::Realtime::TypedLobbyInfo::ToString)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2247eec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobbyInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobbyInfo*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::TypedLobbyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::TypedLobbyInfo::*)()>(&::Photon::Realtime::TypedLobbyInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2243950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobbyInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Realtime::TypedLobbyInfo::__cordl_internal_get_PlayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlayerCount;
}
constexpr int32_t const& Photon::Realtime::TypedLobbyInfo::__cordl_internal_get_PlayerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlayerCount;
}
constexpr void Photon::Realtime::TypedLobbyInfo::__cordl_internal_set_PlayerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PlayerCount = value;
}
constexpr int32_t& Photon::Realtime::TypedLobbyInfo::__cordl_internal_get_RoomCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomCount;
}
constexpr int32_t const& Photon::Realtime::TypedLobbyInfo::__cordl_internal_get_RoomCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomCount;
}
constexpr void Photon::Realtime::TypedLobbyInfo::__cordl_internal_set_RoomCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RoomCount = value;
}
inline ::StringW Photon::Realtime::TypedLobbyInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobbyInfo*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Photon::Realtime::TypedLobbyInfo* Photon::Realtime::TypedLobbyInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::TypedLobbyInfo*>());
}
inline void Photon::Realtime::TypedLobbyInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::TypedLobbyInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::TypedLobbyInfo::TypedLobbyInfo() {}
