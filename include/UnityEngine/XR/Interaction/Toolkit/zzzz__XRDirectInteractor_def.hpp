#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRDirectInteractor)
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
class Object;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TriggerContactMonitor;
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
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRDirectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13);
// Type: ::<UpdateCollidersAfterOnTriggerStay>d__13
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::XRDirectInteractor::<UpdateCollidersAfterOnTriggerStay>d__13*
class CORDL_TYPE __XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2cef3a8, size 0xb4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2cef45c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2cef464, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2cef4a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2cef3a4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> value);

  /// @brief Method .ctor, addr 0x2cee6a0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13(__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13(__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13, _____4__this) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRDirectInteractor
// SizeInfo { instance_size: 664, native_size: -1, calculated_instance_size: 664, calculated_native_size: 664, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRDirectInteractor*
class CORDL_TYPE XRDirectInteractor : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor {
public:
  // Declarations
  using _UpdateCollidersAfterOnTriggerStay_d__13 = ::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13;

  /// @brief Field <unsortedValidTargets>k__BackingField, offset 0x278, size 0x8
  __declspec(property(get = __cordl_internal_get__unsortedValidTargets_k__BackingField, put = __cordl_internal_set__unsortedValidTargets_k__BackingField))::System::Collections::Generic::List_1<
      ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* _unsortedValidTargets_k__BackingField;

  /// @brief Field m_StayedColliders, offset 0x280, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StayedColliders,
                      put = __cordl_internal_set_m_StayedColliders))::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* m_StayedColliders;

  /// @brief Field m_TriggerContactMonitor, offset 0x288, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TriggerContactMonitor,
                      put = __cordl_internal_set_m_TriggerContactMonitor))::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* m_TriggerContactMonitor;

  /// @brief Field m_UpdateCollidersAfterTriggerStay, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateCollidersAfterTriggerStay,
                      put = __cordl_internal_set_m_UpdateCollidersAfterTriggerStay))::System::Collections::IEnumerator* m_UpdateCollidersAfterTriggerStay;

  /// @brief Field s_WaitForFixedUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_WaitForFixedUpdate, put = setStaticF_s_WaitForFixedUpdate))::UnityEngine::WaitForFixedUpdate* s_WaitForFixedUpdate;

  __declspec(property(get = get_unsortedValidTargets))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* unsortedValidTargets;

  /// @brief Method Awake, addr 0x2cee1b0, size 0x3c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CanHover, addr 0x2cee8fc, size 0x3c, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);

  /// @brief Method CanHover, addr 0x2cef1f8, size 0x10, virtual true, abstract: false, final false
  inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2cee938, size 0x3c, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* interactable);

  /// @brief Method CanSelect, addr 0x2cef208, size 0x10, virtual true, abstract: false, final false
  inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);

  /// @brief Method GetValidTargets, addr 0x2cee73c, size 0x1c0, virtual true, abstract: false, final false
  inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor* New_ctor();

  /// @brief Method OnContactAdded, addr 0x2cef0cc, size 0xd4, virtual false, abstract: false, final false
  inline void OnContactAdded(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method OnContactRemoved, addr 0x2cef1a0, size 0x58, virtual false, abstract: false, final false
  inline void OnContactRemoved(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method OnDisable, addr 0x2cee510, size 0x100, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2cee36c, size 0x108, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnInteractableRegistered, addr 0x2ceef6c, size 0x104, virtual false, abstract: false, final false
  inline void OnInteractableRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args);

  /// @brief Method OnInteractableUnregistered, addr 0x2cef070, size 0x5c, virtual false, abstract: false, final false
  inline void OnInteractableUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args);

  /// @brief Method OnRegistered, addr 0x2cee974, size 0x150, virtual true, abstract: false, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* args);

  /// @brief Method OnTriggerEnter, addr 0x2cee610, size 0x1c, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerExit, addr 0x2cee684, size 0x1c, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerStay, addr 0x2cee62c, size 0x58, virtual false, abstract: false, final false
  inline void OnTriggerStay(::UnityEngine::Collider* other);

  /// @brief Method OnUnregistered, addr 0x2ceed0c, size 0x100, virtual true, abstract: false, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* args);

  /// @brief Method ProcessInteractor, addr 0x2cee6c8, size 0x74, virtual true, abstract: false, final false
  inline void ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method ResetCollidersAndValidTargets, addr 0x2cee474, size 0x9c, virtual false, abstract: false, final false
  inline void ResetCollidersAndValidTargets();

  /// @brief Method UpdateCollidersAfterOnTriggerStay, addr 0x2cee1ec, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateCollidersAfterOnTriggerStay();

  /// @brief Method ValidateTriggerCollider, addr 0x2cee254, size 0x118, virtual false, abstract: false, final false
  inline void ValidateTriggerCollider();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*& __cordl_internal_get__unsortedValidTargets_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
  __cordl_internal_get__unsortedValidTargets_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_StayedColliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_m_StayedColliders() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*& __cordl_internal_get_m_TriggerContactMonitor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*> const& __cordl_internal_get_m_TriggerContactMonitor() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_m_UpdateCollidersAfterTriggerStay();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get_m_UpdateCollidersAfterTriggerStay() const;

  constexpr void __cordl_internal_set__unsortedValidTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  constexpr void __cordl_internal_set_m_StayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set_m_TriggerContactMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* value);

  constexpr void __cordl_internal_set_m_UpdateCollidersAfterTriggerStay(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x2cef218, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::WaitForFixedUpdate* getStaticF_s_WaitForFixedUpdate();

  /// @brief Method get_unsortedValidTargets, addr 0x2cee1a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* get_unsortedValidTargets();

  static inline void setStaticF_s_WaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDirectInteractor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDirectInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDirectInteractor(XRDirectInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDirectInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDirectInteractor(XRDirectInteractor const&) = delete;

  /// @brief Field <unsortedValidTargets>k__BackingField, offset: 0x278, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* ____unsortedValidTargets_k__BackingField;

  /// @brief Field m_StayedColliders, offset: 0x280, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* ___m_StayedColliders;

  /// @brief Field m_TriggerContactMonitor, offset: 0x288, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* ___m_TriggerContactMonitor;

  /// @brief Field m_UpdateCollidersAfterTriggerStay, offset: 0x290, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___m_UpdateCollidersAfterTriggerStay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor, 0x298>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor, ____unsortedValidTargets_k__BackingField) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor, ___m_StayedColliders) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor, ___m_TriggerContactMonitor) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor, ___m_UpdateCollidersAfterTriggerStay) == 0x290, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*, "UnityEngine.XR.Interaction.Toolkit", "XRDirectInteractor");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRDirectInteractor___UpdateCollidersAfterOnTriggerStay_d__13*, "UnityEngine.XR.Interaction.Toolkit",
                       "XRDirectInteractor/<UpdateCollidersAfterOnTriggerStay>d__13");
