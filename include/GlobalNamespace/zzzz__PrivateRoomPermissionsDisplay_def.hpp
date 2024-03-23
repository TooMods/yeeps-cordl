#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateRoomPermissionsDisplay)
namespace GlobalNamespace {
struct PrivateRoomPermissions;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivateRoomPermissionsDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivateRoomPermissionsDisplay);
// Type: ::PrivateRoomPermissionsDisplay
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PrivateRoomPermissionsDisplay*
class CORDL_TYPE PrivateRoomPermissionsDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field buttons, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_buttons,
                      put = __cordl_internal_set_buttons))::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> buttons;

  /// @brief Field isMaster, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isMaster, put = __cordl_internal_set_isMaster)) bool isMaster;

  /// @brief Field permissionLevelText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_permissionLevelText, put = __cordl_internal_set_permissionLevelText))::UnityW<::UnityEngine::UI::Text> permissionLevelText;

  /// @brief Method DisplayPermissionLevel, addr 0x1554f34, size 0x1f4, virtual false, abstract: false, final false
  inline void DisplayPermissionLevel(::GlobalNamespace::PrivateRoomPermissions permissionLevel);

  static inline ::GlobalNamespace::PrivateRoomPermissionsDisplay* New_ctor();

  /// @brief Method OnButtonPressed, addr 0x1555304, size 0x248, virtual false, abstract: false, final false
  inline void OnButtonPressed(int32_t permissionIndex);

  /// @brief Method OnDisable, addr 0x1555128, size 0x1d8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1554bfc, size 0x338, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPrivateRoomPermissionsUpdated, addr 0x1555300, size 0x4, virtual false, abstract: false, final false
  inline void OnPrivateRoomPermissionsUpdated(::GlobalNamespace::PrivateRoomPermissions newPermissionLevel);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> const& __cordl_internal_get_buttons() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*>& __cordl_internal_get_buttons();

  constexpr bool const& __cordl_internal_get_isMaster() const;

  constexpr bool& __cordl_internal_get_isMaster();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_permissionLevelText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_permissionLevelText();

  constexpr void __cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> value);

  constexpr void __cordl_internal_set_isMaster(bool value);

  constexpr void __cordl_internal_set_permissionLevelText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x155554c, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateRoomPermissionsDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomPermissionsDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateRoomPermissionsDisplay(PrivateRoomPermissionsDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateRoomPermissionsDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateRoomPermissionsDisplay(PrivateRoomPermissionsDisplay const&) = delete;

  /// @brief Field permissionLevelText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___permissionLevelText;

  /// @brief Field buttons, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SimpleButtonController>, ::Array<::UnityW<::GlobalNamespace::SimpleButtonController>>*> ___buttons;

  /// @brief Field isMaster, offset: 0x28, size: 0x1, def value: None
  bool ___isMaster;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivateRoomPermissionsDisplay, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomPermissionsDisplay, ___permissionLevelText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomPermissionsDisplay, ___buttons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomPermissionsDisplay, ___isMaster) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivateRoomPermissionsDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivateRoomPermissionsDisplay*, "", "PrivateRoomPermissionsDisplay");
