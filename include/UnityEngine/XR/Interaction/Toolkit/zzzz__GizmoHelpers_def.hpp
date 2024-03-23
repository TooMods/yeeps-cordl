#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GizmoHelpers)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class GizmoHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers);
// Type: UnityEngine.XR.Interaction.Toolkit::GizmoHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::GizmoHelpers*
class CORDL_TYPE GizmoHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_XAxisColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_XAxisColor, put = setStaticF_s_XAxisColor))::UnityEngine::Color s_XAxisColor;

  /// @brief Field s_YAxisColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_YAxisColor, put = setStaticF_s_YAxisColor))::UnityEngine::Color s_YAxisColor;

  /// @brief Field s_ZAxisColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_ZAxisColor, put = setStaticF_s_ZAxisColor))::UnityEngine::Color s_ZAxisColor;

  /// @brief Method DrawAxisArrows, addr 0x301abd0, size 0x14c, virtual false, abstract: false, final false
  static inline void DrawAxisArrows(::UnityEngine::Transform* transform, float_t size);

  /// @brief Method DrawWireCubeOriented, addr 0x301a468, size 0x768, virtual false, abstract: false, final false
  static inline void DrawWireCubeOriented(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t size);

  /// @brief Method DrawWirePlaneOriented, addr 0x301cda4, size 0x284, virtual false, abstract: false, final false
  static inline void DrawWirePlaneOriented(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t size);

  static inline ::UnityEngine::Color getStaticF_s_XAxisColor();

  static inline ::UnityEngine::Color getStaticF_s_YAxisColor();

  static inline ::UnityEngine::Color getStaticF_s_ZAxisColor();

  static inline void setStaticF_s_XAxisColor(::UnityEngine::Color value);

  static inline void setStaticF_s_YAxisColor(::UnityEngine::Color value);

  static inline void setStaticF_s_ZAxisColor(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoHelpers(GizmoHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoHelpers(GizmoHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*, "UnityEngine.XR.Interaction.Toolkit", "GizmoHelpers");
