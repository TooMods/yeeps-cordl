#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(WhiteBalance)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class WhiteBalance;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WhiteBalance);
// Type: UnityEngine.Rendering.Universal::WhiteBalance
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::WhiteBalance*
class CORDL_TYPE WhiteBalance : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field temperature, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_temperature, put = __cordl_internal_set_temperature))::UnityEngine::Rendering::ClampedFloatParameter* temperature;

  /// @brief Field tint, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_tint, put = __cordl_internal_set_tint))::UnityEngine::Rendering::ClampedFloatParameter* tint;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x2727a2c, size 0x54, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x2727a80, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::WhiteBalance* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_temperature();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_temperature() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_tint();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_tint() const;

  constexpr void __cordl_internal_set_temperature(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_tint(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x2727a88, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhiteBalance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhiteBalance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhiteBalance(WhiteBalance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhiteBalance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhiteBalance(WhiteBalance const&) = delete;

  /// @brief Field temperature, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___temperature;

  /// @brief Field tint, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___tint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WhiteBalance, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::WhiteBalance, ___temperature) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::WhiteBalance, ___tint) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WhiteBalance);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WhiteBalance*, "UnityEngine.Rendering.Universal", "WhiteBalance");
