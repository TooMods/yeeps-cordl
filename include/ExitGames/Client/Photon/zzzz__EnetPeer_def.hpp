#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnetPeer)
namespace ExitGames::Client::Photon {
class EnetChannel;
}
namespace ExitGames::Client::Photon {
class NCommandPool;
}
namespace ExitGames::Client::Photon {
class NCommand;
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
class EnetPeer;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::EnetPeer);
// Type: ExitGames.Client.Photon::EnetPeer
// SizeInfo { instance_size: 424, native_size: -1, calculated_instance_size: 424, calculated_native_size: 424, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::EnetPeer*
class CORDL_TYPE EnetPeer : public ::ExitGames::Client::Photon::PeerBase {
public:
  // Declarations
  /// @brief Field CommandQueue, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_CommandQueue, put = __cordl_internal_set_CommandQueue))::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* CommandQueue;

  __declspec(property(get = get_QueuedIncomingCommandsCount)) int32_t QueuedIncomingCommandsCount;

  __declspec(property(get = get_QueuedOutgoingCommandsCount)) int32_t QueuedOutgoingCommandsCount;

  __declspec(property(get = get_SentReliableCommandsCount)) int32_t SentReliableCommandsCount;

  /// @brief Field bufferForEncryption, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_bufferForEncryption, put = __cordl_internal_set_bufferForEncryption))::ArrayW<uint8_t, ::Array<uint8_t>*> bufferForEncryption;

  /// @brief Field challenge, offset 0x16c, size 0x4
  __declspec(property(get = __cordl_internal_get_challenge, put = __cordl_internal_set_challenge)) int32_t challenge;

