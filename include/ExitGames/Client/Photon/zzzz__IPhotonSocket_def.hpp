#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPhotonSocket)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketState;
}
namespace ExitGames::Client::Photon {
struct StatusCode;
}
namespace ExitGames::Client::Photon {
class __IPhotonSocket____c;
}
namespace System::Net {
class IPAddress;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class IPhotonSocket;
}
namespace ExitGames::Client::Photon {
class __IPhotonSocket____c;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::IPhotonSocket);
MARK_REF_PTR_T(::ExitGames::Client::Photon::__IPhotonSocket____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::IPhotonSocket::<>c*
class CORDL_TYPE __IPhotonSocket____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::ExitGames::Client::Photon::__IPhotonSocket____c* __9;

  /// @brief Field <>9__55_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__55_0, put = setStaticF___9__55_0))::System::Func_2<::System::Net::IPAddress*, ::StringW>* __9__55_0;

  static inline ::ExitGames::Client::Photon::__IPhotonSocket____c* New_ctor();

  /// @brief Method <GetIpAddresses>b__55_0, addr 0x277fb6c, size 0x234, virtual false, abstract: false, final false
  inline ::StringW _GetIpAddresses_b__55_0(::System::Net::IPAddress* x);

  /// @brief Method .ctor, addr 0x277fb64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ExitGames::Client::Photon::__IPhotonSocket____c* getStaticF___9();

  static inline ::System::Func_2<::System::Net::IPAddress*, ::StringW>* getStaticF___9__55_0();

  static inline void setStaticF___9(::ExitGames::Client::Photon::__IPhotonSocket____c* value);

  static inline void setStaticF___9__55_0(::System::Func_2<::System::Net::IPAddress*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IPhotonSocket____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IPhotonSocket____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IPhotonSocket____c(__IPhotonSocket____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IPhotonSocket____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IPhotonSocket____c(__IPhotonSocket____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__IPhotonSocket____c, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ExitGames.Client.Photon::IPhotonSocket
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::IPhotonSocket*
class CORDL_TYPE IPhotonSocket : public ::System::Object {
public:
  // Declarations
  using __c = ::ExitGames::Client::Photon::__IPhotonSocket____c;

  __declspec(property(get = get_AddressResolvedAsIpv6, put = set_AddressResolvedAsIpv6)) bool AddressResolvedAsIpv6;

  /// @brief Field ConnectAddress, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectAddress, put = __cordl_internal_set_ConnectAddress))::StringW ConnectAddress;

  __declspec(property(get = get_Connected)) bool Connected;

  __declspec(property(get = get_Listener))::ExitGames::Client::Photon::IPhotonPeerListener* Listener;

  __declspec(property(get = get_MTU)) int32_t MTU;

  /// @brief Field PollReceive, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_PollReceive, put = __cordl_internal_set_PollReceive)) bool PollReceive;

  /// @brief Field Protocol, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_Protocol, put = __cordl_internal_set_Protocol))::ExitGames::Client::Photon::ConnectionProtocol Protocol;

  __declspec(property(get = get_ProxyServerAddress, put = set_ProxyServerAddress))::StringW ProxyServerAddress;

  __declspec(property(get = get_SerializationProtocol))::StringW SerializationProtocol;

  __declspec(property(get = get_ServerAddress, put = set_ServerAddress))::StringW ServerAddress;

  __declspec(property(get = get_ServerPort, put = set_ServerPort)) int32_t ServerPort;

  __declspec(property(get = get_State, put = set_State))::ExitGames::Client::Photon::PhotonSocketState State;

  __declspec(property(get = get_UrlPath, put = set_UrlPath))::StringW UrlPath;

  __declspec(property(get = get_UrlProtocol, put = set_UrlProtocol))::StringW UrlProtocol;

  /// @brief Field <AddressResolvedAsIpv6>k__BackingField, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__AddressResolvedAsIpv6_k__BackingField,
                      put = __cordl_internal_set__AddressResolvedAsIpv6_k__BackingField)) bool _AddressResolvedAsIpv6_k__BackingField;

  /// @brief Field <ProxyServerAddress>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ProxyServerAddress_k__BackingField, put = __cordl_internal_set__ProxyServerAddress_k__BackingField))::StringW _ProxyServerAddress_k__BackingField;

  /// @brief Field <ServerAddress>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ServerAddress_k__BackingField, put = __cordl_internal_set__ServerAddress_k__BackingField))::StringW _ServerAddress_k__BackingField;

  /// @brief Field <ServerIpAddress>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ServerIpAddress_k__BackingField, put = setStaticF__ServerIpAddress_k__BackingField))::StringW _ServerIpAddress_k__BackingField;

  /// @brief Field <ServerPort>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__ServerPort_k__BackingField, put = __cordl_internal_set__ServerPort_k__BackingField)) int32_t _ServerPort_k__BackingField;

  /// @brief Field <State>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__State_k__BackingField, put = __cordl_internal_set__State_k__BackingField))::ExitGames::Client::Photon::PhotonSocketState _State_k__BackingField;

  /// @brief Field <UrlPath>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__UrlPath_k__BackingField, put = __cordl_internal_set__UrlPath_k__BackingField))::StringW _UrlPath_k__BackingField;

  /// @brief Field <UrlProtocol>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__UrlProtocol_k__BackingField, put = __cordl_internal_set__UrlProtocol_k__BackingField))::StringW _UrlProtocol_k__BackingField;

  /// @brief Field peerBase, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_peerBase, put = __cordl_internal_set_peerBase))::ExitGames::Client::Photon::PeerBase* peerBase;

  /// @brief Method AddressSortComparer, addr 0x277f8b4, size 0x6c, virtual false, abstract: false, final false
  inline int32_t AddressSortComparer(::System::Net::IPAddress* x, ::System::Net::IPAddress* y);

  /// @brief Method Connect, addr 0x277e304, size 0x4d4, virtual true, abstract: false, final false
  inline bool Connect();

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Disconnect();

  /// @brief Method EnqueueDebugReturn, addr 0x277ef60, size 0x18, virtual false, abstract: false, final false
  inline void EnqueueDebugReturn(::ExitGames::Client::Photon::DebugLevel debugLevel, ::StringW message);

  /// @brief Method GetIpAddress, addr 0x277f920, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Net::IPAddress* GetIpAddress(::StringW address);

  /// @brief Method GetIpAddresses, addr 0x277f1c0, size 0x6f4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> GetIpAddresses(::StringW hostname);

  /// @brief Method HandleException, addr 0x277ef78, size 0xa4, virtual false, abstract: false, final false
  inline void HandleException(::ExitGames::Client::Photon::StatusCode statusCode);

  /// @brief Method HandleReceivedDatagram, addr 0x277ea04, size 0x1e8, virtual false, abstract: false, final false
  inline void HandleReceivedDatagram(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuffer, int32_t length, bool willBeReused);

  /// @brief Method IpAddressTryParse, addr 0x277f01c, size 0x1a4, virtual false, abstract: false, final false
  inline bool IpAddressTryParse(::StringW strIP, ByRef<::System::Net::IPAddress*> address);

  static inline ::ExitGames::Client::Photon::IPhotonSocket* New_ctor(::ExitGames::Client::Photon::PeerBase* peerBase);

  /// @brief Method Receive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data);

  /// @brief Method ReportDebugOfLevel, addr 0x277ef34, size 0x2c, virtual false, abstract: false, final false
  inline bool ReportDebugOfLevel(::ExitGames::Client::Photon::DebugLevel levelOfMessage);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method TryParseAddress, addr 0x277e7d8, size 0x22c, virtual false, abstract: false, final false
  inline bool TryParseAddress(::StringW url, ByRef<::StringW> address, ByRef<uint16_t> port, ByRef<::StringW> urlProtocol, ByRef<::StringW> urlPath);

  /// @brief Method <HandleException>b__52_0, addr 0x277fae0, size 0x20, virtual false, abstract: false, final false
  inline void _HandleException_b__52_0();

  constexpr ::StringW const& __cordl_internal_get_ConnectAddress() const;

  constexpr ::StringW& __cordl_internal_get_ConnectAddress();

  constexpr bool const& __cordl_internal_get_PollReceive() const;

  constexpr bool& __cordl_internal_get_PollReceive();

  constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& __cordl_internal_get_Protocol() const;

  constexpr ::ExitGames::Client::Photon::ConnectionProtocol& __cordl_internal_get_Protocol();

  constexpr bool const& __cordl_internal_get__AddressResolvedAsIpv6_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AddressResolvedAsIpv6_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ProxyServerAddress_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProxyServerAddress_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ServerAddress_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ServerAddress_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ServerPort_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ServerPort_k__BackingField();

  constexpr ::ExitGames::Client::Photon::PhotonSocketState const& __cordl_internal_get__State_k__BackingField() const;

  constexpr ::ExitGames::Client::Photon::PhotonSocketState& __cordl_internal_get__State_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UrlPath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UrlPath_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UrlProtocol_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UrlProtocol_k__BackingField();

  constexpr ::ExitGames::Client::Photon::PeerBase*& __cordl_internal_get_peerBase();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::PeerBase*> const& __cordl_internal_get_peerBase() const;

  constexpr void __cordl_internal_set_ConnectAddress(::StringW value);

  constexpr void __cordl_internal_set_PollReceive(bool value);

  constexpr void __cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol value);

  constexpr void __cordl_internal_set__AddressResolvedAsIpv6_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ProxyServerAddress_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ServerAddress_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ServerPort_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__State_k__BackingField(::ExitGames::Client::Photon::PhotonSocketState value);

  constexpr void __cordl_internal_set__UrlPath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__UrlProtocol_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase* value);

  /// @brief Method .ctor, addr 0x277e27c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::PeerBase* peerBase);

  static inline ::StringW getStaticF__ServerIpAddress_k__BackingField();

  /// @brief Method get_AddressResolvedAsIpv6, addr 0x277e12c, size 0x8, virtual false, abstract: false, final false
  inline bool get_AddressResolvedAsIpv6();

  /// @brief Method get_Connected, addr 0x27791d4, size 0x10, virtual false, abstract: false, final false
  inline bool get_Connected();

  /// @brief Method get_Listener, addr 0x277e010, size 0x24, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::IPhotonPeerListener* get_Listener();

  /// @brief Method get_MTU, addr 0x277e034, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_MTU();

  /// @brief Method get_ProxyServerAddress, addr 0x277e078, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProxyServerAddress();

  /// @brief Method get_SerializationProtocol, addr 0x277e160, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW get_SerializationProtocol();

  /// @brief Method get_ServerAddress, addr 0x277e068, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ServerAddress();

  /// @brief Method get_ServerIpAddress, addr 0x277e088, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW get_ServerIpAddress();

  /// @brief Method get_ServerPort, addr 0x277e11c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ServerPort();

  /// @brief Method get_State, addr 0x277e058, size 0x8, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketState get_State();

  /// @brief Method get_UrlPath, addr 0x277e150, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UrlPath();

  /// @brief Method get_UrlProtocol, addr 0x277e140, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UrlProtocol();

  static inline void setStaticF__ServerIpAddress_k__BackingField(::StringW value);

  /// @brief Method set_AddressResolvedAsIpv6, addr 0x277e134, size 0xc, virtual false, abstract: false, final false
  inline void set_AddressResolvedAsIpv6(bool value);

  /// @brief Method set_ProxyServerAddress, addr 0x277e080, size 0x8, virtual false, abstract: false, final false
  inline void set_ProxyServerAddress(::StringW value);

  /// @brief Method set_ServerAddress, addr 0x277e070, size 0x8, virtual false, abstract: false, final false
  inline void set_ServerAddress(::StringW value);

  /// @brief Method set_ServerIpAddress, addr 0x277e0d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_ServerIpAddress(::StringW value);

  /// @brief Method set_ServerPort, addr 0x277e124, size 0x8, virtual false, abstract: false, final false
  inline void set_ServerPort(int32_t value);

  /// @brief Method set_State, addr 0x277e060, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::ExitGames::Client::Photon::PhotonSocketState value);

  /// @brief Method set_UrlPath, addr 0x277e158, size 0x8, virtual false, abstract: false, final false
  inline void set_UrlPath(::StringW value);

  /// @brief Method set_UrlProtocol, addr 0x277e148, size 0x8, virtual false, abstract: false, final false
  inline void set_UrlProtocol(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPhotonSocket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPhotonSocket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPhotonSocket(IPhotonSocket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPhotonSocket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPhotonSocket(IPhotonSocket const&) = delete;

  /// @brief Field peerBase, offset: 0x10, size: 0x8, def value: None
  ::ExitGames::Client::Photon::PeerBase* ___peerBase;

  /// @brief Field Protocol, offset: 0x18, size: 0x1, def value: None
  ::ExitGames::Client::Photon::ConnectionProtocol ___Protocol;

  /// @brief Field PollReceive, offset: 0x19, size: 0x1, def value: None
  bool ___PollReceive;

  /// @brief Field <State>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::ExitGames::Client::Photon::PhotonSocketState ____State_k__BackingField;

  /// @brief Field ConnectAddress, offset: 0x20, size: 0x8, def value: None
  ::StringW ___ConnectAddress;

  /// @brief Field <ServerAddress>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ServerAddress_k__BackingField;

  /// @brief Field <ProxyServerAddress>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____ProxyServerAddress_k__BackingField;

  /// @brief Field <ServerPort>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____ServerPort_k__BackingField;

  /// @brief Field <AddressResolvedAsIpv6>k__BackingField, offset: 0x3c, size: 0x1, def value: None
  bool ____AddressResolvedAsIpv6_k__BackingField;

  /// @brief Field <UrlProtocol>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____UrlProtocol_k__BackingField;

  /// @brief Field <UrlPath>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____UrlPath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::IPhotonSocket, 0x50>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ___peerBase) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ___Protocol) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ___PollReceive) == 0x19, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____State_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ___ConnectAddress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____ServerAddress_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____ProxyServerAddress_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____ServerPort_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____AddressResolvedAsIpv6_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____UrlProtocol_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::IPhotonSocket, ____UrlPath_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::IPhotonSocket);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::IPhotonSocket*, "ExitGames.Client.Photon", "IPhotonSocket");
NEED_NO_BOX(::ExitGames::Client::Photon::__IPhotonSocket____c);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__IPhotonSocket____c*, "ExitGames.Client.Photon", "IPhotonSocket/<>c");
