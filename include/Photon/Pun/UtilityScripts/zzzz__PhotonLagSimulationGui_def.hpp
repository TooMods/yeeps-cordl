#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonLagSimulationGui)
namespace ExitGames::Client::Photon {
class PhotonPeer;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonLagSimulationGui;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui);
// Type: Photon.Pun.UtilityScripts::PhotonLagSimulationGui
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PhotonLagSimulationGui*
class CORDL_TYPE PhotonLagSimulationGui : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Peer, put = set_Peer))::ExitGames::Client::Photon::PhotonPeer* Peer;

  /// @brief Field Visible, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_Visible, put = __cordl_internal_set_Visible)) bool Visible;

  /// @brief Field WindowId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_WindowId, put = __cordl_internal_set_WindowId)) int32_t WindowId;

  /// @brief Field WindowRect, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_WindowRect, put = __cordl_internal_set_WindowRect))::UnityEngine::Rect WindowRect;

  /// @brief Field <Peer>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Peer_k__BackingField, put = __cordl_internal_set__Peer_k__BackingField))::ExitGames::Client::Photon::PhotonPeer* _Peer_k__BackingField;

  /// @brief Method NetSimHasNoPeerWindow, addr 0x1ebf77c, size 0x98, virtual false, abstract: false, final false
  inline void NetSimHasNoPeerWindow(int32_t windowId);

  /// @brief Method NetSimWindow, addr 0x1ebf814, size 0x6e0, virtual false, abstract: false, final false
  inline void NetSimWindow(int32_t windowId);

  static inline ::Photon::Pun::UtilityScripts::PhotonLagSimulationGui* New_ctor();

  /// @brief Method OnGUI, addr 0x1ebf618, size 0x164, virtual false, abstract: false, final false
  inline void OnGUI();

  /// @brief Method Start, addr 0x1ebf5ac, size 0x6c, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get_Visible() const;

  constexpr bool& __cordl_internal_get_Visible();

  constexpr int32_t const& __cordl_internal_get_WindowId() const;

  constexpr int32_t& __cordl_internal_get_WindowId();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_WindowRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_WindowRect();

  constexpr ::ExitGames::Client::Photon::PhotonPeer*& __cordl_internal_get__Peer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::PhotonPeer*> const& __cordl_internal_get__Peer_k__BackingField() const;

  constexpr void __cordl_internal_set_Visible(bool value);

  constexpr void __cordl_internal_set_WindowId(int32_t value);

  constexpr void __cordl_internal_set_WindowRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set__Peer_k__BackingField(::ExitGames::Client::Photon::PhotonPeer* value);

  /// @brief Method .ctor, addr 0x1ebfef4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Peer, addr 0x1ebf59c, size 0x8, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::PhotonPeer* get_Peer();

  /// @brief Method set_Peer, addr 0x1ebf5a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Peer(::ExitGames::Client::Photon::PhotonPeer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonLagSimulationGui();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonLagSimulationGui", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonLagSimulationGui(PhotonLagSimulationGui&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonLagSimulationGui", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonLagSimulationGui(PhotonLagSimulationGui const&) = delete;

  /// @brief Field WindowRect, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rect ___WindowRect;

  /// @brief Field WindowId, offset: 0x28, size: 0x4, def value: None
  int32_t ___WindowId;

  /// @brief Field Visible, offset: 0x2c, size: 0x1, def value: None
  bool ___Visible;

  /// @brief Field <Peer>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ExitGames::Client::Photon::PhotonPeer* ____Peer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, ___WindowRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, ___WindowId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, ___Visible) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui, ____Peer_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PhotonLagSimulationGui*, "Photon.Pun.UtilityScripts", "PhotonLagSimulationGui");
