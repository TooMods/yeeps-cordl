#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PoseExtensions)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class PoseExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::PoseExtensions);
// Type: Unity.XR.CoreUtils::PoseExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::PoseExtensions*
class CORDL_TYPE PoseExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyInverseOffsetTo, addr 0x287499c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ApplyInverseOffsetTo(::UnityEngine::Pose pose, ::UnityEngine::Vector3 position);

  /// @brief Method ApplyOffsetTo, addr 0x287485c, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose ApplyOffsetTo(::UnityEngine::Pose pose, ::UnityEngine::Pose otherPose);

  /// @brief Method ApplyOffsetTo, addr 0x2874954, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ApplyOffsetTo(::UnityEngine::Pose pose, ::UnityEngine::Vector3 position);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoseExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseExtensions(PoseExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseExtensions(PoseExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::PoseExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::PoseExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::PoseExtensions*, "Unity.XR.CoreUtils", "PoseExtensions");
