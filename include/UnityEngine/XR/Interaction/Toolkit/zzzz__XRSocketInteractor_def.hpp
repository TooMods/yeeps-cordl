#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSocketInteractor)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TriggerContactMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRBaseInteractable__MovementType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRSocketInteractor__ShaderPropertyLookup;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRSocketInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRSocketInteractor__ShaderPropertyLookup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor__ShaderPropertyLookup);
// Type: ::ShaderPropertyLookup
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRSocketInteractor::ShaderPropertyLookup
#pragma pack(push, 0)
struct CORDL_TYPE __XRSocketInteractor__ShaderPropertyLookup {
public:
  // Declarations
  /// @brief Field baseColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_baseColor, put = setStaticF_baseColor)) int32_t baseColor;

  /// @brief Field color, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_color, put = setStaticF_color)) int32_t color;

  /// @brief Field dstBlend, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_dstBlend, put = setStaticF_dstBlend)) int32_t dstBlend;

  /// @brief Field mode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_mode, put = setStaticF_mode)) int32_t mode;

  /// @brief Field srcBlend, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_srcBlend, put = setStaticF_srcBlend)) int32_t srcBlend;

  /// @brief Field zWrite, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_zWrite, put = setStaticF_zWrite)) int32_t zWrite;

  static inline int32_t getStaticF_baseColor();

  static inline int32_t getStaticF_color();

  static inline int32_t getStaticF_dstBlend();

  static inline int32_t getStaticF_mode();

  static inline int32_t getStaticF_srcBlend();

  static inline int32_t getStaticF_zWrite();

  static inline void setStaticF_baseColor(int32_t value);

  static inline void setStaticF_color(int32_t value);

  static inline void setStaticF_dstBlend(int32_t value);

  static inline void setStaticF_mode(int32_t value);

  static inline void setStaticF_srcBlend(int32_t value);

  static inline void setStaticF_zWrite(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRSocketInteractor__ShaderPropertyLookup();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor__ShaderPropertyLookup, 0x1>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::<UpdateCollidersAfterOnTriggerStay>d__40
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::XRSocketInteractor::<UpdateCollidersAfterOnTriggerStay>d__40*
class CORDL_TYPE __XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2cfe054, size 0xb4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2cfe108, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2cfe110, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2cfe150, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2cfe050, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor> value);

  /// @brief Method .ctor, addr 0x2cfbc88, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40(__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40(__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40, _____4__this) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRSocketInteractor
// SizeInfo { instance_size: 480, native_size: -1, calculated_instance_size: 480, calculated_native_size: 480, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRSocketInteractor*
class CORDL_TYPE XRSocketInteractor : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor {
public:
  // Declarations
  using ShaderPropertyLookup = ::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor__ShaderPropertyLookup;

  using _UpdateCollidersAfterOnTriggerStay_d__40 = ::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40;

  /// @brief Field <unsortedValidTargets>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__unsortedValidTargets_k__BackingField, put = __cordl_internal_set__unsortedValidTargets_k__BackingField))::System::Collections::Generic::List_1<
      ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* _unsortedValidTargets_k__BackingField;

  __declspec(property(get = get_interactableCantHoverMeshMaterial, put = set_interactableCantHoverMeshMaterial))::UnityW<::UnityEngine::Material> interactableCantHoverMeshMaterial;

  __declspec(property(get = get_interactableHoverMeshMaterial, put = set_interactableHoverMeshMaterial))::UnityW<::UnityEngine::Material> interactableHoverMeshMaterial;

  __declspec(property(get = get_interactableHoverScale, put = set_interactableHoverScale)) float_t interactableHoverScale;

  __declspec(property(get = get_isHoverActive)) bool isHoverActive;

  __declspec(property(get = get_isHoverRecycleAllowed)) bool isHoverRecycleAllowed;

  __declspec(property(get = get_isSelectActive)) bool isSelectActive;

