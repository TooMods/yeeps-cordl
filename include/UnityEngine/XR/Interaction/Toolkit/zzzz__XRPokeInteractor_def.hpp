#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRPokeInteractor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class RegisteredUIInteractorCache;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRPokeInteractor__PokeCollision;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRPokeInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRPokeInteractor__PokeCollision;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision);
// Type: ::PokeCollision
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRPokeInteractor::PokeCollision
struct CORDL_TYPE __XRPokeInteractor__PokeCollision {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2cf6428, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Collider* collider, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable,
                    ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter* filter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRPokeInteractor__PokeCollision();

  // Ctor Parameters [CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None }, CppParam { name: "interactable", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*", modifiers: "", def_value: None }, CppParam { name: "filter", ty:
  // "::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter>", modifiers: "", def_value: None }, CppParam { name: "hasPokeFilter", ty: "bool", modifiers: "", def_value: None }]
  constexpr __XRPokeInteractor__PokeCollision(::UnityW<::UnityEngine::Collider> collider, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable,
                                              ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter> filter, bool hasPokeFilter) noexcept;

  /// @brief Field collider, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> collider;

  /// @brief Field interactable, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable;

  /// @brief Field filter, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeFilter> filter;

  /// @brief Field hasPokeFilter, offset: 0x18, size: 0x1, def value: None
  bool hasPokeFilter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision, collider) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision, interactable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision, filter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision, hasPokeFilter) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRPokeInteractor
// SizeInfo { instance_size: 520, native_size: -1, calculated_instance_size: 520, calculated_native_size: 516, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRPokeInteractor*
class CORDL_TYPE XRPokeInteractor : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor {
public:
  // Declarations
  using PokeCollision = ::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision;

  __declspec(property(get = get_debugVisualizationsEnabled, put = set_debugVisualizationsEnabled)) bool debugVisualizationsEnabled;

  __declspec(property(get = get_enableUIInteraction, put = set_enableUIInteraction)) bool enableUIInteraction;

