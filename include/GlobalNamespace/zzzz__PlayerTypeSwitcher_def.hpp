#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerTypeSwitcher)
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerTypeSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerTypeSwitcher);
// Type: ::PlayerTypeSwitcher
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerTypeSwitcher*
class CORDL_TYPE PlayerTypeSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field buttonContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonContainer, put = __cordl_internal_set_buttonContainer))::UnityW<::UnityEngine::GameObject> buttonContainer;

  /// @brief Field isRegistered, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field switchToHiderButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_switchToHiderButton, put = __cordl_internal_set_switchToHiderButton))::UnityW<::GlobalNamespace::SimpleButtonController> switchToHiderButton;

  /// @brief Field switchToSeekerButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_switchToSeekerButton, put = __cordl_internal_set_switchToSeekerButton))::UnityW<::GlobalNamespace::SimpleButtonController> switchToSeekerButton;

  static inline ::GlobalNamespace::PlayerTypeSwitcher* New_ctor();

  /// @brief Method OnDisable, addr 0x1554028, size 0x134, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1553d20, size 0x2b4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPlayerDataModified, addr 0x155415c, size 0xac, virtual false, abstract: false, final false
  inline void OnPlayerDataModified(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields);

  /// @brief Method OnSwitchToHiderButtonPressed, addr 0x1554208, size 0x13c, virtual false, abstract: false, final false
  inline void OnSwitchToHiderButtonPressed();

  /// @brief Method OnSwitchToSeekerButtonPressed, addr 0x1554344, size 0x13c, virtual false, abstract: false, final false
  inline void OnSwitchToSeekerButtonPressed();

  /// @brief Method Refresh, addr 0x1553fd4, size 0x54, virtual false, abstract: false, final false
  inline void Refresh(::GlobalNamespace::PlayerData playerData);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_buttonContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_buttonContainer();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_switchToHiderButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_switchToHiderButton();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_switchToSeekerButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_switchToSeekerButton();

  constexpr void __cordl_internal_set_buttonContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_switchToHiderButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_switchToSeekerButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  /// @brief Method .ctor, addr 0x1554480, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerTypeSwitcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerTypeSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerTypeSwitcher(PlayerTypeSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerTypeSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerTypeSwitcher(PlayerTypeSwitcher const&) = delete;

  /// @brief Field buttonContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___buttonContainer;

  /// @brief Field switchToHiderButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___switchToHiderButton;

  /// @brief Field switchToSeekerButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___switchToSeekerButton;

  /// @brief Field isRegistered, offset: 0x30, size: 0x1, def value: None
  bool ___isRegistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerTypeSwitcher, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTypeSwitcher, ___buttonContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTypeSwitcher, ___switchToHiderButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTypeSwitcher, ___switchToSeekerButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTypeSwitcher, ___isRegistered) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerTypeSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerTypeSwitcher*, "", "PlayerTypeSwitcher");
