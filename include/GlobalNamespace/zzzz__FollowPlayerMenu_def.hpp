#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileSlidingPage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FollowPlayerMenu)
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class PlayerHeadLayout2D;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class FollowPlayerMenu;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FollowPlayerMenu);
// Type: ::FollowPlayerMenu
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FollowPlayerMenu*
class CORDL_TYPE FollowPlayerMenu : public ::GlobalNamespace::MobileSlidingPage {
public:
  // Declarations
  /// @brief Field headerText, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_headerText, put = __cordl_internal_set_headerText))::UnityW<::UnityEngine::UI::Text> headerText;

  /// @brief Field playerHeadLayout, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_playerHeadLayout, put = __cordl_internal_set_playerHeadLayout))::UnityW<::GlobalNamespace::PlayerHeadLayout2D> playerHeadLayout;

  static inline ::GlobalNamespace::FollowPlayerMenu* New_ctor();

  /// @brief Method OnDeregister, addr 0x2e05ff0, size 0x1c8, virtual true, abstract: false, final false
  inline void OnDeregister();

  /// @brief Method OnPlayerDataAdded, addr 0x2e06718, size 0x4, virtual false, abstract: false, final false
  inline void OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerDataRemoved, addr 0x2e0671c, size 0x4, virtual false, abstract: false, final false
  inline void OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerHeadSelected, addr 0x2e06720, size 0x38, virtual false, abstract: false, final false
  inline void OnPlayerHeadSelected(::StringW userID);

  /// @brief Method OnRegister, addr 0x2e05e68, size 0x184, virtual true, abstract: false, final false
  inline void OnRegister();

  /// @brief Method OnSetActive, addr 0x2e061bc, size 0x20, virtual true, abstract: false, final false
  inline void OnSetActive(bool newActive);

  /// @brief Method OnStart, addr 0x2e05da0, size 0xc4, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method RefreshHeader, addr 0x2e06544, size 0x1d4, virtual false, abstract: false, final false
  inline void RefreshHeader();

  /// @brief Method RegeneratePlayerHeadLayout, addr 0x2e061e0, size 0x364, virtual false, abstract: false, final false
  inline void RegeneratePlayerHeadLayout();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_headerText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_headerText();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadLayout2D> const& __cordl_internal_get_playerHeadLayout() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadLayout2D>& __cordl_internal_get_playerHeadLayout();

  constexpr void __cordl_internal_set_headerText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_playerHeadLayout(::UnityW<::GlobalNamespace::PlayerHeadLayout2D> value);

  /// @brief Method .ctor, addr 0x2e06758, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FollowPlayerMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FollowPlayerMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FollowPlayerMenu(FollowPlayerMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FollowPlayerMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FollowPlayerMenu(FollowPlayerMenu const&) = delete;

  /// @brief Field playerHeadLayout, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeadLayout2D> ___playerHeadLayout;

  /// @brief Field headerText, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___headerText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FollowPlayerMenu, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowPlayerMenu, ___playerHeadLayout) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FollowPlayerMenu, ___headerText) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FollowPlayerMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FollowPlayerMenu*, "", "FollowPlayerMenu");
