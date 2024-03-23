#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(PaniniProjection)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PaniniProjection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PaniniProjection);
// Type: UnityEngine.Rendering.Universal::PaniniProjection
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::PaniniProjection*
class CORDL_TYPE PaniniProjection : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field cropToFit, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cropToFit, put = __cordl_internal_set_cropToFit))::UnityEngine::Rendering::ClampedFloatParameter* cropToFit;

  /// @brief Field distance, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance))::UnityEngine::Rendering::ClampedFloatParameter* distance;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x27272cc, size 0x2c, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x27272f8, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::PaniniProjection* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_cropToFit();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_cropToFit() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_distance();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_distance() const;

  constexpr void __cordl_internal_set_cropToFit(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_distance(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x2727300, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaniniProjection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaniniProjection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaniniProjection(PaniniProjection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaniniProjection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaniniProjection(PaniniProjection const&) = delete;

  /// @brief Field distance, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___distance;

  /// @brief Field cropToFit, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___cropToFit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PaniniProjection, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PaniniProjection, ___distance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PaniniProjection, ___cropToFit) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PaniniProjection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PaniniProjection*, "UnityEngine.Rendering.Universal", "PaniniProjection");
