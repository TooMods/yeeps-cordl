#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(ChannelMixer)
namespace UnityEngine::Rendering::Universal {
class IPostProcessComponent;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ChannelMixer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ChannelMixer);
// Type: UnityEngine.Rendering.Universal::ChannelMixer
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ChannelMixer*
class CORDL_TYPE ChannelMixer : public ::UnityEngine::Rendering::VolumeComponent {
public:
  // Declarations
  /// @brief Field blueOutBlueIn, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_blueOutBlueIn, put = __cordl_internal_set_blueOutBlueIn))::UnityEngine::Rendering::ClampedFloatParameter* blueOutBlueIn;

  /// @brief Field blueOutGreenIn, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_blueOutGreenIn, put = __cordl_internal_set_blueOutGreenIn))::UnityEngine::Rendering::ClampedFloatParameter* blueOutGreenIn;

  /// @brief Field blueOutRedIn, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_blueOutRedIn, put = __cordl_internal_set_blueOutRedIn))::UnityEngine::Rendering::ClampedFloatParameter* blueOutRedIn;

  /// @brief Field greenOutBlueIn, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_greenOutBlueIn, put = __cordl_internal_set_greenOutBlueIn))::UnityEngine::Rendering::ClampedFloatParameter* greenOutBlueIn;

  /// @brief Field greenOutGreenIn, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_greenOutGreenIn, put = __cordl_internal_set_greenOutGreenIn))::UnityEngine::Rendering::ClampedFloatParameter* greenOutGreenIn;

  /// @brief Field greenOutRedIn, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_greenOutRedIn, put = __cordl_internal_set_greenOutRedIn))::UnityEngine::Rendering::ClampedFloatParameter* greenOutRedIn;

  /// @brief Field redOutBlueIn, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_redOutBlueIn, put = __cordl_internal_set_redOutBlueIn))::UnityEngine::Rendering::ClampedFloatParameter* redOutBlueIn;

  /// @brief Field redOutGreenIn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_redOutGreenIn, put = __cordl_internal_set_redOutGreenIn))::UnityEngine::Rendering::ClampedFloatParameter* redOutGreenIn;

  /// @brief Field redOutRedIn, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_redOutRedIn, put = __cordl_internal_set_redOutRedIn))::UnityEngine::Rendering::ClampedFloatParameter* redOutRedIn;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept;

  /// @brief Method IsActive, addr 0x2725784, size 0x130, virtual true, abstract: false, final true
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x27258b4, size 0x8, virtual true, abstract: false, final true
  inline bool IsTileCompatible();

  static inline ::UnityEngine::Rendering::Universal::ChannelMixer* New_ctor();

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_blueOutBlueIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_blueOutBlueIn() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_blueOutGreenIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_blueOutGreenIn() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_blueOutRedIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_blueOutRedIn() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_greenOutBlueIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_greenOutBlueIn() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_greenOutGreenIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_greenOutGreenIn() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_greenOutRedIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_greenOutRedIn() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_redOutBlueIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_redOutBlueIn() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_redOutGreenIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_redOutGreenIn() const;

  constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_redOutRedIn();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& __cordl_internal_get_redOutRedIn() const;

  constexpr void __cordl_internal_set_blueOutBlueIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_blueOutGreenIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_blueOutRedIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_greenOutBlueIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_greenOutGreenIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_greenOutRedIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_redOutBlueIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_redOutGreenIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  constexpr void __cordl_internal_set_redOutRedIn(::UnityEngine::Rendering::ClampedFloatParameter* value);

  /// @brief Method .ctor, addr 0x27258bc, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
  constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelMixer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChannelMixer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChannelMixer(ChannelMixer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChannelMixer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChannelMixer(ChannelMixer const&) = delete;

  /// @brief Field redOutRedIn, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___redOutRedIn;

  /// @brief Field redOutGreenIn, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___redOutGreenIn;

  /// @brief Field redOutBlueIn, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___redOutBlueIn;

  /// @brief Field greenOutRedIn, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___greenOutRedIn;

  /// @brief Field greenOutGreenIn, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___greenOutGreenIn;

  /// @brief Field greenOutBlueIn, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___greenOutBlueIn;

  /// @brief Field blueOutRedIn, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___blueOutRedIn;

  /// @brief Field blueOutGreenIn, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___blueOutGreenIn;

  /// @brief Field blueOutBlueIn, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::ClampedFloatParameter* ___blueOutBlueIn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ChannelMixer, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___redOutRedIn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___redOutGreenIn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___redOutBlueIn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___greenOutRedIn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___greenOutGreenIn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___greenOutBlueIn) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___blueOutRedIn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___blueOutGreenIn) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ChannelMixer, ___blueOutBlueIn) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ChannelMixer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ChannelMixer*, "UnityEngine.Rendering.Universal", "ChannelMixer");
