#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractorReticleVisual)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractorReticleVisual;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual);
// Type: UnityEngine.XR.Interaction.Toolkit::XRInteractorReticleVisual
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRInteractorReticleVisual*
class CORDL_TYPE XRInteractorReticleVisual : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_alignPrefabWithSurfaceNormal, put = set_alignPrefabWithSurfaceNormal)) bool alignPrefabWithSurfaceNormal;

  __declspec(property(get = get_drawOnNoHit, put = set_drawOnNoHit)) bool drawOnNoHit;

  __declspec(property(get = get_drawWhileSelecting, put = set_drawWhileSelecting)) bool drawWhileSelecting;

  __declspec(property(get = get_endpointSmoothingTime, put = set_endpointSmoothingTime)) float_t endpointSmoothingTime;

  /// @brief Field m_AlignPrefabWithSurfaceNormal, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AlignPrefabWithSurfaceNormal, put = __cordl_internal_set_m_AlignPrefabWithSurfaceNormal)) bool m_AlignPrefabWithSurfaceNormal;

  /// @brief Field m_DrawOnNoHit, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DrawOnNoHit, put = __cordl_internal_set_m_DrawOnNoHit)) bool m_DrawOnNoHit;

  /// @brief Field m_DrawWhileSelecting, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DrawWhileSelecting, put = __cordl_internal_set_m_DrawWhileSelecting)) bool m_DrawWhileSelecting;

  /// @brief Field m_EndpointSmoothingTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EndpointSmoothingTime, put = __cordl_internal_set_m_EndpointSmoothingTime)) float_t m_EndpointSmoothingTime;

  /// @brief Field m_HasRaycastHit, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasRaycastHit, put = __cordl_internal_set_m_HasRaycastHit)) bool m_HasRaycastHit;

  /// @brief Field m_Interactor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interactor, put = __cordl_internal_set_m_Interactor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> m_Interactor;

  /// @brief Field m_InteractorLinePoints, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractorLinePoints,
                      put = __cordl_internal_set_m_InteractorLinePoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_InteractorLinePoints;

  /// @brief Field m_LocalPhysicsScene, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalPhysicsScene, put = __cordl_internal_set_m_LocalPhysicsScene))::UnityEngine::PhysicsScene m_LocalPhysicsScene;

  /// @brief Field m_MaxRaycastDistance, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxRaycastDistance, put = __cordl_internal_set_m_MaxRaycastDistance)) float_t m_MaxRaycastDistance;

  /// @brief Field m_PrefabScalingFactor, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrefabScalingFactor, put = __cordl_internal_set_m_PrefabScalingFactor)) float_t m_PrefabScalingFactor;

  /// @brief Field m_RaycastHits, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastHits, put = __cordl_internal_set_m_RaycastHits))::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> m_RaycastHits;

  /// @brief Field m_RaycastMask, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RaycastMask, put = __cordl_internal_set_m_RaycastMask))::UnityEngine::LayerMask m_RaycastMask;

  /// @brief Field m_ReticleActive, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReticleActive, put = __cordl_internal_set_m_ReticleActive)) bool m_ReticleActive;

  /// @brief Field m_ReticleInstance, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReticleInstance, put = __cordl_internal_set_m_ReticleInstance))::UnityW<::UnityEngine::GameObject> m_ReticleInstance;

  /// @brief Field m_ReticlePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReticlePrefab, put = __cordl_internal_set_m_ReticlePrefab))::UnityW<::UnityEngine::GameObject> m_ReticlePrefab;

  /// @brief Field m_TargetEndNormal, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_TargetEndNormal, put = __cordl_internal_set_m_TargetEndNormal))::UnityEngine::Vector3 m_TargetEndNormal;

  /// @brief Field m_TargetEndPoint, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_m_TargetEndPoint, put = __cordl_internal_set_m_TargetEndPoint))::UnityEngine::Vector3 m_TargetEndPoint;

  /// @brief Field m_UndoDistanceScaling, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UndoDistanceScaling, put = __cordl_internal_set_m_UndoDistanceScaling)) bool m_UndoDistanceScaling;

  /// @brief Field m_XROrigin, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XROrigin, put = __cordl_internal_set_m_XROrigin))::UnityW<::Unity::XR::CoreUtils::XROrigin> m_XROrigin;

  __declspec(property(get = get_maxRaycastDistance, put = set_maxRaycastDistance)) float_t maxRaycastDistance;

  __declspec(property(get = get_prefabScalingFactor, put = set_prefabScalingFactor)) float_t prefabScalingFactor;

  __declspec(property(get = get_raycastMask, put = set_raycastMask))::UnityEngine::LayerMask raycastMask;

  __declspec(property(get = get_reticleActive, put = set_reticleActive)) bool reticleActive;

  __declspec(property(get = get_reticlePrefab, put = set_reticlePrefab))::UnityW<::UnityEngine::GameObject> reticlePrefab;

  /// @brief Field s_XROriginCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_XROriginCache, put = setStaticF_s_XROriginCache))::UnityW<::Unity::XR::CoreUtils::XROrigin> s_XROriginCache;

  __declspec(property(get = get_undoDistanceScaling, put = set_undoDistanceScaling)) bool undoDistanceScaling;

  /// @brief Method ActivateReticleAtTarget, addr 0x25aa538, size 0x554, virtual false, abstract: false, final false
  inline void ActivateReticleAtTarget();

  /// @brief Method Awake, addr 0x25a9dc4, size 0x14c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FindClosestHit, addr 0x25aab7c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit FindClosestHit(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> hits, int32_t hitCount);

  /// @brief Method FindXROrigin, addr 0x25a9f10, size 0xfc, virtual false, abstract: false, final false
  inline void FindXROrigin();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual* New_ctor();

  /// @brief Method OnDestroy, addr 0x25aaa8c, size 0xf0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnSelectEntered, addr 0x25aad8c, size 0x8, virtual false, abstract: false, final false
  inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method SetupReticlePrefab, addr 0x25a9bb4, size 0xe8, virtual false, abstract: false, final false
  inline void SetupReticlePrefab();

  /// @brief Method TryGetRaycastPoint, addr 0x25aac58, size 0x134, virtual false, abstract: false, final false
  inline bool TryGetRaycastPoint(ByRef<::UnityEngine::Vector3> raycastPos, ByRef<::UnityEngine::Vector3> raycastNormal);

  /// @brief Method Update, addr 0x25aa00c, size 0x8c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateReticleTarget, addr 0x25aa098, size 0x4a0, virtual false, abstract: false, final false
  inline bool UpdateReticleTarget();

  constexpr bool const& __cordl_internal_get_m_AlignPrefabWithSurfaceNormal() const;

  constexpr bool& __cordl_internal_get_m_AlignPrefabWithSurfaceNormal();

  constexpr bool const& __cordl_internal_get_m_DrawOnNoHit() const;

  constexpr bool& __cordl_internal_get_m_DrawOnNoHit();

  constexpr bool const& __cordl_internal_get_m_DrawWhileSelecting() const;

  constexpr bool& __cordl_internal_get_m_DrawWhileSelecting();

  constexpr float_t const& __cordl_internal_get_m_EndpointSmoothingTime() const;

  constexpr float_t& __cordl_internal_get_m_EndpointSmoothingTime();

  constexpr bool const& __cordl_internal_get_m_HasRaycastHit() const;

  constexpr bool& __cordl_internal_get_m_HasRaycastHit();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> const& __cordl_internal_get_m_Interactor() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>& __cordl_internal_get_m_Interactor();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_InteractorLinePoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_InteractorLinePoints();

  constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

  constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene();

  constexpr float_t const& __cordl_internal_get_m_MaxRaycastDistance() const;

  constexpr float_t& __cordl_internal_get_m_MaxRaycastDistance();

  constexpr float_t const& __cordl_internal_get_m_PrefabScalingFactor() const;

  constexpr float_t& __cordl_internal_get_m_PrefabScalingFactor();

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& __cordl_internal_get_m_RaycastHits() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& __cordl_internal_get_m_RaycastHits();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_RaycastMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_RaycastMask();

  constexpr bool const& __cordl_internal_get_m_ReticleActive() const;

  constexpr bool& __cordl_internal_get_m_ReticleActive();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ReticleInstance() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ReticleInstance();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ReticlePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ReticlePrefab();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetEndNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetEndNormal();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetEndPoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetEndPoint();

  constexpr bool const& __cordl_internal_get_m_UndoDistanceScaling() const;

  constexpr bool& __cordl_internal_get_m_UndoDistanceScaling();

  constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_XROrigin() const;

  constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_XROrigin();

  constexpr void __cordl_internal_set_m_AlignPrefabWithSurfaceNormal(bool value);

  constexpr void __cordl_internal_set_m_DrawOnNoHit(bool value);

  constexpr void __cordl_internal_set_m_DrawWhileSelecting(bool value);

  constexpr void __cordl_internal_set_m_EndpointSmoothingTime(float_t value);

  constexpr void __cordl_internal_set_m_HasRaycastHit(bool value);

  constexpr void __cordl_internal_set_m_Interactor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> value);

  constexpr void __cordl_internal_set_m_InteractorLinePoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene value);

  constexpr void __cordl_internal_set_m_MaxRaycastDistance(float_t value);

  constexpr void __cordl_internal_set_m_PrefabScalingFactor(float_t value);

  constexpr void __cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value);

  constexpr void __cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_ReticleActive(bool value);

  constexpr void __cordl_internal_set_m_ReticleInstance(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ReticlePrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_TargetEndNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_TargetEndPoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_UndoDistanceScaling(bool value);

  constexpr void __cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin> value);

  /// @brief Method .ctor, addr 0x25aad94, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> getStaticF_s_XROriginCache();

  /// @brief Method get_alignPrefabWithSurfaceNormal, addr 0x25a9cc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_alignPrefabWithSurfaceNormal();

  /// @brief Method get_drawOnNoHit, addr 0x25a9cf8, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawOnNoHit();

  /// @brief Method get_drawWhileSelecting, addr 0x25a9ce4, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawWhileSelecting();

  /// @brief Method get_endpointSmoothingTime, addr 0x25a9cd4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_endpointSmoothingTime();

  /// @brief Method get_maxRaycastDistance, addr 0x25a9b94, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxRaycastDistance();

  /// @brief Method get_prefabScalingFactor, addr 0x25a9c9c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_prefabScalingFactor();

  /// @brief Method get_raycastMask, addr 0x25a9d0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_raycastMask();

  /// @brief Method get_reticleActive, addr 0x25a9d1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_reticleActive();

  /// @brief Method get_reticlePrefab, addr 0x25a9ba4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_reticlePrefab();

  /// @brief Method get_undoDistanceScaling, addr 0x25a9cac, size 0x8, virtual false, abstract: false, final false
  inline bool get_undoDistanceScaling();

  static inline void setStaticF_s_XROriginCache(::UnityW<::Unity::XR::CoreUtils::XROrigin> value);

  /// @brief Method set_alignPrefabWithSurfaceNormal, addr 0x25a9cc8, size 0xc, virtual false, abstract: false, final false
  inline void set_alignPrefabWithSurfaceNormal(bool value);

  /// @brief Method set_drawOnNoHit, addr 0x25a9d00, size 0xc, virtual false, abstract: false, final false
  inline void set_drawOnNoHit(bool value);

  /// @brief Method set_drawWhileSelecting, addr 0x25a9cec, size 0xc, virtual false, abstract: false, final false
  inline void set_drawWhileSelecting(bool value);

  /// @brief Method set_endpointSmoothingTime, addr 0x25a9cdc, size 0x8, virtual false, abstract: false, final false
  inline void set_endpointSmoothingTime(float_t value);

  /// @brief Method set_maxRaycastDistance, addr 0x25a9b9c, size 0x8, virtual false, abstract: false, final false
  inline void set_maxRaycastDistance(float_t value);

  /// @brief Method set_prefabScalingFactor, addr 0x25a9ca4, size 0x8, virtual false, abstract: false, final false
  inline void set_prefabScalingFactor(float_t value);

  /// @brief Method set_raycastMask, addr 0x25a9d14, size 0x8, virtual false, abstract: false, final false
  inline void set_raycastMask(::UnityEngine::LayerMask value);

  /// @brief Method set_reticleActive, addr 0x25a9d24, size 0xa0, virtual false, abstract: false, final false
  inline void set_reticleActive(bool value);

  /// @brief Method set_reticlePrefab, addr 0x25a9bac, size 0x8, virtual false, abstract: false, final false
  inline void set_reticlePrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_undoDistanceScaling, addr 0x25a9cb4, size 0xc, virtual false, abstract: false, final false
  inline void set_undoDistanceScaling(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractorReticleVisual();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractorReticleVisual", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractorReticleVisual(XRInteractorReticleVisual&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractorReticleVisual", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractorReticleVisual(XRInteractorReticleVisual const&) = delete;

  /// @brief Field m_MaxRaycastDistance, offset: 0x18, size: 0x4, def value: None
  float_t ___m_MaxRaycastDistance;

  /// @brief Field m_ReticlePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_ReticlePrefab;

  /// @brief Field m_PrefabScalingFactor, offset: 0x28, size: 0x4, def value: None
  float_t ___m_PrefabScalingFactor;

  /// @brief Field m_UndoDistanceScaling, offset: 0x2c, size: 0x1, def value: None
  bool ___m_UndoDistanceScaling;

  /// @brief Field m_AlignPrefabWithSurfaceNormal, offset: 0x2d, size: 0x1, def value: None
  bool ___m_AlignPrefabWithSurfaceNormal;

  /// @brief Field m_EndpointSmoothingTime, offset: 0x30, size: 0x4, def value: None
  float_t ___m_EndpointSmoothingTime;

  /// @brief Field m_DrawWhileSelecting, offset: 0x34, size: 0x1, def value: None
  bool ___m_DrawWhileSelecting;

  /// @brief Field m_DrawOnNoHit, offset: 0x35, size: 0x1, def value: None
  bool ___m_DrawOnNoHit;

  /// @brief Field m_RaycastMask, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_RaycastMask;

  /// @brief Field m_ReticleActive, offset: 0x3c, size: 0x1, def value: None
  bool ___m_ReticleActive;

  /// @brief Field m_XROrigin, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Unity::XR::CoreUtils::XROrigin> ___m_XROrigin;

  /// @brief Field m_ReticleInstance, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_ReticleInstance;

  /// @brief Field m_Interactor, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> ___m_Interactor;

  /// @brief Field m_InteractorLinePoints, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_InteractorLinePoints;

  /// @brief Field m_TargetEndPoint, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_TargetEndPoint;

  /// @brief Field m_TargetEndNormal, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_TargetEndNormal;

  /// @brief Field m_LocalPhysicsScene, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene ___m_LocalPhysicsScene;

  /// @brief Field m_HasRaycastHit, offset: 0x7c, size: 0x1, def value: None
  bool ___m_HasRaycastHit;

  /// @brief Field m_RaycastHits, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> ___m_RaycastHits;

  /// @brief Field k_MaxRaycastHits offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxRaycastHits{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_MaxRaycastDistance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_ReticlePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_PrefabScalingFactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_UndoDistanceScaling) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_AlignPrefabWithSurfaceNormal) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_EndpointSmoothingTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_DrawWhileSelecting) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_DrawOnNoHit) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_RaycastMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_ReticleActive) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_XROrigin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_ReticleInstance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_Interactor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_InteractorLinePoints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_TargetEndPoint) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_TargetEndNormal) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_LocalPhysicsScene) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_HasRaycastHit) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual, ___m_RaycastHits) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRInteractorReticleVisual*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractorReticleVisual");