  /// @brief Field m_CurrentPokeTarget, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentPokeTarget,
                      put = __cordl_internal_set_m_CurrentPokeTarget))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* m_CurrentPokeTarget;

  /// @brief Field m_DebugVisualizationsEnabled, offset 0x1ae, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DebugVisualizationsEnabled, put = __cordl_internal_set_m_DebugVisualizationsEnabled)) bool m_DebugVisualizationsEnabled;

  /// @brief Field m_EnableUIInteraction, offset 0x1ad, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableUIInteraction, put = __cordl_internal_set_m_EnableUIInteraction)) bool m_EnableUIInteraction;

  /// @brief Field m_FirstFrame, offset 0x1cd, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstFrame, put = __cordl_internal_set_m_FirstFrame)) bool m_FirstFrame;

  /// @brief Field m_HoverDebugRenderer, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverDebugRenderer, put = __cordl_internal_set_m_HoverDebugRenderer))::UnityW<::UnityEngine::MeshRenderer> m_HoverDebugRenderer;

  /// @brief Field m_HoverDebugSphere, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverDebugSphere, put = __cordl_internal_set_m_HoverDebugSphere))::UnityW<::UnityEngine::GameObject> m_HoverDebugSphere;

  /// @brief Field m_InteractableSelectFilters, offset 0x1f0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_InteractableSelectFilters,
      put = __cordl_internal_set_m_InteractableSelectFilters))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* m_InteractableSelectFilters;

  /// @brief Field m_LastPokeInteractionPoint, offset 0x1c0, size 0xc
  __declspec(property(get = __cordl_internal_get_m_LastPokeInteractionPoint, put = __cordl_internal_set_m_LastPokeInteractionPoint))::UnityEngine::Vector3 m_LastPokeInteractionPoint;

  /// @brief Field m_LocalPhysicsScene, offset 0x200, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalPhysicsScene, put = __cordl_internal_set_m_LocalPhysicsScene))::UnityEngine::PhysicsScene m_LocalPhysicsScene;

  /// @brief Field m_OverlapSphereHits, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OverlapSphereHits,
                      put = __cordl_internal_set_m_OverlapSphereHits))::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> m_OverlapSphereHits;

  /// @brief Field m_PhysicsLayerMask, offset 0x1a4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PhysicsLayerMask, put = __cordl_internal_set_m_PhysicsLayerMask))::UnityEngine::LayerMask m_PhysicsLayerMask;

  /// @brief Field m_PhysicsTriggerInteraction, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PhysicsTriggerInteraction,
                      put = __cordl_internal_set_m_PhysicsTriggerInteraction))::UnityEngine::QueryTriggerInteraction m_PhysicsTriggerInteraction;

  /// @brief Field m_PokeCanSelect, offset 0x1cc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PokeCanSelect, put = __cordl_internal_set_m_PokeCanSelect)) bool m_PokeCanSelect;

  /// @brief Field m_PokeDepth, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PokeDepth, put = __cordl_internal_set_m_PokeDepth)) float_t m_PokeDepth;

  /// @brief Field m_PokeHoverRadius, offset 0x19c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PokeHoverRadius, put = __cordl_internal_set_m_PokeHoverRadius)) float_t m_PokeHoverRadius;

  /// @brief Field m_PokeInteractionOffset, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PokeInteractionOffset, put = __cordl_internal_set_m_PokeInteractionOffset)) float_t m_PokeInteractionOffset;

  /// @brief Field m_PokeSelectWidth, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PokeSelectWidth, put = __cordl_internal_set_m_PokeSelectWidth)) float_t m_PokeSelectWidth;

  /// @brief Field m_PokeTargets, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PokeTargets,
                      put = __cordl_internal_set_m_PokeTargets))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision>* m_PokeTargets;

  /// @brief Field m_PokeWidth, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PokeWidth, put = __cordl_internal_set_m_PokeWidth)) float_t m_PokeWidth;

  /// @brief Field m_RegisteredUIInteractorCache, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredUIInteractorCache,
                      put = __cordl_internal_set_m_RegisteredUIInteractorCache))::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* m_RegisteredUIInteractorCache;

  /// @brief Field m_RequirePokeFilter, offset 0x1ac, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequirePokeFilter, put = __cordl_internal_set_m_RequirePokeFilter)) bool m_RequirePokeFilter;

  /// @brief Field m_SphereCastHits, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SphereCastHits,
                      put = __cordl_internal_set_m_SphereCastHits))::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> m_SphereCastHits;

  __declspec(property(get = get_physicsLayerMask, put = set_physicsLayerMask))::UnityEngine::LayerMask physicsLayerMask;

  __declspec(property(get = get_physicsTriggerInteraction, put = set_physicsTriggerInteraction))::UnityEngine::QueryTriggerInteraction physicsTriggerInteraction;

  __declspec(property(get = get_pokeDepth, put = set_pokeDepth)) float_t pokeDepth;

  __declspec(property(get = get_pokeHoverRadius, put = set_pokeHoverRadius)) float_t pokeHoverRadius;

  __declspec(property(get = get_pokeInteractionOffset, put = set_pokeInteractionOffset)) float_t pokeInteractionOffset;

  __declspec(property(get = get_pokeSelectWidth, put = set_pokeSelectWidth)) float_t pokeSelectWidth;

  __declspec(property(get = get_pokeWidth, put = set_pokeWidth)) float_t pokeWidth;

  __declspec(property(get = get_requirePokeFilter, put = set_requirePokeFilter)) bool requirePokeFilter;

  /// @brief Field s_Results, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Results, put = setStaticF_s_Results))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* s_Results;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept;

  /// @brief Method Awake, addr 0x2cf4fe4, size 0x9c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CanSelect, addr 0x2cf5a6c, size 0x20, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method EvaluatePokeInteraction, addr 0x2cf5408, size 0x234, virtual false, abstract: false, final false
  inline bool EvaluatePokeInteraction(ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> newHoveredInteractable);

  /// @brief Method EvaluateSphereOverlap, addr 0x2cf5a8c, size 0x4b4, virtual false, abstract: false, final false
  inline int32_t EvaluateSphereOverlap();

  /// @brief Method FindPokeTarget, addr 0x2cf5f40, size 0x35c, virtual false, abstract: false, final false
  inline bool FindPokeTarget(::UnityEngine::Collider* hitCollider, ByRef<::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision> newPokeCollision);

  /// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetOrAddComponent();

  /// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetOrAddComponent(::UnityEngine::GameObject* go);

  /// @brief Method GetPokePosition, addr 0x2cf681c, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPokePosition();

  /// @brief Method GetValidTargets, addr 0x2cf56f8, size 0x374, virtual true, abstract: false, final false
  inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor* New_ctor();

  /// @brief Method OnDestroy, addr 0x2cf5370, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2cf5330, size 0x40, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2cf5080, size 0x5c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PreprocessInteractor, addr 0x2cf5374, size 0x94, virtual true, abstract: false, final false
  inline void PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ProcessInteractor, addr 0x2cf563c, size 0x10, virtual true, abstract: false, final false
  inline void ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method SetDebugObjectVisibility, addr 0x2cf50dc, size 0x254, virtual false, abstract: false, final false
  inline void SetDebugObjectVisibility(bool isVisible);

  /// @brief Method TryGetUIModel, addr 0x2cf6848, size 0x1c, virtual true, abstract: false, final true
  inline bool TryGetUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);

  /// @brief Method UpdateDebugVisuals, addr 0x2cf564c, size 0xac, virtual false, abstract: false, final false
  inline void UpdateDebugVisuals();

  /// @brief Method UpdateUIModel, addr 0x2cf64b4, size 0x368, virtual true, abstract: false, final false
  inline void UpdateUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*& __cordl_internal_get_m_CurrentPokeTarget();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> const& __cordl_internal_get_m_CurrentPokeTarget() const;

  constexpr bool const& __cordl_internal_get_m_DebugVisualizationsEnabled() const;

  constexpr bool& __cordl_internal_get_m_DebugVisualizationsEnabled();

  constexpr bool const& __cordl_internal_get_m_EnableUIInteraction() const;

  constexpr bool& __cordl_internal_get_m_EnableUIInteraction();

  constexpr bool const& __cordl_internal_get_m_FirstFrame() const;

  constexpr bool& __cordl_internal_get_m_FirstFrame();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_m_HoverDebugRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_m_HoverDebugRenderer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_HoverDebugSphere() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_HoverDebugSphere();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& __cordl_internal_get_m_InteractableSelectFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*> const&
  __cordl_internal_get_m_InteractableSelectFilters() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastPokeInteractionPoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastPokeInteractionPoint();

  constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

  constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_m_OverlapSphereHits() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get_m_OverlapSphereHits();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_PhysicsLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_PhysicsLayerMask();

  constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_PhysicsTriggerInteraction() const;

  constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_PhysicsTriggerInteraction();

  constexpr bool const& __cordl_internal_get_m_PokeCanSelect() const;

  constexpr bool& __cordl_internal_get_m_PokeCanSelect();

  constexpr float_t const& __cordl_internal_get_m_PokeDepth() const;

  constexpr float_t& __cordl_internal_get_m_PokeDepth();

  constexpr float_t const& __cordl_internal_get_m_PokeHoverRadius() const;

  constexpr float_t& __cordl_internal_get_m_PokeHoverRadius();

  constexpr float_t const& __cordl_internal_get_m_PokeInteractionOffset() const;

  constexpr float_t& __cordl_internal_get_m_PokeInteractionOffset();

  constexpr float_t const& __cordl_internal_get_m_PokeSelectWidth() const;

  constexpr float_t& __cordl_internal_get_m_PokeSelectWidth();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision>*& __cordl_internal_get_m_PokeTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision>*> const&
  __cordl_internal_get_m_PokeTargets() const;

  constexpr float_t const& __cordl_internal_get_m_PokeWidth() const;

  constexpr float_t& __cordl_internal_get_m_PokeWidth();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& __cordl_internal_get_m_RegisteredUIInteractorCache();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*> const& __cordl_internal_get_m_RegisteredUIInteractorCache() const;

  constexpr bool const& __cordl_internal_get_m_RequirePokeFilter() const;

  constexpr bool& __cordl_internal_get_m_RequirePokeFilter();

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& __cordl_internal_get_m_SphereCastHits() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& __cordl_internal_get_m_SphereCastHits();

  constexpr void __cordl_internal_set_m_CurrentPokeTarget(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);

  constexpr void __cordl_internal_set_m_DebugVisualizationsEnabled(bool value);

  constexpr void __cordl_internal_set_m_EnableUIInteraction(bool value);

  constexpr void __cordl_internal_set_m_FirstFrame(bool value);

  constexpr void __cordl_internal_set_m_HoverDebugRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_m_HoverDebugSphere(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_InteractableSelectFilters(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* value);

  constexpr void __cordl_internal_set_m_LastPokeInteractionPoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene value);

  constexpr void __cordl_internal_set_m_OverlapSphereHits(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value);

  constexpr void __cordl_internal_set_m_PhysicsLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_PhysicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction value);

  constexpr void __cordl_internal_set_m_PokeCanSelect(bool value);

  constexpr void __cordl_internal_set_m_PokeDepth(float_t value);

  constexpr void __cordl_internal_set_m_PokeHoverRadius(float_t value);

  constexpr void __cordl_internal_set_m_PokeInteractionOffset(float_t value);

  constexpr void __cordl_internal_set_m_PokeSelectWidth(float_t value);

  constexpr void __cordl_internal_set_m_PokeTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision>* value);

  constexpr void __cordl_internal_set_m_PokeWidth(float_t value);

  constexpr void __cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* value);

  constexpr void __cordl_internal_set_m_RequirePokeFilter(bool value);

  constexpr void __cordl_internal_set_m_SphereCastHits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value);

  /// @brief Method .ctor, addr 0x2cf6864, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* getStaticF_s_Results();

  /// @brief Method get_debugVisualizationsEnabled, addr 0x2cf4fd0, size 0x8, virtual false, abstract: false, final false
  inline bool get_debugVisualizationsEnabled();

  /// @brief Method get_enableUIInteraction, addr 0x2cf4f98, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableUIInteraction();

  /// @brief Method get_physicsLayerMask, addr 0x2cf4f64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_physicsLayerMask();

  /// @brief Method get_physicsTriggerInteraction, addr 0x2cf4f74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::QueryTriggerInteraction get_physicsTriggerInteraction();

  /// @brief Method get_pokeDepth, addr 0x2cf4f14, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pokeDepth();

  /// @brief Method get_pokeHoverRadius, addr 0x2cf4f44, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pokeHoverRadius();

  /// @brief Method get_pokeInteractionOffset, addr 0x2cf4f54, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pokeInteractionOffset();

  /// @brief Method get_pokeSelectWidth, addr 0x2cf4f34, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pokeSelectWidth();

  /// @brief Method get_pokeWidth, addr 0x2cf4f24, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pokeWidth();

  /// @brief Method get_requirePokeFilter, addr 0x2cf4f84, size 0x8, virtual false, abstract: false, final false
  inline bool get_requirePokeFilter();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept;

  static inline void setStaticF_s_Results(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  /// @brief Method set_debugVisualizationsEnabled, addr 0x2cf4fd8, size 0xc, virtual false, abstract: false, final false
  inline void set_debugVisualizationsEnabled(bool value);

  /// @brief Method set_enableUIInteraction, addr 0x2cf4fa0, size 0x30, virtual false, abstract: false, final false
  inline void set_enableUIInteraction(bool value);

  /// @brief Method set_physicsLayerMask, addr 0x2cf4f6c, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_physicsTriggerInteraction, addr 0x2cf4f7c, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction value);

  /// @brief Method set_pokeDepth, addr 0x2cf4f1c, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeDepth(float_t value);

  /// @brief Method set_pokeHoverRadius, addr 0x2cf4f4c, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeHoverRadius(float_t value);

  /// @brief Method set_pokeInteractionOffset, addr 0x2cf4f5c, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeInteractionOffset(float_t value);

  /// @brief Method set_pokeSelectWidth, addr 0x2cf4f3c, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeSelectWidth(float_t value);

  /// @brief Method set_pokeWidth, addr 0x2cf4f2c, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeWidth(float_t value);

  /// @brief Method set_requirePokeFilter, addr 0x2cf4f8c, size 0xc, virtual false, abstract: false, final false
  inline void set_requirePokeFilter(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPokeInteractor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRPokeInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRPokeInteractor(XRPokeInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRPokeInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRPokeInteractor(XRPokeInteractor const&) = delete;

  /// @brief Field m_PokeDepth, offset: 0x190, size: 0x4, def value: None
  float_t ___m_PokeDepth;

  /// @brief Field m_PokeWidth, offset: 0x194, size: 0x4, def value: None
  float_t ___m_PokeWidth;

  /// @brief Field m_PokeSelectWidth, offset: 0x198, size: 0x4, def value: None
  float_t ___m_PokeSelectWidth;

  /// @brief Field m_PokeHoverRadius, offset: 0x19c, size: 0x4, def value: None
  float_t ___m_PokeHoverRadius;

  /// @brief Field m_PokeInteractionOffset, offset: 0x1a0, size: 0x4, def value: None
  float_t ___m_PokeInteractionOffset;

  /// @brief Field m_PhysicsLayerMask, offset: 0x1a4, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_PhysicsLayerMask;

  /// @brief Field m_PhysicsTriggerInteraction, offset: 0x1a8, size: 0x4, def value: None
  ::UnityEngine::QueryTriggerInteraction ___m_PhysicsTriggerInteraction;

  /// @brief Field m_RequirePokeFilter, offset: 0x1ac, size: 0x1, def value: None
  bool ___m_RequirePokeFilter;

  /// @brief Field m_EnableUIInteraction, offset: 0x1ad, size: 0x1, def value: None
  bool ___m_EnableUIInteraction;

  /// @brief Field m_DebugVisualizationsEnabled, offset: 0x1ae, size: 0x1, def value: None
  bool ___m_DebugVisualizationsEnabled;

  /// @brief Field m_HoverDebugSphere, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_HoverDebugSphere;

  /// @brief Field m_HoverDebugRenderer, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___m_HoverDebugRenderer;

  /// @brief Field m_LastPokeInteractionPoint, offset: 0x1c0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_LastPokeInteractionPoint;

  /// @brief Field m_PokeCanSelect, offset: 0x1cc, size: 0x1, def value: None
  bool ___m_PokeCanSelect;

  /// @brief Field m_FirstFrame, offset: 0x1cd, size: 0x1, def value: None
  bool ___m_FirstFrame;

  /// @brief Field m_CurrentPokeTarget, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* ___m_CurrentPokeTarget;

  /// @brief Field m_SphereCastHits, offset: 0x1d8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> ___m_SphereCastHits;

  /// @brief Field m_OverlapSphereHits, offset: 0x1e0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> ___m_OverlapSphereHits;

  /// @brief Field m_PokeTargets, offset: 0x1e8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision>* ___m_PokeTargets;

  /// @brief Field m_InteractableSelectFilters, offset: 0x1f0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* ___m_InteractableSelectFilters;

  /// @brief Field m_RegisteredUIInteractorCache, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* ___m_RegisteredUIInteractorCache;

  /// @brief Field m_LocalPhysicsScene, offset: 0x200, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene ___m_LocalPhysicsScene;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, 0x208>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PokeDepth) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PokeWidth) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PokeSelectWidth) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PokeHoverRadius) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PokeInteractionOffset) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PhysicsLayerMask) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PhysicsTriggerInteraction) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_RequirePokeFilter) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_EnableUIInteraction) == 0x1ad, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_DebugVisualizationsEnabled) == 0x1ae, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_HoverDebugSphere) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_HoverDebugRenderer) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_LastPokeInteractionPoint) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PokeCanSelect) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_FirstFrame) == 0x1cd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_CurrentPokeTarget) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_SphereCastHits) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_OverlapSphereHits) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_PokeTargets) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_InteractableSelectFilters) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_RegisteredUIInteractorCache) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor, ___m_LocalPhysicsScene) == 0x200, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor*, "UnityEngine.XR.Interaction.Toolkit", "XRPokeInteractor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRPokeInteractor__PokeCollision, "UnityEngine.XR.Interaction.Toolkit", "XRPokeInteractor/PokeCollision");
