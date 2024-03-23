#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMaskExtensions)
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class LayerMaskExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::LayerMaskExtensions);
// Type: Unity.XR.CoreUtils::LayerMaskExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::LayerMaskExtensions*
class CORDL_TYPE LayerMaskExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x2874828, size 0x34, virtual false, abstract: false, final false
  static inline bool Contains(::UnityEngine::LayerMask mask, int32_t layer);

  /// @brief Method GetFirstLayerIndex, addr 0x28747d0, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetFirstLayerIndex(::UnityEngine::LayerMask layerMask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerMaskExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayerMaskExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayerMaskExtensions(LayerMaskExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayerMaskExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayerMaskExtensions(LayerMaskExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::LayerMaskExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::LayerMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::LayerMaskExtensions*, "Unity.XR.CoreUtils", "LayerMaskExtensions");
