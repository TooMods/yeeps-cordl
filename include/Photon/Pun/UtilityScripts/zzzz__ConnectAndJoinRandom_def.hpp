#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectAndJoinRandom)
namespace Photon::Realtime {
struct DisconnectCause;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class ConnectAndJoinRandom;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom);
// Type: Photon.Pun.UtilityScripts::ConnectAndJoinRandom
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::ConnectAndJoinRandom*
class CORDL_TYPE ConnectAndJoinRandom : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
  // Declarations
  /// @brief Field AutoConnect, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_AutoConnect, put = __cordl_internal_set_AutoConnect)) bool AutoConnect;

  /// @brief Field MaxPlayers, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_MaxPlayers, put = __cordl_internal_set_MaxPlayers)) uint8_t MaxPlayers;

  /// @brief Field Version, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_Version, put = __cordl_internal_set_Version)) uint8_t Version;

  /// @brief Field playerTTL, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_playerTTL, put = __cordl_internal_set_playerTTL)) int32_t playerTTL;

  /// @brief Method ConnectNow, addr 0x1ec7f28, size 0x100, virtual false, abstract: false, final false
  inline void ConnectNow();

  static inline ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom* New_ctor();

  /// @brief Method OnConnectedToMaster, addr 0x1ec8028, size 0xd0, virtual true, abstract: false, final false
  inline void OnConnectedToMaster();

  /// @brief Method OnDisconnected, addr 0x1ec8310, size 0xec, virtual true, abstract: false, final false
  inline void OnDisconnected(::Photon::Realtime::DisconnectCause cause);

  /// @brief Method OnJoinRandomFailed, addr 0x1ec81c8, size 0x148, virtual true, abstract: false, final false
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedLobby, addr 0x1ec80f8, size 0xd0, virtual true, abstract: false, final false
  inline void OnJoinedLobby();

  /// @brief Method OnJoinedRoom, addr 0x1ec83fc, size 0xc8, virtual true, abstract: false, final false
  inline void OnJoinedRoom();

  /// @brief Method Start, addr 0x1ec7f18, size 0x10, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get_AutoConnect() const;

  constexpr bool& __cordl_internal_get_AutoConnect();

  constexpr uint8_t const& __cordl_internal_get_MaxPlayers() const;

  constexpr uint8_t& __cordl_internal_get_MaxPlayers();

  constexpr uint8_t const& __cordl_internal_get_Version() const;

  constexpr uint8_t& __cordl_internal_get_Version();

  constexpr int32_t const& __cordl_internal_get_playerTTL() const;

  constexpr int32_t& __cordl_internal_get_playerTTL();

  constexpr void __cordl_internal_set_AutoConnect(bool value);

  constexpr void __cordl_internal_set_MaxPlayers(uint8_t value);

  constexpr void __cordl_internal_set_Version(uint8_t value);

  constexpr void __cordl_internal_set_playerTTL(int32_t value);

  /// @brief Method .ctor, addr 0x1ec84c4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectAndJoinRandom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectAndJoinRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectAndJoinRandom(ConnectAndJoinRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectAndJoinRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectAndJoinRandom(ConnectAndJoinRandom const&) = delete;

  /// @brief Field AutoConnect, offset: 0x20, size: 0x1, def value: None
  bool ___AutoConnect;

  /// @brief Field Version, offset: 0x21, size: 0x1, def value: None
  uint8_t ___Version;

  /// @brief Field MaxPlayers, offset: 0x22, size: 0x1, def value: None
  uint8_t ___MaxPlayers;

  /// @brief Field playerTTL, offset: 0x24, size: 0x4, def value: None
  int32_t ___playerTTL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, ___AutoConnect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, ___Version) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, ___MaxPlayers) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, ___playerTTL) == 0x24, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*, "Photon.Pun.UtilityScripts", "ConnectAndJoinRandom");
