#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileInteractable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MobileSimpleButtonInteractable)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileSimpleButtonInteractable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileSimpleButtonInteractable);
// Type: ::MobileSimpleButtonInteractable
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileSimpleButtonInteractable*
class CORDL_TYPE MobileSimpleButtonInteractable : public ::GlobalNamespace::MobileInteractable {
public:
  // Declarations
  /// @brief Field colliderObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_colliderObject, put = __cordl_internal_set_colliderObject))::UnityW<::UnityEngine::GameObject> colliderObject;

  /// @brief Field isRegistered, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field radius, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field simpleButtonController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleButtonController, put = __cordl_internal_set_simpleButtonController))::UnityW<::GlobalNamespace::SimpleButtonController> simpleButtonController;

  static inline ::GlobalNamespace::MobileSimpleButtonInteractable* New_ctor();

  /// @brief Method OnButtonInteractableUpdated, addr 0x2dffd8c, size 0xbc, virtual false, abstract: false, final false
  inline void OnButtonInteractableUpdated(bool newInteractable);

  /// @brief Method OnDisable, addr 0x2dffe48, size 0xdc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2dffc3c, size 0x150, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTapEnter, addr 0x2e0003c, size 0x40, virtual true, abstract: false, final false
  inline void OnTapEnter();

  /// @brief Method OnTapExit, addr 0x2e0007c, size 0x40, virtual true, abstract: false, final false
  inline void OnTapExit();

  /// @brief Method Update, addr 0x2dfff24, size 0x118, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_colliderObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_colliderObject();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_simpleButtonController() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_simpleButtonController();

  constexpr void __cordl_internal_set_colliderObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_simpleButtonController(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  /// @brief Method .ctor, addr 0x2e000bc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileSimpleButtonInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileSimpleButtonInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileSimpleButtonInteractable(MobileSimpleButtonInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileSimpleButtonInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileSimpleButtonInteractable(MobileSimpleButtonInteractable const&) = delete;

  /// @brief Field simpleButtonController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___simpleButtonController;

  /// @brief Field radius, offset: 0x20, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field isRegistered, offset: 0x24, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field colliderObject, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___colliderObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileSimpleButtonInteractable, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSimpleButtonInteractable, ___simpleButtonController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSimpleButtonInteractable, ___radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSimpleButtonInteractable, ___isRegistered) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileSimpleButtonInteractable, ___colliderObject) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileSimpleButtonInteractable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileSimpleButtonInteractable*, "", "MobileSimpleButtonInteractable");
