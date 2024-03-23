#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObjectExtensions)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct HideFlags;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GameObjectExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::GameObjectExtensions);
// Type: Unity.XR.CoreUtils::GameObjectExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::GameObjectExtensions*
class CORDL_TYPE GameObjectExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddToHideFlagsRecursively, addr 0x2873af8, size 0x304, virtual false, abstract: false, final false
  static inline void AddToHideFlagsRecursively(::UnityEngine::GameObject* gameObject, ::UnityEngine::HideFlags hideFlags);

  /// @brief Method SetHideFlagsRecursively, addr 0x2873800, size 0x2f8, virtual false, abstract: false, final false
  static inline void SetHideFlagsRecursively(::UnityEngine::GameObject* gameObject, ::UnityEngine::HideFlags hideFlags);

  /// @brief Method SetLayerAndAddToHideFlagsRecursively, addr 0x28740f4, size 0x320, virtual false, abstract: false, final false
  static inline void SetLayerAndAddToHideFlagsRecursively(::UnityEngine::GameObject* gameObject, int32_t layer, ::UnityEngine::HideFlags hideFlags);

  /// @brief Method SetLayerAndHideFlagsRecursively, addr 0x2874414, size 0x314, virtual false, abstract: false, final false
  static inline void SetLayerAndHideFlagsRecursively(::UnityEngine::GameObject* gameObject, int32_t layer, ::UnityEngine::HideFlags hideFlags);

  /// @brief Method SetLayerRecursively, addr 0x2873dfc, size 0x2f8, virtual false, abstract: false, final false
  static inline void SetLayerRecursively(::UnityEngine::GameObject* gameObject, int32_t layer);

  /// @brief Method SetRunInEditModeRecursively, addr 0x2874728, size 0x4, virtual false, abstract: false, final false
  static inline void SetRunInEditModeRecursively(::UnityEngine::GameObject* gameObject, bool enabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectExtensions(GameObjectExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectExtensions(GameObjectExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::GameObjectExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::GameObjectExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::GameObjectExtensions*, "Unity.XR.CoreUtils", "GameObjectExtensions");
