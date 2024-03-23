#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(LensDistortion)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class Vector2Parameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class LensDistortion;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LensDistortion);
// Type: UnityEngine.Rendering.Universal::LensDistortion
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::LensDistortion*
class CORDL_TYPE LensDistortion : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field center, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_center, put = __cordl_internal_set_center))::UnityEngine::Rendering::Vector2Parameter* center;

  /// @brief Field intensity, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity))::UnityEngine::Rendering::ClampedFloatParameter* intensity;

  /// @brief Field scale, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale))::UnityEngine::Rendering::ClampedFloatParameter* scale;

  /// @brief Field xMultiplier, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_xMultiplier, put = __cordl_internal_set_xMultiplier))::UnityEngine::Rendering::ClampedFloatParameter* xMultiplier;

  /// @brief Field yMultiplier, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_yMultiplier, put = __cordl_internal_set_yMultiplier))::UnityEngine::Rendering::ClampedFloatParameter* yMultiplier;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x2726d48, size 0x7c, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x2726dc4, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::LensDistortion* New_ctor();

  constexpr ::UnityEngine::Rendering::Vector2Parameter*& __cordl_internal_get_center();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector2Parameter*> const& __cordl_internal_get_center() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_scale();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_scale() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_xMultiplier();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_xMultiplier() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_yMultiplier();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_yMultiplier() const;

  constexpr void __cordl_internal_set_center(::UnityEngine::Rendering::Vector2Parameter* value);

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_scale(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_xMultiplier(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_yMultiplier(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x2726dcc, size 0x144, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensDistortion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensDistortion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensDistortion(LensDistortion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensDistortion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensDistortion(LensDistortion const&) = delete;

  /// @brief Field intensity, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___intensity;

  /// @brief Field xMultiplier, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___xMultiplier;

  /// @brief Field yMultiplier, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___yMultiplier;

  /// @brief Field center, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector2Parameter* ___center;

  /// @brief Field scale, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LensDistortion, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LensDistortion, ___intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LensDistortion, ___xMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LensDistortion, ___yMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LensDistortion, ___center) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LensDistortion, ___scale) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LensDistortion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LensDistortion*, "UnityEngine.Rendering.Universal", "LensDistortion");
