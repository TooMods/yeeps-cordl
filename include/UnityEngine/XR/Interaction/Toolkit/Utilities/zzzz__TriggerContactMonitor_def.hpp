#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TriggerContactMonitor)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TriggerContactMonitor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::TriggerContactMonitor
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::TriggerContactMonitor*
class CORDL_TYPE TriggerContactMonitor : public ::System::Object {
public:
  // Declarations
  /// @brief Field <interactionManager>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__interactionManager_k__BackingField,
                      put = __cordl_internal_set__interactionManager_k__BackingField))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> _interactionManager_k__BackingField;

  /// @brief Field contactAdded, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contactAdded, put = __cordl_internal_set_contactAdded))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* contactAdded;

  /// @brief Field contactRemoved, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contactRemoved,
                      put = __cordl_internal_set_contactRemoved))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* contactRemoved;

  __declspec(property(get = get_interactionManager, put = set_interactionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> interactionManager;

  /// @brief Field m_EnteredColliders, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnteredColliders,
                      put = __cordl_internal_set_m_EnteredColliders))::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,
                                                                                                                  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_EnteredColliders;

  /// @brief Field m_EnteredUnassociatedColliders, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnteredUnassociatedColliders,
                      put = __cordl_internal_set_m_EnteredUnassociatedColliders))::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* m_EnteredUnassociatedColliders;

  /// @brief Field m_UnorderedInteractables, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_UnorderedInteractables,
               put = __cordl_internal_set_m_UnorderedInteractables))::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_UnorderedInteractables;

  /// @brief Field s_ExitedColliders, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ExitedColliders, put = setStaticF_s_ExitedColliders))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* s_ExitedColliders;

  /// @brief Field s_ScratchColliders, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ScratchColliders, put = setStaticF_s_ScratchColliders))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* s_ScratchColliders;

  /// @brief Method AddCollider, addr 0x3021170, size 0x138, virtual false, abstract: false, final false
  inline void AddCollider(::UnityEngine::Collider* collider);

  /// @brief Method IsContacting, addr 0x30223d4, size 0x58, virtual false, abstract: false, final false
  inline bool IsContacting(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method IsDestroyed, addr 0x302242c, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsDestroyed(::UnityEngine::Collider* col);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* New_ctor();

  /// @brief Method RemoveCollider, addr 0x30212a8, size 0x28c, virtual false, abstract: false, final false
  inline void RemoveCollider(::UnityEngine::Collider* collider);

  /// @brief Method ResolveUnassociatedColliders, addr 0x3021534, size 0x56c, virtual false, abstract: false, final false
  inline void ResolveUnassociatedColliders();

  /// @brief Method ResolveUnassociatedColliders, addr 0x3021aa0, size 0x3f8, virtual false, abstract: false, final false
  inline void ResolveUnassociatedColliders(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method UpdateStayedColliders, addr 0x3021e98, size 0x53c, virtual false, abstract: false, final false
  inline void UpdateStayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* stayedColliders);

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get__interactionManager_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get__interactionManager_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_contactAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const& __cordl_internal_get_contactAdded() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_contactRemoved();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const& __cordl_internal_get_contactRemoved() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_m_EnteredColliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
  __cordl_internal_get_m_EnteredColliders() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_EnteredUnassociatedColliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_m_EnteredUnassociatedColliders() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_m_UnorderedInteractables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
  __cordl_internal_get_m_UnorderedInteractables() const;

  constexpr void __cordl_internal_set__interactionManager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void __cordl_internal_set_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void
  __cordl_internal_set_m_EnteredColliders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_m_EnteredUnassociatedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set_m_UnorderedInteractables(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  /// @brief Method .ctor, addr 0x3022488, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_contactAdded, addr 0x3020ea0, size 0xb0, virtual false, abstract: false, final false
  inline void add_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  /// @brief Method add_contactRemoved, addr 0x3021000, size 0xb0, virtual false, abstract: false, final false
  inline void add_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* getStaticF_s_ExitedColliders();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* getStaticF_s_ScratchColliders();

  /// @brief Method get_interactionManager, addr 0x3021160, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager();

  /// @brief Method remove_contactAdded, addr 0x3020f50, size 0xb0, virtual false, abstract: false, final false
  inline void remove_contactAdded(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  /// @brief Method remove_contactRemoved, addr 0x30210b0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_contactRemoved(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  static inline void setStaticF_s_ExitedColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value);

  static inline void setStaticF_s_ScratchColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value);

  /// @brief Method set_interactionManager, addr 0x3021168, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerContactMonitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TriggerContactMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriggerContactMonitor(TriggerContactMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriggerContactMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriggerContactMonitor(TriggerContactMonitor const&) = delete;

  /// @brief Field contactAdded, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___contactAdded;

  /// @brief Field contactRemoved, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___contactRemoved;

  /// @brief Field <interactionManager>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ____interactionManager_k__BackingField;

  /// @brief Field m_EnteredColliders, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_EnteredColliders;

  /// @brief Field m_UnorderedInteractables, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_UnorderedInteractables;

  /// @brief Field m_EnteredUnassociatedColliders, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* ___m_EnteredUnassociatedColliders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___contactAdded) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___contactRemoved) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ____interactionManager_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___m_EnteredColliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___m_UnorderedInteractables) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor, ___m_EnteredUnassociatedColliders) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TriggerContactMonitor");
