#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRGroupMemberExtensions)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRGroupMember;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRGroupMemberExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions);
// Type: UnityEngine.XR.Interaction.Toolkit::XRGroupMemberExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRGroupMemberExtensions*
class CORDL_TYPE XRGroupMemberExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetTopLevelContainingGroup, addr 0x25a6c9c, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* GetTopLevelContainingGroup(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRGroupMemberExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRGroupMemberExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRGroupMemberExtensions(XRGroupMemberExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRGroupMemberExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRGroupMemberExtensions(XRGroupMemberExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions*, "UnityEngine.XR.Interaction.Toolkit", "XRGroupMemberExtensions");
