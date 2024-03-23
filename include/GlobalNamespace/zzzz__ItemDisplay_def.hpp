#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ItemDisplay)
namespace GlobalNamespace {
class Pattern;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ItemDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ItemDisplay);
// Type: ::ItemDisplay
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ItemDisplay*
class CORDL_TYPE ItemDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field itemContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_itemContainer, put = __cordl_internal_set_itemContainer))::UnityW<::UnityEngine::Transform> itemContainer;

  /// @brief Field previewObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_previewObject, put = __cordl_internal_set_previewObject))::UnityW<::UnityEngine::GameObject> previewObject;

  /// @brief Field previewRadius, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_previewRadius, put = __cordl_internal_set_previewRadius)) float_t previewRadius;

  /// @brief Method Clear, addr 0x2aa7afc, size 0x90, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Display, addr 0x2aa7908, size 0x1f4, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::Pattern* pattern);

  static inline ::GlobalNamespace::ItemDisplay* New_ctor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_itemContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_itemContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_previewObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_previewObject();

  constexpr float_t const& __cordl_internal_get_previewRadius() const;

  constexpr float_t& __cordl_internal_get_previewRadius();

  constexpr void __cordl_internal_set_itemContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_previewObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_previewRadius(float_t value);

  /// @brief Method .ctor, addr 0x2aa7d88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemDisplay(ItemDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemDisplay(ItemDisplay const&) = delete;

  /// @brief Field itemContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___itemContainer;

  /// @brief Field previewObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___previewObject;

  /// @brief Field previewRadius, offset: 0x28, size: 0x4, def value: None
  float_t ___previewRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ItemDisplay, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemDisplay, ___itemContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemDisplay, ___previewObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemDisplay, ___previewRadius) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ItemDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ItemDisplay*, "", "ItemDisplay");
