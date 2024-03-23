#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransformExtensions)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class TransformExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::TransformExtensions);
// Type: Unity.XR.CoreUtils::TransformExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::TransformExtensions*
class CORDL_TYPE TransformExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetLocalPose, addr 0x2874f58, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose GetLocalPose(::UnityEngine::Transform* transform);

  /// @brief Method GetWorldPose, addr 0x2874fec, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose GetWorldPose(::UnityEngine::Transform* transform);

  /// @brief Method InverseTransformPose, addr 0x2875148, size 0x194, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InverseTransformPose(::UnityEngine::Transform* transform, ::UnityEngine::Pose pose);

  /// @brief Method InverseTransformRay, addr 0x28752dc, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Ray InverseTransformRay(::UnityEngine::Transform* transform, ::UnityEngine::Ray ray);

  /// @brief Method SetLocalPose, addr 0x2875080, size 0x44, virtual false, abstract: false, final false
  static inline void SetLocalPose(::UnityEngine::Transform* transform, ::UnityEngine::Pose pose);

  /// @brief Method SetWorldPose, addr 0x28750c4, size 0x44, virtual false, abstract: false, final false
  static inline void SetWorldPose(::UnityEngine::Transform* transform, ::UnityEngine::Pose pose);

  /// @brief Method TransformPose, addr 0x2875108, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose TransformPose(::UnityEngine::Transform* transform, ::UnityEngine::Pose pose);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformExtensions(TransformExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformExtensions(TransformExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::TransformExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::TransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::TransformExtensions*, "Unity.XR.CoreUtils", "TransformExtensions");
