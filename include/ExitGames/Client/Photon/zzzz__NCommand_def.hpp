#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NCommand)
namespace ExitGames::Client::Photon {
class EnetPeer;
}
namespace ExitGames::Client::Photon {
class NCommandPool;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class NCommand;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::NCommand);
// Type: ExitGames.Client.Photon::NCommand
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::NCommand*
class CORDL_TYPE NCommand : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsFlaggedReliable)) bool IsFlaggedReliable;

  __declspec(property(get = get_IsFlaggedUnsequenced)) bool IsFlaggedUnsequenced;

  /// @brief Field Payload, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_Payload, put = __cordl_internal_set_Payload))::ExitGames::Client::Photon::StreamBuffer* Payload;

  /// @brief Field Size, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) int32_t Size;

  __declspec(property(get = get_SizeOfPayload)) int32_t SizeOfPayload;

  /// @brief Field ackReceivedReliableSequenceNumber, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_ackReceivedReliableSequenceNumber, put = __cordl_internal_set_ackReceivedReliableSequenceNumber)) int32_t ackReceivedReliableSequenceNumber;

  /// @brief Field ackReceivedSentTime, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_ackReceivedSentTime, put = __cordl_internal_set_ackReceivedSentTime)) int32_t ackReceivedSentTime;

  /// @brief Field commandChannelID, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_commandChannelID, put = __cordl_internal_set_commandChannelID)) uint8_t commandChannelID;

  /// @brief Field commandFlags, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_commandFlags, put = __cordl_internal_set_commandFlags)) uint8_t commandFlags;

  /// @brief Field commandSentCount, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_commandSentCount, put = __cordl_internal_set_commandSentCount)) uint8_t commandSentCount;

  /// @brief Field commandSentTime, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_commandSentTime, put = __cordl_internal_set_commandSentTime)) int32_t commandSentTime;

  /// @brief Field commandType, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_commandType, put = __cordl_internal_set_commandType)) uint8_t commandType;

  /// @brief Field fragmentCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_fragmentCount, put = __cordl_internal_set_fragmentCount)) int32_t fragmentCount;

  /// @brief Field fragmentNumber, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_fragmentNumber, put = __cordl_internal_set_fragmentNumber)) int32_t fragmentNumber;

  /// @brief Field fragmentOffset, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_fragmentOffset, put = __cordl_internal_set_fragmentOffset)) int32_t fragmentOffset;

  /// @brief Field fragmentsRemaining, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_fragmentsRemaining, put = __cordl_internal_set_fragmentsRemaining)) int32_t fragmentsRemaining;

  /// @brief Field reliableSequenceNumber, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_reliableSequenceNumber, put = __cordl_internal_set_reliableSequenceNumber)) int32_t reliableSequenceNumber;

  /// @brief Field reservedByte, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_reservedByte, put = __cordl_internal_set_reservedByte)) uint8_t reservedByte;

  /// @brief Field returnPool, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_returnPool, put = __cordl_internal_set_returnPool))::ExitGames::Client::Photon::NCommandPool* returnPool;

  /// @brief Field roundTripTimeout, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_roundTripTimeout, put = __cordl_internal_set_roundTripTimeout)) int32_t roundTripTimeout;

  /// @brief Field startSequenceNumber, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_startSequenceNumber, put = __cordl_internal_set_startSequenceNumber)) int32_t startSequenceNumber;

  /// @brief Field timeoutTime, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_timeoutTime, put = __cordl_internal_set_timeoutTime)) int32_t timeoutTime;

  /// @brief Field totalLength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_totalLength, put = __cordl_internal_set_totalLength)) int32_t totalLength;

  /// @brief Field unreliableSequenceNumber, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_unreliableSequenceNumber, put = __cordl_internal_set_unreliableSequenceNumber)) int32_t unreliableSequenceNumber;

  /// @brief Field unsequencedGroupNumber, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_unsequencedGroupNumber, put = __cordl_internal_set_unsequencedGroupNumber)) int32_t unsequencedGroupNumber;

  /// @brief Convert operator to "::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>"
  constexpr operator ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>*() noexcept;

  /// @brief Method CompareTo, addr 0x278089c, size 0x38, virtual true, abstract: false, final true
  inline int32_t CompareTo(::ExitGames::Client::Photon::NCommand* other);

  /// @brief Method CreateAck, addr 0x277becc, size 0x158, virtual false, abstract: false, final false
  static inline void CreateAck(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, ::ExitGames::Client::Photon::NCommand* commandToAck, int32_t sentTime);

  /// @brief Method FreePayload, addr 0x277869c, size 0x64, virtual false, abstract: false, final false
  inline void FreePayload();

  /// @brief Method Initialize, addr 0x2780430, size 0x2f8, virtual false, abstract: false, final false
  inline void Initialize(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel);

  /// @brief Method Initialize, addr 0x27800b4, size 0x328, virtual false, abstract: false, final false
  inline void Initialize(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff, ByRef<int32_t> readingOffset);

  static inline ::ExitGames::Client::Photon::NCommand* New_ctor(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel);

  static inline ::ExitGames::Client::Photon::NCommand* New_ctor(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff, ByRef<int32_t> readingOffset);

  /// @brief Method Release, addr 0x2778680, size 0x1c, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Reset, addr 0x2780864, size 0x38, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Serialize, addr 0x277b390, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Serialize();

  /// @brief Method SerializeHeader, addr 0x277b180, size 0x1fc, virtual false, abstract: false, final false
  inline void SerializeHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> bufferIndex);

  /// @brief Method ToString, addr 0x27808d4, size 0x3c0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ExitGames::Client::Photon::StreamBuffer*& __cordl_internal_get_Payload();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::StreamBuffer*> const& __cordl_internal_get_Payload() const;

  constexpr int32_t const& __cordl_internal_get_Size() const;

  constexpr int32_t& __cordl_internal_get_Size();

  constexpr int32_t const& __cordl_internal_get_ackReceivedReliableSequenceNumber() const;

  constexpr int32_t& __cordl_internal_get_ackReceivedReliableSequenceNumber();

  constexpr int32_t const& __cordl_internal_get_ackReceivedSentTime() const;

  constexpr int32_t& __cordl_internal_get_ackReceivedSentTime();

  constexpr uint8_t const& __cordl_internal_get_commandChannelID() const;

  constexpr uint8_t& __cordl_internal_get_commandChannelID();

  constexpr uint8_t const& __cordl_internal_get_commandFlags() const;

  constexpr uint8_t& __cordl_internal_get_commandFlags();

  constexpr uint8_t const& __cordl_internal_get_commandSentCount() const;

  constexpr uint8_t& __cordl_internal_get_commandSentCount();

  constexpr int32_t const& __cordl_internal_get_commandSentTime() const;

  constexpr int32_t& __cordl_internal_get_commandSentTime();

  constexpr uint8_t const& __cordl_internal_get_commandType() const;

  constexpr uint8_t& __cordl_internal_get_commandType();

  constexpr int32_t const& __cordl_internal_get_fragmentCount() const;

  constexpr int32_t& __cordl_internal_get_fragmentCount();

  constexpr int32_t const& __cordl_internal_get_fragmentNumber() const;

  constexpr int32_t& __cordl_internal_get_fragmentNumber();

  constexpr int32_t const& __cordl_internal_get_fragmentOffset() const;

  constexpr int32_t& __cordl_internal_get_fragmentOffset();

  constexpr int32_t const& __cordl_internal_get_fragmentsRemaining() const;

  constexpr int32_t& __cordl_internal_get_fragmentsRemaining();

  constexpr int32_t const& __cordl_internal_get_reliableSequenceNumber() const;

  constexpr int32_t& __cordl_internal_get_reliableSequenceNumber();

  constexpr uint8_t const& __cordl_internal_get_reservedByte() const;

  constexpr uint8_t& __cordl_internal_get_reservedByte();

  constexpr ::ExitGames::Client::Photon::NCommandPool*& __cordl_internal_get_returnPool();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::NCommandPool*> const& __cordl_internal_get_returnPool() const;

  constexpr int32_t const& __cordl_internal_get_roundTripTimeout() const;

  constexpr int32_t& __cordl_internal_get_roundTripTimeout();

  constexpr int32_t const& __cordl_internal_get_startSequenceNumber() const;

  constexpr int32_t& __cordl_internal_get_startSequenceNumber();

  constexpr int32_t const& __cordl_internal_get_timeoutTime() const;

  constexpr int32_t& __cordl_internal_get_timeoutTime();

  constexpr int32_t const& __cordl_internal_get_totalLength() const;

  constexpr int32_t& __cordl_internal_get_totalLength();

  constexpr int32_t const& __cordl_internal_get_unreliableSequenceNumber() const;

  constexpr int32_t& __cordl_internal_get_unreliableSequenceNumber();

  constexpr int32_t const& __cordl_internal_get_unsequencedGroupNumber() const;

  constexpr int32_t& __cordl_internal_get_unsequencedGroupNumber();

  constexpr void __cordl_internal_set_Payload(::ExitGames::Client::Photon::StreamBuffer* value);

  constexpr void __cordl_internal_set_Size(int32_t value);

  constexpr void __cordl_internal_set_ackReceivedReliableSequenceNumber(int32_t value);

  constexpr void __cordl_internal_set_ackReceivedSentTime(int32_t value);

  constexpr void __cordl_internal_set_commandChannelID(uint8_t value);

  constexpr void __cordl_internal_set_commandFlags(uint8_t value);

  constexpr void __cordl_internal_set_commandSentCount(uint8_t value);

  constexpr void __cordl_internal_set_commandSentTime(int32_t value);

  constexpr void __cordl_internal_set_commandType(uint8_t value);

  constexpr void __cordl_internal_set_fragmentCount(int32_t value);

  constexpr void __cordl_internal_set_fragmentNumber(int32_t value);

  constexpr void __cordl_internal_set_fragmentOffset(int32_t value);

  constexpr void __cordl_internal_set_fragmentsRemaining(int32_t value);

  constexpr void __cordl_internal_set_reliableSequenceNumber(int32_t value);

  constexpr void __cordl_internal_set_reservedByte(uint8_t value);

  constexpr void __cordl_internal_set_returnPool(::ExitGames::Client::Photon::NCommandPool* value);

  constexpr void __cordl_internal_set_roundTripTimeout(int32_t value);

  constexpr void __cordl_internal_set_startSequenceNumber(int32_t value);

  constexpr void __cordl_internal_set_timeoutTime(int32_t value);

  constexpr void __cordl_internal_set_totalLength(int32_t value);

  constexpr void __cordl_internal_set_unreliableSequenceNumber(int32_t value);

  constexpr void __cordl_internal_set_unsequencedGroupNumber(int32_t value);

  /// @brief Method .ctor, addr 0x27803dc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel);

  /// @brief Method .ctor, addr 0x2780068, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff, ByRef<int32_t> readingOffset);

  /// @brief Method get_IsFlaggedReliable, addr 0x277ac6c, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsFlaggedReliable();

  /// @brief Method get_IsFlaggedUnsequenced, addr 0x277bdc8, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsFlaggedUnsequenced();

  /// @brief Method get_SizeOfPayload, addr 0x277b37c, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_SizeOfPayload();

  /// @brief Convert to "::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>"
  constexpr ::System::IComparable_1<::ExitGames::Client::Photon::NCommand*>* i___System__IComparable_1___ExitGames__Client__Photon__NCommand__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NCommand(NCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NCommand(NCommand const&) = delete;

  /// @brief Field commandFlags, offset: 0x10, size: 0x1, def value: None
  uint8_t ___commandFlags;

  /// @brief Field commandType, offset: 0x11, size: 0x1, def value: None
  uint8_t ___commandType;

  /// @brief Field commandChannelID, offset: 0x12, size: 0x1, def value: None
  uint8_t ___commandChannelID;

  /// @brief Field reliableSequenceNumber, offset: 0x14, size: 0x4, def value: None
  int32_t ___reliableSequenceNumber;

  /// @brief Field unreliableSequenceNumber, offset: 0x18, size: 0x4, def value: None
  int32_t ___unreliableSequenceNumber;

  /// @brief Field unsequencedGroupNumber, offset: 0x1c, size: 0x4, def value: None
  int32_t ___unsequencedGroupNumber;

  /// @brief Field reservedByte, offset: 0x20, size: 0x1, def value: None
  uint8_t ___reservedByte;

  /// @brief Field startSequenceNumber, offset: 0x24, size: 0x4, def value: None
  int32_t ___startSequenceNumber;

  /// @brief Field fragmentCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___fragmentCount;

  /// @brief Field fragmentNumber, offset: 0x2c, size: 0x4, def value: None
  int32_t ___fragmentNumber;

  /// @brief Field totalLength, offset: 0x30, size: 0x4, def value: None
  int32_t ___totalLength;

  /// @brief Field fragmentOffset, offset: 0x34, size: 0x4, def value: None
  int32_t ___fragmentOffset;

  /// @brief Field fragmentsRemaining, offset: 0x38, size: 0x4, def value: None
  int32_t ___fragmentsRemaining;

  /// @brief Field commandSentTime, offset: 0x3c, size: 0x4, def value: None
  int32_t ___commandSentTime;

  /// @brief Field commandSentCount, offset: 0x40, size: 0x1, def value: None
  uint8_t ___commandSentCount;

  /// @brief Field roundTripTimeout, offset: 0x44, size: 0x4, def value: None
  int32_t ___roundTripTimeout;

  /// @brief Field timeoutTime, offset: 0x48, size: 0x4, def value: None
  int32_t ___timeoutTime;

  /// @brief Field ackReceivedReliableSequenceNumber, offset: 0x4c, size: 0x4, def value: None
  int32_t ___ackReceivedReliableSequenceNumber;

  /// @brief Field ackReceivedSentTime, offset: 0x50, size: 0x4, def value: None
  int32_t ___ackReceivedSentTime;

  /// @brief Field Size, offset: 0x54, size: 0x4, def value: None
  int32_t ___Size;

  /// @brief Field Payload, offset: 0x58, size: 0x8, def value: None
  ::ExitGames::Client::Photon::StreamBuffer* ___Payload;

  /// @brief Field returnPool, offset: 0x60, size: 0x8, def value: None
  ::ExitGames::Client::Photon::NCommandPool* ___returnPool;

  /// @brief Field CT_ACK offset 0xffffffff size 0x1
  static constexpr uint8_t CT_ACK{ static_cast<uint8_t>(0x1u) };

  /// @brief Field CT_CONNECT offset 0xffffffff size 0x1
  static constexpr uint8_t CT_CONNECT{ static_cast<uint8_t>(0x2u) };

  /// @brief Field CT_DISCONNECT offset 0xffffffff size 0x1
  static constexpr uint8_t CT_DISCONNECT{ static_cast<uint8_t>(0x4u) };

  /// @brief Field CT_EG_ACK_UNSEQUENCED offset 0xffffffff size 0x1
  static constexpr uint8_t CT_EG_ACK_UNSEQUENCED{ static_cast<uint8_t>(0x10u) };

  /// @brief Field CT_EG_SEND_FRAGMENT_UNSEQUENCED offset 0xffffffff size 0x1
  static constexpr uint8_t CT_EG_SEND_FRAGMENT_UNSEQUENCED{ static_cast<uint8_t>(0xfu) };

  /// @brief Field CT_EG_SEND_RELIABLE_UNSEQUENCED offset 0xffffffff size 0x1
  static constexpr uint8_t CT_EG_SEND_RELIABLE_UNSEQUENCED{ static_cast<uint8_t>(0xeu) };

  /// @brief Field CT_EG_SEND_UNRELIABLE_PROCESSED offset 0xffffffff size 0x1
  static constexpr uint8_t CT_EG_SEND_UNRELIABLE_PROCESSED{ static_cast<uint8_t>(0xdu) };

  /// @brief Field CT_EG_SERVERTIME offset 0xffffffff size 0x1
  static constexpr uint8_t CT_EG_SERVERTIME{ static_cast<uint8_t>(0xcu) };

  /// @brief Field CT_NONE offset 0xffffffff size 0x1
  static constexpr uint8_t CT_NONE{ static_cast<uint8_t>(0x0u) };

  /// @brief Field CT_PING offset 0xffffffff size 0x1
  static constexpr uint8_t CT_PING{ static_cast<uint8_t>(0x5u) };

  /// @brief Field CT_SENDFRAGMENT offset 0xffffffff size 0x1
  static constexpr uint8_t CT_SENDFRAGMENT{ static_cast<uint8_t>(0x8u) };

  /// @brief Field CT_SENDRELIABLE offset 0xffffffff size 0x1
  static constexpr uint8_t CT_SENDRELIABLE{ static_cast<uint8_t>(0x6u) };

  /// @brief Field CT_SENDUNRELIABLE offset 0xffffffff size 0x1
  static constexpr uint8_t CT_SENDUNRELIABLE{ static_cast<uint8_t>(0x7u) };

  /// @brief Field CT_SENDUNSEQUENCED offset 0xffffffff size 0x1
  static constexpr uint8_t CT_SENDUNSEQUENCED{ static_cast<uint8_t>(0xbu) };

  /// @brief Field CT_VERIFYCONNECT offset 0xffffffff size 0x1
  static constexpr uint8_t CT_VERIFYCONNECT{ static_cast<uint8_t>(0x3u) };

  /// @brief Field CmdSizeAck offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeAck{ static_cast<int32_t>(0x14) };

  /// @brief Field CmdSizeConnect offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeConnect{ static_cast<int32_t>(0x2c) };

  /// @brief Field CmdSizeDisconnect offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeDisconnect{ static_cast<int32_t>(0xc) };

  /// @brief Field CmdSizeFragmentHeader offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeFragmentHeader{ static_cast<int32_t>(0x20) };

  /// @brief Field CmdSizeMaxHeader offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeMaxHeader{ static_cast<int32_t>(0x24) };

  /// @brief Field CmdSizeMinimum offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeMinimum{ static_cast<int32_t>(0xc) };

  /// @brief Field CmdSizePing offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizePing{ static_cast<int32_t>(0xc) };

  /// @brief Field CmdSizeReliableHeader offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeReliableHeader{ static_cast<int32_t>(0xc) };

  /// @brief Field CmdSizeUnreliableHeader offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeUnreliableHeader{ static_cast<int32_t>(0x10) };

  /// @brief Field CmdSizeUnsequensedHeader offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeUnsequensedHeader{ static_cast<int32_t>(0x10) };

  /// @brief Field CmdSizeVerifyConnect offset 0xffffffff size 0x4
  static constexpr int32_t CmdSizeVerifyConnect{ static_cast<int32_t>(0x2c) };

  /// @brief Field FV_RELIABLE offset 0xffffffff size 0x1
  static constexpr uint8_t FV_RELIABLE{ static_cast<uint8_t>(0x1u) };

  /// @brief Field FV_RELIBALE_UNSEQUENCED offset 0xffffffff size 0x1
  static constexpr uint8_t FV_RELIBALE_UNSEQUENCED{ static_cast<uint8_t>(0x3u) };

  /// @brief Field FV_UNRELIABLE offset 0xffffffff size 0x1
  static constexpr uint8_t FV_UNRELIABLE{ static_cast<uint8_t>(0x0u) };

  /// @brief Field FV_UNRELIABLE_UNSEQUENCED offset 0xffffffff size 0x1
  static constexpr uint8_t FV_UNRELIABLE_UNSEQUENCED{ static_cast<uint8_t>(0x2u) };

  /// @brief Field HEADER_UDP_PACK_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t HEADER_UDP_PACK_LENGTH{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::NCommand, 0x68>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___commandFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___commandType) == 0x11, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___commandChannelID) == 0x12, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___reliableSequenceNumber) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___unreliableSequenceNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___unsequencedGroupNumber) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___reservedByte) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___startSequenceNumber) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___fragmentCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___fragmentNumber) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___totalLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___fragmentOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___fragmentsRemaining) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___commandSentTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___commandSentCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___roundTripTimeout) == 0x44, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___timeoutTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___ackReceivedReliableSequenceNumber) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___ackReceivedSentTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___Size) == 0x54, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___Payload) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommand, ___returnPool) == 0x60, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::NCommand);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::NCommand*, "ExitGames.Client.Photon", "NCommand");
