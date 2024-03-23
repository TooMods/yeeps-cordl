#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonClientWebSocket)
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace System::Net::WebSockets {
class ClientWebSocket;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class PhotonClientWebSocket;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::PhotonClientWebSocket);
// Type: ExitGames.Client.Photon::PhotonClientWebSocket
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::PhotonClientWebSocket*
class CORDL_TYPE PhotonClientWebSocket : public ::ExitGames::Client::Photon::IPhotonSocket {
public:
  // Declarations
  /// @brief Field clientWebSocket, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_clientWebSocket, put = __cordl_internal_set_clientWebSocket))::System::Net::WebSockets::ClientWebSocket* clientWebSocket;

  /// @brief Field sendTask, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_sendTask, put = __cordl_internal_set_sendTask))::System::Threading::Tasks::Task* sendTask;

  /// @brief Method AsyncConnectAndReceive, addr 0x285b6c4, size 0x10a4, virtual false, abstract: false, final false
  inline void AsyncConnectAndReceive();

  /// @brief Method Connect, addr 0x285b5d8, size 0xec, virtual true, abstract: false, final false
  inline bool Connect();

  /// @brief Method Disconnect, addr 0x285c768, size 0x1d4, virtual true, abstract: false, final false
  inline bool Disconnect();

  static inline ::ExitGames::Client::Photon::PhotonClientWebSocket* New_ctor(::ExitGames::Client::Photon::PeerBase* peerBase);

  /// @brief Method Receive, addr 0x285cb08, size 0x40, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data);

  /// @brief Method Send, addr 0x285c93c, size 0x1cc, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  constexpr ::System::Net::WebSockets::ClientWebSocket*& __cordl_internal_get_clientWebSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebSockets::ClientWebSocket*> const& __cordl_internal_get_clientWebSocket() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_sendTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_sendTask() const;

  constexpr void __cordl_internal_set_clientWebSocket(::System::Net::WebSockets::ClientWebSocket* value);

  constexpr void __cordl_internal_set_sendTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x285b554, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::PeerBase* peerBase);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonClientWebSocket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonClientWebSocket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonClientWebSocket(PhotonClientWebSocket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonClientWebSocket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonClientWebSocket(PhotonClientWebSocket const&) = delete;

  /// @brief Field clientWebSocket, offset: 0x50, size: 0x8, def value: None
  ::System::Net::WebSockets::ClientWebSocket* ___clientWebSocket;

  /// @brief Field sendTask, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___sendTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::PhotonClientWebSocket, 0x60>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonClientWebSocket, ___clientWebSocket) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonClientWebSocket, ___sendTask) == 0x58, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::PhotonClientWebSocket);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::PhotonClientWebSocket*, "ExitGames.Client.Photon", "PhotonClientWebSocket");
