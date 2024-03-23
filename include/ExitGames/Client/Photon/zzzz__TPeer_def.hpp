#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TPeer)
namespace ExitGames::Client::Photon {
struct DeliveryMode;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class TPeer;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::TPeer);
// Type: ExitGames.Client.Photon::TPeer
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 321, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::TPeer*
class CORDL_TYPE TPeer : public ::ExitGames::Client::Photon::PeerBase {
public:
  // Declarations
  /// @brief Field DoFraming, offset 0x140, size 0x1
  __declspec(property(get = __cordl_internal_get_DoFraming, put = __cordl_internal_set_DoFraming)) bool DoFraming;

  __declspec(property(get = get_QueuedIncomingCommandsCount)) int32_t QueuedIncomingCommandsCount;

  __declspec(property(get = get_QueuedOutgoingCommandsCount)) int32_t QueuedOutgoingCommandsCount;

  /// @brief Field incomingList, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_incomingList,
                      put = __cordl_internal_set_incomingList))::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* incomingList;

  /// @brief Field lastPingResult, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_lastPingResult, put = __cordl_internal_set_lastPingResult)) int32_t lastPingResult;

  /// @brief Field outgoingStream, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_outgoingStream,
                      put = __cordl_internal_set_outgoingStream))::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>* outgoingStream;

  /// @brief Field pingRequest, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_pingRequest, put = __cordl_internal_set_pingRequest))::ArrayW<uint8_t, ::Array<uint8_t>*> pingRequest;

  /// @brief Field tcpFramedMessageHead, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tcpFramedMessageHead, put = setStaticF_tcpFramedMessageHead))::ArrayW<uint8_t, ::Array<uint8_t>*> tcpFramedMessageHead;

  /// @brief Field tcpMsgHead, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tcpMsgHead, put = setStaticF_tcpMsgHead))::ArrayW<uint8_t, ::Array<uint8_t>*> tcpMsgHead;

  /// @brief Method Connect, addr 0x2ac1208, size 0x130, virtual true, abstract: false, final false
  inline bool Connect(::StringW serverAddress, ::StringW proxyServerAddress, ::StringW appID, ::System::Object* photonToken);

  /// @brief Method Disconnect, addr 0x2ac1508, size 0x110, virtual true, abstract: false, final false
  inline void Disconnect();

  /// @brief Method DispatchIncomingCommands, addr 0x2ac1ed4, size 0x388, virtual true, abstract: false, final false
  inline bool DispatchIncomingCommands();

  /// @brief Method EnqueueInit, addr 0x2ac138c, size 0x17c, virtual false, abstract: false, final false
  inline void EnqueueInit(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method EnqueueMessageAsPayload, addr 0x2ac1b48, size 0x38c, virtual false, abstract: false, final false
  inline bool EnqueueMessageAsPayload(::ExitGames::Client::Photon::DeliveryMode deliveryMode, ::ExitGames::Client::Photon::StreamBuffer* opMessage, uint8_t channelId);

  /// @brief Method EnqueuePhotonMessage, addr 0x2ac2810, size 0x14, virtual true, abstract: false, final false
  inline bool EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer* opBytes, ::ExitGames::Client::Photon::SendOptions sendParams);

  /// @brief Method FetchServerTimestamp, addr 0x2ac1754, size 0x1d0, virtual true, abstract: false, final false
  inline void FetchServerTimestamp();

  /// @brief Method IsTransportEncrypted, addr 0x2ac1134, size 0x10, virtual true, abstract: false, final false
  inline bool IsTransportEncrypted();

  static inline ::ExitGames::Client::Photon::TPeer* New_ctor();

  /// @brief Method OnConnect, addr 0x2ac1338, size 0x54, virtual true, abstract: false, final false
  inline void OnConnect();

  /// @brief Method ReadPingResult, addr 0x2ac2bdc, size 0xf8, virtual false, abstract: false, final false
  inline void ReadPingResult(::ArrayW<uint8_t, ::Array<uint8_t>*> inbuff);

  /// @brief Method ReadPingResult, addr 0x2ac2cd4, size 0x11c, virtual false, abstract: false, final false
  inline void ReadPingResult(::ExitGames::Client::Photon::OperationResponse* operationResponse);

  /// @brief Method ReceiveIncomingCommands, addr 0x2ac2838, size 0x3a4, virtual true, abstract: false, final false
  inline void ReceiveIncomingCommands(::ArrayW<uint8_t, ::Array<uint8_t>*> inbuff, int32_t dataLength);

  /// @brief Method Reset, addr 0x2ac1144, size 0xc4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SendAcksOnly, addr 0x2ac27a0, size 0x70, virtual true, abstract: false, final false
  inline bool SendAcksOnly();

  /// @brief Method SendData, addr 0x2ac2500, size 0x2a0, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonSocketError SendData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method SendOutgoingCommands, addr 0x2ac225c, size 0x2a4, virtual true, abstract: false, final false
  inline bool SendOutgoingCommands();

  /// @brief Method SendPing, addr 0x2ac1924, size 0x208, virtual false, abstract: false, final false
  inline void SendPing();

  /// @brief Method StopConnection, addr 0x2ac1618, size 0x13c, virtual true, abstract: false, final false
  inline void StopConnection();

  constexpr bool const& __cordl_internal_get_DoFraming() const;

  constexpr bool& __cordl_internal_get_DoFraming();

  constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*& __cordl_internal_get_incomingList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*> const& __cordl_internal_get_incomingList() const;

  constexpr int32_t const& __cordl_internal_get_lastPingResult() const;

  constexpr int32_t& __cordl_internal_get_lastPingResult();

  constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*& __cordl_internal_get_outgoingStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>*> const& __cordl_internal_get_outgoingStream() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_pingRequest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_pingRequest();

  constexpr void __cordl_internal_set_DoFraming(bool value);

  constexpr void __cordl_internal_set_incomingList(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* value);

  constexpr void __cordl_internal_set_lastPingResult(int32_t value);

  constexpr void __cordl_internal_set_outgoingStream(::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>* value);

  constexpr void __cordl_internal_set_pingRequest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2ac1044, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_tcpFramedMessageHead();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_tcpMsgHead();

  /// @brief Method get_QueuedIncomingCommandsCount, addr 0x2ac0ff4, size 0x48, virtual true, abstract: false, final false
  inline int32_t get_QueuedIncomingCommandsCount();

  /// @brief Method get_QueuedOutgoingCommandsCount, addr 0x2ac103c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_QueuedOutgoingCommandsCount();

  static inline void setStaticF_tcpFramedMessageHead(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_tcpMsgHead(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TPeer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TPeer(TPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TPeer(TPeer const&) = delete;

  /// @brief Field incomingList, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* ___incomingList;

  /// @brief Field outgoingStream, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::StreamBuffer*>* ___outgoingStream;

  /// @brief Field lastPingResult, offset: 0x130, size: 0x4, def value: None
  int32_t ___lastPingResult;

  /// @brief Field pingRequest, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___pingRequest;

  /// @brief Field DoFraming, offset: 0x140, size: 0x1, def value: None
  bool ___DoFraming;

  /// @brief Field ALL_HEADER_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t ALL_HEADER_BYTES{ static_cast<int32_t>(0x9) };

  /// @brief Field MSG_HEADER_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t MSG_HEADER_BYTES{ static_cast<int32_t>(0x2) };

  /// @brief Field TCP_HEADER_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t TCP_HEADER_BYTES{ static_cast<int32_t>(0x7) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::TPeer, 0x148>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___incomingList) == 0x120, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___outgoingStream) == 0x128, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___lastPingResult) == 0x130, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___pingRequest) == 0x138, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TPeer, ___DoFraming) == 0x140, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::TPeer);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::TPeer*, "ExitGames.Client.Photon", "TPeer");
