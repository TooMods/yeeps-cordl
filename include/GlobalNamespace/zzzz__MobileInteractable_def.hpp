#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MobileInteractable)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileInteractable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileInteractable);
// Type: ::MobileInteractable
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileInteractable*
class CORDL_TYPE MobileInteractable : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method CreateSphereInteractionForward, addr 0x30871a8, size 0x1a4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateSphereInteractionForward(float_t radius);

  static inline ::GlobalNamespace::MobileInteractable* New_ctor();

  /// @brief Method OnTapEnter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnTapEnter();

  /// @brief Method OnTapExit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnTapExit();

  /// @brief Method .ctor, addr 0x308734c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileInteractable(MobileInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileInteractable(MobileInteractable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileInteractable, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileInteractable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileInteractable*, "", "MobileInteractable");
