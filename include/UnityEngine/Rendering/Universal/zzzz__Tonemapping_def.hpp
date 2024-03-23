#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(Tonemapping)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering::Universal {
class TonemappingModeParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Tonemapping;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Tonemapping);
// Type: UnityEngine.Rendering.Universal::Tonemapping
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Tonemapping*
class CORDL_TYPE Tonemapping : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field mode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::UnityEngine::Rendering::Universal::TonemappingModeParameter* mode;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x2727788, size 0x2c, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x27277b4, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::Tonemapping* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter*& __cordl_internal_get_mode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TonemappingModeParameter*> const& __cordl_internal_get_mode() const;

  constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::Universal::TonemappingModeParameter* value);

  /// @brief Method .ctor, addr 0x27277bc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tonemapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tonemapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tonemapping(Tonemapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tonemapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tonemapping(Tonemapping const&) = delete;

  /// @brief Field mode, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TonemappingModeParameter* ___mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Tonemapping, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Tonemapping, ___mode) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Tonemapping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Tonemapping*, "UnityEngine.Rendering.Universal", "Tonemapping");
