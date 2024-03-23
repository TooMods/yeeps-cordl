#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CameraExtensions)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class CameraExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::CameraExtensions);
// Type: Unity.XR.CoreUtils::CameraExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::CameraExtensions*
class CORDL_TYPE CameraExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetHorizontalFieldOfView, addr 0x28736e8, size 0x64, virtual false, abstract: false, final false
  static inline float_t GetHorizontalFieldOfView(::UnityEngine::Camera* camera);

  /// @brief Method GetVerticalFieldOfView, addr 0x2873678, size 0x70, virtual false, abstract: false, final false
  static inline float_t GetVerticalFieldOfView(::UnityEngine::Camera* camera, float_t aspectNeutralFieldOfView);

  /// @brief Method GetVerticalOrthographicSize, addr 0x287374c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetVerticalOrthographicSize(::UnityEngine::Camera* camera, float_t size);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraExtensions(CameraExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraExtensions(CameraExtensions const&) = delete;

  /// @brief Field k_OneOverSqrt2 offset 0xffffffff size 0x4
  static constexpr float_t k_OneOverSqrt2{ 0.70710677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::CameraExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::CameraExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::CameraExtensions*, "Unity.XR.CoreUtils", "CameraExtensions");
