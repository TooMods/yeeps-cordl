#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRUtils)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class XRUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::XRUtils);
// Type: UnityEngine.Rendering::XRUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::XRUtils*
class CORDL_TYPE XRUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method DrawOcclusionMesh, addr 0x17d20ec, size 0xa0, virtual false, abstract: false, final false
  static inline void DrawOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, bool stereoEnabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRUtils(XRUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRUtils(XRUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::XRUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::XRUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::XRUtils*, "UnityEngine.Rendering", "XRUtils");
