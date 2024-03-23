#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WorldInteractionController)
namespace GlobalNamespace {
class ButtonController;
}
namespace GlobalNamespace {
class MapSyncData;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class WorldInteractionController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WorldInteractionController);
// Type: ::WorldInteractionController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WorldInteractionController*
class CORDL_TYPE WorldInteractionController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field buildingPlans, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buildingPlans, put = __cordl_internal_set_buildingPlans))::UnityW<::UnityEngine::GameObject> buildingPlans;

  /// @brief Field switchToCreativeButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_switchToCreativeButton, put = __cordl_internal_set_switchToCreativeButton))::UnityW<::GlobalNamespace::ButtonController> switchToCreativeButton;

  /// @brief Field switchToPlayButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_switchToPlayButton, put = __cordl_internal_set_switchToPlayButton))::UnityW<::GlobalNamespace::ButtonController> switchToPlayButton;

  /// @brief Method ClearSavedWorld, addr 0xf2937c, size 0x11c, virtual false, abstract: false, final false
  inline void ClearSavedWorld();

  /// @brief Method DisplayStatusError, addr 0xf29264, size 0x8c, virtual false, abstract: false, final false
  inline void DisplayStatusError(::StringW errorMessage);

  /// @brief Method DisplayStatusSuccess, addr 0xf292f0, size 0x8c, virtual false, abstract: false, final false
  inline void DisplayStatusSuccess(::StringW successMessage);

  /// @brief Method LoadWorld, addr 0xf295fc, size 0x154, virtual false, abstract: false, final false
  inline void LoadWorld(::GlobalNamespace::MapSyncData* mapSyncData, ::StringW saveKey);

  static inline ::GlobalNamespace::WorldInteractionController* New_ctor();

  /// @brief Method OnClearSaveButtonPressed, addr 0xf298c8, size 0x4, virtual false, abstract: false, final false
  inline void OnClearSaveButtonPressed();

  /// @brief Method OnDestructiveShiftMapYNegativeButtonPressed, addr 0xf29a38, size 0xc, virtual false, abstract: false, final false
  inline void OnDestructiveShiftMapYNegativeButtonPressed();

  /// @brief Method OnIsCreativeModeUpdated, addr 0xf28f88, size 0xd8, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnLoadEmptyButtonPressed, addr 0xf298cc, size 0xc, virtual false, abstract: false, final false
  inline void OnLoadEmptyButtonPressed();

  /// @brief Method OnLoadWorldButtonPressed, addr 0xf298c4, size 0x4, virtual false, abstract: false, final false
  inline void OnLoadWorldButtonPressed();

  /// @brief Method OnSaveWorldButtonPressed, addr 0xf298c0, size 0x4, virtual false, abstract: false, final false
  inline void OnSaveWorldButtonPressed();

  /// @brief Method OnShiftMapXNegativeButtonPressed, addr 0xf299fc, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapXNegativeButtonPressed();

  /// @brief Method OnShiftMapXPositiveButtonPressed, addr 0xf299f0, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapXPositiveButtonPressed();

  /// @brief Method OnShiftMapYNegativeButtonPressed, addr 0xf29a2c, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapYNegativeButtonPressed();

  /// @brief Method OnShiftMapYPositiveButtonPressed, addr 0xf29a20, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapYPositiveButtonPressed();

  /// @brief Method OnShiftMapZNegativeButtonPressed, addr 0xf29a14, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapZNegativeButtonPressed();

  /// @brief Method OnShiftMapZPositiveButtonPressed, addr 0xf29a08, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapZPositiveButtonPressed();

  /// @brief Method OnSwitchToCreativeButtonPressed, addr 0xf29964, size 0x8c, virtual false, abstract: false, final false
  inline void OnSwitchToCreativeButtonPressed();

  /// @brief Method OnSwitchToPlayButtonPressed, addr 0xf298d8, size 0x8c, virtual false, abstract: false, final false
  inline void OnSwitchToPlayButtonPressed();

  /// @brief Method OnToggleBuildingPlansActiveButtonPressed, addr 0xf29a44, size 0x98, virtual false, abstract: false, final false
  inline void OnToggleBuildingPlansActiveButtonPressed();

  /// @brief Method OnUnlockAllPatternsButtonPressed, addr 0xf29adc, size 0x4, virtual false, abstract: false, final false
  inline void OnUnlockAllPatternsButtonPressed();

  /// @brief Method ShiftMap, addr 0xf29750, size 0x170, virtual false, abstract: false, final false
  inline void ShiftMap(::GlobalNamespace::__MapObject__Facing shiftDirection, bool isDestructive);

  /// @brief Method Start, addr 0xf28e3c, size 0x14c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryLoadWorld, addr 0xf29498, size 0x164, virtual false, abstract: false, final false
  inline void TryLoadWorld();

  /// @brief Method TrySaveActiveWorld, addr 0xf29060, size 0x204, virtual false, abstract: false, final false
  inline void TrySaveActiveWorld();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_buildingPlans() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_buildingPlans();

  constexpr ::UnityW<::GlobalNamespace::ButtonController> const& __cordl_internal_get_switchToCreativeButton() const;

  constexpr ::UnityW<::GlobalNamespace::ButtonController>& __cordl_internal_get_switchToCreativeButton();

  constexpr ::UnityW<::GlobalNamespace::ButtonController> const& __cordl_internal_get_switchToPlayButton() const;

  constexpr ::UnityW<::GlobalNamespace::ButtonController>& __cordl_internal_get_switchToPlayButton();

  constexpr void __cordl_internal_set_buildingPlans(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_switchToCreativeButton(::UnityW<::GlobalNamespace::ButtonController> value);

  constexpr void __cordl_internal_set_switchToPlayButton(::UnityW<::GlobalNamespace::ButtonController> value);

  /// @brief Method .ctor, addr 0xf29ae0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WorldInteractionController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WorldInteractionController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WorldInteractionController(WorldInteractionController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WorldInteractionController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WorldInteractionController(WorldInteractionController const&) = delete;

  /// @brief Field buildingPlans, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___buildingPlans;

  /// @brief Field switchToPlayButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ButtonController> ___switchToPlayButton;

  /// @brief Field switchToCreativeButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ButtonController> ___switchToCreativeButton;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"World Interaction: " };

  /// @brief Field oldWorldLoadKey offset 0xffffffff size 0x8
  static constexpr ::ConstString oldWorldLoadKey{ u"worldData" };

  /// @brief Field worldSaveKey offset 0xffffffff size 0x8
  static constexpr ::ConstString worldSaveKey{ u"worldData-" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WorldInteractionController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldInteractionController, ___buildingPlans) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldInteractionController, ___switchToPlayButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldInteractionController, ___switchToCreativeButton) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WorldInteractionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WorldInteractionController*, "", "WorldInteractionController");
