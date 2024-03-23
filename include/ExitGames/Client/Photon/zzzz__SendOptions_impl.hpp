#pragma once
#include "ExitGames/Client/Photon/zzzz__DeliveryMode_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeliveryMode_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SendOptions.get_Reliability
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::SendOptions::*)()>(&::ExitGames::Client::Photon::SendOptions::get_Reliability)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ab5a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SendOptions>::get(),
                                                                               "get_Reliability", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SendOptions.set_Reliability
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::SendOptions::*)(bool)>(
    &::ExitGames::Client::Photon::SendOptions::set_Reliability)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab5a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SendOptions>::get(), "set_Reliability",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::SendOptions::setStaticF_SendReliable(::ExitGames::Client::Photon::SendOptions value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "SendReliable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SendOptions>::get>(
      std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions ExitGames::Client::Photon::SendOptions::getStaticF_SendReliable() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "SendReliable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SendOptions>::get>();
}
inline void ExitGames::Client::Photon::SendOptions::setStaticF_SendUnreliable(::ExitGames::Client::Photon::SendOptions value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::SendOptions, "SendUnreliable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SendOptions>::get>(
      std::forward<::ExitGames::Client::Photon::SendOptions>(value));
}
inline ::ExitGames::Client::Photon::SendOptions ExitGames::Client::Photon::SendOptions::getStaticF_SendUnreliable() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SendOptions, "SendUnreliable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SendOptions>::get>();
}
inline bool ExitGames::Client::Photon::SendOptions::get_Reliability() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SendOptions>::get(), "get_Reliability",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SendOptions::set_Reliability(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SendOptions>::get(), "set_Reliability",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "DeliveryMode", ty: "::ExitGames::Client::Photon::DeliveryMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "Encrypt", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::SendOptions::SendOptions(::ExitGames::Client::Photon::DeliveryMode DeliveryMode, bool Encrypt, uint8_t Channel) noexcept {
  this->DeliveryMode = DeliveryMode;
  this->Encrypt = Encrypt;
  this->Channel = Channel;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SendOptions::SendOptions() {}
