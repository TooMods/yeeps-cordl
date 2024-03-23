#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__AnimationCurveDatum_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
CORDL_MODULE_EXPORT(AnimationCurveDatumProperty)
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatum;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatumProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty);
// Type: Unity.XR.CoreUtils.Datums::AnimationCurveDatumProperty
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Datums::AnimationCurveDatumProperty*
class CORDL_TYPE AnimationCurveDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::AnimationCurve*, ::UnityW<::Unity::XR::CoreUtils::Datums::AnimationCurveDatum>> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* New_ctor(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum* datum);

  static inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* New_ctor(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x2881c3c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum* datum);

  /// @brief Method .ctor, addr 0x2881be4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AnimationCurve* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationCurveDatumProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurveDatumProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationCurveDatumProperty(AnimationCurveDatumProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurveDatumProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationCurveDatumProperty(AnimationCurveDatumProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty, 0x28>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils::Datums
NEED_NO_BOX(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*, "Unity.XR.CoreUtils.Datums", "AnimationCurveDatumProperty");
