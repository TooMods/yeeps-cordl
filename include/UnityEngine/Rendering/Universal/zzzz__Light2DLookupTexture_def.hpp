#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Light2DLookupTexture)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Light2DLookupTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Light2DLookupTexture);
// Type: UnityEngine.Rendering.Universal::Light2DLookupTexture
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Light2DLookupTexture*
class CORDL_TYPE Light2DLookupTexture : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_PointLightLookupTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PointLightLookupTexture, put = setStaticF_s_PointLightLookupTexture))::UnityW<::UnityEngine::Texture2D> s_PointLightLookupTexture;

  /// @brief Method CreatePointLightLookupTexture, addr 0x2f3d06c, size 0x394, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> CreatePointLightLookupTexture();

  /// @brief Method GetLightLookupTexture, addr 0x2f3cfd0, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> GetLightLookupTexture();

  static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_s_PointLightLookupTexture();

  static inline void setStaticF_s_PointLightLookupTexture(::UnityW<::UnityEngine::Texture2D> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Light2DLookupTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Light2DLookupTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Light2DLookupTexture(Light2DLookupTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Light2DLookupTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Light2DLookupTexture(Light2DLookupTexture const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Light2DLookupTexture, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Light2DLookupTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DLookupTexture*, "UnityEngine.Rendering.Universal", "Light2DLookupTexture");
