#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfFieldMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(DepthOfFieldModeParameter)
namespace UnityEngine::Rendering::Universal {
struct DepthOfFieldMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DepthOfFieldModeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter);
// Type: UnityEngine.Rendering.Universal::DepthOfFieldModeParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DepthOfFieldModeParameter*
class CORDL_TYPE DepthOfFieldModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* New_ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode value, bool overrideState);

  /// @brief Method .ctor, addr 0x2726aa0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthOfFieldModeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthOfFieldModeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthOfFieldModeParameter(DepthOfFieldModeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthOfFieldModeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthOfFieldModeParameter(DepthOfFieldModeParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter*, "UnityEngine.Rendering.Universal", "DepthOfFieldModeParameter");
