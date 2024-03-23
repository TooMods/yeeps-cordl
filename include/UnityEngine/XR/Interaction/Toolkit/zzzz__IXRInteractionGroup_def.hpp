#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IXRInteractionGroup)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRGroupMember;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup);
// Type: UnityEngine.XR.Interaction.Toolkit::IXRInteractionGroup
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXRInteractionGroup*
class CORDL_TYPE IXRInteractionGroup {
public:
  // Declarations
  __declspec(property(get = get_activeInteractor))::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* activeInteractor;

  /// @brief Method AddGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method ClearGroupMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearGroupMembers();

  /// @brief Method ContainsGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ContainsGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method GetGroupMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* results);

  /// @brief Method HasDependencyOnGroup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasDependencyOnGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* group);

  /// @brief Method MoveGroupMemberTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MoveGroupMemberTo(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember, int32_t newIndex);

  /// @brief Method OnBeforeUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnBeforeUnregistered();

  /// @brief Method OnRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* args);

  /// @brief Method OnUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* args);

  /// @brief Method PreprocessGroupMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PreprocessGroupMembers(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessGroupMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessGroupMembers(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method RemoveGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool RemoveGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method UpdateGroupMemberInteractions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateGroupMemberInteractions();

  /// @brief Method UpdateGroupMemberInteractions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateGroupMemberInteractions(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* prePrioritizedInteractor,
                                            ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> interactorThatPerformedInteraction);

  /// @brief Method add_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  /// @brief Method add_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  /// @brief Method get_activeInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* get_activeInteractor();

  /// @brief Method remove_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  /// @brief Method remove_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IXRInteractionGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXRInteractionGroup(IXRInteractionGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXRInteractionGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXRInteractionGroup(IXRInteractionGroup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*, "UnityEngine.XR.Interaction.Toolkit", "IXRInteractionGroup");
