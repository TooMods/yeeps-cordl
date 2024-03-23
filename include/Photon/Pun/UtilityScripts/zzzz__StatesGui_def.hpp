#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StatesGui)
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class StatesGui;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::StatesGui);
// Type: Photon.Pun.UtilityScripts::StatesGui
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::StatesGui*
class CORDL_TYPE StatesGui : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field AppVersion, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_AppVersion, put = __cordl_internal_set_AppVersion)) bool AppVersion;

  /// @brief Field Buttons, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_Buttons, put = __cordl_internal_set_Buttons)) bool Buttons;

  /// @brief Field DetailedConnection, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_DetailedConnection, put = __cordl_internal_set_DetailedConnection)) bool DetailedConnection;

  /// @brief Field DontDestroy, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_DontDestroy, put = __cordl_internal_set_DontDestroy)) bool DontDestroy;

  /// @brief Field EventsIn, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_EventsIn, put = __cordl_internal_set_EventsIn)) bool EventsIn;

  /// @brief Field ExpectedUsers, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_ExpectedUsers, put = __cordl_internal_set_ExpectedUsers)) bool ExpectedUsers;

  /// @brief Field GuiOffset, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_GuiOffset, put = __cordl_internal_set_GuiOffset))::UnityEngine::Rect GuiOffset;

  /// @brief Field GuiRect, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_GuiRect, put = __cordl_internal_set_GuiRect))::UnityEngine::Rect GuiRect;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::UnityW<::Photon::Pun::UtilityScripts::StatesGui> Instance;

  /// @brief Field LocalPlayer, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_LocalPlayer, put = __cordl_internal_set_LocalPlayer)) bool LocalPlayer;

  /// @brief Field Others, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get_Others, put = __cordl_internal_set_Others)) bool Others;

  /// @brief Field PlayerProps, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_PlayerProps, put = __cordl_internal_set_PlayerProps)) bool PlayerProps;

  /// @brief Field Room, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_Room, put = __cordl_internal_set_Room)) bool Room;

  /// @brief Field RoomProps, offset 0x2f, size 0x1
  __declspec(property(get = __cordl_internal_get_RoomProps, put = __cordl_internal_set_RoomProps)) bool RoomProps;

  /// @brief Field Server, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_Server, put = __cordl_internal_set_Server)) bool Server;

  /// @brief Field ServerTimestamp, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_ServerTimestamp, put = __cordl_internal_set_ServerTimestamp)) bool ServerTimestamp;

  /// @brief Field UserId, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_UserId, put = __cordl_internal_set_UserId)) bool UserId;

  /// @brief Field native_height, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_native_height, put = __cordl_internal_set_native_height)) float_t native_height;

  /// @brief Field native_width, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_native_width, put = __cordl_internal_set_native_width)) float_t native_width;

  /// @brief Method Awake, addr 0x1ec16bc, size 0x16c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Photon::Pun::UtilityScripts::StatesGui* New_ctor();

  /// @brief Method OnDisable, addr 0x1ec1828, size 0x98, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnGUI, addr 0x1ec18c0, size 0x11fc, virtual false, abstract: false, final false
  inline void OnGUI();

  /// @brief Method PlayerToString, addr 0x1ec2abc, size 0x398, virtual false, abstract: false, final false
  inline ::StringW PlayerToString(::Photon::Realtime::Player* player);

  constexpr bool const& __cordl_internal_get_AppVersion() const;

  constexpr bool& __cordl_internal_get_AppVersion();

  constexpr bool const& __cordl_internal_get_Buttons() const;

  constexpr bool& __cordl_internal_get_Buttons();

  constexpr bool const& __cordl_internal_get_DetailedConnection() const;

  constexpr bool& __cordl_internal_get_DetailedConnection();

  constexpr bool const& __cordl_internal_get_DontDestroy() const;

  constexpr bool& __cordl_internal_get_DontDestroy();

  constexpr bool const& __cordl_internal_get_EventsIn() const;

  constexpr bool& __cordl_internal_get_EventsIn();

  constexpr bool const& __cordl_internal_get_ExpectedUsers() const;

  constexpr bool& __cordl_internal_get_ExpectedUsers();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_GuiOffset() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_GuiOffset();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_GuiRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_GuiRect();

  constexpr bool const& __cordl_internal_get_LocalPlayer() const;

  constexpr bool& __cordl_internal_get_LocalPlayer();

  constexpr bool const& __cordl_internal_get_Others() const;

  constexpr bool& __cordl_internal_get_Others();

  constexpr bool const& __cordl_internal_get_PlayerProps() const;

  constexpr bool& __cordl_internal_get_PlayerProps();

  constexpr bool const& __cordl_internal_get_Room() const;

  constexpr bool& __cordl_internal_get_Room();

  constexpr bool const& __cordl_internal_get_RoomProps() const;

  constexpr bool& __cordl_internal_get_RoomProps();

  constexpr bool const& __cordl_internal_get_Server() const;

  constexpr bool& __cordl_internal_get_Server();

  constexpr bool const& __cordl_internal_get_ServerTimestamp() const;

  constexpr bool& __cordl_internal_get_ServerTimestamp();

  constexpr bool const& __cordl_internal_get_UserId() const;

  constexpr bool& __cordl_internal_get_UserId();

  constexpr float_t const& __cordl_internal_get_native_height() const;

  constexpr float_t& __cordl_internal_get_native_height();

  constexpr float_t const& __cordl_internal_get_native_width() const;

  constexpr float_t& __cordl_internal_get_native_width();

  constexpr void __cordl_internal_set_AppVersion(bool value);

  constexpr void __cordl_internal_set_Buttons(bool value);

  constexpr void __cordl_internal_set_DetailedConnection(bool value);

  constexpr void __cordl_internal_set_DontDestroy(bool value);

  constexpr void __cordl_internal_set_EventsIn(bool value);

  constexpr void __cordl_internal_set_ExpectedUsers(bool value);

  constexpr void __cordl_internal_set_GuiOffset(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_GuiRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_LocalPlayer(bool value);

  constexpr void __cordl_internal_set_Others(bool value);

  constexpr void __cordl_internal_set_PlayerProps(bool value);

  constexpr void __cordl_internal_set_Room(bool value);

  constexpr void __cordl_internal_set_RoomProps(bool value);

  constexpr void __cordl_internal_set_Server(bool value);

  constexpr void __cordl_internal_set_ServerTimestamp(bool value);

  constexpr void __cordl_internal_set_UserId(bool value);

  constexpr void __cordl_internal_set_native_height(float_t value);

  constexpr void __cordl_internal_set_native_width(float_t value);

  /// @brief Method .ctor, addr 0x1ec2e54, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::Photon::Pun::UtilityScripts::StatesGui> getStaticF_Instance();

  static inline void setStaticF_Instance(::UnityW<::Photon::Pun::UtilityScripts::StatesGui> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StatesGui();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StatesGui", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StatesGui(StatesGui&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StatesGui", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StatesGui(StatesGui const&) = delete;

  /// @brief Field GuiOffset, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rect ___GuiOffset;

  /// @brief Field DontDestroy, offset: 0x28, size: 0x1, def value: None
  bool ___DontDestroy;

  /// @brief Field ServerTimestamp, offset: 0x29, size: 0x1, def value: None
  bool ___ServerTimestamp;

  /// @brief Field DetailedConnection, offset: 0x2a, size: 0x1, def value: None
  bool ___DetailedConnection;

  /// @brief Field Server, offset: 0x2b, size: 0x1, def value: None
  bool ___Server;

  /// @brief Field AppVersion, offset: 0x2c, size: 0x1, def value: None
  bool ___AppVersion;

  /// @brief Field UserId, offset: 0x2d, size: 0x1, def value: None
  bool ___UserId;

  /// @brief Field Room, offset: 0x2e, size: 0x1, def value: None
  bool ___Room;

  /// @brief Field RoomProps, offset: 0x2f, size: 0x1, def value: None
  bool ___RoomProps;

  /// @brief Field EventsIn, offset: 0x30, size: 0x1, def value: None
  bool ___EventsIn;

  /// @brief Field LocalPlayer, offset: 0x31, size: 0x1, def value: None
  bool ___LocalPlayer;

  /// @brief Field PlayerProps, offset: 0x32, size: 0x1, def value: None
  bool ___PlayerProps;

  /// @brief Field Others, offset: 0x33, size: 0x1, def value: None
  bool ___Others;

  /// @brief Field Buttons, offset: 0x34, size: 0x1, def value: None
  bool ___Buttons;

  /// @brief Field ExpectedUsers, offset: 0x35, size: 0x1, def value: None
  bool ___ExpectedUsers;

  /// @brief Field GuiRect, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rect ___GuiRect;

  /// @brief Field native_width, offset: 0x48, size: 0x4, def value: None
  float_t ___native_width;

  /// @brief Field native_height, offset: 0x4c, size: 0x4, def value: None
  float_t ___native_height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::StatesGui, 0x50>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___GuiOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___DontDestroy) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___ServerTimestamp) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___DetailedConnection) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___Server) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___AppVersion) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___UserId) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___Room) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___RoomProps) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___EventsIn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___LocalPlayer) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___PlayerProps) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___Others) == 0x33, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___Buttons) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___ExpectedUsers) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___GuiRect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___native_width) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::StatesGui, ___native_height) == 0x4c, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::StatesGui);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::StatesGui*, "Photon.Pun.UtilityScripts", "StatesGui");
