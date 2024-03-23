#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionRepeatMode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugActionDesc)
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugActionDesc);
// Type: UnityEngine.Rendering::DebugActionDesc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DebugActionDesc*
class CORDL_TYPE DebugActionDesc : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonAction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonAction, put = __cordl_internal_set_buttonAction))::UnityEngine::InputSystem::InputAction* buttonAction;

  /// @brief Field repeatDelay, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_repeatDelay, put = __cordl_internal_set_repeatDelay)) float_t repeatDelay;

  /// @brief Field repeatMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_repeatMode, put = __cordl_internal_set_repeatMode))::UnityEngine::Rendering::DebugActionRepeatMode repeatMode;

  static inline ::UnityEngine::Rendering::DebugActionDesc* New_ctor();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_buttonAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_buttonAction() const;

  constexpr float_t const& __cordl_internal_get_repeatDelay() const;

  constexpr float_t& __cordl_internal_get_repeatDelay();

  constexpr ::UnityEngine::Rendering::DebugActionRepeatMode const& __cordl_internal_get_repeatMode() const;

  constexpr ::UnityEngine::Rendering::DebugActionRepeatMode& __cordl_internal_get_repeatMode();

  constexpr void __cordl_internal_set_buttonAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_repeatDelay(float_t value);

  constexpr void __cordl_internal_set_repeatMode(::UnityEngine::Rendering::DebugActionRepeatMode value);

  /// @brief Method .ctor, addr 0x1bd2cc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugActionDesc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugActionDesc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugActionDesc(DebugActionDesc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugActionDesc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugActionDesc(DebugActionDesc const&) = delete;

  /// @brief Field buttonAction, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___buttonAction;

  /// @brief Field repeatMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::DebugActionRepeatMode ___repeatMode;

  /// @brief Field repeatDelay, offset: 0x1c, size: 0x4, def value: None
  float_t ___repeatDelay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugActionDesc, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionDesc, ___buttonAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionDesc, ___repeatMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionDesc, ___repeatDelay) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugActionDesc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugActionDesc*, "UnityEngine.Rendering", "DebugActionDesc");
