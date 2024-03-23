#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(LiftGammaGain)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class Vector4Parameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class LiftGammaGain;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LiftGammaGain);
// Type: UnityEngine.Rendering.Universal::LiftGammaGain
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::LiftGammaGain*
class CORDL_TYPE LiftGammaGain : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field gain, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_gain, put = __cordl_internal_set_gain))::UnityEngine::Rendering::Vector4Parameter* gain;

  /// @brief Field gamma, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_gamma, put = __cordl_internal_set_gamma))::UnityEngine::Rendering::Vector4Parameter* gamma;

  /// @brief Field lift, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_lift, put = __cordl_internal_set_lift))::UnityEngine::Rendering::Vector4Parameter* lift;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x2726f10, size 0xa8, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x2726fb8, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::LiftGammaGain* New_ctor();

  constexpr ::UnityEngine::Rendering::Vector4Parameter*& __cordl_internal_get_gain();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& __cordl_internal_get_gain() const;

  constexpr ::UnityEngine::Rendering::Vector4Parameter*& __cordl_internal_get_gamma();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& __cordl_internal_get_gamma() const;

  constexpr ::UnityEngine::Rendering::Vector4Parameter*& __cordl_internal_get_lift();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& __cordl_internal_get_lift() const;

  constexpr void __cordl_internal_set_gain(::UnityEngine::Rendering::Vector4Parameter* value);

  constexpr void __cordl_internal_set_gamma(::UnityEngine::Rendering::Vector4Parameter* value);

  constexpr void __cordl_internal_set_lift(::UnityEngine::Rendering::Vector4Parameter* value);

  /// @brief Method .ctor, addr 0x2726fc0, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiftGammaGain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LiftGammaGain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiftGammaGain(LiftGammaGain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiftGammaGain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiftGammaGain(LiftGammaGain const&) = delete;

  /// @brief Field lift, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector4Parameter* ___lift;

  /// @brief Field gamma, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector4Parameter* ___gamma;

  /// @brief Field gain, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Vector4Parameter* ___gain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LiftGammaGain, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LiftGammaGain, ___lift) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LiftGammaGain, ___gamma) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LiftGammaGain, ___gain) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LiftGammaGain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LiftGammaGain*, "UnityEngine.Rendering.Universal", "LiftGammaGain");
