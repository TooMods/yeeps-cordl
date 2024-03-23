#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Extensions)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector3Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Vector3Extensions);
// Type: Unity.XR.CoreUtils::Vector3Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::Vector3Extensions*
class CORDL_TYPE Vector3Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Abs, addr 0x2877658, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 vector);

  /// @brief Method Divide, addr 0x2877678, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Divide(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 scale);

  /// @brief Method Inverse, addr 0x287761c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Inverse(::UnityEngine::Vector3 vector);

  /// @brief Method MaxComponent, addr 0x2877644, size 0x14, virtual false, abstract: false, final false
  static inline float_t MaxComponent(::UnityEngine::Vector3 vector);

  /// @brief Method MinComponent, addr 0x2877630, size 0x14, virtual false, abstract: false, final false
  static inline float_t MinComponent(::UnityEngine::Vector3 vector);

  /// @brief Method Multiply, addr 0x2877668, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 scale);

  /// @brief Method SafeDivide, addr 0x2877688, size 0x240, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SafeDivide(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 scale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Extensions(Vector3Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Extensions(Vector3Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Vector3Extensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::Vector3Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Vector3Extensions*, "Unity.XR.CoreUtils", "Vector3Extensions");
