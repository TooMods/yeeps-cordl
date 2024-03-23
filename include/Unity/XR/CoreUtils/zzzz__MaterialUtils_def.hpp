#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaterialUtils)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class MaterialUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::MaterialUtils);
// Type: Unity.XR.CoreUtils::MaterialUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::MaterialUtils*
class CORDL_TYPE MaterialUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddMaterial, addr 0x287d0ec, size 0xe0, virtual false, abstract: false, final false
  static inline void AddMaterial(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material);

  /// @brief Method CloneMaterials, addr 0x287cdd8, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> CloneMaterials(::UnityEngine::Renderer* renderer);

  /// @brief Method GetMaterialClone, addr 0x287cd24, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetMaterialClone(::UnityEngine::UI::Graphic* graphic);

  /// @brief Method GetMaterialClone, addr 0x287cc80, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetMaterialClone(::UnityEngine::Renderer* renderer);

  /// @brief Method HexToColor, addr 0x287cef4, size 0x180, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HexToColor(::StringW hex);

  /// @brief Method HueShift, addr 0x287d074, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HueShift(::UnityEngine::Color color, float_t shift);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialUtils(MaterialUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialUtils(MaterialUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::MaterialUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::MaterialUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::MaterialUtils*, "Unity.XR.CoreUtils", "MaterialUtils");
