#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RoomModeDisplay)
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomModeDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomModeDisplay);
// Type: ::RoomModeDisplay
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomModeDisplay*
class CORDL_TYPE RoomModeDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field autoCyclePreface, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_autoCyclePreface, put = __cordl_internal_set_autoCyclePreface))::StringW autoCyclePreface;

  /// @brief Field creativeModeText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_creativeModeText, put = __cordl_internal_set_creativeModeText))::StringW creativeModeText;

  /// @brief Field curRoomData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_curRoomData, put = __cordl_internal_set_curRoomData))::GlobalNamespace::RoomData* curRoomData;

  /// @brief Field isRegistered, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field nextAutoCycleRefreshTime, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAutoCycleRefreshTime, put = __cordl_internal_set_nextAutoCycleRefreshTime)) float_t nextAutoCycleRefreshTime;

  /// @brief Field playModeText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_playModeText, put = __cordl_internal_set_playModeText))::StringW playModeText;

  /// @brief Field roomModeText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roomModeText, put = __cordl_internal_set_roomModeText))::UnityW<::UnityEngine::UI::Text> roomModeText;

  /// @brief Field shouldRefreshAutoCycleMessage, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldRefreshAutoCycleMessage, put = __cordl_internal_set_shouldRefreshAutoCycleMessage)) bool shouldRefreshAutoCycleMessage;

  /// @brief Field switchToCreativeButton, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_switchToCreativeButton, put = __cordl_internal_set_switchToCreativeButton))::UnityW<::GlobalNamespace::SimpleButtonController> switchToCreativeButton;

  /// @brief Field switchToPlayButton, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_switchToPlayButton, put = __cordl_internal_set_switchToPlayButton))::UnityW<::GlobalNamespace::SimpleButtonController> switchToPlayButton;

  /// @brief Method DisplayStatusError, addr 0xf23704, size 0xc8, virtual false, abstract: false, final false
  inline void DisplayStatusError(::StringW message);

  /// @brief Method ExecuteSwitchToCreativeMode, addr 0xf23954, size 0x50, virtual false, abstract: false, final false
  inline void ExecuteSwitchToCreativeMode();

  /// @brief Method ExecuteSwitchToPlayMode, addr 0xf237cc, size 0x50, virtual false, abstract: false, final false
  inline void ExecuteSwitchToPlayMode();

  /// @brief Method GetTimeUntilAutoCycle, addr 0xf233bc, size 0x138, virtual false, abstract: false, final false
  inline ::StringW GetTimeUntilAutoCycle();

  static inline ::GlobalNamespace::RoomModeDisplay* New_ctor();

  /// @brief Method OnDisable, addr 0xf23100, size 0x2b0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf22ad8, size 0x258, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsCreativeModeUpdated, addr 0xf233b0, size 0x4, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnRoomLoaded, addr 0xf233b4, size 0x4, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomUnloaded, addr 0xf233b8, size 0x4, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method OnSwitchToCreativeButtonPressed, addr 0xf2381c, size 0x138, virtual false, abstract: false, final false
  inline void OnSwitchToCreativeButtonPressed();

  /// @brief Method OnSwitchToPlayButtonPressed, addr 0xf235cc, size 0x138, virtual false, abstract: false, final false
  inline void OnSwitchToPlayButtonPressed();

  /// @brief Method Refresh, addr 0xf22d30, size 0x3d0, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Update, addr 0xf234f4, size 0xd8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <OnSwitchToCreativeButtonPressed>b__23_0, addr 0xf23a40, size 0xc, virtual false, abstract: false, final false
  inline void _OnSwitchToCreativeButtonPressed_b__23_0(bool approved);

  /// @brief Method <OnSwitchToPlayButtonPressed>b__19_0, addr 0xf23a34, size 0xc, virtual false, abstract: false, final false
  inline void _OnSwitchToPlayButtonPressed_b__19_0(bool approved);

  constexpr ::StringW const& __cordl_internal_get_autoCyclePreface() const;

  constexpr ::StringW& __cordl_internal_get_autoCyclePreface();

  constexpr ::StringW const& __cordl_internal_get_creativeModeText() const;

  constexpr ::StringW& __cordl_internal_get_creativeModeText();

  constexpr ::GlobalNamespace::RoomData*& __cordl_internal_get_curRoomData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomData*> const& __cordl_internal_get_curRoomData() const;

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr float_t const& __cordl_internal_get_nextAutoCycleRefreshTime() const;

  constexpr float_t& __cordl_internal_get_nextAutoCycleRefreshTime();

  constexpr ::StringW const& __cordl_internal_get_playModeText() const;

  constexpr ::StringW& __cordl_internal_get_playModeText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_roomModeText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_roomModeText();

  constexpr bool const& __cordl_internal_get_shouldRefreshAutoCycleMessage() const;

  constexpr bool& __cordl_internal_get_shouldRefreshAutoCycleMessage();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_switchToCreativeButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_switchToCreativeButton();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_switchToPlayButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_switchToPlayButton();

  constexpr void __cordl_internal_set_autoCyclePreface(::StringW value);

  constexpr void __cordl_internal_set_creativeModeText(::StringW value);

  constexpr void __cordl_internal_set_curRoomData(::GlobalNamespace::RoomData* value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_nextAutoCycleRefreshTime(float_t value);

  constexpr void __cordl_internal_set_playModeText(::StringW value);

  constexpr void __cordl_internal_set_roomModeText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_shouldRefreshAutoCycleMessage(bool value);

  constexpr void __cordl_internal_set_switchToCreativeButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_switchToPlayButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  /// @brief Method .ctor, addr 0xf239a4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomModeDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomModeDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomModeDisplay(RoomModeDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomModeDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomModeDisplay(RoomModeDisplay const&) = delete;

  /// @brief Field roomModeText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___roomModeText;

  /// @brief Field playModeText, offset: 0x20, size: 0x8, def value: None
  ::StringW ___playModeText;

  /// @brief Field creativeModeText, offset: 0x28, size: 0x8, def value: None
  ::StringW ___creativeModeText;

  /// @brief Field autoCyclePreface, offset: 0x30, size: 0x8, def value: None
  ::StringW ___autoCyclePreface;

  /// @brief Field curRoomData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::RoomData* ___curRoomData;

  /// @brief Field shouldRefreshAutoCycleMessage, offset: 0x40, size: 0x1, def value: None
  bool ___shouldRefreshAutoCycleMessage;

  /// @brief Field nextAutoCycleRefreshTime, offset: 0x44, size: 0x4, def value: None
  float_t ___nextAutoCycleRefreshTime;

  /// @brief Field switchToPlayButton, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___switchToPlayButton;

  /// @brief Field switchToCreativeButton, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___switchToCreativeButton;

  /// @brief Field isRegistered, offset: 0x58, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field failedToEnterCreativeModePreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToEnterCreativeModePreface{ u"Failed to enter creative mode: " };

  /// @brief Field failedToEnterPlayModePreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToEnterPlayModePreface{ u"Failed to enter play mode: " };

  /// @brief Field timeBetweenAutoCycleMessageRefreshes offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenAutoCycleMessageRefreshes{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomModeDisplay, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___roomModeText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___playModeText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___creativeModeText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___autoCyclePreface) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___curRoomData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___shouldRefreshAutoCycleMessage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___nextAutoCycleRefreshTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___switchToPlayButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___switchToCreativeButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomModeDisplay, ___isRegistered) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomModeDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomModeDisplay*, "", "RoomModeDisplay");
