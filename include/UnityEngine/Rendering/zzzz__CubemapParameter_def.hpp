#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapParameter)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CubemapParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CubemapParameter);
// Type: UnityEngine.Rendering::CubemapParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CubemapParameter*
class CORDL_TYPE CubemapParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityW<::UnityEngine::Texture>> {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x17d78a0, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::CubemapParameter* New_ctor(::UnityEngine::Texture* value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d7840, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CubemapParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubemapParameter(CubemapParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubemapParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubemapParameter(CubemapParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CubemapParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CubemapParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CubemapParameter*, "UnityEngine.Rendering", "CubemapParameter");
