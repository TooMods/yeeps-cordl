#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextureUtils)
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class TextureUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::TextureUtils);
// Type: Unity.XR.CoreUtils::TextureUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::TextureUtils*
class CORDL_TYPE TextureUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method RenderTextureToTexture2D, addr 0x287f5c8, size 0x9c, virtual false, abstract: false, final false
  static inline void RenderTextureToTexture2D(::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::Texture2D* texture);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureUtils(TextureUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureUtils(TextureUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::TextureUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::TextureUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::TextureUtils*, "Unity.XR.CoreUtils", "TextureUtils");
