#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MobileInteractionForward)
namespace GlobalNamespace {
class MobileInteractable;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileInteractionForward;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileInteractionForward);
// Type: ::MobileInteractionForward
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileInteractionForward*
class CORDL_TYPE MobileInteractionForward : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field mobileInteractable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileInteractable, put = __cordl_internal_set_mobileInteractable))::UnityW<::GlobalNamespace::MobileInteractable> mobileInteractable;

  static inline ::GlobalNamespace::MobileInteractionForward* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MobileInteractable> const& __cordl_internal_get_mobileInteractable() const;

  constexpr ::UnityW<::GlobalNamespace::MobileInteractable>& __cordl_internal_get_mobileInteractable();

  constexpr void __cordl_internal_set_mobileInteractable(::UnityW<::GlobalNamespace::MobileInteractable> value);

  /// @brief Method .ctor, addr 0x3087354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileInteractionForward();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileInteractionForward", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileInteractionForward(MobileInteractionForward&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileInteractionForward", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileInteractionForward(MobileInteractionForward const&) = delete;

  /// @brief Field mobileInteractable, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobileInteractable> ___mobileInteractable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileInteractionForward, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileInteractionForward, ___mobileInteractable) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileInteractionForward);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileInteractionForward*, "", "MobileInteractionForward");
