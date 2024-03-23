#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QuaternionExtensions)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class QuaternionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::QuaternionExtensions);
// Type: Unity.XR.CoreUtils::QuaternionExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::QuaternionExtensions*
class CORDL_TYPE QuaternionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConstrainYaw, addr 0x28749f4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion ConstrainYaw(::UnityEngine::Quaternion rotation);

  /// @brief Method ConstrainYawNormalized, addr 0x2874a00, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion ConstrainYawNormalized(::UnityEngine::Quaternion rotation);

  /// @brief Method ConstrainYawPitchNormalized, addr 0x2874abc, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion ConstrainYawPitchNormalized(::UnityEngine::Quaternion rotation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuaternionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaternionExtensions(QuaternionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaternionExtensions(QuaternionExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::QuaternionExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::QuaternionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::QuaternionExtensions*, "Unity.XR.CoreUtils", "QuaternionExtensions");
