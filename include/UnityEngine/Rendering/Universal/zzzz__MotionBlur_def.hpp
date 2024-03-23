#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(MotionBlur)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering::Universal {
class MotionBlurModeParameter;
}
namespace UnityEngine::Rendering::Universal {
class MotionBlurQualityParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MotionBlur;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionBlur);
// Type: UnityEngine.Rendering.Universal::MotionBlur
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::MotionBlur*
class CORDL_TYPE MotionBlur : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field clamp, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_clamp, put = __cordl_internal_set_clamp))::UnityEngine::Rendering::ClampedFloatParameter* clamp;

  /// @brief Field intensity, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity))::UnityEngine::Rendering::ClampedFloatParameter* intensity;

  /// @brief Field mode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::UnityEngine::Rendering::Universal::MotionBlurModeParameter* mode;

  /// @brief Field quality, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_quality, put = __cordl_internal_set_quality))::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* quality;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x272709c, size 0x54, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x27270f0, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::MotionBlur* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_clamp();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_clamp() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_intensity() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionBlurModeParameter*& __cordl_internal_get_mode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::MotionBlurModeParameter*> const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter*& __cordl_internal_get_quality();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::MotionBlurQualityParameter*> const& __cordl_internal_get_quality() const;

  constexpr void __cordl_internal_set_clamp(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::Universal::MotionBlurModeParameter* value);

  constexpr void __cordl_internal_set_quality(::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* value);

  /// @brief Method .ctor, addr 0x27270f8, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionBlur();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionBlur", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionBlur(MotionBlur&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionBlur", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionBlur(MotionBlur const&) = delete;

  /// @brief Field mode, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionBlurModeParameter* ___mode;

  /// @brief Field quality, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* ___quality;

  /// @brief Field intensity, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___intensity;

  /// @brief Field clamp, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___clamp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionBlur, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionBlur, ___mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionBlur, ___quality) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionBlur, ___intensity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionBlur, ___clamp) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionBlur);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionBlur*, "UnityEngine.Rendering.Universal", "MotionBlur");
