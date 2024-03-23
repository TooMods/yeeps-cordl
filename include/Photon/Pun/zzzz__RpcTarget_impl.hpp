#pragma once
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::RpcTarget::RpcTarget(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::RpcTarget::RpcTarget() {}
constexpr ::Photon::Pun::RpcTarget Photon::Pun::RpcTarget::All{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::RpcTarget Photon::Pun::RpcTarget::Others{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::RpcTarget Photon::Pun::RpcTarget::MasterClient{ static_cast<int32_t>(0x2) };
constexpr ::Photon::Pun::RpcTarget Photon::Pun::RpcTarget::AllBuffered{ static_cast<int32_t>(0x3) };
constexpr ::Photon::Pun::RpcTarget Photon::Pun::RpcTarget::OthersBuffered{ static_cast<int32_t>(0x4) };
constexpr ::Photon::Pun::RpcTarget Photon::Pun::RpcTarget::AllViaServer{ static_cast<int32_t>(0x5) };
constexpr ::Photon::Pun::RpcTarget Photon::Pun::RpcTarget::AllBufferedViaServer{ static_cast<int32_t>(0x6) };
