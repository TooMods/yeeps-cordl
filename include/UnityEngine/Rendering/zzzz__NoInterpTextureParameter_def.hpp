#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoInterpTextureParameter)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpTextureParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpTextureParameter);
// Type: UnityEngine.Rendering::NoInterpTextureParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::NoInterpTextureParameter*
class CORDL_TYPE NoInterpTextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityW<::UnityEngine::Texture>> {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x17d71e8, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::NoInterpTextureParameter* New_ctor(::UnityEngine::Texture* value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d7188, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpTextureParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpTextureParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpTextureParameter(NoInterpTextureParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpTextureParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpTextureParameter(NoInterpTextureParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpTextureParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpTextureParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpTextureParameter*, "UnityEngine.Rendering", "NoInterpTextureParameter");
