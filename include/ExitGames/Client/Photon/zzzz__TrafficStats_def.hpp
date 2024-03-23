#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrafficStats)
// Forward declare root types
namespace ExitGames::Client::Photon {
class TrafficStats;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::TrafficStats);
// Type: ExitGames.Client.Photon::TrafficStats
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::TrafficStats*
class CORDL_TYPE TrafficStats : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ControlCommandBytes, put = set_ControlCommandBytes)) int32_t ControlCommandBytes;

  __declspec(property(get = get_ControlCommandCount, put = set_ControlCommandCount)) int32_t ControlCommandCount;

  __declspec(property(get = get_FragmentCommandBytes, put = set_FragmentCommandBytes)) int32_t FragmentCommandBytes;

  __declspec(property(get = get_FragmentCommandCount, put = set_FragmentCommandCount)) int32_t FragmentCommandCount;

  __declspec(property(get = get_PackageHeaderSize, put = set_PackageHeaderSize)) int32_t PackageHeaderSize;

  __declspec(property(get = get_ReliableCommandBytes, put = set_ReliableCommandBytes)) int32_t ReliableCommandBytes;

  __declspec(property(get = get_ReliableCommandCount, put = set_ReliableCommandCount)) int32_t ReliableCommandCount;

  __declspec(property(get = get_TimestampOfLastAck, put = set_TimestampOfLastAck)) int32_t TimestampOfLastAck;

  __declspec(property(get = get_TimestampOfLastReliableCommand, put = set_TimestampOfLastReliableCommand)) int32_t TimestampOfLastReliableCommand;

  __declspec(property(get = get_TotalCommandBytes)) int32_t TotalCommandBytes;

  __declspec(property(get = get_TotalCommandCount)) int32_t TotalCommandCount;

  __declspec(property(get = get_TotalCommandsInPackets, put = set_TotalCommandsInPackets)) int32_t TotalCommandsInPackets;

  __declspec(property(get = get_TotalPacketBytes)) int32_t TotalPacketBytes;

  __declspec(property(get = get_TotalPacketCount, put = set_TotalPacketCount)) int32_t TotalPacketCount;

  __declspec(property(get = get_UnreliableCommandBytes, put = set_UnreliableCommandBytes)) int32_t UnreliableCommandBytes;

  __declspec(property(get = get_UnreliableCommandCount, put = set_UnreliableCommandCount)) int32_t UnreliableCommandCount;

  /// @brief Field <ControlCommandBytes>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__ControlCommandBytes_k__BackingField, put = __cordl_internal_set__ControlCommandBytes_k__BackingField)) int32_t _ControlCommandBytes_k__BackingField;

  /// @brief Field <ControlCommandCount>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__ControlCommandCount_k__BackingField, put = __cordl_internal_set__ControlCommandCount_k__BackingField)) int32_t _ControlCommandCount_k__BackingField;

  /// @brief Field <FragmentCommandBytes>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__FragmentCommandBytes_k__BackingField,
                      put = __cordl_internal_set__FragmentCommandBytes_k__BackingField)) int32_t _FragmentCommandBytes_k__BackingField;

  /// @brief Field <FragmentCommandCount>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__FragmentCommandCount_k__BackingField,
                      put = __cordl_internal_set__FragmentCommandCount_k__BackingField)) int32_t _FragmentCommandCount_k__BackingField;

  /// @brief Field <PackageHeaderSize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__PackageHeaderSize_k__BackingField, put = __cordl_internal_set__PackageHeaderSize_k__BackingField)) int32_t _PackageHeaderSize_k__BackingField;

  /// @brief Field <ReliableCommandBytes>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__ReliableCommandBytes_k__BackingField,
                      put = __cordl_internal_set__ReliableCommandBytes_k__BackingField)) int32_t _ReliableCommandBytes_k__BackingField;

  /// @brief Field <ReliableCommandCount>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__ReliableCommandCount_k__BackingField,
                      put = __cordl_internal_set__ReliableCommandCount_k__BackingField)) int32_t _ReliableCommandCount_k__BackingField;

  /// @brief Field <TimestampOfLastAck>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__TimestampOfLastAck_k__BackingField, put = __cordl_internal_set__TimestampOfLastAck_k__BackingField)) int32_t _TimestampOfLastAck_k__BackingField;

  /// @brief Field <TimestampOfLastReliableCommand>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__TimestampOfLastReliableCommand_k__BackingField,
                      put = __cordl_internal_set__TimestampOfLastReliableCommand_k__BackingField)) int32_t _TimestampOfLastReliableCommand_k__BackingField;

  /// @brief Field <TotalCommandsInPackets>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__TotalCommandsInPackets_k__BackingField,
                      put = __cordl_internal_set__TotalCommandsInPackets_k__BackingField)) int32_t _TotalCommandsInPackets_k__BackingField;

  /// @brief Field <TotalPacketCount>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__TotalPacketCount_k__BackingField, put = __cordl_internal_set__TotalPacketCount_k__BackingField)) int32_t _TotalPacketCount_k__BackingField;

  /// @brief Field <UnreliableCommandBytes>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__UnreliableCommandBytes_k__BackingField,
                      put = __cordl_internal_set__UnreliableCommandBytes_k__BackingField)) int32_t _UnreliableCommandBytes_k__BackingField;

  /// @brief Field <UnreliableCommandCount>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__UnreliableCommandCount_k__BackingField,
                      put = __cordl_internal_set__UnreliableCommandCount_k__BackingField)) int32_t _UnreliableCommandCount_k__BackingField;

  /// @brief Method CountControlCommand, addr 0x2ac1b2c, size 0x1c, virtual false, abstract: false, final false
  inline void CountControlCommand(int32_t size);

  /// @brief Method CountFragmentOpCommand, addr 0x2ac3678, size 0x1c, virtual false, abstract: false, final false
  inline void CountFragmentOpCommand(int32_t size);

  /// @brief Method CountReliableOpCommand, addr 0x2ab7a6c, size 0x1c, virtual false, abstract: false, final false
  inline void CountReliableOpCommand(int32_t size);

  /// @brief Method CountUnreliableOpCommand, addr 0x2ab7a88, size 0x1c, virtual false, abstract: false, final false
  inline void CountUnreliableOpCommand(int32_t size);

  static inline ::ExitGames::Client::Photon::TrafficStats* New_ctor(int32_t packageHeaderSize);

  /// @brief Method ToString, addr 0x2ac3694, size 0x1d8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__ControlCommandBytes_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ControlCommandBytes_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ControlCommandCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ControlCommandCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__FragmentCommandBytes_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__FragmentCommandBytes_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__FragmentCommandCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__FragmentCommandCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__PackageHeaderSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__PackageHeaderSize_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ReliableCommandBytes_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ReliableCommandBytes_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ReliableCommandCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ReliableCommandCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__TimestampOfLastAck_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__TimestampOfLastAck_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__TimestampOfLastReliableCommand_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__TimestampOfLastReliableCommand_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__TotalCommandsInPackets_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__TotalCommandsInPackets_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__TotalPacketCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__TotalPacketCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__UnreliableCommandBytes_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__UnreliableCommandBytes_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__UnreliableCommandCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__UnreliableCommandCount_k__BackingField();

  constexpr void __cordl_internal_set__ControlCommandBytes_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__ControlCommandCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__FragmentCommandBytes_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__FragmentCommandCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PackageHeaderSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__ReliableCommandBytes_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__ReliableCommandCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__TimestampOfLastAck_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__TimestampOfLastReliableCommand_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__TotalCommandsInPackets_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__TotalPacketCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__UnreliableCommandBytes_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__UnreliableCommandCount_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2ac35f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t packageHeaderSize);

  /// @brief Method get_ControlCommandBytes, addr 0x2ac35e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ControlCommandBytes();

  /// @brief Method get_ControlCommandCount, addr 0x2ac3584, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ControlCommandCount();

  /// @brief Method get_FragmentCommandBytes, addr 0x2ac35d4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FragmentCommandBytes();

  /// @brief Method get_FragmentCommandCount, addr 0x2ac3574, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FragmentCommandCount();

  /// @brief Method get_PackageHeaderSize, addr 0x2ac3544, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PackageHeaderSize();

  /// @brief Method get_ReliableCommandBytes, addr 0x2ac35b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReliableCommandBytes();

  /// @brief Method get_ReliableCommandCount, addr 0x2ac3554, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ReliableCommandCount();

  /// @brief Method get_TimestampOfLastAck, addr 0x2ac3658, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TimestampOfLastAck();

  /// @brief Method get_TimestampOfLastReliableCommand, addr 0x2ac3668, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TimestampOfLastReliableCommand();

  /// @brief Method get_TotalCommandBytes, addr 0x2ac362c, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_TotalCommandBytes();

  /// @brief Method get_TotalCommandCount, addr 0x2ac361c, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_TotalCommandCount();

  /// @brief Method get_TotalCommandsInPackets, addr 0x2ac35a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TotalCommandsInPackets();

  /// @brief Method get_TotalPacketBytes, addr 0x2ac363c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_TotalPacketBytes();

  /// @brief Method get_TotalPacketCount, addr 0x2ac3594, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TotalPacketCount();

  /// @brief Method get_UnreliableCommandBytes, addr 0x2ac35c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_UnreliableCommandBytes();

  /// @brief Method get_UnreliableCommandCount, addr 0x2ac3564, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_UnreliableCommandCount();

  /// @brief Method set_ControlCommandBytes, addr 0x2ac35ec, size 0x8, virtual false, abstract: false, final false
  inline void set_ControlCommandBytes(int32_t value);

  /// @brief Method set_ControlCommandCount, addr 0x2ac358c, size 0x8, virtual false, abstract: false, final false
  inline void set_ControlCommandCount(int32_t value);

  /// @brief Method set_FragmentCommandBytes, addr 0x2ac35dc, size 0x8, virtual false, abstract: false, final false
  inline void set_FragmentCommandBytes(int32_t value);

  /// @brief Method set_FragmentCommandCount, addr 0x2ac357c, size 0x8, virtual false, abstract: false, final false
  inline void set_FragmentCommandCount(int32_t value);

  /// @brief Method set_PackageHeaderSize, addr 0x2ac354c, size 0x8, virtual false, abstract: false, final false
  inline void set_PackageHeaderSize(int32_t value);

  /// @brief Method set_ReliableCommandBytes, addr 0x2ac35bc, size 0x8, virtual false, abstract: false, final false
  inline void set_ReliableCommandBytes(int32_t value);

  /// @brief Method set_ReliableCommandCount, addr 0x2ac355c, size 0x8, virtual false, abstract: false, final false
  inline void set_ReliableCommandCount(int32_t value);

  /// @brief Method set_TimestampOfLastAck, addr 0x2ac3660, size 0x8, virtual false, abstract: false, final false
  inline void set_TimestampOfLastAck(int32_t value);

  /// @brief Method set_TimestampOfLastReliableCommand, addr 0x2ac3670, size 0x8, virtual false, abstract: false, final false
  inline void set_TimestampOfLastReliableCommand(int32_t value);

  /// @brief Method set_TotalCommandsInPackets, addr 0x2ac35ac, size 0x8, virtual false, abstract: false, final false
  inline void set_TotalCommandsInPackets(int32_t value);

  /// @brief Method set_TotalPacketCount, addr 0x2ac359c, size 0x8, virtual false, abstract: false, final false
  inline void set_TotalPacketCount(int32_t value);

  /// @brief Method set_UnreliableCommandBytes, addr 0x2ac35cc, size 0x8, virtual false, abstract: false, final false
  inline void set_UnreliableCommandBytes(int32_t value);

  /// @brief Method set_UnreliableCommandCount, addr 0x2ac356c, size 0x8, virtual false, abstract: false, final false
  inline void set_UnreliableCommandCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrafficStats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrafficStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrafficStats(TrafficStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrafficStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrafficStats(TrafficStats const&) = delete;

  /// @brief Field <PackageHeaderSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____PackageHeaderSize_k__BackingField;

  /// @brief Field <ReliableCommandCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____ReliableCommandCount_k__BackingField;

  /// @brief Field <UnreliableCommandCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____UnreliableCommandCount_k__BackingField;

  /// @brief Field <FragmentCommandCount>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____FragmentCommandCount_k__BackingField;

  /// @brief Field <ControlCommandCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____ControlCommandCount_k__BackingField;

  /// @brief Field <TotalPacketCount>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____TotalPacketCount_k__BackingField;

  /// @brief Field <TotalCommandsInPackets>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____TotalCommandsInPackets_k__BackingField;

  /// @brief Field <ReliableCommandBytes>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____ReliableCommandBytes_k__BackingField;

  /// @brief Field <UnreliableCommandBytes>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____UnreliableCommandBytes_k__BackingField;

  /// @brief Field <FragmentCommandBytes>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____FragmentCommandBytes_k__BackingField;

  /// @brief Field <ControlCommandBytes>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____ControlCommandBytes_k__BackingField;

  /// @brief Field <TimestampOfLastAck>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____TimestampOfLastAck_k__BackingField;

  /// @brief Field <TimestampOfLastReliableCommand>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____TimestampOfLastReliableCommand_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::TrafficStats, 0x48>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____PackageHeaderSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____ReliableCommandCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____UnreliableCommandCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____FragmentCommandCount_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____ControlCommandCount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____TotalPacketCount_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____TotalCommandsInPackets_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____ReliableCommandBytes_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____UnreliableCommandBytes_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____FragmentCommandBytes_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____ControlCommandBytes_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____TimestampOfLastAck_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::TrafficStats, ____TimestampOfLastReliableCommand_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::TrafficStats);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::TrafficStats*, "ExitGames.Client.Photon", "TrafficStats");