  /// @brief Field channelArray, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_channelArray,
                      put = __cordl_internal_set_channelArray))::ArrayW<::ExitGames::Client::Photon::EnetChannel*, ::Array<::ExitGames::Client::Photon::EnetChannel*>*> channelArray;

  /// @brief Field commandBufferSize, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get_commandBufferSize, put = __cordl_internal_set_commandBufferSize)) int32_t commandBufferSize;

  /// @brief Field commandsToRemove, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_commandsToRemove, put = __cordl_internal_set_commandsToRemove))::System::Collections::Generic::Queue_1<int32_t>* commandsToRemove;

  /// @brief Field datagramEncryptedConnection, offset 0x17c, size 0x1
  __declspec(property(get = __cordl_internal_get_datagramEncryptedConnection, put = __cordl_internal_set_datagramEncryptedConnection)) bool datagramEncryptedConnection;

  /// @brief Field fragmentLength, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_fragmentLength, put = __cordl_internal_set_fragmentLength)) int32_t fragmentLength;

  /// @brief Field fragmentLengthDatagramEncrypt, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get_fragmentLengthDatagramEncrypt, put = __cordl_internal_set_fragmentLengthDatagramEncrypt)) int32_t fragmentLengthDatagramEncrypt;

  /// @brief Field fragmentLengthMtuValue, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get_fragmentLengthMtuValue, put = __cordl_internal_set_fragmentLengthMtuValue)) int32_t fragmentLengthMtuValue;

  /// @brief Field incomingUnsequencedGroupNumber, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_incomingUnsequencedGroupNumber, put = __cordl_internal_set_incomingUnsequencedGroupNumber)) int32_t incomingUnsequencedGroupNumber;

  /// @brief Field nCommandPool, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_nCommandPool, put = __cordl_internal_set_nCommandPool))::ExitGames::Client::Photon::NCommandPool* nCommandPool;

  /// @brief Field outgoingAcknowledgementsPool, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_outgoingAcknowledgementsPool,
                      put = __cordl_internal_set_outgoingAcknowledgementsPool))::ExitGames::Client::Photon::StreamBuffer* outgoingAcknowledgementsPool;

  /// @brief Field outgoingUnsequencedGroupNumber, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_outgoingUnsequencedGroupNumber, put = __cordl_internal_set_outgoingUnsequencedGroupNumber)) int32_t outgoingUnsequencedGroupNumber;

  /// @brief Field reliableCommandsRepeated, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get_reliableCommandsRepeated, put = __cordl_internal_set_reliableCommandsRepeated)) int32_t reliableCommandsRepeated;

  /// @brief Field reliableCommandsSent, offset 0x174, size 0x4
  __declspec(property(get = __cordl_internal_get_reliableCommandsSent, put = __cordl_internal_set_reliableCommandsSent)) int32_t reliableCommandsSent;

  /// @brief Field sentReliableCommands, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_sentReliableCommands,
                      put = __cordl_internal_set_sentReliableCommands))::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>* sentReliableCommands;

  /// @brief Field serverSentTime, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get_serverSentTime, put = __cordl_internal_set_serverSentTime)) int32_t serverSentTime;

  /// @brief Field udpBuffer, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_udpBuffer, put = __cordl_internal_set_udpBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> udpBuffer;

  /// @brief Field udpBufferIndex, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_udpBufferIndex, put = __cordl_internal_set_udpBufferIndex)) int32_t udpBufferIndex;

  /// @brief Field udpCommandCount, offset 0x148, size 0x1
  __declspec(property(get = __cordl_internal_get_udpCommandCount, put = __cordl_internal_set_udpCommandCount)) uint8_t udpCommandCount;

  /// @brief Field udpHeader0xF3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_udpHeader0xF3, put = setStaticF_udpHeader0xF3))::ArrayW<uint8_t, ::Array<uint8_t>*> udpHeader0xF3;

  /// @brief Field unsequencedWindow, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_unsequencedWindow, put = __cordl_internal_set_unsequencedWindow))::ArrayW<int32_t, ::Array<int32_t>*> unsequencedWindow;

  /// @brief Method ApplyRandomizedSequenceNumbers, addr 0x2775690, size 0x1bc, virtual false, abstract: false, final false
  inline void ApplyRandomizedSequenceNumbers();

  /// @brief Method CalculateInitialOffset, addr 0x27788fc, size 0x40, virtual false, abstract: false, final false
  inline int32_t CalculateInitialOffset();

  /// @brief Method CalculatePacketSize, addr 0x277882c, size 0xd0, virtual false, abstract: false, final false
  inline int32_t CalculatePacketSize(int32_t inSize);

  /// @brief Method CommandListToString, addr 0x277ddf4, size 0x168, virtual false, abstract: false, final false
  inline ::StringW CommandListToString(::ArrayW<::ExitGames::Client::Photon::NCommand*, ::Array<::ExitGames::Client::Photon::NCommand*>*> list);

  /// @brief Method Connect, addr 0x27758a4, size 0x78, virtual true, abstract: false, final false
  inline bool Connect(::StringW ipport, ::StringW proxyServerAddress, ::StringW appID, ::System::Object* photonToken);

  /// @brief Method CreateAndEnqueueCommand, addr 0x2776c84, size 0x380, virtual false, abstract: false, final false
  inline bool CreateAndEnqueueCommand(uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channelNumber);

  /// @brief Method Disconnect, addr 0x2775cb8, size 0x390, virtual true, abstract: false, final false
  inline void Disconnect();

  /// @brief Method DispatchIncomingCommands, addr 0x2777004, size 0x910, virtual true, abstract: false, final false
  inline bool DispatchIncomingCommands();

  /// @brief Method EnqueuePhotonMessage, addr 0x277ac28, size 0x44, virtual true, abstract: false, final false
  inline bool EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer* opBytes, ::ExitGames::Client::Photon::SendOptions sendParams);

  /// @brief Method ExecuteCommand, addr 0x2777914, size 0xd6c, virtual false, abstract: false, final false
  inline void ExecuteCommand(::ExitGames::Client::Photon::NCommand* command);

  /// @brief Method FetchServerTimestamp, addr 0x27769e4, size 0xe8, virtual true, abstract: false, final false
  inline void FetchServerTimestamp();

  /// @brief Method GetChannel, addr 0x277584c, size 0x58, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::EnetChannel* GetChannel(uint8_t channelNumber);

  /// @brief Method GetFragmentLength, addr 0x2778700, size 0x12c, virtual false, abstract: false, final false
  inline int32_t GetFragmentLength();

  /// @brief Method IsTransportEncrypted, addr 0x2774f68, size 0x8, virtual true, abstract: false, final false
  inline bool IsTransportEncrypted();

  static inline ::ExitGames::Client::Photon::EnetPeer* New_ctor();

  /// @brief Method OnConnect, addr 0x2775954, size 0x38, virtual true, abstract: false, final false
  inline void OnConnect();

  /// @brief Method QueueIncomingCommand, addr 0x277d090, size 0x7ec, virtual false, abstract: false, final false
  inline bool QueueIncomingCommand(::ExitGames::Client::Photon::NCommand* command);

  /// @brief Method QueueOutgoingAcknowledgement, addr 0x277bdd4, size 0xf8, virtual false, abstract: false, final false
  inline void QueueOutgoingAcknowledgement(::ExitGames::Client::Photon::NCommand* readCommand, int32_t sendTime);

  /// @brief Method QueueOutgoingReliableCommand, addr 0x2775b54, size 0x164, virtual false, abstract: false, final false
  inline void QueueOutgoingReliableCommand(::ExitGames::Client::Photon::NCommand* command);

  /// @brief Method QueueOutgoingUnreliableCommand, addr 0x277ac94, size 0x1a4, virtual false, abstract: false, final false
  inline void QueueOutgoingUnreliableCommand(::ExitGames::Client::Photon::NCommand* command);

  /// @brief Method QueueSentCommand, addr 0x277b3ac, size 0x27c, virtual false, abstract: false, final false
  inline void QueueSentCommand(::ExitGames::Client::Photon::NCommand* command, bool commandIsAlreadyInSentQueue);

  /// @brief Method ReceiveIncomingCommands, addr 0x277c024, size 0x9b0, virtual true, abstract: false, final false
  inline void ReceiveIncomingCommands(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff, int32_t inDataLength);

  /// @brief Method RemoveSentReliableCommand, addr 0x277cba4, size 0x37c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::NCommand* RemoveSentReliableCommand(int32_t ackReceivedReliableSequenceNumber, int32_t ackReceivedChannel, bool isUnsequenced);

  /// @brief Method Reset, addr 0x2774f70, size 0x498, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SendAcksOnly, addr 0x277893c, size 0x898, virtual true, abstract: false, final false
  inline bool SendAcksOnly();

  /// @brief Method SendData, addr 0x27795cc, size 0x368, virtual false, abstract: false, final false
  inline void SendData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method SendDataEncrypted, addr 0x277b628, size 0x238, virtual false, abstract: false, final false
  inline void SendDataEncrypted(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method SendOutgoingCommands, addr 0x2779934, size 0x1108, virtual true, abstract: false, final false
  inline bool SendOutgoingCommands();

  /// @brief Method SendToSocket, addr 0x277b860, size 0x204, virtual false, abstract: false, final false
  inline void SendToSocket(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method SerializeAckToBuffer, addr 0x27791e4, size 0x280, virtual false, abstract: false, final false
  inline int32_t SerializeAckToBuffer();

  /// @brief Method SerializeCommandToBuffer, addr 0x2779484, size 0x148, virtual false, abstract: false, final false
  inline bool SerializeCommandToBuffer(::ExitGames::Client::Photon::NCommand* command, bool commandIsInSentQueue);

  /// @brief Method SerializeToBuffer, addr 0x277aa58, size 0x1d0, virtual false, abstract: false, final false
  inline int32_t SerializeToBuffer(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* commandList);

  /// @brief Method StopConnection, addr 0x27768f4, size 0xd4, virtual true, abstract: false, final false
  inline void StopConnection();

  /// @brief Method <ExecuteCommand>b__66_0, addr 0x277dff0, size 0x20, virtual false, abstract: false, final false
  inline void _ExecuteCommand_b__66_0();

  constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_CommandQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>*> const& __cordl_internal_get_CommandQueue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bufferForEncryption() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bufferForEncryption();

  constexpr int32_t const& __cordl_internal_get_challenge() const;

  constexpr int32_t& __cordl_internal_get_challenge();

  constexpr ::ArrayW<::ExitGames::Client::Photon::EnetChannel*, ::Array<::ExitGames::Client::Photon::EnetChannel*>*> const& __cordl_internal_get_channelArray() const;

  constexpr ::ArrayW<::ExitGames::Client::Photon::EnetChannel*, ::Array<::ExitGames::Client::Photon::EnetChannel*>*>& __cordl_internal_get_channelArray();

  constexpr int32_t const& __cordl_internal_get_commandBufferSize() const;

  constexpr int32_t& __cordl_internal_get_commandBufferSize();

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get_commandsToRemove();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> const& __cordl_internal_get_commandsToRemove() const;

  constexpr bool const& __cordl_internal_get_datagramEncryptedConnection() const;

  constexpr bool& __cordl_internal_get_datagramEncryptedConnection();

  constexpr int32_t const& __cordl_internal_get_fragmentLength() const;

  constexpr int32_t& __cordl_internal_get_fragmentLength();

  constexpr int32_t const& __cordl_internal_get_fragmentLengthDatagramEncrypt() const;

  constexpr int32_t& __cordl_internal_get_fragmentLengthDatagramEncrypt();

  constexpr int32_t const& __cordl_internal_get_fragmentLengthMtuValue() const;

  constexpr int32_t& __cordl_internal_get_fragmentLengthMtuValue();

  constexpr int32_t const& __cordl_internal_get_incomingUnsequencedGroupNumber() const;

  constexpr int32_t& __cordl_internal_get_incomingUnsequencedGroupNumber();

  constexpr ::ExitGames::Client::Photon::NCommandPool*& __cordl_internal_get_nCommandPool();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::NCommandPool*> const& __cordl_internal_get_nCommandPool() const;

  constexpr ::ExitGames::Client::Photon::StreamBuffer*& __cordl_internal_get_outgoingAcknowledgementsPool();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::StreamBuffer*> const& __cordl_internal_get_outgoingAcknowledgementsPool() const;

  constexpr int32_t const& __cordl_internal_get_outgoingUnsequencedGroupNumber() const;

  constexpr int32_t& __cordl_internal_get_outgoingUnsequencedGroupNumber();

  constexpr int32_t const& __cordl_internal_get_reliableCommandsRepeated() const;

  constexpr int32_t& __cordl_internal_get_reliableCommandsRepeated();

  constexpr int32_t const& __cordl_internal_get_reliableCommandsSent() const;

  constexpr int32_t& __cordl_internal_get_reliableCommandsSent();

  constexpr ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_sentReliableCommands();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>*> const& __cordl_internal_get_sentReliableCommands() const;

  constexpr int32_t const& __cordl_internal_get_serverSentTime() const;

  constexpr int32_t& __cordl_internal_get_serverSentTime();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_udpBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_udpBuffer();

  constexpr int32_t const& __cordl_internal_get_udpBufferIndex() const;

  constexpr int32_t& __cordl_internal_get_udpBufferIndex();

  constexpr uint8_t const& __cordl_internal_get_udpCommandCount() const;

  constexpr uint8_t& __cordl_internal_get_udpCommandCount();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_unsequencedWindow() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_unsequencedWindow();

  constexpr void __cordl_internal_set_CommandQueue(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* value);

  constexpr void __cordl_internal_set_bufferForEncryption(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_challenge(int32_t value);

  constexpr void __cordl_internal_set_channelArray(::ArrayW<::ExitGames::Client::Photon::EnetChannel*, ::Array<::ExitGames::Client::Photon::EnetChannel*>*> value);

  constexpr void __cordl_internal_set_commandBufferSize(int32_t value);

  constexpr void __cordl_internal_set_commandsToRemove(::System::Collections::Generic::Queue_1<int32_t>* value);

  constexpr void __cordl_internal_set_datagramEncryptedConnection(bool value);

  constexpr void __cordl_internal_set_fragmentLength(int32_t value);

  constexpr void __cordl_internal_set_fragmentLengthDatagramEncrypt(int32_t value);

  constexpr void __cordl_internal_set_fragmentLengthMtuValue(int32_t value);

  constexpr void __cordl_internal_set_incomingUnsequencedGroupNumber(int32_t value);

  constexpr void __cordl_internal_set_nCommandPool(::ExitGames::Client::Photon::NCommandPool* value);

  constexpr void __cordl_internal_set_outgoingAcknowledgementsPool(::ExitGames::Client::Photon::StreamBuffer* value);

  constexpr void __cordl_internal_set_outgoingUnsequencedGroupNumber(int32_t value);

  constexpr void __cordl_internal_set_reliableCommandsRepeated(int32_t value);

  constexpr void __cordl_internal_set_reliableCommandsSent(int32_t value);

  constexpr void __cordl_internal_set_sentReliableCommands(::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>* value);

  constexpr void __cordl_internal_set_serverSentTime(int32_t value);

  constexpr void __cordl_internal_set_udpBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_udpBufferIndex(int32_t value);

  constexpr void __cordl_internal_set_udpCommandCount(uint8_t value);

  constexpr void __cordl_internal_set_unsequencedWindow(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x2774b3c, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_udpHeader0xF3();

  /// @brief Method get_QueuedIncomingCommandsCount, addr 0x277473c, size 0x190, virtual true, abstract: false, final false
  inline int32_t get_QueuedIncomingCommandsCount();

  /// @brief Method get_QueuedOutgoingCommandsCount, addr 0x27748cc, size 0x228, virtual true, abstract: false, final false
  inline int32_t get_QueuedOutgoingCommandsCount();

  /// @brief Method get_SentReliableCommandsCount, addr 0x2774af4, size 0x48, virtual true, abstract: false, final false
  inline int32_t get_SentReliableCommandsCount();

  static inline void setStaticF_udpHeader0xF3(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnetPeer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnetPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnetPeer(EnetPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnetPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnetPeer(EnetPeer const&) = delete;

  /// @brief Field nCommandPool, offset: 0x120, size: 0x8, def value: None
  ::ExitGames::Client::Photon::NCommandPool* ___nCommandPool;

  /// @brief Field sentReliableCommands, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ExitGames::Client::Photon::NCommand*>* ___sentReliableCommands;

  /// @brief Field outgoingAcknowledgementsPool, offset: 0x130, size: 0x8, def value: None
  ::ExitGames::Client::Photon::StreamBuffer* ___outgoingAcknowledgementsPool;

  /// @brief Field unsequencedWindow, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___unsequencedWindow;

  /// @brief Field outgoingUnsequencedGroupNumber, offset: 0x140, size: 0x4, def value: None
  int32_t ___outgoingUnsequencedGroupNumber;

  /// @brief Field incomingUnsequencedGroupNumber, offset: 0x144, size: 0x4, def value: None
  int32_t ___incomingUnsequencedGroupNumber;

  /// @brief Field udpCommandCount, offset: 0x148, size: 0x1, def value: None
  uint8_t ___udpCommandCount;

  /// @brief Field udpBuffer, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___udpBuffer;

  /// @brief Field udpBufferIndex, offset: 0x158, size: 0x4, def value: None
  int32_t ___udpBufferIndex;

  /// @brief Field bufferForEncryption, offset: 0x160, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bufferForEncryption;

  /// @brief Field commandBufferSize, offset: 0x168, size: 0x4, def value: None
  int32_t ___commandBufferSize;

  /// @brief Field challenge, offset: 0x16c, size: 0x4, def value: None
  int32_t ___challenge;

  /// @brief Field reliableCommandsRepeated, offset: 0x170, size: 0x4, def value: None
  int32_t ___reliableCommandsRepeated;

  /// @brief Field reliableCommandsSent, offset: 0x174, size: 0x4, def value: None
  int32_t ___reliableCommandsSent;

  /// @brief Field serverSentTime, offset: 0x178, size: 0x4, def value: None
  int32_t ___serverSentTime;

  /// @brief Field datagramEncryptedConnection, offset: 0x17c, size: 0x1, def value: None
  bool ___datagramEncryptedConnection;

  /// @brief Field channelArray, offset: 0x180, size: 0x8, def value: None
  ::ArrayW<::ExitGames::Client::Photon::EnetChannel*, ::Array<::ExitGames::Client::Photon::EnetChannel*>*> ___channelArray;

  /// @brief Field commandsToRemove, offset: 0x188, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<int32_t>* ___commandsToRemove;

  /// @brief Field fragmentLength, offset: 0x190, size: 0x4, def value: None
  int32_t ___fragmentLength;

  /// @brief Field fragmentLengthDatagramEncrypt, offset: 0x194, size: 0x4, def value: None
  int32_t ___fragmentLengthDatagramEncrypt;

  /// @brief Field fragmentLengthMtuValue, offset: 0x198, size: 0x4, def value: None
  int32_t ___fragmentLengthMtuValue;

  /// @brief Field CommandQueue, offset: 0x1a0, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::NCommand*>* ___CommandQueue;

  /// @brief Field CRC_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t CRC_LENGTH{ static_cast<int32_t>(0x4) };

  /// @brief Field ControlChannelNumber offset 0xffffffff size 0x1
  static constexpr uint8_t ControlChannelNumber{ static_cast<uint8_t>(0xffu) };

  /// @brief Field EncryptedDataGramHeaderSize offset 0xffffffff size 0x4
  static constexpr int32_t EncryptedDataGramHeaderSize{ static_cast<int32_t>(0x7) };

  /// @brief Field EncryptedHeaderSize offset 0xffffffff size 0x4
  static constexpr int32_t EncryptedHeaderSize{ static_cast<int32_t>(0x5) };

  /// @brief Field PeerIdForConnect offset 0xffffffff size 0x2
  static constexpr int16_t PeerIdForConnect{ static_cast<int16_t>(0xffff) };

  /// @brief Field PeerIdForConnectTrace offset 0xffffffff size 0x2
  static constexpr int16_t PeerIdForConnectTrace{ static_cast<int16_t>(0xfffe) };

  /// @brief Field QUICK_RESEND_QUEUELIMIT offset 0xffffffff size 0x4
  static constexpr int32_t QUICK_RESEND_QUEUELIMIT{ static_cast<int32_t>(0x19) };

  /// @brief Field UnsequencedWindowSize offset 0xffffffff size 0x4
  static constexpr int32_t UnsequencedWindowSize{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::EnetPeer, 0x1a8>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___nCommandPool) == 0x120, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___sentReliableCommands) == 0x128, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___outgoingAcknowledgementsPool) == 0x130, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___unsequencedWindow) == 0x138, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___outgoingUnsequencedGroupNumber) == 0x140, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___incomingUnsequencedGroupNumber) == 0x144, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___udpCommandCount) == 0x148, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___udpBuffer) == 0x150, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___udpBufferIndex) == 0x158, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___bufferForEncryption) == 0x160, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___commandBufferSize) == 0x168, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___challenge) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___reliableCommandsRepeated) == 0x170, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___reliableCommandsSent) == 0x174, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___serverSentTime) == 0x178, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___datagramEncryptedConnection) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___channelArray) == 0x180, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___commandsToRemove) == 0x188, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___fragmentLength) == 0x190, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___fragmentLengthDatagramEncrypt) == 0x194, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___fragmentLengthMtuValue) == 0x198, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::EnetPeer, ___CommandQueue) == 0x1a0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::EnetPeer);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::EnetPeer*, "ExitGames.Client.Photon", "EnetPeer");
