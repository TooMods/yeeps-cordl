#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Extensions)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector2Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Vector2Extensions);
// Type: Unity.XR.CoreUtils::Vector2Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::Vector2Extensions*
class CORDL_TYPE Vector2Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Abs, addr 0x2877610, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Abs(::UnityEngine::Vector2 vector);

  /// @brief Method Inverse, addr 0x28775e8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Inverse(::UnityEngine::Vector2 vector);

  /// @brief Method MaxComponent, addr 0x2877604, size 0xc, virtual false, abstract: false, final false
  static inline float_t MaxComponent(::UnityEngine::Vector2 vector);

  /// @brief Method MinComponent, addr 0x28775f8, size 0xc, virtual false, abstract: false, final false
  static inline float_t MinComponent(::UnityEngine::Vector2 vector);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Extensions(Vector2Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Extensions(Vector2Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Vector2Extensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::Vector2Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Vector2Extensions*, "Unity.XR.CoreUtils", "Vector2Extensions");
