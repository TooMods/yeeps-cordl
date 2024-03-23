#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ColorLookup)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class TextureParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ColorLookup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ColorLookup);
// Type: UnityEngine.Rendering.Universal::ColorLookup
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ColorLookup*
class CORDL_TYPE ColorLookup : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field contribution, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_contribution, put = __cordl_internal_set_contribution))::UnityEngine::Rendering::ClampedFloatParameter* contribution;

  /// @brief Field texture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_texture, put = __cordl_internal_set_texture))::UnityEngine::Rendering::TextureParameter* texture;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x272645c, size 0x40, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x27266e4, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::ColorLookup* New_ctor();

  /// @brief Method ValidateLUT, addr 0x272649c, size 0x248, virtual false, abstract: false, final false
  inline bool ValidateLUT();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_contribution();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_contribution() const;

  constexpr ::UnityEngine::Rendering::TextureParameter*& __cordl_internal_get_texture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::TextureParameter*> const& __cordl_internal_get_texture() const;

  constexpr void __cordl_internal_set_contribution(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_texture(::UnityEngine::Rendering::TextureParameter* value);

  /// @brief Method .ctor, addr 0x27266ec, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorLookup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorLookup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorLookup(ColorLookup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorLookup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorLookup(ColorLookup const&) = delete;

  /// @brief Field texture, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureParameter* ___texture;

  /// @brief Field contribution, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___contribution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ColorLookup, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorLookup, ___texture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ColorLookup, ___contribution) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ColorLookup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ColorLookup*, "UnityEngine.Rendering.Universal", "ColorLookup");
