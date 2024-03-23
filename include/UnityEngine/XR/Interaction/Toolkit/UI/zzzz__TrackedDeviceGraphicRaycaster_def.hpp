#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDeviceGraphicRaycaster)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class IPokeStateDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRPokeLogic;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class __TrackedDeviceGraphicRaycaster__RaycastHitComparer;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __TrackedDeviceGraphicRaycaster__RaycastHitData;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceGraphicRaycaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class __TrackedDeviceGraphicRaycaster__RaycastHitComparer;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct __TrackedDeviceGraphicRaycaster__RaycastHitData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData);
// Type: ::RaycastHitData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::TrackedDeviceGraphicRaycaster::RaycastHitData
struct CORDL_TYPE __TrackedDeviceGraphicRaycaster__RaycastHitData {
public:
  // Declarations
  __declspec(property(get = get_displayIndex)) int32_t displayIndex;

  __declspec(property(get = get_distance)) float_t distance;

  __declspec(property(get = get_graphic))::UnityW<::UnityEngine::UI::Graphic> graphic;

  __declspec(property(get = get_screenPosition))::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_worldHitPosition))::UnityEngine::Vector3 worldHitPosition;

  /// @brief Method .ctor, addr 0x2fe33f0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldHitPosition, ::UnityEngine::Vector2 screenPosition, float_t distance, int32_t displayIndex);

  /// @brief Method get_displayIndex, addr 0x2fe342c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_displayIndex();

  /// @brief Method get_distance, addr 0x2fe3424, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_graphic, addr 0x2fe3408, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_graphic();

  /// @brief Method get_screenPosition, addr 0x2fe341c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_worldHitPosition, addr 0x2fe3410, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldHitPosition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDeviceGraphicRaycaster__RaycastHitData();

  // Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: None }, CppParam { name: "_worldHitPosition_k__BackingField",
  // ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam {
  // name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_displayIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedDeviceGraphicRaycaster__RaycastHitData(::UnityW<::UnityEngine::UI::Graphic> _graphic_k__BackingField, ::UnityEngine::Vector3 _worldHitPosition_k__BackingField,
                                                            ::UnityEngine::Vector2 _screenPosition_k__BackingField, float_t _distance_k__BackingField, int32_t _displayIndex_k__BackingField) noexcept;

  /// @brief Field <graphic>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> _graphic_k__BackingField;

  /// @brief Field <worldHitPosition>k__BackingField, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 _worldHitPosition_k__BackingField;

  /// @brief Field <screenPosition>k__BackingField, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 _screenPosition_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t _distance_k__BackingField;

  /// @brief Field <displayIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t _displayIndex_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData, _graphic_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData, _worldHitPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData, _screenPosition_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData, _distance_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData, _displayIndex_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: ::RaycastHitComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::TrackedDeviceGraphicRaycaster::RaycastHitComparer*
