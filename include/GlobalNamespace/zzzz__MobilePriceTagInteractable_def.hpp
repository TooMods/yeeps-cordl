#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileInteractable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MobilePriceTagInteractable)
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
class PriceTag;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MobilePriceTagInteractable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobilePriceTagInteractable);
// Type: ::MobilePriceTagInteractable
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobilePriceTagInteractable*
class CORDL_TYPE MobilePriceTagInteractable : public ::GlobalNamespace::MobileInteractable {
public:
  // Declarations
  /// @brief Field colliderObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_colliderObject, put = __cordl_internal_set_colliderObject))::UnityW<::UnityEngine::GameObject> colliderObject;

  /// @brief Field priceTag, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_priceTag, put = __cordl_internal_set_priceTag))::UnityW<::GlobalNamespace::PriceTag> priceTag;

  /// @brief Field purchasePrompt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_purchasePrompt, put = setStaticF_purchasePrompt))::GlobalNamespace::ImaginationPrompt* purchasePrompt;

  /// @brief Field radius, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  static inline ::GlobalNamespace::MobilePriceTagInteractable* New_ctor();

  /// @brief Method OnDisable, addr 0x2dff3bc, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2dff2ec, size 0xd0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPlayerLeftAnchor, addr 0x2dff478, size 0x90, virtual false, abstract: false, final false
  static inline void OnPlayerLeftAnchor();

  /// @brief Method OnTapEnter, addr 0x2dff448, size 0x30, virtual true, abstract: false, final false
  inline void OnTapEnter();

  /// @brief Method OnTapExit, addr 0x2dff508, size 0x328, virtual true, abstract: false, final false
  inline void OnTapExit();

  /// @brief Method <OnTapExit>b__8_0, addr 0x2dff844, size 0x98, virtual false, abstract: false, final false
  inline void _OnTapExit_b__8_0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_colliderObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_colliderObject();

  constexpr ::UnityW<::GlobalNamespace::PriceTag> const& __cordl_internal_get_priceTag() const;

  constexpr ::UnityW<::GlobalNamespace::PriceTag>& __cordl_internal_get_priceTag();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr void __cordl_internal_set_colliderObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_priceTag(::UnityW<::GlobalNamespace::PriceTag> value);

  constexpr void __cordl_internal_set_radius(float_t value);

  /// @brief Method .ctor, addr 0x2dff830, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ImaginationPrompt* getStaticF_purchasePrompt();

  static inline void setStaticF_purchasePrompt(::GlobalNamespace::ImaginationPrompt* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobilePriceTagInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobilePriceTagInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobilePriceTagInteractable(MobilePriceTagInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobilePriceTagInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobilePriceTagInteractable(MobilePriceTagInteractable const&) = delete;

  /// @brief Field priceTag, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PriceTag> ___priceTag;

  /// @brief Field radius, offset: 0x20, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field colliderObject, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___colliderObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobilePriceTagInteractable, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePriceTagInteractable, ___priceTag) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePriceTagInteractable, ___radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePriceTagInteractable, ___colliderObject) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobilePriceTagInteractable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobilePriceTagInteractable*, "", "MobilePriceTagInteractable");
