#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScreenSpaceShadowsSettings)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings);
// Type: UnityEngine.Rendering.Universal::ScreenSpaceShadowsSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ScreenSpaceShadowsSettings*
class CORDL_TYPE ScreenSpaceShadowsSettings : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* New_ctor();

  /// @brief Method .ctor, addr 0x272d010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadowsSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadowsSettings(ScreenSpaceShadowsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadowsSettings(ScreenSpaceShadowsSettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadowsSettings");
