#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoInterpRenderTextureParameter)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpRenderTextureParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpRenderTextureParameter);
// Type: UnityEngine.Rendering::NoInterpRenderTextureParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::NoInterpRenderTextureParameter*
class CORDL_TYPE NoInterpRenderTextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityW<::UnityEngine::RenderTexture>> {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x17d7748, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::NoInterpRenderTextureParameter* New_ctor(::UnityEngine::RenderTexture* value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d76e8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTexture* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpRenderTextureParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpRenderTextureParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpRenderTextureParameter(NoInterpRenderTextureParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpRenderTextureParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpRenderTextureParameter(NoInterpRenderTextureParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpRenderTextureParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpRenderTextureParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpRenderTextureParameter*, "UnityEngine.Rendering", "NoInterpRenderTextureParameter");
