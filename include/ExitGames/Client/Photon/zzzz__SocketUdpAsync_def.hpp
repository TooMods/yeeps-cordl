#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketUdpAsync)
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
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class SocketUdpAsync;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::SocketUdpAsync);
// Type: ExitGames.Client.Photon::SocketUdpAsync
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::SocketUdpAsync*
class CORDL_TYPE SocketUdpAsync : public ::ExitGames::Client::Photon::IPhotonSocket {
public:
  // Declarations
  /// @brief Field sock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sock, put = __cordl_internal_set_sock))::System::Net::Sockets::Socket* sock;

  /// @brief Field syncer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_syncer, put = __cordl_internal_set_syncer))::System::Object* syncer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Connect, addr 0x2abb948, size 0x1a8, virtual true, abstract: false, final false
  inline bool Connect();

  /// @brief Method Disconnect, addr 0x2abbaf0, size 0x240, virtual true, abstract: false, final false
  inline bool Disconnect();

  /// @brief Method Dispose, addr 0x2abb834, size 0x114, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DnsAndConnect, addr 0x2abc1a4, size 0x5c8, virtual false, abstract: false, final false
  inline void DnsAndConnect();

  /// @brief Method Finalize, addr 0x2abb7a0, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::ExitGames::Client::Photon::SocketUdpAsync* New_ctor(::ExitGames::Client::Photon::PeerBase* npeer);

  /// @brief Method OnReceive, addr 0x2abcad8, size 0xda4, virtual false, abstract: false, final false
  inline void OnReceive(::System::IAsyncResult* ar);

  /// @brief Method Receive, addr 0x2abc198, size 0xc, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data);

  /// @brief Method Send, addr 0x2abbd30, size 0x468, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method StartReceive, addr 0x2abc76c, size 0x36c, virtual false, abstract: false, final false
  inline void StartReceive();

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_sock() const;

  constexpr ::System::Object*& __cordl_internal_get_syncer();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_syncer() const;

  constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_syncer(::System::Object* value);

  /// @brief Method .ctor, addr 0x2abb66c, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::PeerBase* npeer);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketUdpAsync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketUdpAsync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketUdpAsync(SocketUdpAsync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketUdpAsync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketUdpAsync(SocketUdpAsync const&) = delete;

  /// @brief Field sock, offset: 0x50, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___sock;

  /// @brief Field syncer, offset: 0x58, size: 0x8, def value: None
  ::System::Object* ___syncer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SocketUdpAsync, 0x60>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketUdpAsync, ___sock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketUdpAsync, ___syncer) == 0x58, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::SocketUdpAsync);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SocketUdpAsync*, "ExitGames.Client.Photon", "SocketUdpAsync");
