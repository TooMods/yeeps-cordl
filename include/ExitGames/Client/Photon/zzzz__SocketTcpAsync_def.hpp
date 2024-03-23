#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketTcpAsync)
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace ExitGames::Client::Photon {
class __SocketTcpAsync__ReceiveContext;
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
class SocketTcpAsync;
}
namespace ExitGames::Client::Photon {
class __SocketTcpAsync__ReceiveContext;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::SocketTcpAsync);
MARK_REF_PTR_T(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext);
// Type: ::ReceiveContext
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::SocketTcpAsync::ReceiveContext*
class CORDL_TYPE __SocketTcpAsync__ReceiveContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurrentBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> CurrentBuffer;

  __declspec(property(get = get_CurrentExpected)) int32_t CurrentExpected;

  __declspec(property(get = get_CurrentOffset)) int32_t CurrentOffset;

  /// @brief Field ExpectedMessageBytes, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_ExpectedMessageBytes, put = __cordl_internal_set_ExpectedMessageBytes)) int32_t ExpectedMessageBytes;

  /// @brief Field HeaderBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_HeaderBuffer, put = __cordl_internal_set_HeaderBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> HeaderBuffer;

  /// @brief Field MessageBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_MessageBuffer, put = __cordl_internal_set_MessageBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> MessageBuffer;

  __declspec(property(get = get_ReadingHeader)) bool ReadingHeader;

  __declspec(property(get = get_ReadingMessage)) bool ReadingMessage;

  /// @brief Field ReceivedHeaderBytes, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_ReceivedHeaderBytes, put = __cordl_internal_set_ReceivedHeaderBytes)) int32_t ReceivedHeaderBytes;

  /// @brief Field ReceivedMessageBytes, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_ReceivedMessageBytes, put = __cordl_internal_set_ReceivedMessageBytes)) int32_t ReceivedMessageBytes;

  /// @brief Field workSocket, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_workSocket, put = __cordl_internal_set_workSocket))::System::Net::Sockets::Socket* workSocket;

  static inline ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext* New_ctor(::System::Net::Sockets::Socket* socket, ::ArrayW<uint8_t, ::Array<uint8_t>*> headerBuffer,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> messageBuffer);

  /// @brief Method Reset, addr 0x2ab9b4c, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_ExpectedMessageBytes() const;

  constexpr int32_t& __cordl_internal_get_ExpectedMessageBytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_HeaderBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_HeaderBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_MessageBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_MessageBuffer();

  constexpr int32_t const& __cordl_internal_get_ReceivedHeaderBytes() const;

  constexpr int32_t& __cordl_internal_get_ReceivedHeaderBytes();

  constexpr int32_t const& __cordl_internal_get_ReceivedMessageBytes() const;

  constexpr int32_t& __cordl_internal_get_ReceivedMessageBytes();

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_workSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_workSocket() const;

  constexpr void __cordl_internal_set_ExpectedMessageBytes(int32_t value);

  constexpr void __cordl_internal_set_HeaderBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_MessageBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_ReceivedHeaderBytes(int32_t value);

  constexpr void __cordl_internal_set_ReceivedMessageBytes(int32_t value);

  constexpr void __cordl_internal_set_workSocket(::System::Net::Sockets::Socket* value);

  /// @brief Method .ctor, addr 0x2ab91c8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::Socket* socket, ::ArrayW<uint8_t, ::Array<uint8_t>*> headerBuffer, ::ArrayW<uint8_t, ::Array<uint8_t>*> messageBuffer);

  /// @brief Method get_CurrentBuffer, addr 0x2ab9208, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_CurrentBuffer();

  /// @brief Method get_CurrentExpected, addr 0x2ab9240, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_CurrentExpected();

  /// @brief Method get_CurrentOffset, addr 0x2ab9224, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_CurrentOffset();

  /// @brief Method get_ReadingHeader, addr 0x2ab9b3c, size 0x10, virtual false, abstract: false, final false
  inline bool get_ReadingHeader();

  /// @brief Method get_ReadingMessage, addr 0x2ab9b58, size 0x10, virtual false, abstract: false, final false
  inline bool get_ReadingMessage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SocketTcpAsync__ReceiveContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SocketTcpAsync__ReceiveContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SocketTcpAsync__ReceiveContext(__SocketTcpAsync__ReceiveContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SocketTcpAsync__ReceiveContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SocketTcpAsync__ReceiveContext(__SocketTcpAsync__ReceiveContext const&) = delete;

  /// @brief Field workSocket, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___workSocket;

  /// @brief Field ReceivedHeaderBytes, offset: 0x18, size: 0x4, def value: None
  int32_t ___ReceivedHeaderBytes;

  /// @brief Field HeaderBuffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___HeaderBuffer;

  /// @brief Field ExpectedMessageBytes, offset: 0x28, size: 0x4, def value: None
  int32_t ___ExpectedMessageBytes;

  /// @brief Field ReceivedMessageBytes, offset: 0x2c, size: 0x4, def value: None
  int32_t ___ReceivedMessageBytes;

  /// @brief Field MessageBuffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___MessageBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext, 0x38>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext, ___workSocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext, ___ReceivedHeaderBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext, ___HeaderBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext, ___ExpectedMessageBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext, ___ReceivedMessageBytes) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext, ___MessageBuffer) == 0x30, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ExitGames.Client.Photon::SocketTcpAsync
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::SocketTcpAsync*
class CORDL_TYPE SocketTcpAsync : public ::ExitGames::Client::Photon::IPhotonSocket {
public:
  // Declarations
  using ReceiveContext = ::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext;

  /// @brief Field sock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sock, put = __cordl_internal_set_sock))::System::Net::Sockets::Socket* sock;

  /// @brief Field syncer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_syncer, put = __cordl_internal_set_syncer))::System::Object* syncer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Connect, addr 0x2ab7e98, size 0x1a8, virtual true, abstract: false, final false
  inline bool Connect();

  /// @brief Method Disconnect, addr 0x2ab8040, size 0x240, virtual true, abstract: false, final false
  inline bool Disconnect();

  /// @brief Method Dispose, addr 0x2ab7d84, size 0x114, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DnsAndConnect, addr 0x2ab86b8, size 0x720, virtual false, abstract: false, final false
  inline void DnsAndConnect();

  /// @brief Method Finalize, addr 0x2ab7cf0, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::ExitGames::Client::Photon::SocketTcpAsync* New_ctor(::ExitGames::Client::Photon::PeerBase* npeer);

  /// @brief Method Receive, addr 0x2ab86ac, size 0xc, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data);

  /// @brief Method ReceiveAsync, addr 0x2ab9254, size 0x8e8, virtual false, abstract: false, final false
  inline void ReceiveAsync(::System::IAsyncResult* ar);

  /// @brief Method ReceiveAsync, addr 0x2ab8dd8, size 0x3f0, virtual false, abstract: false, final false
  inline void ReceiveAsync(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext* context);

  /// @brief Method Send, addr 0x2ab8280, size 0x42c, virtual true, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_sock() const;

  constexpr ::System::Object*& __cordl_internal_get_syncer();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_syncer() const;

  constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_syncer(::System::Object* value);

  /// @brief Method .ctor, addr 0x2ab7bbc, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::PeerBase* npeer);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketTcpAsync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketTcpAsync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketTcpAsync(SocketTcpAsync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketTcpAsync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketTcpAsync(SocketTcpAsync const&) = delete;

  /// @brief Field sock, offset: 0x50, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___sock;

  /// @brief Field syncer, offset: 0x58, size: 0x8, def value: None
  ::System::Object* ___syncer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SocketTcpAsync, 0x60>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync, ___sock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync, ___syncer) == 0x58, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::SocketTcpAsync);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SocketTcpAsync*, "ExitGames.Client.Photon", "SocketTcpAsync");
NEED_NO_BOX(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__SocketTcpAsync__ReceiveContext*, "ExitGames.Client.Photon", "SocketTcpAsync/ReceiveContext");
