#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasGroup)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class CanvasGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CanvasGroup);
// Type: UnityEngine::CanvasGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::CanvasGroup*
class CORDL_TYPE CanvasGroup : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  __declspec(property(get = get_blocksRaycasts)) bool blocksRaycasts;

  __declspec(property(get = get_ignoreParentGroups)) bool ignoreParentGroups;

  __declspec(property(get = get_interactable)) bool interactable;

  /// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
  constexpr operator ::UnityEngine::ICanvasRaycastFilter*() noexcept;

  /// @brief Method IsRaycastLocationValid, addr 0x201924c, size 0x3c, virtual true, abstract: false, final true
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  /// @brief Method get_alpha, addr 0x2019110, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_alpha();

  /// @brief Method get_blocksRaycasts, addr 0x20191d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_blocksRaycasts();

  /// @brief Method get_ignoreParentGroups, addr 0x2019210, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ignoreParentGroups();

  /// @brief Method get_interactable, addr 0x2019198, size 0x3c, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
  constexpr ::UnityEngine::ICanvasRaycastFilter* i___UnityEngine__ICanvasRaycastFilter() noexcept;

  /// @brief Method set_alpha, addr 0x201914c, size 0x4c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasGroup(CanvasGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasGroup(CanvasGroup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CanvasGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasGroup*, "UnityEngine", "CanvasGroup");
