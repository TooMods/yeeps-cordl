#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
CORDL_MODULE_EXPORT(AnimationCurveParameter)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class AnimationCurveParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::AnimationCurveParameter);
// Type: UnityEngine.Rendering::AnimationCurveParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::AnimationCurveParameter*
class CORDL_TYPE AnimationCurveParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::AnimationCurve*> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::AnimationCurveParameter* New_ctor(::UnityEngine::AnimationCurve* value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d7af0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AnimationCurve* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationCurveParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurveParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationCurveParameter(AnimationCurveParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurveParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationCurveParameter(AnimationCurveParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AnimationCurveParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::AnimationCurveParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AnimationCurveParameter*, "UnityEngine.Rendering", "AnimationCurveParameter");
