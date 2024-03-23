#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(Vignette)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class BoolParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class ColorParameter;
}
namespace UnityEngine::Rendering {
class Vector2Parameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Vignette;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Vignette);
// Type: UnityEngine.Rendering.Universal::Vignette
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Vignette*
class CORDL_TYPE Vignette : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field center, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_center, put = __cordl_internal_set_center))::UnityEngine::Rendering::Vector2Parameter* center;

  /// @brief Field color, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Rendering::ColorParameter* color;

  /// @brief Field intensity, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity))::UnityEngine::Rendering::ClampedFloatParameter* intensity;

  /// @brief Field rounded, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_rounded, put = __cordl_internal_set_rounded))::UnityEngine::Rendering::BoolParameter* rounded;

  /// @brief Field smoothness, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_smoothness, put = __cordl_internal_set_smoothness))::UnityEngine::Rendering::ClampedFloatParameter* smoothness;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x2727888, size 0x2c, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x27278b4, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::Vignette* New_ctor();

  constexpr ::UnityEngine::Rendering::Vector2Parameter*& __cordl_internal_get_center();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector2Parameter*> const& __cordl_internal_get_center() const;

  constexpr ::UnityEngine::Rendering::ColorParameter*& __cordl_internal_get_color();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ColorParameter*> const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_rounded();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::BoolParameter*> const& __cordl_internal_get_rounded() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_smoothness();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_smoothness() const;

  constexpr void __cordl_internal_set_center(::UnityEngine::Rendering::Vector2Parameter* value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::ColorParameter* value);

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_rounded(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_smoothness(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x27278bc, size 0x170, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vignette();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vignette", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vignette(Vignette&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vignette", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vignette(Vignette const&) = delete;

  /// @brief Field color, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::ColorParameter* ___color;

  /// @brief Field center, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector2Parameter* ___center;

  /// @brief Field intensity, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___intensity;

  /// @brief Field smoothness, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___smoothness;

  /// @brief Field rounded, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___rounded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Vignette, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Vignette, ___color) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Vignette, ___center) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Vignette, ___intensity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Vignette, ___smoothness) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Vignette, ___rounded) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Vignette);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Vignette*, "UnityEngine.Rendering.Universal", "Vignette");
