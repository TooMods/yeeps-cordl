#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ChromaticAberration)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ChromaticAberration;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ChromaticAberration);
// Type: UnityEngine.Rendering.Universal::ChromaticAberration
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ChromaticAberration*
class CORDL_TYPE ChromaticAberration : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field intensity, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity))::UnityEngine::Rendering::ClampedFloatParameter* intensity;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x2725ae8, size 0x2c, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x2725b14, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::ChromaticAberration* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensity();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_intensity() const;

  constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x2725b1c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChromaticAberration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChromaticAberration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChromaticAberration(ChromaticAberration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChromaticAberration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChromaticAberration(ChromaticAberration const&) = delete;

  /// @brief Field intensity, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ChromaticAberration, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChromaticAberration, ___intensity) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ChromaticAberration);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ChromaticAberration*, "UnityEngine.Rendering.Universal", "ChromaticAberration");
