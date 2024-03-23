#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatPeer)
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace Photon::Chat {
class AuthenticationValues;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Photon::Chat {
class ChatPeer;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChatPeer);
// Type: Photon.Chat::ChatPeer
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 290, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChatPeer*
class CORDL_TYPE ChatPeer : public ::ExitGames::Client::Photon::PhotonPeer {
public:
  // Declarations
  __declspec(property(get = get_IsProtocolSecure)) bool IsProtocolSecure;

  __declspec(property(get = get_NameServerAddress))::StringW NameServerAddress;

  /// @brief Field NameServerHost, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_NameServerHost, put = __cordl_internal_set_NameServerHost))::StringW NameServerHost;

  /// @brief Field NameServerPortOverride, offset 0x120, size 0x2
  __declspec(property(get = __cordl_internal_get_NameServerPortOverride, put = __cordl_internal_set_NameServerPortOverride)) uint16_t NameServerPortOverride;

  /// @brief Field ProtocolToNameServerPort, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_ProtocolToNameServerPort,
               put = setStaticF_ProtocolToNameServerPort))::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* ProtocolToNameServerPort;

  /// @brief Method AuthenticateOnNameServer, addr 0x180fcf8, size 0x294, virtual false, abstract: false, final false
  inline bool AuthenticateOnNameServer(::StringW appId, ::StringW appVersion, ::StringW region, ::Photon::Chat::AuthenticationValues* authValues);

  /// @brief Method ConfigUnitySockets, addr 0x1810944, size 0x1d0, virtual false, abstract: false, final false
  inline void ConfigUnitySockets();

  /// @brief Method GetNameServerAddress, addr 0x18106b4, size 0x270, virtual false, abstract: false, final false
  inline ::StringW GetNameServerAddress();

  static inline ::Photon::Chat::ChatPeer* New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocol);

  constexpr ::StringW const& __cordl_internal_get_NameServerHost() const;

  constexpr ::StringW& __cordl_internal_get_NameServerHost();

  constexpr uint16_t const& __cordl_internal_get_NameServerPortOverride() const;

  constexpr uint16_t& __cordl_internal_get_NameServerPortOverride();

  constexpr void __cordl_internal_set_NameServerHost(::StringW value);

  constexpr void __cordl_internal_set_NameServerPortOverride(uint16_t value);

  /// @brief Method .ctor, addr 0x180b3fc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocol);

  static inline ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* getStaticF_ProtocolToNameServerPort();

  /// @brief Method get_IsProtocolSecure, addr 0x1810924, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsProtocolSecure();

  /// @brief Method get_NameServerAddress, addr 0x180b7ec, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_NameServerAddress();

  static inline void setStaticF_ProtocolToNameServerPort(::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatPeer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatPeer(ChatPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatPeer(ChatPeer const&) = delete;

  /// @brief Field NameServerHost, offset: 0x118, size: 0x8, def value: None
  ::StringW ___NameServerHost;

  /// @brief Field NameServerPortOverride, offset: 0x120, size: 0x2, def value: None
  uint16_t ___NameServerPortOverride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatPeer, 0x128>, "Size mismatch!");

static_assert(offsetof(::Photon::Chat::ChatPeer, ___NameServerHost) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatPeer, ___NameServerPortOverride) == 0x120, "Offset mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChatPeer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatPeer*, "Photon.Chat", "ChatPeer");
