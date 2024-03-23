#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDevicePhysicsRaycaster)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class __TrackedDevicePhysicsRaycaster__RaycastHitArraySegment;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class __TrackedDevicePhysicsRaycaster__RaycastHitComparer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
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
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDevicePhysicsRaycaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class __TrackedDevicePhysicsRaycaster__RaycastHitArraySegment;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class __TrackedDevicePhysicsRaycaster__RaycastHitComparer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer);
// Type: ::RaycastHitArraySegment
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::TrackedDevicePhysicsRaycaster::RaycastHitArraySegment*
class CORDL_TYPE __TrackedDevicePhysicsRaycaster__RaycastHitArraySegment : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::UnityEngine::RaycastHit Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  __declspec(property(get = get_count, put = set_count)) int32_t count;

  /// @brief Field m_Count, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Count, put = __cordl_internal_set_m_Count)) int32_t m_Count;

  /// @brief Field m_CurrentIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndex, put = __cordl_internal_set_m_CurrentIndex)) int32_t m_CurrentIndex;

  /// @brief Field m_Hits, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hits, put = __cordl_internal_set_m_Hits))::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> m_Hits;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2fe4ba0, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x2fe4ba4, size 0xc, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>* GetEnumerator();

  /// @brief Method MoveNext, addr 0x2fe4b74, size 0x20, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment*
  New_ctor(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, int32_t count);

  /// @brief Method Reset, addr 0x2fe4b94, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2fe4bb0, size 0xc, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2fe4b04, size 0x70, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr int32_t const& __cordl_internal_get_m_Count() const;

  constexpr int32_t& __cordl_internal_get_m_Count();

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& __cordl_internal_get_m_Hits() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& __cordl_internal_get_m_Hits();

  constexpr void __cordl_internal_set_m_Count(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Hits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value);

  /// @brief Method .ctor, addr 0x2fe4350, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, int32_t count);

  /// @brief Method get_Current, addr 0x2fe4ac0, size 0x44, virtual true, abstract: false, final true
  inline ::UnityEngine::RaycastHit get_Current();

  /// @brief Method get_count, addr 0x2fe4ab0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::RaycastHit>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__RaycastHit_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::RaycastHit>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__RaycastHit_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_count, addr 0x2fe4ab8, size 0x8, virtual false, abstract: false, final false
  inline void set_count(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDevicePhysicsRaycaster__RaycastHitArraySegment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackedDevicePhysicsRaycaster__RaycastHitArraySegment(__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackedDevicePhysicsRaycaster__RaycastHitArraySegment(__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment const&) = delete;

  /// @brief Field m_Count, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Count;

  /// @brief Field m_Hits, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> ___m_Hits;

  /// @brief Field m_CurrentIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CurrentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment, ___m_Count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment, ___m_Hits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment, ___m_CurrentIndex) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: ::RaycastHitComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::TrackedDevicePhysicsRaycaster::RaycastHitComparer*
class CORDL_TYPE __TrackedDevicePhysicsRaycaster__RaycastHitComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept;

  /// @brief Method Compare, addr 0x2fe4bbc, size 0x40, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::RaycastHit a, ::UnityEngine::RaycastHit b);

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2fe4aa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDevicePhysicsRaycaster__RaycastHitComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDevicePhysicsRaycaster__RaycastHitComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackedDevicePhysicsRaycaster__RaycastHitComparer(__TrackedDevicePhysicsRaycaster__RaycastHitComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDevicePhysicsRaycaster__RaycastHitComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackedDevicePhysicsRaycaster__RaycastHitComparer(__TrackedDevicePhysicsRaycaster__RaycastHitComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
// Type: UnityEngine.XR.Interaction.Toolkit.UI::TrackedDevicePhysicsRaycaster
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::TrackedDevicePhysicsRaycaster*
class CORDL_TYPE TrackedDevicePhysicsRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using RaycastHitArraySegment = ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment;

  using RaycastHitComparer = ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer;

  __declspec(property(get = get_eventCamera))::UnityW<::UnityEngine::Camera> eventCamera;

  __declspec(property(get = get_eventMask, put = set_eventMask))::UnityEngine::LayerMask eventMask;

  /// @brief Field m_EventCamera, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EventCamera, put = __cordl_internal_set_m_EventCamera))::UnityW<::UnityEngine::Camera> m_EventCamera;

  /// @brief Field m_EventMask, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EventMask, put = __cordl_internal_set_m_EventMask))::UnityEngine::LayerMask m_EventMask;

  /// @brief Field m_HasWarnedEventCameraNull, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasWarnedEventCameraNull, put = __cordl_internal_set_m_HasWarnedEventCameraNull)) bool m_HasWarnedEventCameraNull;

  /// @brief Field m_LocalPhysicsScene, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalPhysicsScene, put = __cordl_internal_set_m_LocalPhysicsScene))::UnityEngine::PhysicsScene m_LocalPhysicsScene;

  /// @brief Field m_MaxRayIntersections, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxRayIntersections, put = __cordl_internal_set_m_MaxRayIntersections)) int32_t m_MaxRayIntersections;

  /// @brief Field m_RaycastArrayWrapper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastArrayWrapper,
                      put = __cordl_internal_set_m_RaycastArrayWrapper))::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment* m_RaycastArrayWrapper;

  /// @brief Field m_RaycastHitComparer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastHitComparer,
                      put = __cordl_internal_set_m_RaycastHitComparer))::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer* m_RaycastHitComparer;

  /// @brief Field m_RaycastHits, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastHits, put = __cordl_internal_set_m_RaycastHits))::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> m_RaycastHits;

  /// @brief Field m_RaycastResultsCache, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastResultsCache,
                      put = __cordl_internal_set_m_RaycastResultsCache))::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* m_RaycastResultsCache;

  /// @brief Field m_RaycastTriggerInteraction, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RaycastTriggerInteraction,
                      put = __cordl_internal_set_m_RaycastTriggerInteraction))::UnityEngine::QueryTriggerInteraction m_RaycastTriggerInteraction;

  __declspec(property(get = get_maxRayIntersections, put = set_maxRayIntersections)) int32_t maxRayIntersections;

  __declspec(property(get = get_raycastTriggerInteraction, put = set_raycastTriggerInteraction))::UnityEngine::QueryTriggerInteraction raycastTriggerInteraction;

  /// @brief Method Awake, addr 0x2fe428c, size 0xc4, virtual true, abstract: false, final false
  inline void Awake();

  static inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster* New_ctor();

  /// @brief Method PerformRaycast, addr 0x2fe4380, size 0x660, virtual false, abstract: false, final false
  inline bool PerformRaycast(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Camera* currentEventCamera,
                             ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method PerformRaycasts, addr 0x2fe4088, size 0x204, virtual false, abstract: false, final false
  inline void PerformRaycasts(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* eventData,
                              ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method Raycast, addr 0x2fe3fec, size 0x9c, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method SetEventCamera, addr 0x2fe3fe4, size 0x8, virtual false, abstract: false, final false
  inline void SetEventCamera(::UnityEngine::Camera* newEventCamera);

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_EventCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_EventCamera();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_EventMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_EventMask();

  constexpr bool const& __cordl_internal_get_m_HasWarnedEventCameraNull() const;

  constexpr bool& __cordl_internal_get_m_HasWarnedEventCameraNull();

  constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

  constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene();

  constexpr int32_t const& __cordl_internal_get_m_MaxRayIntersections() const;

  constexpr int32_t& __cordl_internal_get_m_MaxRayIntersections();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment*& __cordl_internal_get_m_RaycastArrayWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment*> const&
  __cordl_internal_get_m_RaycastArrayWrapper() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer*& __cordl_internal_get_m_RaycastHitComparer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer*> const&
  __cordl_internal_get_m_RaycastHitComparer() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const& __cordl_internal_get_m_RaycastHits() const;

  constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& __cordl_internal_get_m_RaycastHits();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*& __cordl_internal_get_m_RaycastResultsCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*> const& __cordl_internal_get_m_RaycastResultsCache() const;

  constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_RaycastTriggerInteraction() const;

  constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_RaycastTriggerInteraction();

  constexpr void __cordl_internal_set_m_EventCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_EventMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_HasWarnedEventCameraNull(bool value);

  constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene value);

  constexpr void __cordl_internal_set_m_MaxRayIntersections(int32_t value);

  constexpr void __cordl_internal_set_m_RaycastArrayWrapper(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment* value);

  constexpr void __cordl_internal_set_m_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer* value);

  constexpr void __cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value);

  constexpr void __cordl_internal_set_m_RaycastResultsCache(::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* value);

  constexpr void __cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value);

  /// @brief Method .ctor, addr 0x2fe49e0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventCamera, addr 0x2fe3f14, size 0xd0, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_eventMask, addr 0x2fe3e8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_eventMask();

  /// @brief Method get_maxRayIntersections, addr 0x2fe3e9c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxRayIntersections();

  /// @brief Method get_raycastTriggerInteraction, addr 0x2fe3e7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::QueryTriggerInteraction get_raycastTriggerInteraction();

  /// @brief Method set_eventMask, addr 0x2fe3e94, size 0x8, virtual false, abstract: false, final false
  inline void set_eventMask(::UnityEngine::LayerMask value);

  /// @brief Method set_maxRayIntersections, addr 0x2fe3ea4, size 0x70, virtual false, abstract: false, final false
  inline void set_maxRayIntersections(int32_t value);

  /// @brief Method set_raycastTriggerInteraction, addr 0x2fe3e84, size 0x8, virtual false, abstract: false, final false
  inline void set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedDevicePhysicsRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackedDevicePhysicsRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedDevicePhysicsRaycaster(TrackedDevicePhysicsRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedDevicePhysicsRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedDevicePhysicsRaycaster(TrackedDevicePhysicsRaycaster const&) = delete;

  /// @brief Field m_RaycastTriggerInteraction, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::QueryTriggerInteraction ___m_RaycastTriggerInteraction;

  /// @brief Field m_EventMask, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_EventMask;

  /// @brief Field m_MaxRayIntersections, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_MaxRayIntersections;

  /// @brief Field m_EventCamera, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_EventCamera;

  /// @brief Field m_HasWarnedEventCameraNull, offset: 0x38, size: 0x1, def value: None
  bool ___m_HasWarnedEventCameraNull;

  /// @brief Field m_RaycastHits, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> ___m_RaycastHits;

  /// @brief Field m_RaycastHitComparer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer* ___m_RaycastHitComparer;

  /// @brief Field m_RaycastArrayWrapper, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment* ___m_RaycastArrayWrapper;

  /// @brief Field m_RaycastResultsCache, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* ___m_RaycastResultsCache;

  /// @brief Field m_LocalPhysicsScene, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::PhysicsScene ___m_LocalPhysicsScene;

  /// @brief Field k_EverythingLayerMask offset 0xffffffff size 0x4
  static constexpr int32_t k_EverythingLayerMask{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_RaycastTriggerInteraction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_EventMask) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_MaxRayIntersections) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_EventCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_HasWarnedEventCameraNull) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_RaycastHits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_RaycastHitComparer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_RaycastArrayWrapper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_RaycastResultsCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster, ___m_LocalPhysicsScene) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDevicePhysicsRaycaster*, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDevicePhysicsRaycaster");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitArraySegment*, "UnityEngine.XR.Interaction.Toolkit.UI",
                       "TrackedDevicePhysicsRaycaster/RaycastHitArraySegment");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDevicePhysicsRaycaster__RaycastHitComparer*, "UnityEngine.XR.Interaction.Toolkit.UI",
                       "TrackedDevicePhysicsRaycaster/RaycastHitComparer");
