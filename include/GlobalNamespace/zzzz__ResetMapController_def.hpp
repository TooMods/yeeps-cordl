#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ResetMapController)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ResetMapController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResetMapController);
// Type: ::ResetMapController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ResetMapController*
class CORDL_TYPE ResetMapController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field isRegistered, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field resetMapButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resetMapButton, put = __cordl_internal_set_resetMapButton))::UnityW<::GlobalNamespace::SimpleButtonController> resetMapButton;

  /// @brief Method DisplayStatusError, addr 0xf21dd0, size 0xc8, virtual false, abstract: false, final false
  inline void DisplayStatusError(::StringW message);

  /// @brief Method ExecuteResetMap, addr 0xf22624, size 0x100, virtual false, abstract: false, final false
  inline void ExecuteResetMap();

  static inline ::GlobalNamespace::ResetMapController* New_ctor();

  /// @brief Method OnDisable, addr 0xf21814, size 0xf0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf21698, size 0x158, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsCreativeModeUpdated, addr 0xf217f0, size 0x24, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnResetMapButtonPressed, addr 0xf21904, size 0x4cc, virtual false, abstract: false, final false
  inline void OnResetMapButtonPressed();

  /// @brief Method TrySetCooldown, addr 0xf22724, size 0x11c, virtual false, abstract: false, final false
  static inline void TrySetCooldown();

  /// @brief Method <ExecuteResetMap>b__10_0, addr 0xf2292c, size 0x88, virtual false, abstract: false, final false
  inline void _ExecuteResetMap_b__10_0();

  /// @brief Method <ExecuteResetMap>b__10_1, addr 0xf229b4, size 0x84, virtual false, abstract: false, final false
  inline void _ExecuteResetMap_b__10_1();

  /// @brief Method <OnResetMapButtonPressed>b__9_0, addr 0xf22898, size 0x94, virtual false, abstract: false, final false
  inline void _OnResetMapButtonPressed_b__9_0(bool approved);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_resetMapButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_resetMapButton();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_resetMapButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  /// @brief Method .ctor, addr 0xf22890, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResetMapController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResetMapController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResetMapController(ResetMapController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResetMapController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResetMapController(ResetMapController const&) = delete;

  /// @brief Field activeContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field resetMapButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___resetMapButton;

  /// @brief Field isRegistered, offset: 0x28, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field allowedResetMapTimestampKey offset 0xffffffff size 0x8
  static constexpr ::ConstString allowedResetMapTimestampKey{ u"allowedResetMapTimestamp" };

  /// @brief Field failedToResetMapPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToResetMapPreface{ u"Failed to reset map: " };

  /// @brief Field resetVoteCooldown offset 0xffffffff size 0x4
  static constexpr float_t resetVoteCooldown{ 180.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResetMapController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetMapController, ___activeContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetMapController, ___resetMapButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetMapController, ___isRegistered) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResetMapController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResetMapController*, "", "ResetMapController");
