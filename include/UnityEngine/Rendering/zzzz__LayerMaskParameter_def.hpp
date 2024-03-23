#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
CORDL_MODULE_EXPORT(LayerMaskParameter)
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LayerMaskParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LayerMaskParameter);
// Type: UnityEngine.Rendering::LayerMaskParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::LayerMaskParameter*
class CORDL_TYPE LayerMaskParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::LayerMask> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::LayerMaskParameter* New_ctor(::UnityEngine::LayerMask value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d60e0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LayerMask value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerMaskParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayerMaskParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayerMaskParameter(LayerMaskParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayerMaskParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayerMaskParameter(LayerMaskParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LayerMaskParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LayerMaskParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LayerMaskParameter*, "UnityEngine.Rendering", "LayerMaskParameter");
