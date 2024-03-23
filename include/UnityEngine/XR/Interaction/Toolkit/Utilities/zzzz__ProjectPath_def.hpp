#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProjectPath)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class ProjectPath;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProjectPath);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::ProjectPath
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::ProjectPath*
class CORDL_TYPE ProjectPath : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProjectPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectPath(ProjectPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectPath(ProjectPath const&) = delete;

  /// @brief Field k_XRInteractionSettingsFolder offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRInteractionSettingsFolder{ u"Assets/XRI/Settings" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::ProjectPath, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProjectPath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProjectPath*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "ProjectPath");
