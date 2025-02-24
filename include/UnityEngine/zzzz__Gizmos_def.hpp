#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Gizmos)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Gizmos;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Gizmos);
// Type: UnityEngine::Gizmos
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Gizmos*
class CORDL_TYPE Gizmos : public ::System::Object {
public:
  // Declarations
  /// @brief Method DrawIcon, addr 0x2a81db4, size 0x68, virtual false, abstract: false, final false
  static inline void DrawIcon(::UnityEngine::Vector3 center, ::StringW name, bool allowScaling, ::UnityEngine::Color tint);

  /// @brief Method DrawIcon_Injected, addr 0x2a81e1c, size 0x5c, virtual false, abstract: false, final false
  static inline void DrawIcon_Injected(ByRef<::UnityEngine::Vector3> center, ::StringW name, bool allowScaling, ByRef<::UnityEngine::Color> tint);

  /// @brief Method DrawLine, addr 0x2a81be0, size 0x50, virtual false, abstract: false, final false
  static inline void DrawLine(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method DrawLine_Injected, addr 0x2a81c30, size 0x44, virtual false, abstract: false, final false
  static inline void DrawLine_Injected(ByRef<::UnityEngine::Vector3> from, ByRef<::UnityEngine::Vector3> to);

  /// @brief Method DrawRay, addr 0x2a81bd0, size 0x10, virtual false, abstract: false, final false
  static inline void DrawRay(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction);

  /// @brief Method DrawSphere, addr 0x2a81d14, size 0x54, virtual false, abstract: false, final false
  static inline void DrawSphere(::UnityEngine::Vector3 center, float_t radius);

  /// @brief Method DrawSphere_Injected, addr 0x2a81d68, size 0x4c, virtual false, abstract: false, final false
  static inline void DrawSphere_Injected(ByRef<::UnityEngine::Vector3> center, float_t radius);

  /// @brief Method DrawWireSphere, addr 0x2a81c74, size 0x54, virtual false, abstract: false, final false
  static inline void DrawWireSphere(::UnityEngine::Vector3 center, float_t radius);

  /// @brief Method DrawWireSphere_Injected, addr 0x2a81cc8, size 0x4c, virtual false, abstract: false, final false
  static inline void DrawWireSphere_Injected(ByRef<::UnityEngine::Vector3> center, float_t radius);

  /// @brief Method set_color, addr 0x2a81e78, size 0x44, virtual false, abstract: false, final false
  static inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_color_Injected, addr 0x2a81ebc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_color_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_matrix, addr 0x2a81ef8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_matrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_matrix_Injected, addr 0x2a81f34, size 0x3c, virtual false, abstract: false, final false
  static inline void set_matrix_Injected(ByRef<::UnityEngine::Matrix4x4> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gizmos();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gizmos(Gizmos&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gizmos(Gizmos const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Gizmos, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Gizmos);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
