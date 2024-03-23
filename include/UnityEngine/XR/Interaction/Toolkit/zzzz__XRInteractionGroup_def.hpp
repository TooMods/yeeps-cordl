#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractionGroup)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class RegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRGroupMember;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup);
// Type: UnityEngine.XR.Interaction.Toolkit::XRInteractionGroup
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRInteractionGroup*
class CORDL_TYPE XRInteractionGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <activeInteractor>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__activeInteractor_k__BackingField,
                      put = __cordl_internal_set__activeInteractor_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* _activeInteractor_k__BackingField;

  /// @brief Field <containingGroup>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__containingGroup_k__BackingField,
                      put = __cordl_internal_set__containingGroup_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* _containingGroup_k__BackingField;

  __declspec(property(get = get_activeInteractor, put = set_activeInteractor))::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* activeInteractor;

  __declspec(property(get = get_containingGroup, put = set_containingGroup))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* containingGroup;

  __declspec(property(get = get_interactionManager, put = set_interactionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> interactionManager;

  /// @brief Field m_DeprecatedValidTargets, offset 0x70, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DeprecatedValidTargets,
      put = __cordl_internal_set_m_DeprecatedValidTargets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* m_DeprecatedValidTargets;

  /// @brief Field m_GroupMembers, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_GroupMembers,
      put = __cordl_internal_set_m_GroupMembers))::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* m_GroupMembers;

  /// @brief Field m_InteractionManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionManager,
                      put = __cordl_internal_set_m_InteractionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> m_InteractionManager;

  /// @brief Field m_IsProcessingGroupMembers, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsProcessingGroupMembers, put = __cordl_internal_set_m_IsProcessingGroupMembers)) bool m_IsProcessingGroupMembers;

  /// @brief Field m_RegisteredInteractionManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredInteractionManager,
                      put = __cordl_internal_set_m_RegisteredInteractionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> m_RegisteredInteractionManager;

  /// @brief Field m_StartingGroupMembers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingGroupMembers,
                      put = __cordl_internal_set_m_StartingGroupMembers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* m_StartingGroupMembers;

  /// @brief Field m_TempGroupMembers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempGroupMembers,
                      put = __cordl_internal_set_m_TempGroupMembers))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* m_TempGroupMembers;

  /// @brief Field m_ValidTargets, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValidTargets,
                      put = __cordl_internal_set_m_ValidTargets))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_ValidTargets;

  /// @brief Field registered, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_registered,
                      put = __cordl_internal_set_registered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* registered;

  /// @brief Field s_InteractablesHovered, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractablesHovered,
                             put = setStaticF_s_InteractablesHovered))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* s_InteractablesHovered;

  /// @brief Field s_InteractablesSelected, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractablesSelected,
                             put = setStaticF_s_InteractablesSelected))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* s_InteractablesSelected;

  /// @brief Field s_InteractionManagerCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractionManagerCache,
                             put = setStaticF_s_InteractionManagerCache))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> s_InteractionManagerCache;

  __declspec(property(get = get_startingGroupMembers, put = set_startingGroupMembers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* startingGroupMembers;

  /// @brief Field unregistered, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_unregistered,
                      put = __cordl_internal_set_unregistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* unregistered;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*() noexcept;

  /// @brief Method AddGroupMember, addr 0x2cf1398, size 0x14c, virtual true, abstract: false, final true
  inline void AddGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method Awake, addr 0x2cf0bf8, size 0x2f4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CanStartOrContinueAnySelect, addr 0x2cf2d60, size 0x3a4, virtual false, abstract: false, final false
  inline bool CanStartOrContinueAnySelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* selectInteractor);

  /// @brief Method ClearAllInteractorHovers, addr 0x2cf44b0, size 0x240, virtual false, abstract: false, final false
  inline void ClearAllInteractorHovers(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* hoverInteractor);

  /// @brief Method ClearAllInteractorSelections, addr 0x2cf41b0, size 0x240, virtual false, abstract: false, final false
  inline void ClearAllInteractorSelections(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* selectInteractor);

  /// @brief Method ClearGroupMembers, addr 0x2cf1594, size 0x9c, virtual true, abstract: false, final true
  inline void ClearGroupMembers();

  /// @brief Method ContainsGroupMember, addr 0x2cf2114, size 0x20, virtual true, abstract: false, final true
  inline bool ContainsGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method FindCreateInteractionManager, addr 0x2cf0eec, size 0x2b8, virtual false, abstract: false, final false
  inline void FindCreateInteractionManager();

  /// @brief Method GetGroupMembers, addr 0x2cf2134, size 0x70, virtual true, abstract: false, final true
  inline void GetGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* results);

  /// @brief Method HasDependencyOnGroup, addr 0x2cf21a4, size 0x200, virtual true, abstract: false, final true
  inline bool HasDependencyOnGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* group);

  /// @brief Method MoveGroupMemberTo, addr 0x2cf11a4, size 0x1f4, virtual true, abstract: false, final true
  inline void MoveGroupMemberTo(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember, int32_t newIndex);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup* New_ctor();

  /// @brief Method OnDestroy, addr 0x2cf1590, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2cf14fc, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2cf14e4, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ReRegisterGroupMemberWithInteractionManager, addr 0x2cf23a4, size 0x1f4, virtual false, abstract: false, final false
  inline void ReRegisterGroupMemberWithInteractionManager(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method RegisterAsGroupMember, addr 0x2cf1968, size 0x108, virtual false, abstract: false, final false
  inline void RegisterAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method RegisterAsNonGroupMember, addr 0x2cf1c18, size 0x104, virtual false, abstract: false, final false
  inline void RegisterAsNonGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method RegisterWithInteractionManager, addr 0x2cf0af8, size 0xcc, virtual false, abstract: false, final false
  inline void RegisterWithInteractionManager();

  /// @brief Method RemoveGroupMember, addr 0x2cf20c4, size 0x50, virtual true, abstract: false, final true
  inline bool RemoveGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  /// @brief Method Reset, addr 0x2cf0bf4, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRGroupMember.OnRegisteringAsGroupMember, addr 0x2cf4b20, size 0x188, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* group);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRGroupMember.OnRegisteringAsNonGroupMember, addr 0x2cf4ca8, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsNonGroupMember();

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnBeforeUnregistered, addr 0x2cf1a70, size 0x1a8, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnBeforeUnregistered();

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnRegistered, addr 0x2cf1630, size 0x338, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnUnregistered, addr 0x2cf1d1c, size 0x13c, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* args);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.PreprocessGroupMembers, addr 0x2cf25d8, size 0x340, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_PreprocessGroupMembers(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.ProcessGroupMembers, addr 0x2cf2918, size 0x32c, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_ProcessGroupMembers(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.UpdateGroupMemberInteractions, addr 0x2cf2c44, size 0x11c, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions();

  /// @brief Method UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.UpdateGroupMemberInteractions, addr 0x2cf34ac, size 0x32c, virtual true, abstract: false, final true
  inline void UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* prePrioritizedInteractor,
                                                                                                   ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> interactorThatPerformedInteraction);

  /// @brief Method UnregisterWithInteractionManager, addr 0x2cf1500, size 0x90, virtual false, abstract: false, final false
  inline void UnregisterWithInteractionManager();

  /// @brief Method UpdateInteractorInteractions, addr 0x2cf37d8, size 0x9d8, virtual false, abstract: false, final false
  inline void UpdateInteractorInteractions(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, bool preventInteraction, ByRef<bool> performedInteraction);

  /// @brief Method ValidateAddGroupMember, addr 0x2cf1e58, size 0x26c, virtual false, abstract: false, final false
  inline bool ValidateAddGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember);

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*& __cordl_internal_get__activeInteractor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> const& __cordl_internal_get__activeInteractor_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*& __cordl_internal_get__containingGroup_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*> const& __cordl_internal_get__containingGroup_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*& __cordl_internal_get_m_DeprecatedValidTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*> const&
  __cordl_internal_get_m_DeprecatedValidTargets() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*& __cordl_internal_get_m_GroupMembers();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*> const&
  __cordl_internal_get_m_GroupMembers() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager();

  constexpr bool const& __cordl_internal_get_m_IsProcessingGroupMembers() const;

  constexpr bool& __cordl_internal_get_m_IsProcessingGroupMembers();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_RegisteredInteractionManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_RegisteredInteractionManager();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingGroupMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_StartingGroupMembers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*& __cordl_internal_get_m_TempGroupMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*> const&
  __cordl_internal_get_m_TempGroupMembers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_m_ValidTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const& __cordl_internal_get_m_ValidTargets() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*& __cordl_internal_get_registered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*> const& __cordl_internal_get_registered() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*& __cordl_internal_get_unregistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*> const& __cordl_internal_get_unregistered() const;

  constexpr void __cordl_internal_set__activeInteractor_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value);

  constexpr void __cordl_internal_set__containingGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  constexpr void __cordl_internal_set_m_DeprecatedValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* value);

  constexpr void __cordl_internal_set_m_GroupMembers(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* value);

  constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void __cordl_internal_set_m_IsProcessingGroupMembers(bool value);

  constexpr void __cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void __cordl_internal_set_m_StartingGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_TempGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* value);

  constexpr void __cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  /// @brief Method .ctor, addr 0x2cf4cb0, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_registered, addr 0x2cf07f4, size 0xb0, virtual true, abstract: false, final true
  inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  /// @brief Method add_unregistered, addr 0x2cf0954, size 0xb0, virtual true, abstract: false, final true
  inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* getStaticF_s_InteractablesHovered();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* getStaticF_s_InteractablesSelected();

  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> getStaticF_s_InteractionManagerCache();

  /// @brief Method get_activeInteractor, addr 0x2cf0be4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* get_activeInteractor();

  /// @brief Method get_containingGroup, addr 0x2cf0bc4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* get_containingGroup();

  /// @brief Method get_interactionManager, addr 0x2cf0ab4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager();

  /// @brief Method get_startingGroupMembers, addr 0x2cf0bd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingGroupMembers();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* i___UnityEngine__XR__Interaction__Toolkit__IXRGroupMember() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* i___UnityEngine__XR__Interaction__Toolkit__IXRInteractionGroup() noexcept;

  /// @brief Method remove_registered, addr 0x2cf08a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  /// @brief Method remove_unregistered, addr 0x2cf0a04, size 0xb0, virtual true, abstract: false, final true
  inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  static inline void setStaticF_s_InteractablesHovered(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* value);

  static inline void setStaticF_s_InteractablesSelected(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* value);

  static inline void setStaticF_s_InteractionManagerCache(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  /// @brief Method set_activeInteractor, addr 0x2cf0bec, size 0x8, virtual false, abstract: false, final false
  inline void set_activeInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value);

  /// @brief Method set_containingGroup, addr 0x2cf0bcc, size 0x8, virtual false, abstract: false, final false
  inline void set_containingGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value);

  /// @brief Method set_interactionManager, addr 0x2cf0abc, size 0x3c, virtual false, abstract: false, final false
  inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value);

  /// @brief Method set_startingGroupMembers, addr 0x2cf0bdc, size 0x8, virtual false, abstract: false, final false
  inline void set_startingGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractionGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractionGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractionGroup(XRInteractionGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractionGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractionGroup(XRInteractionGroup const&) = delete;

  /// @brief Field registered, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* ___registered;

  /// @brief Field unregistered, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* ___unregistered;

  /// @brief Field m_InteractionManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ___m_InteractionManager;

  /// @brief Field m_RegisteredInteractionManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ___m_RegisteredInteractionManager;

  /// @brief Field <containingGroup>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* ____containingGroup_k__BackingField;

  /// @brief Field m_StartingGroupMembers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* ___m_StartingGroupMembers;

  /// @brief Field <activeInteractor>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* ____activeInteractor_k__BackingField;

  /// @brief Field m_GroupMembers, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* ___m_GroupMembers;

  /// @brief Field m_TempGroupMembers, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* ___m_TempGroupMembers;

  /// @brief Field m_IsProcessingGroupMembers, offset: 0x60, size: 0x1, def value: None
  bool ___m_IsProcessingGroupMembers;

  /// @brief Field m_ValidTargets, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_ValidTargets;

  /// @brief Field m_DeprecatedValidTargets, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* ___m_DeprecatedValidTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___registered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___unregistered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___m_InteractionManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___m_RegisteredInteractionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ____containingGroup_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___m_StartingGroupMembers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ____activeInteractor_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___m_GroupMembers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___m_TempGroupMembers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___m_IsProcessingGroupMembers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___m_ValidTargets) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup, ___m_DeprecatedValidTargets) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionGroup");
