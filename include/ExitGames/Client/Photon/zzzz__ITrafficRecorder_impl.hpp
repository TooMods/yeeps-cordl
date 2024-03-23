#pragma once
#include "ExitGames/Client/Photon/zzzz__ITrafficRecorder_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::ITrafficRecorder.get_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::ITrafficRecorder::*)()>(
    &::ExitGames::Client::Photon::ITrafficRecorder::get_Enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ITrafficRecorder.set_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::ITrafficRecorder::*)(bool)>(
    &::ExitGames::Client::Photon::ITrafficRecorder::set_Enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ITrafficRecorder.Record
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::ITrafficRecorder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, bool, int16_t, ::ExitGames::Client::Photon::IPhotonSocket*)>(&::ExitGames::Client::Photon::ITrafficRecorder::Record)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(), 2));
    return ___internal_method;
  }
};
inline bool ExitGames::Client::Photon::ITrafficRecorder::get_Enabled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::ITrafficRecorder::set_Enabled(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::ITrafficRecorder::Record(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuffer, int32_t length, bool incoming, int16_t peerId,
                                                                ::ExitGames::Client::Photon::IPhotonSocket* connection) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::ITrafficRecorder*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBuffer, length, incoming, peerId, connection);
}
