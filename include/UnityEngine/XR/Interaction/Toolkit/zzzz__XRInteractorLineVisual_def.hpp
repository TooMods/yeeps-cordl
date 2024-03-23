#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractorLineVisual)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ILineRenderable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRCustomReticleProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractableSnapVolume;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRRayInteractor;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractorLineVisual;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual);
// Type: UnityEngine.XR.Interaction.Toolkit::XRInteractorLineVisual
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRInteractorLineVisual*
class CORDL_TYPE XRInteractorLineVisual : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_blockedColorGradient, put = set_blockedColorGradient))::UnityEngine::Gradient* blockedColorGradient;

  __declspec(property(get = get_blockedReticle, put = set_blockedReticle))::UnityW<::UnityEngine::GameObject> blockedReticle;

  __declspec(property(get = get_followTightness, put = set_followTightness)) float_t followTightness;

  __declspec(property(get = get_invalidColorGradient, put = set_invalidColorGradient))::UnityEngine::Gradient* invalidColorGradient;

  __declspec(property(get = get_lineLength, put = set_lineLength)) float_t lineLength;

  __declspec(property(get = get_lineWidth, put = set_lineWidth)) float_t lineWidth;

  /// @brief Field m_BlockedColorGradient, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlockedColorGradient, put = __cordl_internal_set_m_BlockedColorGradient))::UnityEngine::Gradient* m_BlockedColorGradient;

  /// @brief Field m_BlockedReticle, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlockedReticle, put = __cordl_internal_set_m_BlockedReticle))::UnityW<::UnityEngine::GameObject> m_BlockedReticle;

  /// @brief Field m_ClearArray, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClearArray, put = __cordl_internal_set_m_ClearArray))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_ClearArray;

  /// @brief Field m_CurrentHitPoint, offset 0x120, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CurrentHitPoint, put = __cordl_internal_set_m_CurrentHitPoint))::UnityEngine::Vector3 m_CurrentHitPoint;

  /// @brief Field m_CurrentRenderEndpoint, offset 0x130, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CurrentRenderEndpoint, put = __cordl_internal_set_m_CurrentRenderEndpoint))::UnityEngine::Vector3 m_CurrentRenderEndpoint;

  /// @brief Field m_CustomReticle, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CustomReticle, put = __cordl_internal_set_m_CustomReticle))::UnityW<::UnityEngine::GameObject> m_CustomReticle;

  /// @brief Field m_CustomReticleAttached, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CustomReticleAttached, put = __cordl_internal_set_m_CustomReticleAttached)) bool m_CustomReticleAttached;

  /// @brief Field m_EndPositionInLine, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EndPositionInLine, put = __cordl_internal_set_m_EndPositionInLine)) int32_t m_EndPositionInLine;

  /// @brief Field m_FollowTightness, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FollowTightness, put = __cordl_internal_set_m_FollowTightness)) float_t m_FollowTightness;

  /// @brief Field m_HasHitInfo, offset 0x12c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasHitInfo, put = __cordl_internal_set_m_HasHitInfo)) bool m_HasHitInfo;

  /// @brief Field m_InvalidColorGradient, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InvalidColorGradient, put = __cordl_internal_set_m_InvalidColorGradient))::UnityEngine::Gradient* m_InvalidColorGradient;

  /// @brief Field m_LineLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineLength, put = __cordl_internal_set_m_LineLength)) float_t m_LineLength;

  /// @brief Field m_LineRenderable, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LineRenderable, put = __cordl_internal_set_m_LineRenderable))::UnityEngine::XR::Interaction::Toolkit::ILineRenderable* m_LineRenderable;

  /// @brief Field m_LineRenderableAsBaseInteractor, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LineRenderableAsBaseInteractor,
                      put = __cordl_internal_set_m_LineRenderableAsBaseInteractor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> m_LineRenderableAsBaseInteractor;

  /// @brief Field m_LineRenderableAsRayInteractor, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LineRenderableAsRayInteractor,
                      put = __cordl_internal_set_m_LineRenderableAsRayInteractor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor> m_LineRenderableAsRayInteractor;

  /// @brief Field m_LineRenderableAsSelectInteractor, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LineRenderableAsSelectInteractor,
                      put = __cordl_internal_set_m_LineRenderableAsSelectInteractor))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* m_LineRenderableAsSelectInteractor;

  /// @brief Field m_LineRenderablePoints, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LineRenderablePoints,
                      put = __cordl_internal_set_m_LineRenderablePoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_LineRenderablePoints;

  /// @brief Field m_LineRenderer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LineRenderer, put = __cordl_internal_set_m_LineRenderer))::UnityW<::UnityEngine::LineRenderer> m_LineRenderer;

  /// @brief Field m_LineWidth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineWidth, put = __cordl_internal_set_m_LineWidth)) float_t m_LineWidth;

  /// @brief Field m_NoPreviousRenderPoints, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NoPreviousRenderPoints, put = __cordl_internal_set_m_NoPreviousRenderPoints)) int32_t m_NoPreviousRenderPoints;

  /// @brief Field m_NoRenderPoints, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NoRenderPoints, put = __cordl_internal_set_m_NoRenderPoints)) int32_t m_NoRenderPoints;

  /// @brief Field m_NoTargetPoints, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NoTargetPoints, put = __cordl_internal_set_m_NoTargetPoints)) int32_t m_NoTargetPoints;

  /// @brief Field m_NumberOfSegmentsForBendableLine, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfSegmentsForBendableLine, put = __cordl_internal_set_m_NumberOfSegmentsForBendableLine)) int32_t m_NumberOfSegmentsForBendableLine;

  /// @brief Field m_OverrideInteractorLineLength, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverrideInteractorLineLength, put = __cordl_internal_set_m_OverrideInteractorLineLength)) bool m_OverrideInteractorLineLength;

  /// @brief Field m_PerformSetup, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PerformSetup, put = __cordl_internal_set_m_PerformSetup)) bool m_PerformSetup;

  /// @brief Field m_PreviousCollider, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousCollider, put = __cordl_internal_set_m_PreviousCollider))::UnityW<::UnityEngine::Collider> m_PreviousCollider;

  /// @brief Field m_PreviousRenderPoints, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousRenderPoints,
                      put = __cordl_internal_set_m_PreviousRenderPoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_PreviousRenderPoints;

  /// @brief Field m_RenderPoints, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderPoints, put = __cordl_internal_set_m_RenderPoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_RenderPoints;

  /// @brief Field m_Reticle, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Reticle, put = __cordl_internal_set_m_Reticle))::UnityW<::UnityEngine::GameObject> m_Reticle;

  /// @brief Field m_ReticleNormal, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_m_ReticleNormal, put = __cordl_internal_set_m_ReticleNormal))::UnityEngine::Vector3 m_ReticleNormal;

  /// @brief Field m_ReticlePos, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_ReticlePos, put = __cordl_internal_set_m_ReticlePos))::UnityEngine::Vector3 m_ReticlePos;

  /// @brief Field m_ReticleToUse, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReticleToUse, put = __cordl_internal_set_m_ReticleToUse))::UnityW<::UnityEngine::GameObject> m_ReticleToUse;

  /// @brief Field m_SmoothMovement, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SmoothMovement, put = __cordl_internal_set_m_SmoothMovement)) bool m_SmoothMovement;

  /// @brief Field m_SnapCurve, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SnapCurve, put = __cordl_internal_set_m_SnapCurve)) bool m_SnapCurve;

  /// @brief Field m_SnapEndpointIfAvailable, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SnapEndpointIfAvailable, put = __cordl_internal_set_m_SnapEndpointIfAvailable)) bool m_SnapEndpointIfAvailable;

  /// @brief Field m_SnapThresholdDistance, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SnapThresholdDistance, put = __cordl_internal_set_m_SnapThresholdDistance)) float_t m_SnapThresholdDistance;

  /// @brief Field m_Snapping, offset 0x101, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Snapping, put = __cordl_internal_set_m_Snapping)) bool m_Snapping;

  /// @brief Field m_StopLineAtFirstRaycastHit, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StopLineAtFirstRaycastHit, put = __cordl_internal_set_m_StopLineAtFirstRaycastHit)) bool m_StopLineAtFirstRaycastHit;

  /// @brief Field m_StopLineAtSelection, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StopLineAtSelection, put = __cordl_internal_set_m_StopLineAtSelection)) bool m_StopLineAtSelection;

  /// @brief Field m_TargetPoints, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetPoints, put = __cordl_internal_set_m_TargetPoints))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_TargetPoints;

  /// @brief Field m_TreatSelectionAsValidState, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TreatSelectionAsValidState, put = __cordl_internal_set_m_TreatSelectionAsValidState)) bool m_TreatSelectionAsValidState;

  /// @brief Field m_ValidColorGradient, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValidColorGradient, put = __cordl_internal_set_m_ValidColorGradient))::UnityEngine::Gradient* m_ValidColorGradient;

  /// @brief Field m_ValidHit, offset 0x12d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ValidHit, put = __cordl_internal_set_m_ValidHit)) bool m_ValidHit;

  /// @brief Field m_WidthCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WidthCurve, put = __cordl_internal_set_m_WidthCurve))::UnityEngine::AnimationCurve* m_WidthCurve;

  /// @brief Field m_XRInteractableSnapVolume, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRInteractableSnapVolume,
                      put = __cordl_internal_set_m_XRInteractableSnapVolume))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> m_XRInteractableSnapVolume;

  /// @brief Field m_XROrigin, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XROrigin, put = __cordl_internal_set_m_XROrigin))::UnityW<::Unity::XR::CoreUtils::XROrigin> m_XROrigin;

  __declspec(property(get = get_overrideInteractorLineLength, put = set_overrideInteractorLineLength)) bool overrideInteractorLineLength;

  __declspec(property(get = get_reticle, put = set_reticle))::UnityW<::UnityEngine::GameObject> reticle;

  /// @brief Field s_XROriginCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_XROriginCache, put = setStaticF_s_XROriginCache))::UnityW<::Unity::XR::CoreUtils::XROrigin> s_XROriginCache;

  __declspec(property(get = get_smoothMovement, put = set_smoothMovement)) bool smoothMovement;

  __declspec(property(get = get_snapEndpointIfAvailable, put = set_snapEndpointIfAvailable)) bool snapEndpointIfAvailable;

  __declspec(property(get = get_snapThresholdDistance, put = set_snapThresholdDistance)) float_t snapThresholdDistance;

  __declspec(property(get = get_stopLineAtFirstRaycastHit, put = set_stopLineAtFirstRaycastHit)) bool stopLineAtFirstRaycastHit;

  __declspec(property(get = get_stopLineAtSelection, put = set_stopLineAtSelection)) bool stopLineAtSelection;

  __declspec(property(get = get_treatSelectionAsValidState, put = set_treatSelectionAsValidState)) bool treatSelectionAsValidState;

  __declspec(property(get = get_validColorGradient, put = set_validColorGradient))::UnityEngine::Gradient* validColorGradient;

  __declspec(property(get = get_widthCurve, put = set_widthCurve))::UnityEngine::AnimationCurve* widthCurve;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRCustomReticleProvider"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRCustomReticleProvider*() noexcept;

  /// @brief Method AttachCustomReticle, addr 0x25a954c, size 0x18, virtual true, abstract: false, final true
  inline bool AttachCustomReticle(::UnityEngine::GameObject* reticleInstance);

  /// @brief Method Awake, addr 0x25a7518, size 0x14c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateSnapRenderPoints, addr 0x25a92b4, size 0x298, virtual false, abstract: false, final false
  inline void CalculateSnapRenderPoints();

  /// @brief Method ClearLineRenderer, addr 0x25a7760, size 0x48, virtual false, abstract: false, final false
  inline void ClearLineRenderer();

  /// @brief Method FindXROrigin, addr 0x25a7664, size 0xfc, virtual false, abstract: false, final false
  inline void FindXROrigin();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual* New_ctor();

  /// @brief Method OnBeforeRenderLineVisual, addr 0x25a7a8c, size 0x4, virtual false, abstract: false, final false
  inline void OnBeforeRenderLineVisual();

  /// @brief Method OnDisable, addr 0x25a7884, size 0x110, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x25a77a8, size 0xdc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x25a7488, size 0x28, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RemoveCustomReticle, addr 0x25a9564, size 0x14, virtual true, abstract: false, final true
  inline bool RemoveCustomReticle();

  /// @brief Method Reset, addr 0x25a7484, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetupBlockedReticle, addr 0x25a735c, size 0xec, virtual false, abstract: false, final false
  inline void SetupBlockedReticle();

  /// @brief Method SetupReticle, addr 0x25a723c, size 0xec, virtual false, abstract: false, final false
  inline void SetupReticle();

  /// @brief Method TryFindLineRenderer, addr 0x25a7994, size 0xf8, virtual false, abstract: false, final false
  inline bool TryFindLineRenderer();

  /// @brief Method UpdateCurrentHitInfo, addr 0x25a8ed4, size 0x3e0, virtual false, abstract: false, final false
  inline bool UpdateCurrentHitInfo();

  /// @brief Method UpdateLineVisual, addr 0x25a7a90, size 0x1444, virtual false, abstract: false, final false
  inline void UpdateLineVisual();

  /// @brief Method UpdateSettings, addr 0x25a74b0, size 0x68, virtual false, abstract: false, final false
  inline void UpdateSettings();

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_BlockedColorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get_m_BlockedColorGradient() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_BlockedReticle() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_BlockedReticle();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_ClearArray() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_ClearArray();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentHitPoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentHitPoint();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentRenderEndpoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentRenderEndpoint();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CustomReticle() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CustomReticle();

  constexpr bool const& __cordl_internal_get_m_CustomReticleAttached() const;

  constexpr bool& __cordl_internal_get_m_CustomReticleAttached();

  constexpr int32_t const& __cordl_internal_get_m_EndPositionInLine() const;

  constexpr int32_t& __cordl_internal_get_m_EndPositionInLine();

  constexpr float_t const& __cordl_internal_get_m_FollowTightness() const;

  constexpr float_t& __cordl_internal_get_m_FollowTightness();

  constexpr bool const& __cordl_internal_get_m_HasHitInfo() const;

  constexpr bool& __cordl_internal_get_m_HasHitInfo();

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_InvalidColorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get_m_InvalidColorGradient() const;

  constexpr float_t const& __cordl_internal_get_m_LineLength() const;

  constexpr float_t& __cordl_internal_get_m_LineLength();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*& __cordl_internal_get_m_LineRenderable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*> const& __cordl_internal_get_m_LineRenderable() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> const& __cordl_internal_get_m_LineRenderableAsBaseInteractor() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor>& __cordl_internal_get_m_LineRenderableAsBaseInteractor();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor> const& __cordl_internal_get_m_LineRenderableAsRayInteractor() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor>& __cordl_internal_get_m_LineRenderableAsRayInteractor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*& __cordl_internal_get_m_LineRenderableAsSelectInteractor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*> const& __cordl_internal_get_m_LineRenderableAsSelectInteractor() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_LineRenderablePoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_LineRenderablePoints();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_m_LineRenderer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_m_LineRenderer();

  constexpr float_t const& __cordl_internal_get_m_LineWidth() const;

  constexpr float_t& __cordl_internal_get_m_LineWidth();

  constexpr int32_t const& __cordl_internal_get_m_NoPreviousRenderPoints() const;

  constexpr int32_t& __cordl_internal_get_m_NoPreviousRenderPoints();

  constexpr int32_t const& __cordl_internal_get_m_NoRenderPoints() const;

  constexpr int32_t& __cordl_internal_get_m_NoRenderPoints();

  constexpr int32_t const& __cordl_internal_get_m_NoTargetPoints() const;

  constexpr int32_t& __cordl_internal_get_m_NoTargetPoints();

  constexpr int32_t const& __cordl_internal_get_m_NumberOfSegmentsForBendableLine() const;

  constexpr int32_t& __cordl_internal_get_m_NumberOfSegmentsForBendableLine();

  constexpr bool const& __cordl_internal_get_m_OverrideInteractorLineLength() const;

  constexpr bool& __cordl_internal_get_m_OverrideInteractorLineLength();

  constexpr bool const& __cordl_internal_get_m_PerformSetup() const;

  constexpr bool& __cordl_internal_get_m_PerformSetup();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_PreviousCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_PreviousCollider();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_PreviousRenderPoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_PreviousRenderPoints();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_RenderPoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_RenderPoints();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Reticle() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Reticle();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ReticleNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ReticleNormal();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ReticlePos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ReticlePos();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ReticleToUse() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ReticleToUse();

  constexpr bool const& __cordl_internal_get_m_SmoothMovement() const;

  constexpr bool& __cordl_internal_get_m_SmoothMovement();

  constexpr bool const& __cordl_internal_get_m_SnapCurve() const;

  constexpr bool& __cordl_internal_get_m_SnapCurve();

  constexpr bool const& __cordl_internal_get_m_SnapEndpointIfAvailable() const;

  constexpr bool& __cordl_internal_get_m_SnapEndpointIfAvailable();

  constexpr float_t const& __cordl_internal_get_m_SnapThresholdDistance() const;

  constexpr float_t& __cordl_internal_get_m_SnapThresholdDistance();

  constexpr bool const& __cordl_internal_get_m_Snapping() const;

  constexpr bool& __cordl_internal_get_m_Snapping();

  constexpr bool const& __cordl_internal_get_m_StopLineAtFirstRaycastHit() const;

  constexpr bool& __cordl_internal_get_m_StopLineAtFirstRaycastHit();

  constexpr bool const& __cordl_internal_get_m_StopLineAtSelection() const;

  constexpr bool& __cordl_internal_get_m_StopLineAtSelection();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_TargetPoints() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_TargetPoints();

  constexpr bool const& __cordl_internal_get_m_TreatSelectionAsValidState() const;

  constexpr bool& __cordl_internal_get_m_TreatSelectionAsValidState();

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_ValidColorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get_m_ValidColorGradient() const;

  constexpr bool const& __cordl_internal_get_m_ValidHit() const;

  constexpr bool& __cordl_internal_get_m_ValidHit();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_WidthCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_m_WidthCurve() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> const& __cordl_internal_get_m_XRInteractableSnapVolume() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>& __cordl_internal_get_m_XRInteractableSnapVolume();

  constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_XROrigin() const;

  constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_XROrigin();

  constexpr void __cordl_internal_set_m_BlockedColorGradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set_m_BlockedReticle(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ClearArray(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_CurrentHitPoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_CurrentRenderEndpoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_CustomReticle(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_CustomReticleAttached(bool value);

  constexpr void __cordl_internal_set_m_EndPositionInLine(int32_t value);

  constexpr void __cordl_internal_set_m_FollowTightness(float_t value);

  constexpr void __cordl_internal_set_m_HasHitInfo(bool value);

  constexpr void __cordl_internal_set_m_InvalidColorGradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set_m_LineLength(float_t value);

  constexpr void __cordl_internal_set_m_LineRenderable(::UnityEngine::XR::Interaction::Toolkit::ILineRenderable* value);

  constexpr void __cordl_internal_set_m_LineRenderableAsBaseInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> value);

  constexpr void __cordl_internal_set_m_LineRenderableAsRayInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor> value);

  constexpr void __cordl_internal_set_m_LineRenderableAsSelectInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* value);

  constexpr void __cordl_internal_set_m_LineRenderablePoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_LineRenderer(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_m_LineWidth(float_t value);

  constexpr void __cordl_internal_set_m_NoPreviousRenderPoints(int32_t value);

  constexpr void __cordl_internal_set_m_NoRenderPoints(int32_t value);

  constexpr void __cordl_internal_set_m_NoTargetPoints(int32_t value);

  constexpr void __cordl_internal_set_m_NumberOfSegmentsForBendableLine(int32_t value);

  constexpr void __cordl_internal_set_m_OverrideInteractorLineLength(bool value);

  constexpr void __cordl_internal_set_m_PerformSetup(bool value);

  constexpr void __cordl_internal_set_m_PreviousCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_m_PreviousRenderPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_RenderPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_Reticle(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ReticleNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_ReticlePos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_ReticleToUse(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_SmoothMovement(bool value);

  constexpr void __cordl_internal_set_m_SnapCurve(bool value);

  constexpr void __cordl_internal_set_m_SnapEndpointIfAvailable(bool value);

  constexpr void __cordl_internal_set_m_SnapThresholdDistance(float_t value);

  constexpr void __cordl_internal_set_m_Snapping(bool value);

  constexpr void __cordl_internal_set_m_StopLineAtFirstRaycastHit(bool value);

  constexpr void __cordl_internal_set_m_StopLineAtSelection(bool value);

  constexpr void __cordl_internal_set_m_TargetPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_TreatSelectionAsValidState(bool value);

  constexpr void __cordl_internal_set_m_ValidColorGradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set_m_ValidHit(bool value);

  constexpr void __cordl_internal_set_m_WidthCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_m_XRInteractableSnapVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> value);

  constexpr void __cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin> value);

  /// @brief Method .ctor, addr 0x25a9578, size 0x61c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> getStaticF_s_XROriginCache();

  /// @brief Method get_blockedColorGradient, addr 0x25a71b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_blockedColorGradient();

  /// @brief Method get_blockedReticle, addr 0x25a7328, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_blockedReticle();

  /// @brief Method get_followTightness, addr 0x25a71e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_followTightness();

  /// @brief Method get_invalidColorGradient, addr 0x25a71a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_invalidColorGradient();

  /// @brief Method get_lineLength, addr 0x25a7168, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lineLength();

  /// @brief Method get_lineWidth, addr 0x25a713c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lineWidth();

  /// @brief Method get_overrideInteractorLineLength, addr 0x25a7154, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideInteractorLineLength();

  /// @brief Method get_reticle, addr 0x25a7208, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_reticle();

  /// @brief Method get_smoothMovement, addr 0x25a71d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_smoothMovement();

  /// @brief Method get_snapEndpointIfAvailable, addr 0x25a7470, size 0x8, virtual false, abstract: false, final false
  inline bool get_snapEndpointIfAvailable();

  /// @brief Method get_snapThresholdDistance, addr 0x25a71f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_snapThresholdDistance();

  /// @brief Method get_stopLineAtFirstRaycastHit, addr 0x25a7448, size 0x8, virtual false, abstract: false, final false
  inline bool get_stopLineAtFirstRaycastHit();

  /// @brief Method get_stopLineAtSelection, addr 0x25a745c, size 0x8, virtual false, abstract: false, final false
  inline bool get_stopLineAtSelection();

  /// @brief Method get_treatSelectionAsValidState, addr 0x25a71c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_treatSelectionAsValidState();

  /// @brief Method get_validColorGradient, addr 0x25a7190, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_validColorGradient();

  /// @brief Method get_widthCurve, addr 0x25a7178, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_widthCurve();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRCustomReticleProvider"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRCustomReticleProvider* i___UnityEngine__XR__Interaction__Toolkit__IXRCustomReticleProvider() noexcept;

  static inline void setStaticF_s_XROriginCache(::UnityW<::Unity::XR::CoreUtils::XROrigin> value);

  /// @brief Method set_blockedColorGradient, addr 0x25a71b8, size 0x8, virtual false, abstract: false, final false
  inline void set_blockedColorGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_blockedReticle, addr 0x25a7330, size 0x2c, virtual false, abstract: false, final false
  inline void set_blockedReticle(::UnityEngine::GameObject* value);

  /// @brief Method set_followTightness, addr 0x25a71f0, size 0x8, virtual false, abstract: false, final false
  inline void set_followTightness(float_t value);

  /// @brief Method set_invalidColorGradient, addr 0x25a71a8, size 0x8, virtual false, abstract: false, final false
  inline void set_invalidColorGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_lineLength, addr 0x25a7170, size 0x8, virtual false, abstract: false, final false
  inline void set_lineLength(float_t value);

  /// @brief Method set_lineWidth, addr 0x25a7144, size 0x10, virtual false, abstract: false, final false
  inline void set_lineWidth(float_t value);

  /// @brief Method set_overrideInteractorLineLength, addr 0x25a715c, size 0xc, virtual false, abstract: false, final false
  inline void set_overrideInteractorLineLength(bool value);

  /// @brief Method set_reticle, addr 0x25a7210, size 0x2c, virtual false, abstract: false, final false
  inline void set_reticle(::UnityEngine::GameObject* value);

  /// @brief Method set_smoothMovement, addr 0x25a71dc, size 0xc, virtual false, abstract: false, final false
  inline void set_smoothMovement(bool value);

  /// @brief Method set_snapEndpointIfAvailable, addr 0x25a7478, size 0xc, virtual false, abstract: false, final false
  inline void set_snapEndpointIfAvailable(bool value);

  /// @brief Method set_snapThresholdDistance, addr 0x25a7200, size 0x8, virtual false, abstract: false, final false
  inline void set_snapThresholdDistance(float_t value);

  /// @brief Method set_stopLineAtFirstRaycastHit, addr 0x25a7450, size 0xc, virtual false, abstract: false, final false
  inline void set_stopLineAtFirstRaycastHit(bool value);

  /// @brief Method set_stopLineAtSelection, addr 0x25a7464, size 0xc, virtual false, abstract: false, final false
  inline void set_stopLineAtSelection(bool value);

  /// @brief Method set_treatSelectionAsValidState, addr 0x25a71c8, size 0xc, virtual false, abstract: false, final false
  inline void set_treatSelectionAsValidState(bool value);

  /// @brief Method set_validColorGradient, addr 0x25a7198, size 0x8, virtual false, abstract: false, final false
  inline void set_validColorGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_widthCurve, addr 0x25a7180, size 0x10, virtual false, abstract: false, final false
  inline void set_widthCurve(::UnityEngine::AnimationCurve* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractorLineVisual();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractorLineVisual(XRInteractorLineVisual&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractorLineVisual(XRInteractorLineVisual const&) = delete;

  /// @brief Field m_LineWidth, offset: 0x18, size: 0x4, def value: None
  float_t ___m_LineWidth;

  /// @brief Field m_OverrideInteractorLineLength, offset: 0x1c, size: 0x1, def value: None
  bool ___m_OverrideInteractorLineLength;

  /// @brief Field m_LineLength, offset: 0x20, size: 0x4, def value: None
  float_t ___m_LineLength;

  /// @brief Field m_WidthCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_WidthCurve;

  /// @brief Field m_ValidColorGradient, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___m_ValidColorGradient;

  /// @brief Field m_InvalidColorGradient, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___m_InvalidColorGradient;

  /// @brief Field m_BlockedColorGradient, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___m_BlockedColorGradient;

  /// @brief Field m_TreatSelectionAsValidState, offset: 0x48, size: 0x1, def value: None
  bool ___m_TreatSelectionAsValidState;

  /// @brief Field m_SmoothMovement, offset: 0x49, size: 0x1, def value: None
  bool ___m_SmoothMovement;

  /// @brief Field m_FollowTightness, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_FollowTightness;

  /// @brief Field m_SnapThresholdDistance, offset: 0x50, size: 0x4, def value: None
  float_t ___m_SnapThresholdDistance;

  /// @brief Field m_Reticle, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Reticle;

  /// @brief Field m_BlockedReticle, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_BlockedReticle;

  /// @brief Field m_StopLineAtFirstRaycastHit, offset: 0x68, size: 0x1, def value: None
  bool ___m_StopLineAtFirstRaycastHit;

  /// @brief Field m_StopLineAtSelection, offset: 0x69, size: 0x1, def value: None
  bool ___m_StopLineAtSelection;

  /// @brief Field m_SnapEndpointIfAvailable, offset: 0x6a, size: 0x1, def value: None
  bool ___m_SnapEndpointIfAvailable;

  /// @brief Field m_ReticlePos, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_ReticlePos;

  /// @brief Field m_ReticleNormal, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_ReticleNormal;

  /// @brief Field m_EndPositionInLine, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_EndPositionInLine;

  /// @brief Field m_SnapCurve, offset: 0x88, size: 0x1, def value: None
  bool ___m_SnapCurve;

  /// @brief Field m_PerformSetup, offset: 0x89, size: 0x1, def value: None
  bool ___m_PerformSetup;

  /// @brief Field m_ReticleToUse, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_ReticleToUse;

  /// @brief Field m_LineRenderer, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___m_LineRenderer;

  /// @brief Field m_LineRenderable, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable* ___m_LineRenderable;

  /// @brief Field m_LineRenderableAsSelectInteractor, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* ___m_LineRenderableAsSelectInteractor;

  /// @brief Field m_LineRenderableAsBaseInteractor, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor> ___m_LineRenderableAsBaseInteractor;

  /// @brief Field m_LineRenderableAsRayInteractor, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor> ___m_LineRenderableAsRayInteractor;

  /// @brief Field m_TargetPoints, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_TargetPoints;

  /// @brief Field m_NoTargetPoints, offset: 0xc8, size: 0x4, def value: None
  int32_t ___m_NoTargetPoints;

  /// @brief Field m_RenderPoints, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_RenderPoints;

  /// @brief Field m_NoRenderPoints, offset: 0xd8, size: 0x4, def value: None
  int32_t ___m_NoRenderPoints;

  /// @brief Field m_PreviousRenderPoints, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_PreviousRenderPoints;

  /// @brief Field m_NoPreviousRenderPoints, offset: 0xe8, size: 0x4, def value: None
  int32_t ___m_NoPreviousRenderPoints;

  /// @brief Field m_ClearArray, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_ClearArray;

  /// @brief Field m_CustomReticle, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_CustomReticle;

  /// @brief Field m_CustomReticleAttached, offset: 0x100, size: 0x1, def value: None
  bool ___m_CustomReticleAttached;

  /// @brief Field m_Snapping, offset: 0x101, size: 0x1, def value: None
  bool ___m_Snapping;

  /// @brief Field m_XRInteractableSnapVolume, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> ___m_XRInteractableSnapVolume;

  /// @brief Field m_NumberOfSegmentsForBendableLine, offset: 0x110, size: 0x4, def value: None
  int32_t ___m_NumberOfSegmentsForBendableLine;

  /// @brief Field m_LineRenderablePoints, offset: 0x118, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_LineRenderablePoints;

  /// @brief Field m_CurrentHitPoint, offset: 0x120, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CurrentHitPoint;

  /// @brief Field m_HasHitInfo, offset: 0x12c, size: 0x1, def value: None
  bool ___m_HasHitInfo;

  /// @brief Field m_ValidHit, offset: 0x12d, size: 0x1, def value: None
  bool ___m_ValidHit;

  /// @brief Field m_CurrentRenderEndpoint, offset: 0x130, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CurrentRenderEndpoint;

  /// @brief Field m_PreviousCollider, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___m_PreviousCollider;

  /// @brief Field m_XROrigin, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::Unity::XR::CoreUtils::XROrigin> ___m_XROrigin;

  /// @brief Field k_MaxLineWidth offset 0xffffffff size 0x4
  static constexpr float_t k_MaxLineWidth{ 0.05 };

  /// @brief Field k_MinLineWidth offset 0xffffffff size 0x4
  static constexpr float_t k_MinLineWidth{ 0.0001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, 0x150>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_LineWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_OverrideInteractorLineLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_LineLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_WidthCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_ValidColorGradient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_InvalidColorGradient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_BlockedColorGradient) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_TreatSelectionAsValidState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_SmoothMovement) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_FollowTightness) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_SnapThresholdDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_Reticle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_BlockedReticle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_StopLineAtFirstRaycastHit) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_StopLineAtSelection) == 0x69, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_SnapEndpointIfAvailable) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_ReticlePos) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_ReticleNormal) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_EndPositionInLine) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_SnapCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_PerformSetup) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_ReticleToUse) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_LineRenderer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_LineRenderable) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_LineRenderableAsSelectInteractor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_LineRenderableAsBaseInteractor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_LineRenderableAsRayInteractor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_TargetPoints) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_NoTargetPoints) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_RenderPoints) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_NoRenderPoints) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_PreviousRenderPoints) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_NoPreviousRenderPoints) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_ClearArray) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_CustomReticle) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_CustomReticleAttached) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_Snapping) == 0x101, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_XRInteractableSnapVolume) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_NumberOfSegmentsForBendableLine) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_LineRenderablePoints) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_CurrentHitPoint) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_HasHitInfo) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_ValidHit) == 0x12d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_CurrentRenderEndpoint) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_PreviousCollider) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual, ___m_XROrigin) == 0x148, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRInteractorLineVisual*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractorLineVisual");
