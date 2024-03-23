#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XRInteractableSnapVolume)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractableSnapVolume;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume);
// Type: UnityEngine.XR.Interaction.Toolkit::XRInteractableSnapVolume
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRInteractableSnapVolume*
class CORDL_TYPE XRInteractableSnapVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_disableSnapColliderWhenSelected, put = set_disableSnapColliderWhenSelected)) bool disableSnapColliderWhenSelected;

  __declspec(property(get = get_interactable, put = set_interactable))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable;

  __declspec(property(get = get_interactableObject, put = set_interactableObject))::UnityW<::UnityEngine::Object> interactableObject;

  __declspec(property(get = get_interactionManager, put = set_interactionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> interactionManager;

  /// @brief Field m_BoundInteractable, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BoundInteractable, put = __cordl_internal_set_m_BoundInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* m_BoundInteractable;

  /// @brief Field m_BoundSelectInteractable, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BoundSelectInteractable,
                      put = __cordl_internal_set_m_BoundSelectInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* m_BoundSelectInteractable;

  /// @brief Field m_DisableSnapColliderWhenSelected, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableSnapColliderWhenSelected, put = __cordl_internal_set_m_DisableSnapColliderWhenSelected)) bool m_DisableSnapColliderWhenSelected;

  /// @brief Field m_Interactable, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interactable, put = __cordl_internal_set_m_Interactable))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* m_Interactable;

  /// @brief Field m_InteractableObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractableObject, put = __cordl_internal_set_m_InteractableObject))::UnityW<::UnityEngine::Object> m_InteractableObject;

  /// @brief Field m_InteractionManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionManager,
                      put = __cordl_internal_set_m_InteractionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> m_InteractionManager;

  /// @brief Field m_RegisteredInteractionManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredInteractionManager,
                      put = __cordl_internal_set_m_RegisteredInteractionManager))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> m_RegisteredInteractionManager;

  /// @brief Field m_SnapCollider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SnapCollider, put = __cordl_internal_set_m_SnapCollider))::UnityW<::UnityEngine::Collider> m_SnapCollider;

  /// @brief Field m_SnapToCollider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SnapToCollider, put = __cordl_internal_set_m_SnapToCollider))::UnityW<::UnityEngine::Collider> m_SnapToCollider;

  /// @brief Field s_InteractionManagerCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractionManagerCache,
                             put = setStaticF_s_InteractionManagerCache))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> s_InteractionManagerCache;

  __declspec(property(get = get_snapCollider, put = set_snapCollider))::UnityW<::UnityEngine::Collider> snapCollider;

  __declspec(property(get = get_snapToCollider, put = set_snapToCollider))::UnityW<::UnityEngine::Collider> snapToCollider;

  /// @brief Method Awake, addr 0x25a6388, size 0x80, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method FindCreateInteractionManager, addr 0x25a65f4, size 0x250, virtual false, abstract: false, final false
  inline void FindCreateInteractionManager();

  /// @brief Method FindSnapCollider, addr 0x25a6408, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Collider> FindSnapCollider(::UnityEngine::GameObject* gameObject);

  /// @brief Method GetClosestPoint, addr 0x25a6a44, size 0x1cc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Vector3 point);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* New_ctor();

  /// @brief Method OnDisable, addr 0x25a6844, size 0x28, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x25a651c, size 0xd8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnFirstSelectEntered, addr 0x25a6c10, size 0x14, virtual false, abstract: false, final false
  inline void OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnLastSelectExited, addr 0x25a6c24, size 0x14, virtual false, abstract: false, final false
  inline void OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method RefreshSnapColliderEnabled, addr 0x25a5e9c, size 0xc8, virtual false, abstract: false, final false
  inline void RefreshSnapColliderEnabled();

  /// @brief Method RegisterWithInteractionManager, addr 0x25a59e8, size 0xc4, virtual false, abstract: false, final false
  inline void RegisterWithInteractionManager();

  /// @brief Method Reset, addr 0x25a6384, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetBoundInteractable, addr 0x25a5fc4, size 0x3c0, virtual false, abstract: false, final false
  inline void SetBoundInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* source);

  /// @brief Method SetSnapColliderEnabled, addr 0x25a686c, size 0x98, virtual false, abstract: false, final false
  inline void SetSnapColliderEnabled(bool enable);

  /// @brief Method SupportsTriggerCollider, addr 0x25a6904, size 0x140, virtual false, abstract: false, final false
  static inline bool SupportsTriggerCollider(::UnityEngine::Collider* col);

  /// @brief Method UnregisterWithInteractionManager, addr 0x25a5c98, size 0x84, virtual false, abstract: false, final false
  inline void UnregisterWithInteractionManager();

  /// @brief Method ValidateSnapCollider, addr 0x25a5d1c, size 0x180, virtual false, abstract: false, final false
  inline void ValidateSnapCollider();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& __cordl_internal_get_m_BoundInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const& __cordl_internal_get_m_BoundInteractable() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*& __cordl_internal_get_m_BoundSelectInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> const& __cordl_internal_get_m_BoundSelectInteractable() const;

  constexpr bool const& __cordl_internal_get_m_DisableSnapColliderWhenSelected() const;

  constexpr bool& __cordl_internal_get_m_DisableSnapColliderWhenSelected();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& __cordl_internal_get_m_Interactable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const& __cordl_internal_get_m_Interactable() const;

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_InteractableObject() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_InteractableObject();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_RegisteredInteractionManager() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_RegisteredInteractionManager();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_SnapCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_SnapCollider();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_SnapToCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_SnapToCollider();

  constexpr void __cordl_internal_set_m_BoundInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

  constexpr void __cordl_internal_set_m_BoundSelectInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);

  constexpr void __cordl_internal_set_m_DisableSnapColliderWhenSelected(bool value);

  constexpr void __cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

  constexpr void __cordl_internal_set_m_InteractableObject(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void __cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  constexpr void __cordl_internal_set_m_SnapCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_m_SnapToCollider(::UnityW<::UnityEngine::Collider> value);

  /// @brief Method .ctor, addr 0x25a6c38, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> getStaticF_s_InteractionManagerCache();

  /// @brief Method get_disableSnapColliderWhenSelected, addr 0x25a5f64, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableSnapColliderWhenSelected();

  /// @brief Method get_interactable, addr 0x25a5fbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* get_interactable();

  /// @brief Method get_interactableObject, addr 0x25a5aac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_interactableObject();

  /// @brief Method get_interactionManager, addr 0x25a59a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager();

  /// @brief Method get_snapCollider, addr 0x25a5bcc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_snapCollider();

  /// @brief Method get_snapToCollider, addr 0x25a5fac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_snapToCollider();

  static inline void setStaticF_s_InteractionManagerCache(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value);

  /// @brief Method set_disableSnapColliderWhenSelected, addr 0x25a5f6c, size 0x40, virtual false, abstract: false, final false
  inline void set_disableSnapColliderWhenSelected(bool value);

  /// @brief Method set_interactable, addr 0x25a5b18, size 0xb4, virtual false, abstract: false, final false
  inline void set_interactable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

  /// @brief Method set_interactableObject, addr 0x25a5ab4, size 0x64, virtual false, abstract: false, final false
  inline void set_interactableObject(::UnityEngine::Object* value);

  /// @brief Method set_interactionManager, addr 0x25a59ac, size 0x3c, virtual false, abstract: false, final false
  inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value);

  /// @brief Method set_snapCollider, addr 0x25a5bd4, size 0xc4, virtual false, abstract: false, final false
  inline void set_snapCollider(::UnityEngine::Collider* value);

  /// @brief Method set_snapToCollider, addr 0x25a5fb4, size 0x8, virtual false, abstract: false, final false
  inline void set_snapToCollider(::UnityEngine::Collider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractableSnapVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractableSnapVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractableSnapVolume(XRInteractableSnapVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractableSnapVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractableSnapVolume(XRInteractableSnapVolume const&) = delete;

  /// @brief Field m_InteractionManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ___m_InteractionManager;

  /// @brief Field m_InteractableObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___m_InteractableObject;

  /// @brief Field m_SnapCollider, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___m_SnapCollider;

  /// @brief Field m_DisableSnapColliderWhenSelected, offset: 0x30, size: 0x1, def value: None
  bool ___m_DisableSnapColliderWhenSelected;

  /// @brief Field m_SnapToCollider, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___m_SnapToCollider;

  /// @brief Field m_Interactable, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* ___m_Interactable;

  /// @brief Field m_BoundInteractable, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* ___m_BoundInteractable;

  /// @brief Field m_BoundSelectInteractable, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* ___m_BoundSelectInteractable;

  /// @brief Field m_RegisteredInteractionManager, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> ___m_RegisteredInteractionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_InteractionManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_InteractableObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_SnapCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_DisableSnapColliderWhenSelected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_SnapToCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_Interactable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_BoundInteractable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_BoundSelectInteractable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume, ___m_RegisteredInteractionManager) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractableSnapVolume");
