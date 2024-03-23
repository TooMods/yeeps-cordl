#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRGroupMember)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRGroupMember;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRGroupMember
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRGroupMember*
class CORDL_TYPE IXRGroupMember {
public:
  // Declarations
  __declspec(property(get = get_containingGroup))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* containingGroup;

  /// @brief Method OnRegisteringAsGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* group);

  /// @brief Method OnRegisteringAsNonGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnRegisteringAsNonGroupMember();

  /// @brief Method get_containingGroup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* get_containingGroup();

  // Ctor Parameters [CppParam { name: "", ty: "IXRGroupMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRGroupMember(IXRGroupMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRGroupMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRGroupMember(IXRGroupMember const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*, "UnityEngine.XR.Interaction.Toolkit", "IXRGroupMember");
