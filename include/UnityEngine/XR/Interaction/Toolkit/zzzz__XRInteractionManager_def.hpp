#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractionManager)
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
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRHoverFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class ExposedRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class RegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
template <typename T> class IXRFilterList_1;
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
class IXRTargetPriorityInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractableSnapVolume;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRInteractionManager____c;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRInteractionManager____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::XRInteractionManager::<>c*
class CORDL_TYPE __XRInteractionManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c* __9;

  /// @brief Field <>9__192_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_0, put = setStaticF___9__192_0))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* __9__192_0;

  /// @brief Field <>9__192_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_1, put = setStaticF___9__192_1))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* __9__192_1;

  /// @brief Field <>9__192_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_2, put = setStaticF___9__192_2))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* __9__192_2;

  /// @brief Field <>9__192_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_3, put = setStaticF___9__192_3))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* __9__192_3;

  /// @brief Field <>9__192_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_4, put = setStaticF___9__192_4))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* __9__192_4;

  /// @brief Field <>9__192_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_5, put = setStaticF___9__192_5))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* __9__192_5;

  /// @brief Field <>9__192_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_6, put = setStaticF___9__192_6))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* __9__192_6;

  /// @brief Field <>9__192_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_7, put = setStaticF___9__192_7))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* __9__192_7;

  /// @brief Field <>9__192_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_8, put = setStaticF___9__192_8))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* __9__192_8;

  /// @brief Field <>9__192_9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__192_9, put = setStaticF___9__192_9))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* __9__192_9;

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c* New_ctor();

  /// @brief Method <.cctor>b__193_0, addr 0x3013828, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>* __cctor_b__193_0();

  /// @brief Method <.cctor>b__193_1, addr 0x3013898, size 0x6c, virtual false, abstract: false, final false
  inline void __cctor_b__193_1(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>* list);

  /// @brief Method <.ctor>b__192_0, addr 0x3013490, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* __ctor_b__192_0();

  /// @brief Method <.ctor>b__192_1, addr 0x30134ec, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* __ctor_b__192_1();

  /// @brief Method <.ctor>b__192_2, addr 0x3013548, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* __ctor_b__192_2();

  /// @brief Method <.ctor>b__192_3, addr 0x30135a4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* __ctor_b__192_3();

  /// @brief Method <.ctor>b__192_4, addr 0x3013600, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* __ctor_b__192_4();

  /// @brief Method <.ctor>b__192_5, addr 0x301365c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* __ctor_b__192_5();

  /// @brief Method <.ctor>b__192_6, addr 0x30136b8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* __ctor_b__192_6();

  /// @brief Method <.ctor>b__192_7, addr 0x3013714, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* __ctor_b__192_7();

  /// @brief Method <.ctor>b__192_8, addr 0x3013770, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* __ctor_b__192_8();

  /// @brief Method <.ctor>b__192_9, addr 0x30137cc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* __ctor_b__192_9();

  /// @brief Method .ctor, addr 0x3013488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* getStaticF___9__192_0();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* getStaticF___9__192_1();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* getStaticF___9__192_2();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* getStaticF___9__192_3();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* getStaticF___9__192_4();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* getStaticF___9__192_5();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* getStaticF___9__192_6();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* getStaticF___9__192_7();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* getStaticF___9__192_8();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* getStaticF___9__192_9();

  static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c* value);

  static inline void setStaticF___9__192_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* value);

  static inline void setStaticF___9__192_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* value);

  static inline void setStaticF___9__192_2(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* value);

  static inline void setStaticF___9__192_3(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* value);

  static inline void setStaticF___9__192_4(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  static inline void setStaticF___9__192_5(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  static inline void setStaticF___9__192_6(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);

  static inline void setStaticF___9__192_7(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);

  static inline void setStaticF___9__192_8(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  static inline void setStaticF___9__192_9(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRInteractionManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRInteractionManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRInteractionManager____c(__XRInteractionManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRInteractionManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRInteractionManager____c(__XRInteractionManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRInteractionManager
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 312, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRInteractionManager*
class CORDL_TYPE XRInteractionManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c;

  /// @brief Field <activeInteractionManagers>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__activeInteractionManagers_k__BackingField, put = setStaticF__activeInteractionManagers_k__BackingField))::System::Collections::Generic::List_1<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* _activeInteractionManagers_k__BackingField;

  __declspec(property(get = get_hoverFilters))::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* hoverFilters;

  /// @brief Field interactableRegistered, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_interactableRegistered,
                      put = __cordl_internal_set_interactableRegistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* interactableRegistered;

  /// @brief Field interactableUnregistered, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_interactableUnregistered,
                      put = __cordl_internal_set_interactableUnregistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* interactableUnregistered;

  /// @brief Field interactionGroupRegistered, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_interactionGroupRegistered,
               put = __cordl_internal_set_interactionGroupRegistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* interactionGroupRegistered;

  /// @brief Field interactionGroupUnregistered, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_interactionGroupUnregistered,
      put = __cordl_internal_set_interactionGroupUnregistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* interactionGroupUnregistered;

  /// @brief Field interactorRegistered, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_interactorRegistered,
                      put = __cordl_internal_set_interactorRegistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* interactorRegistered;

  /// @brief Field interactorUnregistered, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_interactorUnregistered,
                      put = __cordl_internal_set_interactorUnregistered))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* interactorUnregistered;

  /// @brief Field m_ColliderToInteractableMap, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColliderToInteractableMap, put = __cordl_internal_set_m_ColliderToInteractableMap))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_ColliderToInteractableMap;

  /// @brief Field m_ColliderToSnapVolumes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColliderToSnapVolumes, put = __cordl_internal_set_m_ColliderToSnapVolumes))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Collider>, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>>* m_ColliderToSnapVolumes;

  /// @brief Field m_CurrentHovered, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentHovered,
                      put = __cordl_internal_set_m_CurrentHovered))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* m_CurrentHovered;

  /// @brief Field m_CurrentSelected, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSelected,
                      put = __cordl_internal_set_m_CurrentSelected))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* m_CurrentSelected;

  /// @brief Field m_DeprecatedValidTargets, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DeprecatedValidTargets,
      put = __cordl_internal_set_m_DeprecatedValidTargets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* m_DeprecatedValidTargets;

  /// @brief Field m_GroupsInGroup, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GroupsInGroup,
                      put = __cordl_internal_set_m_GroupsInGroup))::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* m_GroupsInGroup;

  /// @brief Field m_HighestPriorityTargetMap, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighestPriorityTargetMap, put = __cordl_internal_set_m_HighestPriorityTargetMap))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*,
      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>*>* m_HighestPriorityTargetMap;

  /// @brief Field m_HoverEnterEventArgs, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverEnterEventArgs, put = __cordl_internal_set_m_HoverEnterEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* m_HoverEnterEventArgs;

  /// @brief Field m_HoverExitEventArgs, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverExitEventArgs, put = __cordl_internal_set_m_HoverExitEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* m_HoverExitEventArgs;

  /// @brief Field m_HoverFilters, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverFilters, put = __cordl_internal_set_m_HoverFilters))::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<
      ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* m_HoverFilters;

  /// @brief Field m_InteractableRegisteredEventArgs, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractableRegisteredEventArgs, put = __cordl_internal_set_m_InteractableRegisteredEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::
      Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* m_InteractableRegisteredEventArgs;

  /// @brief Field m_InteractableUnregisteredEventArgs, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractableUnregisteredEventArgs, put = __cordl_internal_set_m_InteractableUnregisteredEventArgs))::UnityEngine::XR::Interaction::Toolkit::
      Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* m_InteractableUnregisteredEventArgs;

  /// @brief Field m_Interactables, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Interactables,
      put = __cordl_internal_set_m_Interactables))::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_Interactables;

  /// @brief Field m_InteractionGroupRegisteredEventArgs, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionGroupRegisteredEventArgs, put = __cordl_internal_set_m_InteractionGroupRegisteredEventArgs))::UnityEngine::XR::Interaction::Toolkit::
      Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* m_InteractionGroupRegisteredEventArgs;

  /// @brief Field m_InteractionGroupUnregisteredEventArgs, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionGroupUnregisteredEventArgs, put = __cordl_internal_set_m_InteractionGroupUnregisteredEventArgs))::UnityEngine::XR::Interaction::Toolkit::
      Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* m_InteractionGroupUnregisteredEventArgs;

  /// @brief Field m_InteractionGroups, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionGroups, put = __cordl_internal_set_m_InteractionGroups))::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<
      ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* m_InteractionGroups;

  /// @brief Field m_InteractorRegisteredEventArgs, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractorRegisteredEventArgs, put = __cordl_internal_set_m_InteractorRegisteredEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::
      Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* m_InteractorRegisteredEventArgs;

  /// @brief Field m_InteractorUnregisteredEventArgs, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractorUnregisteredEventArgs, put = __cordl_internal_set_m_InteractorUnregisteredEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::
      Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* m_InteractorUnregisteredEventArgs;

  /// @brief Field m_Interactors, offset 0x78, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_Interactors,
               put = __cordl_internal_set_m_Interactors))::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* m_Interactors;

  /// @brief Field m_InteractorsInGroup, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractorsInGroup,
                      put = __cordl_internal_set_m_InteractorsInGroup))::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* m_InteractorsInGroup;

  /// @brief Field m_ScratchInteractables, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScratchInteractables,
                      put = __cordl_internal_set_m_ScratchInteractables))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_ScratchInteractables;

  /// @brief Field m_ScratchInteractionGroups, offset 0xd0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ScratchInteractionGroups,
               put = __cordl_internal_set_m_ScratchInteractionGroups))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* m_ScratchInteractionGroups;

  /// @brief Field m_ScratchInteractors, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScratchInteractors,
                      put = __cordl_internal_set_m_ScratchInteractors))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* m_ScratchInteractors;

  /// @brief Field m_SelectEnterEventArgs, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectEnterEventArgs, put = __cordl_internal_set_m_SelectEnterEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* m_SelectEnterEventArgs;

  /// @brief Field m_SelectExitEventArgs, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectExitEventArgs, put = __cordl_internal_set_m_SelectExitEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* m_SelectExitEventArgs;

  /// @brief Field m_SelectFilters, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectFilters, put = __cordl_internal_set_m_SelectFilters))::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<
      ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* m_SelectFilters;

  /// @brief Field m_StartingHoverFilters, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingHoverFilters,
                      put = __cordl_internal_set_m_StartingHoverFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* m_StartingHoverFilters;

  /// @brief Field m_StartingSelectFilters, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingSelectFilters,
                      put = __cordl_internal_set_m_StartingSelectFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* m_StartingSelectFilters;

  /// @brief Field m_UnorderedValidTargets, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnorderedValidTargets,
                      put = __cordl_internal_set_m_UnorderedValidTargets))::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_UnorderedValidTargets;

  /// @brief Field m_ValidTargets, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValidTargets,
                      put = __cordl_internal_set_m_ValidTargets))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* m_ValidTargets;

  /// @brief Field s_EvaluateInvalidHoversMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EvaluateInvalidHoversMarker, put = setStaticF_s_EvaluateInvalidHoversMarker))::Unity::Profiling::ProfilerMarker s_EvaluateInvalidHoversMarker;

  /// @brief Field s_EvaluateInvalidSelectionsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EvaluateInvalidSelectionsMarker,
                             put = setStaticF_s_EvaluateInvalidSelectionsMarker))::Unity::Profiling::ProfilerMarker s_EvaluateInvalidSelectionsMarker;

  /// @brief Field s_EvaluateValidHoversMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EvaluateValidHoversMarker, put = setStaticF_s_EvaluateValidHoversMarker))::Unity::Profiling::ProfilerMarker s_EvaluateValidHoversMarker;

  /// @brief Field s_EvaluateValidSelectionsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EvaluateValidSelectionsMarker, put = setStaticF_s_EvaluateValidSelectionsMarker))::Unity::Profiling::ProfilerMarker s_EvaluateValidSelectionsMarker;

  /// @brief Field s_FilterRegisteredValidTargetsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FilterRegisteredValidTargetsMarker,
                             put = setStaticF_s_FilterRegisteredValidTargetsMarker))::Unity::Profiling::ProfilerMarker s_FilterRegisteredValidTargetsMarker;

  /// @brief Field s_GetValidTargetsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_GetValidTargetsMarker, put = setStaticF_s_GetValidTargetsMarker))::Unity::Profiling::ProfilerMarker s_GetValidTargetsMarker;

  /// @brief Field s_HoverEnterMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HoverEnterMarker, put = setStaticF_s_HoverEnterMarker))::Unity::Profiling::ProfilerMarker s_HoverEnterMarker;

  /// @brief Field s_HoverExitMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HoverExitMarker, put = setStaticF_s_HoverExitMarker))::Unity::Profiling::ProfilerMarker s_HoverExitMarker;

  /// @brief Field s_PreprocessInteractorsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PreprocessInteractorsMarker, put = setStaticF_s_PreprocessInteractorsMarker))::Unity::Profiling::ProfilerMarker s_PreprocessInteractorsMarker;

  /// @brief Field s_ProcessInteractablesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProcessInteractablesMarker, put = setStaticF_s_ProcessInteractablesMarker))::Unity::Profiling::ProfilerMarker s_ProcessInteractablesMarker;

  /// @brief Field s_ProcessInteractionStrengthMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProcessInteractionStrengthMarker,
                             put = setStaticF_s_ProcessInteractionStrengthMarker))::Unity::Profiling::ProfilerMarker s_ProcessInteractionStrengthMarker;

  /// @brief Field s_ProcessInteractorsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProcessInteractorsMarker, put = setStaticF_s_ProcessInteractorsMarker))::Unity::Profiling::ProfilerMarker s_ProcessInteractorsMarker;

  /// @brief Field s_SelectEnterMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SelectEnterMarker, put = setStaticF_s_SelectEnterMarker))::Unity::Profiling::ProfilerMarker s_SelectEnterMarker;

  /// @brief Field s_SelectExitMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SelectExitMarker, put = setStaticF_s_SelectExitMarker))::Unity::Profiling::ProfilerMarker s_SelectExitMarker;

  /// @brief Field s_TargetPriorityInteractorListPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TargetPriorityInteractorListPool, put = setStaticF_s_TargetPriorityInteractorListPool))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::
      LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>*>* s_TargetPriorityInteractorListPool;

  /// @brief Field s_UpdateGroupMemberInteractionsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UpdateGroupMemberInteractionsMarker,
                             put = setStaticF_s_UpdateGroupMemberInteractionsMarker))::Unity::Profiling::ProfilerMarker s_UpdateGroupMemberInteractionsMarker;

  __declspec(property(get = get_selectFilters))::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* selectFilters;

  __declspec(property(get = get_startingHoverFilters, put = set_startingHoverFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* startingHoverFilters;

  __declspec(property(get = get_startingSelectFilters, put = set_startingSelectFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* startingSelectFilters;

  /// @brief Method Awake, addr 0x2cff658, size 0x84, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CanHover, addr 0x2d02858, size 0xd8, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2d02bfc, size 0xd8, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method CancelInteractableHover, addr 0x2d05ec0, size 0x164, virtual true, abstract: false, final false
  inline void CancelInteractableHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method CancelInteractableHover, addr 0x2d08b70, size 0x10, virtual true, abstract: false, final false
  inline void CancelInteractableHover(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CancelInteractableHoverInternal, addr 0x2d04a94, size 0x98, virtual false, abstract: false, final false
  inline void CancelInteractableHoverInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method CancelInteractableSelection, addr 0x2d05760, size 0x164, virtual true, abstract: false, final false
  inline void CancelInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method CancelInteractableSelection, addr 0x2d08b4c, size 0x10, virtual true, abstract: false, final false
  inline void CancelInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CancelInteractableSelectionInternal, addr 0x2d049fc, size 0x98, virtual false, abstract: false, final false
  inline void CancelInteractableSelectionInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method CancelInteractorHover, addr 0x2d05c70, size 0x164, virtual true, abstract: false, final false
  inline void CancelInteractorHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);

  /// @brief Method CancelInteractorHover, addr 0x2d08b60, size 0x10, virtual true, abstract: false, final false
  inline void CancelInteractorHover(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method CancelInteractorHoverInternal, addr 0x2d03f18, size 0x98, virtual false, abstract: false, final false
  inline void CancelInteractorHoverInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor);

  /// @brief Method CancelInteractorSelection, addr 0x2d05510, size 0x164, virtual true, abstract: false, final false
  inline void CancelInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method CancelInteractorSelection, addr 0x2d08b3c, size 0x10, virtual true, abstract: false, final false
  inline void CancelInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method CancelInteractorSelectionInternal, addr 0x2d03e80, size 0x98, virtual false, abstract: false, final false
  inline void CancelInteractorSelectionInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  /// @brief Method ClearInteractorHover, addr 0x2d058c4, size 0x3ac, virtual true, abstract: false, final false
  inline void ClearInteractorHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor,
                                   ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* validTargets);

  /// @brief Method ClearInteractorHover, addr 0x2d08b5c, size 0x4, virtual true, abstract: false, final false
  inline void ClearInteractorHover(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor,
                                   ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* validTargets);

  /// @brief Method ClearInteractorHoverInternal, addr 0x2cf46f0, size 0xc8, virtual false, abstract: false, final false
  inline void ClearInteractorHoverInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor,
                                           ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* validTargets,
                                           ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* deprecatedValidTargets);

  /// @brief Method ClearInteractorSelection, addr 0x2d05104, size 0x40c, virtual true, abstract: false, final false
  inline void ClearInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor,
                                       ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* validTargets);

  /// @brief Method ClearInteractorSelection, addr 0x2d08b38, size 0x4, virtual true, abstract: false, final false
  inline void ClearInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method ClearInteractorSelectionInternal, addr 0x2cf43f0, size 0xc0, virtual false, abstract: false, final false
  inline void ClearInteractorSelectionInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor,
                                               ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* validTargets);

  /// @brief Method ClearPriorityForSelectionMap, addr 0x2cff91c, size 0x418, virtual false, abstract: false, final false
  inline void ClearPriorityForSelectionMap();

  /// @brief Method ExitInteractableSelection, addr 0x2d084fc, size 0x164, virtual false, abstract: false, final false
  inline void ExitInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method FixedUpdate, addr 0x2d01390, size 0x318, virtual true, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method FlushRegistration, addr 0x2d0102c, size 0x4c, virtual false, abstract: false, final false
  inline void FlushRegistration();

  /// @brief Method ForceSelect, addr 0x2d08b28, size 0x10, virtual false, abstract: false, final false
  inline void ForceSelect(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method GetColliderToInteractableMap, addr 0x2d088a4, size 0x1e8, virtual false, abstract: false, final false
  inline void
  GetColliderToInteractableMap(ByRef<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*> map);

  /// @brief Method GetInteractableForCollider, addr 0x2d087fc, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> GetInteractableForCollider(::UnityEngine::Collider* interactableCollider);

  /// @brief Method GetOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination>
  static inline void GetOfType(::System::Collections::Generic::List_1<TSource>* source, ::System::Collections::Generic::List_1<TDestination>* destination);

  /// @brief Method GetRegisteredInteractables, addr 0x2d04fbc, size 0x70, virtual false, abstract: false, final false
  inline void GetRegisteredInteractables(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* results);

  /// @brief Method GetRegisteredInteractables, addr 0x2d0872c, size 0x8c, virtual false, abstract: false, final false
  inline void GetRegisteredInteractables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* results);

  /// @brief Method GetRegisteredInteractionGroups, addr 0x2d04edc, size 0x70, virtual false, abstract: false, final false
  inline void GetRegisteredInteractionGroups(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* results);

  /// @brief Method GetRegisteredInteractors, addr 0x2d04f4c, size 0x70, virtual false, abstract: false, final false
  inline void GetRegisteredInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* results);

  /// @brief Method GetRegisteredInteractors, addr 0x2d086a0, size 0x8c, virtual false, abstract: false, final false
  inline void GetRegisteredInteractors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>>* results);

  /// @brief Method GetValidTargets, addr 0x2d08a8c, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*
  GetValidTargets(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor,
                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* validTargets);

  /// @brief Method GetValidTargets, addr 0x2cf3104, size 0x3a8, virtual false, abstract: false, final false
  inline void GetValidTargets(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                              ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets);

  /// @brief Method HasInteractionLayerOverlap, addr 0x2d02ac0, size 0x130, virtual false, abstract: false, final false
  static inline bool HasInteractionLayerOverlap(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method HoverCancel, addr 0x2d06c3c, size 0x130, virtual true, abstract: false, final false
  inline void HoverCancel(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method HoverCancel, addr 0x2d08bd0, size 0x10, virtual true, abstract: false, final false
  inline void HoverCancel(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method HoverCancelInternal, addr 0x2d05dd4, size 0xec, virtual false, abstract: false, final false
  inline void HoverCancelInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method HoverEnter, addr 0x2d06714, size 0x128, virtual true, abstract: false, final false
  inline void HoverEnter(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method HoverEnter, addr 0x2d07464, size 0x37c, virtual true, abstract: false, final false
  inline void HoverEnter(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable,
                         ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method HoverEnter, addr 0x2d08bb0, size 0x10, virtual true, abstract: false, final false
  inline void HoverEnter(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method HoverEnter, addr 0x2d08c00, size 0x10, virtual true, abstract: false, final false
  inline void HoverEnter(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable,
                         ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method HoverEnterInternal, addr 0x2d06930, size 0xec, virtual false, abstract: false, final false
  inline void HoverEnterInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method HoverEnterInternal, addr 0x2d0683c, size 0xf4, virtual false, abstract: false, final false
  inline void HoverEnterInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable,
                                 ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method HoverExit, addr 0x2d06a1c, size 0x12c, virtual true, abstract: false, final false
  inline void HoverExit(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method HoverExit, addr 0x2d077e0, size 0x37c, virtual true, abstract: false, final false
  inline void HoverExit(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable,
                        ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method HoverExit, addr 0x2d08bc0, size 0x10, virtual true, abstract: false, final false
  inline void HoverExit(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method HoverExit, addr 0x2d08c10, size 0x10, virtual true, abstract: false, final false
  inline void HoverExit(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable,
                        ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method HoverExitInternal, addr 0x2cf4a34, size 0xec, virtual false, abstract: false, final false
  inline void HoverExitInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method HoverExitInternal, addr 0x2d06b48, size 0xf4, virtual false, abstract: false, final false
  inline void HoverExitInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable,
                                ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method InteractorHoverValidTargets, addr 0x2d0810c, size 0x248, virtual true, abstract: false, final false
  inline void InteractorHoverValidTargets(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor,
                                          ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* validTargets);

  /// @brief Method InteractorHoverValidTargets, addr 0x2d08c24, size 0x4, virtual true, abstract: false, final false
  inline void InteractorHoverValidTargets(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor,
                                          ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* validTargets);

  /// @brief Method InteractorHoverValidTargetsInternal, addr 0x2cf4880, size 0xc8, virtual false, abstract: false, final false
  inline void InteractorHoverValidTargetsInternal(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor,
                                                  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* validTargets,
                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* deprecatedValidTargets);

  /// @brief Method InteractorSelectValidTargets, addr 0x2d07b5c, size 0x5b0, virtual true, abstract: false, final false
  inline void InteractorSelectValidTargets(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor,
                                           ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* validTargets);

  /// @brief Method InteractorSelectValidTargets, addr 0x2d08c20, size 0x4, virtual true, abstract: false, final false
  inline void InteractorSelectValidTargets(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor,
                                           ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* validTargets);

  /// @brief Method InteractorSelectValidTargetsInternal, addr 0x2cf47b8, size 0xc8, virtual false, abstract: false, final false
  inline void InteractorSelectValidTargetsInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* validTargets,
                                                   ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* deprecatedValidTargets);

  /// @brief Method IsHighestPriorityTarget, addr 0x2d0502c, size 0xd8, virtual false, abstract: false, final false
  inline bool IsHighestPriorityTarget(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* target,
                                      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>* interactors);

  /// @brief Method IsHoverPossible, addr 0x2d02930, size 0x190, virtual false, abstract: false, final false
  inline bool IsHoverPossible(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method IsRegistered, addr 0x2d049dc, size 0x20, virtual false, abstract: false, final false
  inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method IsRegistered, addr 0x2d087d8, size 0x20, virtual false, abstract: false, final false
  inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method IsRegistered, addr 0x2cf25b8, size 0x20, virtual false, abstract: false, final false
  inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* interactionGroup);

  /// @brief Method IsRegistered, addr 0x2cf2598, size 0x20, virtual false, abstract: false, final false
  inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method IsRegistered, addr 0x2d087b8, size 0x20, virtual false, abstract: false, final false
  inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method IsSelectPossible, addr 0x2d02cd4, size 0x190, virtual false, abstract: false, final false
  inline bool IsSelectPossible(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method LateUpdate, addr 0x2d01078, size 0x318, virtual true, abstract: false, final false
  inline void LateUpdate();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* New_ctor();

  /// @brief Method OnBeforeRender, addr 0x2d016a8, size 0x318, virtual true, abstract: false, final false
  inline void OnBeforeRender();

  /// @brief Method OnDisable, addr 0x2cff81c, size 0x100, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2cff6dc, size 0x140, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRegistered, addr 0x2d04500, size 0xd8, virtual true, abstract: false, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args);

  /// @brief Method OnRegistered, addr 0x2d03118, size 0xd8, virtual true, abstract: false, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* args);

  /// @brief Method OnRegistered, addr 0x2d03bc8, size 0xd8, virtual true, abstract: false, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* args);

  /// @brief Method OnUnregistered, addr 0x2d04b2c, size 0xd8, virtual true, abstract: false, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args);

  /// @brief Method OnUnregistered, addr 0x2d03848, size 0xd8, virtual true, abstract: false, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* args);

  /// @brief Method OnUnregistered, addr 0x2d03fb0, size 0xd8, virtual true, abstract: false, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* args);

  /// @brief Method PreprocessInteractors, addr 0x2d019c0, size 0x458, virtual true, abstract: false, final false
  inline void PreprocessInteractors(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessHoverFilters, addr 0x2d02bf0, size 0xc, virtual false, abstract: false, final false
  inline bool ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method ProcessInteractables, addr 0x2d02270, size 0x208, virtual true, abstract: false, final false
  inline void ProcessInteractables(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessInteractionStrength, addr 0x2d02478, size 0x3e0, virtual true, abstract: false, final false
  inline void ProcessInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessInteractors, addr 0x2d01e18, size 0x458, virtual true, abstract: false, final false
  inline void ProcessInteractors(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessSelectFilters, addr 0x2d02e64, size 0xc, virtual false, abstract: false, final false
  inline bool ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method RegisterInteractable, addr 0x2d04088, size 0x478, virtual true, abstract: false, final false
  inline void RegisterInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method RegisterInteractable, addr 0x2d08680, size 0x10, virtual true, abstract: false, final false
  inline void RegisterInteractable(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method RegisterInteractionGroup, addr 0x2d02e70, size 0x2a8, virtual true, abstract: false, final false
  inline void RegisterInteractionGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* interactionGroup);

  /// @brief Method RegisterInteractor, addr 0x2d03920, size 0x2a8, virtual true, abstract: false, final false
  inline void RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method RegisterInteractor, addr 0x2d08660, size 0x10, virtual true, abstract: false, final false
  inline void RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method RegisterSnapVolume, addr 0x2d04c04, size 0x1b4, virtual false, abstract: false, final false
  inline void RegisterSnapVolume(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* snapVolume);

  /// @brief Method RemoveAllUnregistered, addr 0x2ceec24, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t RemoveAllUnregistered(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* manager,
                                              ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* interactables);

  /// @brief Method ResolveExistingSelect, addr 0x2d08354, size 0x1a8, virtual true, abstract: false, final false
  inline bool ResolveExistingSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method SelectCancel, addr 0x2d065e4, size 0x130, virtual true, abstract: false, final false
  inline void SelectCancel(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method SelectCancel, addr 0x2d08ba0, size 0x10, virtual true, abstract: false, final false
  inline void SelectCancel(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method SelectCancelInternal, addr 0x2d05674, size 0xec, virtual false, abstract: false, final false
  inline void SelectCancelInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method SelectEnter, addr 0x2d06024, size 0x1c0, virtual true, abstract: false, final false
  inline void SelectEnter(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method SelectEnter, addr 0x2d06d6c, size 0x37c, virtual true, abstract: false, final false
  inline void SelectEnter(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable,
                          ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method SelectEnter, addr 0x2d08b80, size 0x10, virtual true, abstract: false, final false
  inline void SelectEnter(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method SelectEnter, addr 0x2d08be0, size 0x10, virtual true, abstract: false, final false
  inline void SelectEnter(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable,
                          ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method SelectEnterInternal, addr 0x2d062d8, size 0xec, virtual false, abstract: false, final false
  inline void SelectEnterInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method SelectEnterInternal, addr 0x2d061e4, size 0xf4, virtual false, abstract: false, final false
  inline void SelectEnterInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable,
                                  ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method SelectExit, addr 0x2d063c4, size 0x12c, virtual true, abstract: false, final false
  inline void SelectExit(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method SelectExit, addr 0x2d070e8, size 0x37c, virtual true, abstract: false, final false
  inline void SelectExit(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable,
                         ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method SelectExit, addr 0x2d08b90, size 0x10, virtual true, abstract: false, final false
  inline void SelectExit(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method SelectExit, addr 0x2d08bf0, size 0x10, virtual true, abstract: false, final false
  inline void SelectExit(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable,
                         ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method SelectExitInternal, addr 0x2cf4948, size 0xec, virtual false, abstract: false, final false
  inline void SelectExitInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method SelectExitInternal, addr 0x2d064f0, size 0xf4, virtual false, abstract: false, final false
  inline void SelectExitInternal(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable,
                                 ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method TryGetInteractableForCollider, addr 0x2d087f8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> TryGetInteractableForCollider(::UnityEngine::Collider* interactableCollider);

  /// @brief Method TryGetInteractableForCollider, addr 0x2cf629c, size 0x18c, virtual false, abstract: false, final false
  inline bool TryGetInteractableForCollider(::UnityEngine::Collider* interactableCollider, ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> interactable);

  /// @brief Method TryGetInteractableForCollider, addr 0x2cfb05c, size 0x1b0, virtual false, abstract: false, final false
  inline bool TryGetInteractableForCollider(::UnityEngine::Collider* interactableCollider, ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> interactable,
                                            ByRef<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*> snapVolume);

  /// @brief Method UnregisterInteractable, addr 0x2d045d8, size 0x404, virtual true, abstract: false, final false
  inline void UnregisterInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method UnregisterInteractable, addr 0x2d08690, size 0x10, virtual true, abstract: false, final false
  inline void UnregisterInteractable(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method UnregisterInteractionGroup, addr 0x2d031f0, size 0x658, virtual true, abstract: false, final false
  inline void UnregisterInteractionGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* interactionGroup);

  /// @brief Method UnregisterInteractor, addr 0x2d03ca0, size 0x1e0, virtual true, abstract: false, final false
  inline void UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method UnregisterInteractor, addr 0x2d08670, size 0x10, virtual true, abstract: false, final false
  inline void UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);

  /// @brief Method UnregisterSnapVolume, addr 0x2d04db8, size 0x124, virtual false, abstract: false, final false
  inline void UnregisterSnapVolume(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* snapVolume);

  /// @brief Method Update, addr 0x2cffd34, size 0x12f8, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& __cordl_internal_get_interactableRegistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*> const&
  __cordl_internal_get_interactableRegistered() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*& __cordl_internal_get_interactableUnregistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*> const&
  __cordl_internal_get_interactableUnregistered() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*& __cordl_internal_get_interactionGroupRegistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*> const&
  __cordl_internal_get_interactionGroupRegistered() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*& __cordl_internal_get_interactionGroupUnregistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*> const&
  __cordl_internal_get_interactionGroupUnregistered() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*& __cordl_internal_get_interactorRegistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*> const& __cordl_internal_get_interactorRegistered() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*& __cordl_internal_get_interactorUnregistered();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*> const&
  __cordl_internal_get_interactorUnregistered() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*&
  __cordl_internal_get_m_ColliderToInteractableMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
  __cordl_internal_get_m_ColliderToInteractableMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>>*&
  __cordl_internal_get_m_ColliderToSnapVolumes();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>>*> const&
  __cordl_internal_get_m_ColliderToSnapVolumes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>*& __cordl_internal_get_m_CurrentHovered();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>*> const&
  __cordl_internal_get_m_CurrentHovered() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*& __cordl_internal_get_m_CurrentSelected();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*> const&
  __cordl_internal_get_m_CurrentSelected() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*& __cordl_internal_get_m_DeprecatedValidTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*> const&
  __cordl_internal_get_m_DeprecatedValidTargets() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>*& __cordl_internal_get_m_GroupsInGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>*> const&
  __cordl_internal_get_m_GroupsInGroup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*,
                                                         ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>*>*&
  __cordl_internal_get_m_HighestPriorityTargetMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>*>*> const&
  __cordl_internal_get_m_HighestPriorityTargetMap() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*& __cordl_internal_get_m_HoverEnterEventArgs();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*> const&
  __cordl_internal_get_m_HoverEnterEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*& __cordl_internal_get_m_HoverExitEventArgs();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*> const&
  __cordl_internal_get_m_HoverExitEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& __cordl_internal_get_m_HoverFilters();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*> const&
  __cordl_internal_get_m_HoverFilters() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*&
  __cordl_internal_get_m_InteractableRegisteredEventArgs();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*> const&
  __cordl_internal_get_m_InteractableRegisteredEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*&
  __cordl_internal_get_m_InteractableUnregisteredEventArgs();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*> const&
  __cordl_internal_get_m_InteractableUnregisteredEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_m_Interactables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
  __cordl_internal_get_m_Interactables() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*&
  __cordl_internal_get_m_InteractionGroupRegisteredEventArgs();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*> const&
  __cordl_internal_get_m_InteractionGroupRegisteredEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*&
  __cordl_internal_get_m_InteractionGroupUnregisteredEventArgs();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*> const&
  __cordl_internal_get_m_InteractionGroupUnregisteredEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>*& __cordl_internal_get_m_InteractionGroups();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>*> const&
  __cordl_internal_get_m_InteractionGroups() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*&
  __cordl_internal_get_m_InteractorRegisteredEventArgs();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*> const&
  __cordl_internal_get_m_InteractorRegisteredEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*&
  __cordl_internal_get_m_InteractorUnregisteredEventArgs();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*> const&
  __cordl_internal_get_m_InteractorUnregisteredEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*& __cordl_internal_get_m_Interactors();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*> const&
  __cordl_internal_get_m_Interactors() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*& __cordl_internal_get_m_InteractorsInGroup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*> const&
  __cordl_internal_get_m_InteractorsInGroup() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_m_ScratchInteractables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
  __cordl_internal_get_m_ScratchInteractables() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>*& __cordl_internal_get_m_ScratchInteractionGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>*> const&
  __cordl_internal_get_m_ScratchInteractionGroups() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*& __cordl_internal_get_m_ScratchInteractors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*> const&
  __cordl_internal_get_m_ScratchInteractors() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*& __cordl_internal_get_m_SelectEnterEventArgs();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*> const&
  __cordl_internal_get_m_SelectEnterEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*& __cordl_internal_get_m_SelectExitEventArgs();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*> const&
  __cordl_internal_get_m_SelectExitEventArgs() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*&
  __cordl_internal_get_m_SelectFilters();

  constexpr ::cordl_internals::to_const_pointer<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*> const&
  __cordl_internal_get_m_SelectFilters() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingHoverFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_StartingHoverFilters() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingSelectFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_m_StartingSelectFilters() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_m_UnorderedValidTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
  __cordl_internal_get_m_UnorderedValidTargets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get_m_ValidTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const& __cordl_internal_get_m_ValidTargets() const;

  constexpr void __cordl_internal_set_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);

  constexpr void
  __cordl_internal_set_m_ColliderToInteractableMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_m_ColliderToSnapVolumes(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>>* value);

  constexpr void __cordl_internal_set_m_CurrentHovered(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* value);

  constexpr void __cordl_internal_set_m_CurrentSelected(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* value);

  constexpr void __cordl_internal_set_m_DeprecatedValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* value);

  constexpr void __cordl_internal_set_m_GroupsInGroup(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* value);

  constexpr void __cordl_internal_set_m_HighestPriorityTargetMap(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>*>* value);

  constexpr void
  __cordl_internal_set_m_HoverEnterEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* value);

  constexpr void
  __cordl_internal_set_m_HoverExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* value);

  constexpr void
  __cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* value);

  constexpr void __cordl_internal_set_m_InteractableRegisteredEventArgs(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_m_InteractableUnregisteredEventArgs(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_m_Interactables(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_m_InteractionGroupRegisteredEventArgs(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_m_InteractionGroupUnregisteredEventArgs(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_m_InteractionGroups(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* value);

  constexpr void __cordl_internal_set_m_InteractorRegisteredEventArgs(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_m_InteractorUnregisteredEventArgs(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);

  constexpr void __cordl_internal_set_m_Interactors(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  constexpr void __cordl_internal_set_m_InteractorsInGroup(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  constexpr void __cordl_internal_set_m_ScratchInteractables(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_m_ScratchInteractionGroups(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* value);

  constexpr void __cordl_internal_set_m_ScratchInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  constexpr void
  __cordl_internal_set_m_SelectEnterEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* value);

  constexpr void
  __cordl_internal_set_m_SelectExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* value);

  constexpr void
  __cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* value);

  constexpr void __cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_m_UnorderedValidTargets(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  /// @brief Method .ctor, addr 0x2d08c28, size 0xeac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_interactableRegistered, addr 0x2ceeac4, size 0xb0, virtual false, abstract: false, final false
  inline void add_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  /// @brief Method add_interactableUnregistered, addr 0x2ceeb74, size 0xb0, virtual false, abstract: false, final false
  inline void add_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  /// @brief Method add_interactionGroupRegistered, addr 0x2cff050, size 0xb0, virtual false, abstract: false, final false
  inline void add_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  /// @brief Method add_interactionGroupUnregistered, addr 0x2cff1b0, size 0xb0, virtual false, abstract: false, final false
  inline void add_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  /// @brief Method add_interactorRegistered, addr 0x2cff310, size 0xb0, virtual false, abstract: false, final false
  inline void add_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);

  /// @brief Method add_interactorUnregistered, addr 0x2cff470, size 0xb0, virtual false, abstract: false, final false
  inline void add_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* getStaticF__activeInteractionManagers_k__BackingField();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateInvalidHoversMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateInvalidSelectionsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateValidHoversMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateValidSelectionsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_FilterRegisteredValidTargetsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_GetValidTargetsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_HoverEnterMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_HoverExitMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_PreprocessInteractorsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractablesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractionStrengthMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractorsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_SelectEnterMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_SelectExitMarker();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>*>*
  getStaticF_s_TargetPriorityInteractorListPool();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_UpdateGroupMemberInteractionsMarker();

  /// @brief Method get_activeInteractionManagers, addr 0x2cff600, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* get_activeInteractionManagers();

  /// @brief Method get_hoverFilters, addr 0x2cff5e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* get_hoverFilters();

  /// @brief Method get_selectFilters, addr 0x2cff5f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* get_selectFilters();

  /// @brief Method get_startingHoverFilters, addr 0x2cff5d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingHoverFilters();

  /// @brief Method get_startingSelectFilters, addr 0x2cff5e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingSelectFilters();

  /// @brief Method remove_interactableRegistered, addr 0x2ceee0c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* value);

  /// @brief Method remove_interactableUnregistered, addr 0x2ceeebc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* value);

  /// @brief Method remove_interactionGroupRegistered, addr 0x2cff100, size 0xb0, virtual false, abstract: false, final false
  inline void remove_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value);

  /// @brief Method remove_interactionGroupUnregistered, addr 0x2cff260, size 0xb0, virtual false, abstract: false, final false
  inline void remove_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value);

  /// @brief Method remove_interactorRegistered, addr 0x2cff3c0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* value);

  /// @brief Method remove_interactorUnregistered, addr 0x2cff520, size 0xb0, virtual false, abstract: false, final false
  inline void remove_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* value);

  static inline void setStaticF__activeInteractionManagers_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* value);

  static inline void setStaticF_s_EvaluateInvalidHoversMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_EvaluateInvalidSelectionsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_EvaluateValidHoversMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_EvaluateValidSelectionsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_FilterRegisteredValidTargetsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_GetValidTargetsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_HoverEnterMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_HoverExitMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_PreprocessInteractorsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ProcessInteractablesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ProcessInteractorsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_SelectEnterMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_SelectExitMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_TargetPriorityInteractorListPool(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>*>* value);

  static inline void setStaticF_s_UpdateGroupMemberInteractionsMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_startingHoverFilters, addr 0x2cff5d8, size 0x8, virtual false, abstract: false, final false
  inline void set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

  /// @brief Method set_startingSelectFilters, addr 0x2cff5f0, size 0x8, virtual false, abstract: false, final false
  inline void set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractionManager(XRInteractionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractionManager(XRInteractionManager const&) = delete;

  /// @brief Field interactionGroupRegistered, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* ___interactionGroupRegistered;

  /// @brief Field interactionGroupUnregistered, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* ___interactionGroupUnregistered;

  /// @brief Field interactorRegistered, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* ___interactorRegistered;

  /// @brief Field interactorUnregistered, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* ___interactorUnregistered;

  /// @brief Field interactableRegistered, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* ___interactableRegistered;

  /// @brief Field interactableUnregistered, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* ___interactableUnregistered;

  /// @brief Field m_StartingHoverFilters, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* ___m_StartingHoverFilters;

  /// @brief Field m_HoverFilters, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* ___m_HoverFilters;

  /// @brief Field m_StartingSelectFilters, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* ___m_StartingSelectFilters;

  /// @brief Field m_SelectFilters, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* ___m_SelectFilters;

  /// @brief Field m_ColliderToInteractableMap, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_ColliderToInteractableMap;

  /// @brief Field m_ColliderToSnapVolumes, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>>* ___m_ColliderToSnapVolumes;

  /// @brief Field m_Interactors, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* ___m_Interactors;

  /// @brief Field m_InteractionGroups, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* ___m_InteractionGroups;

  /// @brief Field m_Interactables, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_Interactables;

  /// @brief Field m_CurrentHovered, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* ___m_CurrentHovered;

  /// @brief Field m_CurrentSelected, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* ___m_CurrentSelected;

  /// @brief Field m_HighestPriorityTargetMap, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*,
                                               ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRTargetPriorityInteractor*>*>* ___m_HighestPriorityTargetMap;

  /// @brief Field m_ValidTargets, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_ValidTargets;

  /// @brief Field m_UnorderedValidTargets, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_UnorderedValidTargets;

  /// @brief Field m_InteractorsInGroup, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* ___m_InteractorsInGroup;

  /// @brief Field m_GroupsInGroup, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* ___m_GroupsInGroup;

  /// @brief Field m_DeprecatedValidTargets, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* ___m_DeprecatedValidTargets;

  /// @brief Field m_ScratchInteractionGroups, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>* ___m_ScratchInteractionGroups;

  /// @brief Field m_ScratchInteractors, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* ___m_ScratchInteractors;

  /// @brief Field m_ScratchInteractables, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ___m_ScratchInteractables;

  /// @brief Field m_SelectEnterEventArgs, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* ___m_SelectEnterEventArgs;

  /// @brief Field m_SelectExitEventArgs, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* ___m_SelectExitEventArgs;

  /// @brief Field m_HoverEnterEventArgs, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* ___m_HoverEnterEventArgs;

  /// @brief Field m_HoverExitEventArgs, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* ___m_HoverExitEventArgs;

  /// @brief Field m_InteractionGroupRegisteredEventArgs, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* ___m_InteractionGroupRegisteredEventArgs;

  /// @brief Field m_InteractionGroupUnregisteredEventArgs, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*
      ___m_InteractionGroupUnregisteredEventArgs;

  /// @brief Field m_InteractorRegisteredEventArgs, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* ___m_InteractorRegisteredEventArgs;

  /// @brief Field m_InteractorUnregisteredEventArgs, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* ___m_InteractorUnregisteredEventArgs;

  /// @brief Field m_InteractableRegisteredEventArgs, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* ___m_InteractableRegisteredEventArgs;

  /// @brief Field m_InteractableUnregisteredEventArgs, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* ___m_InteractableUnregisteredEventArgs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, 0x138>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactionGroupRegistered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactionGroupUnregistered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactorRegistered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactorUnregistered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactableRegistered) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactableUnregistered) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_StartingHoverFilters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_HoverFilters) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_StartingSelectFilters) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_SelectFilters) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ColliderToInteractableMap) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ColliderToSnapVolumes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_Interactors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractionGroups) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_Interactables) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_CurrentHovered) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_CurrentSelected) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_HighestPriorityTargetMap) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ValidTargets) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_UnorderedValidTargets) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractorsInGroup) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_GroupsInGroup) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_DeprecatedValidTargets) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ScratchInteractionGroups) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ScratchInteractors) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ScratchInteractables) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_SelectEnterEventArgs) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_SelectExitEventArgs) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_HoverEnterEventArgs) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_HoverExitEventArgs) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractionGroupRegisteredEventArgs) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractionGroupUnregisteredEventArgs) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractorRegisteredEventArgs) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractorUnregisteredEventArgs) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractableRegisteredEventArgs) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractableUnregisteredEventArgs) == 0x130, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionManager");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionManager____c*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionManager/<>c");
