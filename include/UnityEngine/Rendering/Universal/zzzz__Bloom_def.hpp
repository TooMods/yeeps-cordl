#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(Bloom)
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
class ClampedIntParameter;
}
namespace UnityEngine::Rendering {
class ColorParameter;
}
namespace UnityEngine::Rendering {
class MinFloatParameter;
}
namespace UnityEngine::Rendering {
class TextureParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Bloom;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Bloom);
// Type: UnityEngine.Rendering.Universal::Bloom
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Bloom*
class CORDL_TYPE Bloom : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field clamp, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_clamp, put = __cordl_internal_set_clamp))::UnityEngine::Rendering::MinFloatParameter* clamp;

  /// @brief Field dirtIntensity, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_dirtIntensity, put = __cordl_internal_set_dirtIntensity))::UnityEngine::Rendering::MinFloatParameter* dirtIntensity;

  /// @brief Field dirtTexture, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_dirtTexture, put = __cordl_internal_set_dirtTexture))::UnityEngine::Rendering::TextureParameter* dirtTexture;

  /// @brief Field highQualityFiltering, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_highQualityFiltering, put = __cordl_internal_set_highQualityFiltering))::UnityEngine::Rendering::BoolParameter* highQualityFiltering;

  /// @brief Field intensity, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity))::UnityEngine::Rendering::MinFloatParameter* intensity;

  /// @brief Field scatter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_scatter, put = __cordl_internal_set_scatter))::UnityEngine::Rendering::ClampedFloatParameter* scatter;

  /// @brief Field skipIterations, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_skipIterations, put = __cordl_internal_set_skipIterations))::UnityEngine::Rendering::ClampedIntParameter* skipIterations;

  /// @brief Field threshold, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_threshold, put = __cordl_internal_set_threshold))::UnityEngine::Rendering::MinFloatParameter* threshold;

  /// @brief Field tint, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_tint, put = __cordl_internal_set_tint))::UnityEngine::Rendering::ColorParameter* tint;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x2725510, size 0x2c, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x272553c, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::Bloom* New_ctor();

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_clamp();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const& __cordl_internal_get_clamp() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_dirtIntensity();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const& __cordl_internal_get_dirtIntensity() const;

  constexpr ::UnityEngine::Rendering::TextureParameter*& __cordl_internal_get_dirtTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::TextureParameter*> const& __cordl_internal_get_dirtTexture() const;

  constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_highQualityFiltering();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::BoolParameter*> const& __cordl_internal_get_highQualityFiltering() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_scatter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_scatter() const;

  constexpr ::UnityEngine::Rendering::ClampedIntParameter*& __cordl_internal_get_skipIterations();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedIntParameter*> const& __cordl_internal_get_skipIterations() const;

  constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_threshold();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::MinFloatParameter*> const& __cordl_internal_get_threshold() const;

  constexpr ::UnityEngine::Rendering::ColorParameter*& __cordl_internal_get_tint();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ColorParameter*> const& __cordl_internal_get_tint() const;

  constexpr void __cordl_internal_set_clamp(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_dirtIntensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_dirtTexture(::UnityEngine::Rendering::TextureParameter* value);

  constexpr void __cordl_internal_set_highQualityFiltering(::UnityEngine::Rendering::BoolParameter* value);

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_scatter(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_skipIterations(::UnityEngine::Rendering::ClampedIntParameter* value);

  constexpr void __cordl_internal_set_threshold(::UnityEngine::Rendering::MinFloatParameter* value);

  constexpr void __cordl_internal_set_tint(::UnityEngine::Rendering::ColorParameter* value);

  /// @brief Method .ctor, addr 0x2725544, size 0x240, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bloom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bloom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bloom(Bloom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bloom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bloom(Bloom const&) = delete;

  /// @brief Field threshold, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___threshold;

  /// @brief Field intensity, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___intensity;

  /// @brief Field scatter, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___scatter;

  /// @brief Field clamp, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___clamp;

  /// @brief Field tint, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ColorParameter* ___tint;

  /// @brief Field highQualityFiltering, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::BoolParameter* ___highQualityFiltering;

  /// @brief Field skipIterations, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedIntParameter* ___skipIterations;

  /// @brief Field dirtTexture, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureParameter* ___dirtTexture;

  /// @brief Field dirtIntensity, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::MinFloatParameter* ___dirtIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Bloom, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___threshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___scatter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___clamp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___tint) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___highQualityFiltering) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___skipIterations) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___dirtTexture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Bloom, ___dirtIntensity) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Bloom);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Bloom*, "UnityEngine.Rendering.Universal", "Bloom");
