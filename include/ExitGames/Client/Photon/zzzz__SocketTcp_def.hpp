#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketTcp)
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class SocketTcp;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::SocketTcp);
// Type: ExitGames.Client.Photon::SocketTcp
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::SocketTcp*
class CORDL_TYPE SocketTcp : public ::ExitGames::Client::Photon::IPhotonSocket {
public:
  // Declarations
  /// @brief Field sock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sock, put = __cordl_internal_set_sock))::System::Net::Sockets::Socket* sock;

  /// @brief Field syncer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_syncer, put = __cordl_internal_set_syncer))::System::Object* syncer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Connect, addr 0x2ab5da0, size 0x1a8, virtual true, abstract: false, final false
  inline bool Connect();

  /// @brief Method Disconnect, addr 0x2ab5f48, size 0x240, virtual true, abstract: false, final false
  inline bool Disconnect();

  /// @brief Method Dispose, addr 0x2ab5c8c, size 0x114, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DnsAndConnect, addr 0x2ab65c0, size 0x7a8, virtual false, abstract: false, final false
  inline void DnsAndConnect();

  /// @brief Method Finalize, addr 0x2ab5bf8, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::ExitGames::Client::Photon::SocketTcp* New_ctor(::ExitGames::Client::Photon::PeerBase* npeer);

  /// @brief Method Receive, addr 0x2ab65b4, size 0xc, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data);

  /// @brief Method ReceiveLoop, addr 0x2ab6d68, size 0xc74, virtual false, abstract: false, final false
  inline void ReceiveLoop();

  /// @brief Method Send, addr 0x2ab6188, size 0x42c, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_sock() const;

  constexpr ::System::Object*& __cordl_internal_get_syncer();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_syncer() const;

  constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_syncer(::System::Object* value);

  /// @brief Method .ctor, addr 0x2ab5ac4, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::PeerBase* npeer);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketTcp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketTcp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketTcp(SocketTcp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketTcp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketTcp(SocketTcp const&) = delete;

  /// @brief Field sock, offset: 0x50, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___sock;

  /// @brief Field syncer, offset: 0x58, size: 0x8, def value: None
  ::System::Object* ___syncer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SocketTcp, 0x60>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcp, ___sock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcp, ___syncer) == 0x58, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::SocketTcp);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SocketTcp*, "ExitGames.Client.Photon", "SocketTcp");