  /// @brief Field m_InteractableCantHoverMeshMaterial, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractableCantHoverMeshMaterial,
                      put = __cordl_internal_set_m_InteractableCantHoverMeshMaterial))::UnityW<::UnityEngine::Material> m_InteractableCantHoverMeshMaterial;

  /// @brief Field m_InteractableHoverMeshMaterial, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractableHoverMeshMaterial,
                      put = __cordl_internal_set_m_InteractableHoverMeshMaterial))::UnityW<::UnityEngine::Material> m_InteractableHoverMeshMaterial;

  /// @brief Field m_InteractableHoverScale, offset 0x1ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InteractableHoverScale, put = __cordl_internal_set_m_InteractableHoverScale)) float_t m_InteractableHoverScale;

  /// @brief Field m_LastRemoveTime, offset 0x1b4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastRemoveTime, put = __cordl_internal_set_m_LastRemoveTime)) float_t m_LastRemoveTime;

  /// @brief Field m_MeshFilterCache, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshFilterCache, put = __cordl_internal_set_m_MeshFilterCache))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>,
                                                                          ::Array<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>>*>>* m_MeshFilterCache;

  /// @brief Field m_RecycleDelayTime, offset 0x1b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RecycleDelayTime, put = __cordl_internal_set_m_RecycleDelayTime)) float_t m_RecycleDelayTime;

  /// @brief Field m_ShowInteractableHoverMeshes, offset 0x190, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowInteractableHoverMeshes, put = __cordl_internal_set_m_ShowInteractableHoverMeshes)) bool m_ShowInteractableHoverMeshes;

  /// @brief Field m_SocketActive, offset 0x1a8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SocketActive, put = __cordl_internal_set_m_SocketActive)) bool m_SocketActive;

  /// @brief Field m_StayedColliders, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StayedColliders,
                      put = __cordl_internal_set_m_StayedColliders))::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* m_StayedColliders;

  /// @brief Field m_TriggerContactMonitor, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TriggerContactMonitor,
                      put = __cordl_internal_set_m_TriggerContactMonitor))::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* m_TriggerContactMonitor;

  /// @brief Field m_UpdateCollidersAfterTriggerStay, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateCollidersAfterTriggerStay,
                      put = __cordl_internal_set_m_UpdateCollidersAfterTriggerStay))::System::Collections::IEnumerator* m_UpdateCollidersAfterTriggerStay;

  __declspec(property(get = get_recycleDelayTime, put = set_recycleDelayTime)) float_t recycleDelayTime;

  /// @brief Field s_MeshFilters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MeshFilters, put = setStaticF_s_MeshFilters))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* s_MeshFilters;

  /// @brief Field s_WaitForFixedUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_WaitForFixedUpdate, put = setStaticF_s_WaitForFixedUpdate))::UnityEngine::WaitForFixedUpdate* s_WaitForFixedUpdate;

  __declspec(property(
      get = get_selectedInteractableMovementTypeOverride))::System::Nullable_1<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType> selectedInteractableMovementTypeOverride;

  __declspec(property(get = get_showInteractableHoverMeshes, put = set_showInteractableHoverMeshes)) bool showInteractableHoverMeshes;

  __declspec(property(get = get_socketActive, put = set_socketActive)) bool socketActive;

  __declspec(property(get = get_unsortedValidTargets))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* unsortedValidTargets;

  /// @brief Method Awake, addr 0x2cfb8a8, size 0x44, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CanHover, addr 0x2cfd520, size 0x4c, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method CanHover, addr 0x2cfdc9c, size 0x10, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2cfd56c, size 0x154, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2cfdcac, size 0x10, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CreateDefaultHoverMaterials, addr 0x2cfbdcc, size 0x2e0, virtual true, abstract: false, final false
  inline void CreateDefaultHoverMaterials();

  /// @brief Method DrawHoveredInteractables, addr 0x2cfce84, size 0x420, virtual true, abstract: false, final false
  inline void DrawHoveredInteractables();

  /// @brief Method GetHoverMeshMatrix, addr 0x2cfc680, size 0x7b8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetHoverMeshMatrix(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable, ::UnityEngine::MeshFilter* meshFilter, float_t hoverScale);

  /// @brief Method GetHoveredInteractableMaterial, addr 0x2cfd2a4, size 0x28, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetHoveredInteractableMaterial(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method GetValidTargets, addr 0x2cfd2cc, size 0x1c0, virtual true, abstract: false, final false
  inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets);

  /// @brief Method InverseTransformDirection, addr 0x2cfce38, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Pose pose, ::UnityEngine::Vector3 direction);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor* New_ctor();

  /// @brief Method OnContactAdded, addr 0x2cfdb70, size 0xd4, virtual false, abstract: false, final false
  inline void OnContactAdded(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method OnContactRemoved, addr 0x2cfdc44, size 0x58, virtual false, abstract: false, final false
  inline void OnContactRemoved(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method OnDisable, addr 0x2cfbaf8, size 0x100, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2cfb954, size 0x108, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnHoverEntering, addr 0x2cfc2e8, size 0x304, virtual true, abstract: false, final false
  inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverExiting, addr 0x2cfc5ec, size 0x74, virtual true, abstract: false, final false
  inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnInteractableRegistered, addr 0x2cfda10, size 0x104, virtual false, abstract: false, final false
  inline void OnInteractableRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args);

  /// @brief Method OnInteractableUnregistered, addr 0x2cfdb14, size 0x5c, virtual false, abstract: false, final false
  inline void OnInteractableUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args);

  /// @brief Method OnRegistered, addr 0x2cfd7c0, size 0x150, virtual true, abstract: false, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* args);

  /// @brief Method OnSelectExiting, addr 0x2cfc660, size 0x20, virtual true, abstract: false, final false
  inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnTriggerEnter, addr 0x2cfbbf8, size 0x1c, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerExit, addr 0x2cfbc6c, size 0x1c, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerStay, addr 0x2cfbc14, size 0x58, virtual false, abstract: false, final false
  inline void OnTriggerStay(::UnityEngine::Collider* other);

  /// @brief Method OnUnregistered, addr 0x2cfd910, size 0x100, virtual true, abstract: false, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* args);

  /// @brief Method ProcessInteractor, addr 0x2cfbcb0, size 0xd0, virtual true, abstract: false, final false
  inline void ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ResetCollidersAndValidTargets, addr 0x2cfba5c, size 0x9c, virtual false, abstract: false, final false
  inline void ResetCollidersAndValidTargets();

  /// @brief Method SetMaterialFade, addr 0x2cfc0ac, size 0x23c, virtual false, abstract: false, final false
  static inline void SetMaterialFade(::UnityEngine::Material* material, ::UnityEngine::Color color);

  /// @brief Method ShouldDrawHoverMesh, addr 0x2cfd6c0, size 0x100, virtual true, abstract: false, final false
  inline bool ShouldDrawHoverMesh(::UnityEngine::MeshFilter* meshFilter, ::UnityEngine::Renderer* meshRenderer, ::UnityEngine::Camera* mainCamera);

  /// @brief Method UpdateCollidersAfterOnTriggerStay, addr 0x2cfb8ec, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateCollidersAfterOnTriggerStay();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get__unsortedValidTargets_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
  __cordl_internal_get__unsortedValidTargets_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_InteractableCantHoverMeshMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_InteractableCantHoverMeshMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_InteractableHoverMeshMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_InteractableHoverMeshMaterial();

  constexpr float_t const& __cordl_internal_get_m_InteractableHoverScale() const;

  constexpr float_t& __cordl_internal_get_m_InteractableHoverScale();

  constexpr float_t const& __cordl_internal_get_m_LastRemoveTime() const;

  constexpr float_t& __cordl_internal_get_m_LastRemoveTime();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*,
                                                         ::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>,
                                                                  ::Array<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>>*>>*&
  __cordl_internal_get_m_MeshFilterCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, ::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>,
                                                                          ::Array<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>>*>>*> const&
  __cordl_internal_get_m_MeshFilterCache() const;

  constexpr float_t const& __cordl_internal_get_m_RecycleDelayTime() const;

  constexpr float_t& __cordl_internal_get_m_RecycleDelayTime();

  constexpr bool const& __cordl_internal_get_m_ShowInteractableHoverMeshes() const;

  constexpr bool& __cordl_internal_get_m_ShowInteractableHoverMeshes();

  constexpr bool const& __cordl_internal_get_m_SocketActive() const;

  constexpr bool& __cordl_internal_get_m_SocketActive();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_StayedColliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_m_StayedColliders() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*& __cordl_internal_get_m_TriggerContactMonitor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*> const& __cordl_internal_get_m_TriggerContactMonitor() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_m_UpdateCollidersAfterTriggerStay();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get_m_UpdateCollidersAfterTriggerStay() const;

  constexpr void __cordl_internal_set__unsortedValidTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_m_InteractableCantHoverMeshMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_InteractableHoverMeshMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_InteractableHoverScale(float_t value);

  constexpr void __cordl_internal_set_m_LastRemoveTime(float_t value);

  constexpr void __cordl_internal_set_m_MeshFilterCache(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*,
                                                   ::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>,
                                                            ::Array<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>>*>>* value);

  constexpr void __cordl_internal_set_m_RecycleDelayTime(float_t value);

  constexpr void __cordl_internal_set_m_ShowInteractableHoverMeshes(bool value);

  constexpr void __cordl_internal_set_m_SocketActive(bool value);

  constexpr void __cordl_internal_set_m_StayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set_m_TriggerContactMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* value);

  constexpr void __cordl_internal_set_m_UpdateCollidersAfterTriggerStay(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x2cfdcbc, size 0x174, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* getStaticF_s_MeshFilters();

  static inline ::UnityEngine::WaitForFixedUpdate* getStaticF_s_WaitForFixedUpdate();

  /// @brief Method get_interactableCantHoverMeshMaterial, addr 0x2cfb85c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_interactableCantHoverMeshMaterial();

  /// @brief Method get_interactableHoverMeshMaterial, addr 0x2cfb84c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_interactableHoverMeshMaterial();

  /// @brief Method get_interactableHoverScale, addr 0x2cfb880, size 0x8, virtual false, abstract: false, final false
  inline float_t get_interactableHoverScale();

  /// @brief Method get_isHoverActive, addr 0x2cfd48c, size 0x20, virtual true, abstract: false, final false
  inline bool get_isHoverActive();

  /// @brief Method get_isHoverRecycleAllowed, addr 0x2cfbd80, size 0x4c, virtual false, abstract: false, final false
  inline bool get_isHoverRecycleAllowed();

  /// @brief Method get_isSelectActive, addr 0x2cfd4ac, size 0x20, virtual true, abstract: false, final false
  inline bool get_isSelectActive();

  /// @brief Method get_recycleDelayTime, addr 0x2cfb890, size 0x8, virtual false, abstract: false, final false
  inline float_t get_recycleDelayTime();

  /// @brief Method get_selectedInteractableMovementTypeOverride, addr 0x2cfd4cc, size 0x54, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::XR::Interaction::Toolkit::__XRBaseInteractable__MovementType> get_selectedInteractableMovementTypeOverride();

  /// @brief Method get_showInteractableHoverMeshes, addr 0x2cfb838, size 0x8, virtual false, abstract: false, final false
  inline bool get_showInteractableHoverMeshes();

  /// @brief Method get_socketActive, addr 0x2cfb86c, size 0x8, virtual false, abstract: false, final false
  inline bool get_socketActive();

  /// @brief Method get_unsortedValidTargets, addr 0x2cfb8a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* get_unsortedValidTargets();

  static inline void setStaticF_s_MeshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* value);

  static inline void setStaticF_s_WaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate* value);

  /// @brief Method set_interactableCantHoverMeshMaterial, addr 0x2cfb864, size 0x8, virtual false, abstract: false, final false
  inline void set_interactableCantHoverMeshMaterial(::UnityEngine::Material* value);

  /// @brief Method set_interactableHoverMeshMaterial, addr 0x2cfb854, size 0x8, virtual false, abstract: false, final false
  inline void set_interactableHoverMeshMaterial(::UnityEngine::Material* value);

  /// @brief Method set_interactableHoverScale, addr 0x2cfb888, size 0x8, virtual false, abstract: false, final false
  inline void set_interactableHoverScale(float_t value);

  /// @brief Method set_recycleDelayTime, addr 0x2cfb898, size 0x8, virtual false, abstract: false, final false
  inline void set_recycleDelayTime(float_t value);

  /// @brief Method set_showInteractableHoverMeshes, addr 0x2cfb840, size 0xc, virtual false, abstract: false, final false
  inline void set_showInteractableHoverMeshes(bool value);

  /// @brief Method set_socketActive, addr 0x2cfb874, size 0xc, virtual false, abstract: false, final false
  inline void set_socketActive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSocketInteractor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSocketInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSocketInteractor(XRSocketInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSocketInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSocketInteractor(XRSocketInteractor const&) = delete;

  /// @brief Field m_ShowInteractableHoverMeshes, offset: 0x190, size: 0x1, def value: None
  bool ___m_ShowInteractableHoverMeshes;

  /// @brief Field m_InteractableHoverMeshMaterial, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_InteractableHoverMeshMaterial;

  /// @brief Field m_InteractableCantHoverMeshMaterial, offset: 0x1a0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_InteractableCantHoverMeshMaterial;

  /// @brief Field m_SocketActive, offset: 0x1a8, size: 0x1, def value: None
  bool ___m_SocketActive;

  /// @brief Field m_InteractableHoverScale, offset: 0x1ac, size: 0x4, def value: None
  float_t ___m_InteractableHoverScale;

  /// @brief Field m_RecycleDelayTime, offset: 0x1b0, size: 0x4, def value: None
  float_t ___m_RecycleDelayTime;

  /// @brief Field m_LastRemoveTime, offset: 0x1b4, size: 0x4, def value: None
  float_t ___m_LastRemoveTime;

  /// @brief Field <unsortedValidTargets>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ____unsortedValidTargets_k__BackingField;

  /// @brief Field m_StayedColliders, offset: 0x1c0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* ___m_StayedColliders;

  /// @brief Field m_TriggerContactMonitor, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* ___m_TriggerContactMonitor;

  /// @brief Field m_MeshFilterCache, offset: 0x1d0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*,
                                               ::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>,
                                                        ::Array<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>, ::UnityW<::UnityEngine::Renderer>>>*>>* ___m_MeshFilterCache;

  /// @brief Field m_UpdateCollidersAfterTriggerStay, offset: 0x1d8, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___m_UpdateCollidersAfterTriggerStay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, 0x1e0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_ShowInteractableHoverMeshes) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_InteractableHoverMeshMaterial) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_InteractableCantHoverMeshMaterial) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_SocketActive) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_InteractableHoverScale) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_RecycleDelayTime) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_LastRemoveTime) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ____unsortedValidTargets_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_StayedColliders) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_TriggerContactMonitor) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_MeshFilterCache) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor, ___m_UpdateCollidersAfterTriggerStay) == 0x1d8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRSocketInteractor*, "UnityEngine.XR.Interaction.Toolkit", "XRSocketInteractor");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor___UpdateCollidersAfterOnTriggerStay_d__40*, "UnityEngine.XR.Interaction.Toolkit",
                       "XRSocketInteractor/<UpdateCollidersAfterOnTriggerStay>d__40");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRSocketInteractor__ShaderPropertyLookup, "UnityEngine.XR.Interaction.Toolkit", "XRSocketInteractor/ShaderPropertyLookup");
