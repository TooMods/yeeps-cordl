#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonStatsGui)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonStatsGui;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::PhotonStatsGui);
// Type: Photon.Pun.UtilityScripts::PhotonStatsGui
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::PhotonStatsGui*
class CORDL_TYPE PhotonStatsGui : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field WindowId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_WindowId, put = __cordl_internal_set_WindowId)) int32_t WindowId;

  /// @brief Field buttonsOn, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_buttonsOn, put = __cordl_internal_set_buttonsOn)) bool buttonsOn;

  /// @brief Field healthStatsVisible, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_healthStatsVisible, put = __cordl_internal_set_healthStatsVisible)) bool healthStatsVisible;

  /// @brief Field statsOn, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_statsOn, put = __cordl_internal_set_statsOn)) bool statsOn;

  /// @brief Field statsRect, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_statsRect, put = __cordl_internal_set_statsRect))::UnityEngine::Rect statsRect;

  /// @brief Field statsWindowOn, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_statsWindowOn, put = __cordl_internal_set_statsWindowOn)) bool statsWindowOn;

  /// @brief Field trafficStatsOn, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_trafficStatsOn, put = __cordl_internal_set_trafficStatsOn)) bool trafficStatsOn;

  static inline ::Photon::Pun::UtilityScripts::PhotonStatsGui* New_ctor();

  /// @brief Method OnGUI, addr 0x1ebfffc, size 0x1c0, virtual false, abstract: false, final false
  inline void OnGUI();

  /// @brief Method Start, addr 0x1ebff58, size 0x60, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TrafficStatsWindow, addr 0x1ec01bc, size 0xeec, virtual false, abstract: false, final false
  inline void TrafficStatsWindow(int32_t windowID);

  /// @brief Method Update, addr 0x1ebffb8, size 0x44, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get_WindowId() const;

  constexpr int32_t& __cordl_internal_get_WindowId();

  constexpr bool const& __cordl_internal_get_buttonsOn() const;

  constexpr bool& __cordl_internal_get_buttonsOn();

  constexpr bool const& __cordl_internal_get_healthStatsVisible() const;

  constexpr bool& __cordl_internal_get_healthStatsVisible();

  constexpr bool const& __cordl_internal_get_statsOn() const;

  constexpr bool& __cordl_internal_get_statsOn();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_statsRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_statsRect();

  constexpr bool const& __cordl_internal_get_statsWindowOn() const;

  constexpr bool& __cordl_internal_get_statsWindowOn();

  constexpr bool const& __cordl_internal_get_trafficStatsOn() const;

  constexpr bool& __cordl_internal_get_trafficStatsOn();

  constexpr void __cordl_internal_set_WindowId(int32_t value);

  constexpr void __cordl_internal_set_buttonsOn(bool value);

  constexpr void __cordl_internal_set_healthStatsVisible(bool value);

  constexpr void __cordl_internal_set_statsOn(bool value);

  constexpr void __cordl_internal_set_statsRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_statsWindowOn(bool value);

  constexpr void __cordl_internal_set_trafficStatsOn(bool value);

  /// @brief Method .ctor, addr 0x1ec10a8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonStatsGui();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonStatsGui", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonStatsGui(PhotonStatsGui&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonStatsGui", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonStatsGui(PhotonStatsGui const&) = delete;

  /// @brief Field statsWindowOn, offset: 0x18, size: 0x1, def value: None
  bool ___statsWindowOn;

  /// @brief Field statsOn, offset: 0x19, size: 0x1, def value: None
  bool ___statsOn;

  /// @brief Field healthStatsVisible, offset: 0x1a, size: 0x1, def value: None
  bool ___healthStatsVisible;

  /// @brief Field trafficStatsOn, offset: 0x1b, size: 0x1, def value: None
  bool ___trafficStatsOn;

  /// @brief Field buttonsOn, offset: 0x1c, size: 0x1, def value: None
  bool ___buttonsOn;

  /// @brief Field statsRect, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rect ___statsRect;

  /// @brief Field WindowId, offset: 0x30, size: 0x4, def value: None
  int32_t ___WindowId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::PhotonStatsGui, 0x38>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___statsWindowOn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___statsOn) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___healthStatsVisible) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___trafficStatsOn) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___buttonsOn) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___statsRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___WindowId) == 0x30, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PhotonStatsGui);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PhotonStatsGui*, "Photon.Pun.UtilityScripts", "PhotonStatsGui");
