#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__MatchOrientation_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TeleportRequest)
namespace UnityEngine::XR::Interaction::Toolkit {
struct MatchOrientation;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct TeleportRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest);
// Type: UnityEngine.XR.Interaction.Toolkit::TeleportRequest
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::TeleportRequest
struct CORDL_TYPE TeleportRequest {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeleportRequest();

  // Ctor Parameters [CppParam { name: "destinationPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "destinationRotation", ty: "::UnityEngine::Quaternion",
  // modifiers: "", def_value: None }, CppParam { name: "requestTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "matchOrientation", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::MatchOrientation", modifiers: "", def_value: None }]
  constexpr TeleportRequest(::UnityEngine::Vector3 destinationPosition, ::UnityEngine::Quaternion destinationRotation, float_t requestTime,
                            ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation matchOrientation) noexcept;

  /// @brief Field destinationPosition, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 destinationPosition;

  /// @brief Field destinationRotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion destinationRotation;

  /// @brief Field requestTime, offset: 0x1c, size: 0x4, def value: None
  float_t requestTime;

  /// @brief Field matchOrientation, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation matchOrientation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest, 0x24>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest, destinationPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest, destinationRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest, requestTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest, matchOrientation) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest, "UnityEngine.XR.Interaction.Toolkit", "TeleportRequest");
