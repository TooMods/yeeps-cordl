#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(MotionBlurModeParameter)
namespace UnityEngine::Rendering::Universal {
struct MotionBlurMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MotionBlurModeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionBlurModeParameter);
// Type: UnityEngine.Rendering.Universal::MotionBlurModeParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::MotionBlurModeParameter*
class CORDL_TYPE MotionBlurModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::MotionBlurMode> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::MotionBlurModeParameter* New_ctor(::UnityEngine::Rendering::Universal::MotionBlurMode value, bool overrideState);

  /// @brief Method .ctor, addr 0x272720c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::MotionBlurMode value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionBlurModeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionBlurModeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionBlurModeParameter(MotionBlurModeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionBlurModeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionBlurModeParameter(MotionBlurModeParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionBlurModeParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionBlurModeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionBlurModeParameter*, "UnityEngine.Rendering.Universal", "MotionBlurModeParameter");