class CORDL_TYPE __TrackedDeviceGraphicRaycaster__RaycastHitComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*() noexcept;

  /// @brief Method Compare, addr 0x2fe3434, size 0x54, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData a,
                         ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData b);

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2fe3488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__XR__Interaction__Toolkit__UI____TrackedDeviceGraphicRaycaster__RaycastHitData_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDeviceGraphicRaycaster__RaycastHitComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDeviceGraphicRaycaster__RaycastHitComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackedDeviceGraphicRaycaster__RaycastHitComparer(__TrackedDeviceGraphicRaycaster__RaycastHitComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDeviceGraphicRaycaster__RaycastHitComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackedDeviceGraphicRaycaster__RaycastHitComparer(__TrackedDeviceGraphicRaycaster__RaycastHitComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: UnityEngine.XR.Interaction.Toolkit.UI::TrackedDeviceGraphicRaycaster
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::TrackedDeviceGraphicRaycaster*
class CORDL_TYPE TrackedDeviceGraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using RaycastHitComparer = ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer;

  using RaycastHitData = ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData;

  __declspec(property(get = get_blockingMask, put = set_blockingMask))::UnityEngine::LayerMask blockingMask;

  __declspec(property(get = get_canvas))::UnityW<::UnityEngine::Canvas> canvas;

  __declspec(property(get = get_checkFor2DOcclusion, put = set_checkFor2DOcclusion)) bool checkFor2DOcclusion;

  __declspec(property(get = get_checkFor3DOcclusion, put = set_checkFor3DOcclusion)) bool checkFor3DOcclusion;

  __declspec(property(get = get_eventCamera))::UnityW<::UnityEngine::Camera> eventCamera;

  __declspec(property(get = get_ignoreReversedGraphics, put = set_ignoreReversedGraphics)) bool ignoreReversedGraphics;

  /// @brief Field m_BlockingMask, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlockingMask, put = __cordl_internal_set_m_BlockingMask))::UnityEngine::LayerMask m_BlockingMask;

  /// @brief Field m_Canvas, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas))::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_CheckFor2DOcclusion, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CheckFor2DOcclusion, put = __cordl_internal_set_m_CheckFor2DOcclusion)) bool m_CheckFor2DOcclusion;

  /// @brief Field m_CheckFor3DOcclusion, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CheckFor3DOcclusion, put = __cordl_internal_set_m_CheckFor3DOcclusion)) bool m_CheckFor3DOcclusion;

  /// @brief Field m_HasWarnedEventCameraNull, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasWarnedEventCameraNull, put = __cordl_internal_set_m_HasWarnedEventCameraNull)) bool m_HasWarnedEventCameraNull;

  /// @brief Field m_IgnoreReversedGraphics, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreReversedGraphics, put = __cordl_internal_set_m_IgnoreReversedGraphics)) bool m_IgnoreReversedGraphics;

  /// @brief Field m_LocalPhysicsScene, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalPhysicsScene, put = __cordl_internal_set_m_LocalPhysicsScene))::UnityEngine::PhysicsScene m_LocalPhysicsScene;

  /// @brief Field m_LocalPhysicsScene2D, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalPhysicsScene2D, put = __cordl_internal_set_m_LocalPhysicsScene2D))::UnityEngine::PhysicsScene2D m_LocalPhysicsScene2D;

  /// @brief Field m_OcclusionHits2D, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OcclusionHits2D,
                      put = __cordl_internal_set_m_OcclusionHits2D))::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> m_OcclusionHits2D;

  /// @brief Field m_OcclusionHits3D, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OcclusionHits3D,
                      put = __cordl_internal_set_m_OcclusionHits3D))::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> m_OcclusionHits3D;

  /// @brief Field m_PokeLogic, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PokeLogic, put = __cordl_internal_set_m_PokeLogic))::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* m_PokeLogic;

  /// @brief Field m_RaycastResultsCache, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastResultsCache, put = __cordl_internal_set_m_RaycastResultsCache))::System::Collections::Generic::List_1<
      ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* m_RaycastResultsCache;

  /// @brief Field m_RaycastTriggerInteraction, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RaycastTriggerInteraction,
                      put = __cordl_internal_set_m_RaycastTriggerInteraction))::UnityEngine::QueryTriggerInteraction m_RaycastTriggerInteraction;

  __declspec(
      property(get = get_pokeStateData))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* pokeStateData;

  __declspec(property(get = get_raycastTriggerInteraction, put = set_raycastTriggerInteraction))::UnityEngine::QueryTriggerInteraction raycastTriggerInteraction;

  /// @brief Field s_Corners, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Corners, put = setStaticF_s_Corners))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_Corners;

  /// @brief Field s_InteractorRaycasters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractorRaycasters, put = setStaticF_s_InteractorRaycasters))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>* s_InteractorRaycasters;

  /// @brief Field s_PokeHoverRaycasters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PokeHoverRaycasters, put = setStaticF_s_PokeHoverRaycasters))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,
      ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>* s_PokeHoverRaycasters;

  /// @brief Field s_RaycastHitComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RaycastHitComparer,
                             put = setStaticF_s_RaycastHitComparer))::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer* s_RaycastHitComparer;

  /// @brief Field s_SortedGraphics, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_SortedGraphics,
      put = setStaticF_s_SortedGraphics))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* s_SortedGraphics;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*() noexcept;

  /// @brief Method Awake, addr 0x3026cec, size 0x12c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method FindClosestHit, addr 0x3026c10, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit FindClosestHit(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> hits, int32_t count);

  /// @brief Method GetRectTransformPlane, addr 0x302875c, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Plane GetRectTransformPlane(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector4 raycastPadding,
                                                           ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  /// @brief Method GetRectTransformWorldCorners, addr 0x3028abc, size 0x1ec, virtual false, abstract: false, final false
  static inline void GetRectTransformWorldCorners(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector4 offset,
                                                  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  /// @brief Method HasPokeSelect, addr 0x3026b34, size 0xdc, virtual false, abstract: false, final false
  static inline bool HasPokeSelect(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor);

  /// @brief Method IsPokeInteractingWithUI, addr 0x30268d8, size 0x244, virtual false, abstract: false, final false
  static inline bool IsPokeInteractingWithUI(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor);

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster* New_ctor();

  /// @brief Method OnDestroy, addr 0x3026f08, size 0x8c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDrawGizmosSelected, addr 0x3028ca8, size 0x4, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method PerformRaycast, addr 0x30272b0, size 0x364, virtual false, abstract: false, final false
  inline bool PerformRaycast(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Camera* currentEventCamera,
                             ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method PerformRaycasts, addr 0x30261c8, size 0x710, virtual false, abstract: false, final false
  inline void PerformRaycasts(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* eventData,
                              ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method PerformSpherecast, addr 0x3026f94, size 0x31c, virtual false, abstract: false, final false
  inline bool PerformSpherecast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Camera* currentEventCamera,
                                ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method ProcessSortedHitsResults, addr 0x3027ac0, size 0x510, virtual false, abstract: false, final false
  inline bool ProcessSortedHitsResults(::UnityEngine::Ray ray, float_t hitDistance, bool hitSomething,
                                       ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* raycastHitDatums,
                                       ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method RayIntersectsRectTransform, addr 0x3028854, size 0x268, virtual false, abstract: false, final false
  static inline bool RayIntersectsRectTransform(::UnityEngine::Ray ray, ::UnityEngine::Plane plane, ByRef<::UnityEngine::Vector3> worldPosition, ByRef<float_t> distance);

  /// @brief Method RayIntersectsRectTransform, addr 0x3028680, size 0xdc, virtual false, abstract: false, final false
  static inline bool RayIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector4 raycastPadding, ::UnityEngine::Ray ray, ByRef<::UnityEngine::Vector3> worldPosition,
                                                ByRef<float_t> distance);

  /// @brief Method Raycast, addr 0x302612c, size 0x9c, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method SetupPoke, addr 0x3026e18, size 0xf0, virtual false, abstract: false, final false
  inline void SetupPoke();

  /// @brief Method ShouldTestGraphic, addr 0x3028494, size 0xa8, virtual false, abstract: false, final false
  static inline bool ShouldTestGraphic(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::LayerMask layerMask);

  /// @brief Method SortedRaycastGraphics, addr 0x3027fd0, size 0x4c4, virtual false, abstract: false, final false
  static inline void SortedRaycastGraphics(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, float_t maxDistance, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Camera* eventCamera,
                                           ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* results);

  /// @brief Method SortedSpherecastGraphics, addr 0x3027614, size 0x4ac, virtual false, abstract: false, final false
  static inline void SortedSpherecastGraphics(::UnityEngine::Canvas* canvas, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Camera* eventCamera,
                                              ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* results);

  /// @brief Method SphereIntersectsRectTransform, addr 0x302853c, size 0x144, virtual false, abstract: false, final false
  static inline bool SphereIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector4 raycastPadding, ::UnityEngine::Vector3 from,
                                                   ByRef<::UnityEngine::Vector3> worldPosition, ByRef<float_t> distance);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_BlockingMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_BlockingMask();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr bool const& __cordl_internal_get_m_CheckFor2DOcclusion() const;

  constexpr bool& __cordl_internal_get_m_CheckFor2DOcclusion();

  constexpr bool const& __cordl_internal_get_m_CheckFor3DOcclusion() const;

  constexpr bool& __cordl_internal_get_m_CheckFor3DOcclusion();

  constexpr bool const& __cordl_internal_get_m_HasWarnedEventCameraNull() const;

  constexpr bool& __cordl_internal_get_m_HasWarnedEventCameraNull();

  constexpr bool const& __cordl_internal_get_m_IgnoreReversedGraphics() const;

  constexpr bool& __cordl_internal_get_m_IgnoreReversedGraphics();

  constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

  constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene();

  constexpr ::UnityEngine::PhysicsScene2D const& __cordl_internal_get_m_LocalPhysicsScene2D() const;

  constexpr ::UnityEngine::PhysicsScene2D& __cordl_internal_get_m_LocalPhysicsScene2D();

  constexpr ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> const& __cordl_internal_get_m_OcclusionHits2D() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*>& __cordl_internal_get_m_OcclusionHits2D();

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& __cordl_internal_get_m_OcclusionHits3D() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& __cordl_internal_get_m_OcclusionHits3D();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*& __cordl_internal_get_m_PokeLogic();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*> const& __cordl_internal_get_m_PokeLogic() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*& __cordl_internal_get_m_RaycastResultsCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*> const&
  __cordl_internal_get_m_RaycastResultsCache() const;

  constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_RaycastTriggerInteraction() const;

  constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_RaycastTriggerInteraction();

  constexpr void __cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_CheckFor2DOcclusion(bool value);

  constexpr void __cordl_internal_set_m_CheckFor3DOcclusion(bool value);

  constexpr void __cordl_internal_set_m_HasWarnedEventCameraNull(bool value);

  constexpr void __cordl_internal_set_m_IgnoreReversedGraphics(bool value);

  constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene value);

  constexpr void __cordl_internal_set_m_LocalPhysicsScene2D(::UnityEngine::PhysicsScene2D value);

  constexpr void __cordl_internal_set_m_OcclusionHits2D(::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> value);

  constexpr void __cordl_internal_set_m_OcclusionHits3D(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value);

  constexpr void __cordl_internal_set_m_PokeLogic(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* value);

  constexpr void
  __cordl_internal_set_m_RaycastResultsCache(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* value);

  constexpr void __cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value);

  /// @brief Method .ctor, addr 0x3028cac, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_Corners();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,
                                                             ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*
  getStaticF_s_InteractorRaycasters();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,
                                                             ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*
  getStaticF_s_PokeHoverRaycasters();

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer* getStaticF_s_RaycastHitComparer();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* getStaticF_s_SortedGraphics();

  /// @brief Method get_blockingMask, addr 0x3025f98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_blockingMask();

  /// @brief Method get_canvas, addr 0x3026090, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Canvas> get_canvas();

  /// @brief Method get_checkFor2DOcclusion, addr 0x3025f70, size 0x8, virtual false, abstract: false, final false
  inline bool get_checkFor2DOcclusion();

  /// @brief Method get_checkFor3DOcclusion, addr 0x3025f84, size 0x8, virtual false, abstract: false, final false
  inline bool get_checkFor3DOcclusion();

  /// @brief Method get_eventCamera, addr 0x3025fb8, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_ignoreReversedGraphics, addr 0x3025f5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreReversedGraphics();

  /// @brief Method get_pokeStateData, addr 0x3026b1c, size 0x18, virtual true, abstract: false, final true
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData();

  /// @brief Method get_raycastTriggerInteraction, addr 0x3025fa8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::QueryTriggerInteraction get_raycastTriggerInteraction();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*
  i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__State__IPokeStateDataProvider() noexcept;

  static inline void setStaticF_s_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_s_InteractorRaycasters(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,
                                                                                                    ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>* value);

  static inline void
  setStaticF_s_PokeHoverRaycasters(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,
                                                                                ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>* value);

  static inline void setStaticF_s_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer* value);

  static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* value);

  /// @brief Method set_blockingMask, addr 0x3025fa0, size 0x8, virtual false, abstract: false, final false
  inline void set_blockingMask(::UnityEngine::LayerMask value);

  /// @brief Method set_checkFor2DOcclusion, addr 0x3025f78, size 0xc, virtual false, abstract: false, final false
  inline void set_checkFor2DOcclusion(bool value);

  /// @brief Method set_checkFor3DOcclusion, addr 0x3025f8c, size 0xc, virtual false, abstract: false, final false
  inline void set_checkFor3DOcclusion(bool value);

  /// @brief Method set_ignoreReversedGraphics, addr 0x3025f64, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreReversedGraphics(bool value);

  /// @brief Method set_raycastTriggerInteraction, addr 0x3025fb0, size 0x8, virtual false, abstract: false, final false
  inline void set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedDeviceGraphicRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceGraphicRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedDeviceGraphicRaycaster(TrackedDeviceGraphicRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceGraphicRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedDeviceGraphicRaycaster(TrackedDeviceGraphicRaycaster const&) = delete;

  /// @brief Field m_IgnoreReversedGraphics, offset: 0x20, size: 0x1, def value: None
  bool ___m_IgnoreReversedGraphics;

  /// @brief Field m_CheckFor2DOcclusion, offset: 0x21, size: 0x1, def value: None
  bool ___m_CheckFor2DOcclusion;

  /// @brief Field m_CheckFor3DOcclusion, offset: 0x22, size: 0x1, def value: None
  bool ___m_CheckFor3DOcclusion;

  /// @brief Field m_BlockingMask, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_BlockingMask;

  /// @brief Field m_RaycastTriggerInteraction, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::QueryTriggerInteraction ___m_RaycastTriggerInteraction;

  /// @brief Field m_Canvas, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_HasWarnedEventCameraNull, offset: 0x38, size: 0x1, def value: None
  bool ___m_HasWarnedEventCameraNull;

  /// @brief Field m_OcclusionHits3D, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> ___m_OcclusionHits3D;

  /// @brief Field m_OcclusionHits2D, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> ___m_OcclusionHits2D;

  /// @brief Field m_RaycastResultsCache, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* ___m_RaycastResultsCache;

  /// @brief Field m_PokeLogic, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* ___m_PokeLogic;

  /// @brief Field m_LocalPhysicsScene, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene ___m_LocalPhysicsScene;

  /// @brief Field m_LocalPhysicsScene2D, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene2D ___m_LocalPhysicsScene2D;

  /// @brief Field k_MaxRaycastHits offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxRaycastHits{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_IgnoreReversedGraphics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_CheckFor2DOcclusion) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_CheckFor3DOcclusion) == 0x22, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_BlockingMask) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_RaycastTriggerInteraction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_Canvas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_HasWarnedEventCameraNull) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_OcclusionHits3D) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_OcclusionHits2D) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_RaycastResultsCache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_PokeLogic) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_LocalPhysicsScene) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster, ___m_LocalPhysicsScene2D) == 0x64, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceGraphicRaycaster");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*, "UnityEngine.XR.Interaction.Toolkit.UI",
                       "TrackedDeviceGraphicRaycaster/RaycastHitComparer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData, "UnityEngine.XR.Interaction.Toolkit.UI",
                       "TrackedDeviceGraphicRaycaster/RaycastHitData");
