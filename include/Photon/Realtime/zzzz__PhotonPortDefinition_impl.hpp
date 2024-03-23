#pragma once
#include "Photon/Realtime/zzzz__PhotonPortDefinition_def.hpp"
inline void Photon::Realtime::PhotonPortDefinition::setStaticF_AlternativeUdpPorts(::Photon::Realtime::PhotonPortDefinition value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::PhotonPortDefinition, "AlternativeUdpPorts",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPortDefinition>::get>(
      std::forward<::Photon::Realtime::PhotonPortDefinition>(value));
}
inline ::Photon::Realtime::PhotonPortDefinition Photon::Realtime::PhotonPortDefinition::getStaticF_AlternativeUdpPorts() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::PhotonPortDefinition, "AlternativeUdpPorts",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::PhotonPortDefinition>::get>();
}
// Ctor Parameters [CppParam { name: "NameServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MasterServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "GameServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Realtime::PhotonPortDefinition::PhotonPortDefinition(uint16_t NameServerPort, uint16_t MasterServerPort, uint16_t GameServerPort) noexcept {
  this->NameServerPort = NameServerPort;
  this->MasterServerPort = MasterServerPort;
  this->GameServerPort = GameServerPort;
}
// Ctor Parameters []
constexpr ::Photon::Realtime::PhotonPortDefinition::PhotonPortDefinition() {}
