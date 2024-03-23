#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseTeleportationInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__MatchOrientation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTeleportationInteractable)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRReticleDirectionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct MatchOrientation;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct TeleportRequest;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportationProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportingEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportingEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __BaseTeleportationInteractable__TeleportTrigger;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __BaseTeleportationInteractable____c;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __BaseTeleportationInteractable__TeleportTrigger;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class BaseTeleportationInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __BaseTeleportationInteractable____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c);
// Type: ::TeleportTrigger
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::BaseTeleportationInteractable::TeleportTrigger
struct CORDL_TYPE __BaseTeleportationInteractable__TeleportTrigger {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BaseTeleportationInteractable__TeleportTrigger_Unwrapped
  enum struct ____BaseTeleportationInteractable__TeleportTrigger_Unwrapped : int32_t {
    __E_OnSelectExited = static_cast<int32_t>(0x0),
    __E_OnSelectEntered = static_cast<int32_t>(0x1),
    __E_OnActivated = static_cast<int32_t>(0x2),
    __E_OnDeactivated = static_cast<int32_t>(0x3),
    __E_OnSelectExit = static_cast<int32_t>(0x0),
    __E_OnSelectEnter = static_cast<int32_t>(0x1),
    __E_OnActivate = static_cast<int32_t>(0x2),
    __E_OnDeactivate = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BaseTeleportationInteractable__TeleportTrigger_Unwrapped() const noexcept {
    return static_cast<____BaseTeleportationInteractable__TeleportTrigger_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseTeleportationInteractable__TeleportTrigger();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BaseTeleportationInteractable__TeleportTrigger(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field OnActivate value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const OnActivate;

  /// @brief Field OnActivated value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const OnActivated;

  /// @brief Field OnDeactivate value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const OnDeactivate;

  /// @brief Field OnDeactivated value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const OnDeactivated;

  /// @brief Field OnSelectEnter value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const OnSelectEnter;

  /// @brief Field OnSelectEntered value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const OnSelectEntered;

  /// @brief Field OnSelectExit value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const OnSelectExit;

  /// @brief Field OnSelectExited value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const OnSelectExited;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::BaseTeleportationInteractable::<>c*
class CORDL_TYPE __BaseTeleportationInteractable____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c* __9;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_0, put = setStaticF___9__45_0))::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* __9__45_0;

  static inline ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c* New_ctor();

  /// @brief Method <.ctor>b__45_0, addr 0x301a218, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs* __ctor_b__45_0();

  /// @brief Method .ctor, addr 0x301a210, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* getStaticF___9__45_0();

  static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c* value);

  static inline void setStaticF___9__45_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseTeleportationInteractable____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BaseTeleportationInteractable____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseTeleportationInteractable____c(__BaseTeleportationInteractable____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseTeleportationInteractable____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseTeleportationInteractable____c(__BaseTeleportationInteractable____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::BaseTeleportationInteractable
// SizeInfo { instance_size: 464, native_size: -1, calculated_instance_size: 464, calculated_native_size: 464, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::BaseTeleportationInteractable*
class CORDL_TYPE BaseTeleportationInteractable : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable {
public:
  // Declarations
  using TeleportTrigger = ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger;

  using __c = ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c;

  __declspec(property(get = get_filterSelectionByHitNormal, put = set_filterSelectionByHitNormal)) bool filterSelectionByHitNormal;

  /// @brief Field m_FilterSelectionByHitNormal, offset 0x1ac, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FilterSelectionByHitNormal, put = __cordl_internal_set_m_FilterSelectionByHitNormal)) bool m_FilterSelectionByHitNormal;

  /// @brief Field m_MatchDirectionalInput, offset 0x1a4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MatchDirectionalInput, put = __cordl_internal_set_m_MatchDirectionalInput)) bool m_MatchDirectionalInput;

  /// @brief Field m_MatchOrientation, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MatchOrientation, put = __cordl_internal_set_m_MatchOrientation))::UnityEngine::XR::Interaction::Toolkit::MatchOrientation m_MatchOrientation;

  /// @brief Field m_TeleportForwardPerInteractor, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TeleportForwardPerInteractor,
                      put = __cordl_internal_set_m_TeleportForwardPerInteractor))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*,
                                                                                                                              ::UnityEngine::Vector3>* m_TeleportForwardPerInteractor;

  /// @brief Field m_TeleportTrigger, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TeleportTrigger,
                      put = __cordl_internal_set_m_TeleportTrigger))::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger m_TeleportTrigger;

  /// @brief Field m_TeleportationProvider, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TeleportationProvider,
                      put = __cordl_internal_set_m_TeleportationProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> m_TeleportationProvider;

  /// @brief Field m_Teleporting, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Teleporting, put = __cordl_internal_set_m_Teleporting))::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* m_Teleporting;

  /// @brief Field m_TeleportingEventArgs, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TeleportingEventArgs, put = __cordl_internal_set_m_TeleportingEventArgs))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* m_TeleportingEventArgs;

  /// @brief Field m_UpNormalToleranceDegrees, offset 0x1b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpNormalToleranceDegrees, put = __cordl_internal_set_m_UpNormalToleranceDegrees)) float_t m_UpNormalToleranceDegrees;

  __declspec(property(get = get_matchDirectionalInput, put = set_matchDirectionalInput)) bool matchDirectionalInput;

  __declspec(property(get = get_matchOrientation, put = set_matchOrientation))::UnityEngine::XR::Interaction::Toolkit::MatchOrientation matchOrientation;

  __declspec(property(get = get_teleportTrigger, put = set_teleportTrigger))::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger teleportTrigger;

  __declspec(property(get = get_teleportationProvider, put = set_teleportationProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> teleportationProvider;

  __declspec(property(get = get_teleporting, put = set_teleporting))::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* teleporting;

  __declspec(property(get = get_upNormalToleranceDegrees, put = set_upNormalToleranceDegrees)) float_t upNormalToleranceDegrees;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*() noexcept;

  /// @brief Method Awake, addr 0x3018dac, size 0xa4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GenerateTeleportRequest, addr 0x3018e5c, size 0x8, virtual true, abstract: false, final false
  inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::RaycastHit raycastHit,
                                      ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest);

  /// @brief Method GenerateTeleportRequest, addr 0x3019f84, size 0x4c, virtual true, abstract: false, final false
  inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor, ::UnityEngine::RaycastHit raycastHit,
                                      ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest);

  /// @brief Method GetReticleDirection, addr 0x3019ddc, size 0x1a8, virtual true, abstract: false, final true
  inline void GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::Vector3 hitNormal, ByRef<::UnityEngine::Vector3> reticleUp,
                                  ByRef<::System::Nullable_1<::UnityEngine::Vector3>> optionalReticleForward);

  /// @brief Method IsSelectableBy, addr 0x3019b5c, size 0x280, virtual true, abstract: false, final false
  inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor);

  static inline ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable* New_ctor();

  /// @brief Method OnActivated, addr 0x3019ab4, size 0x54, virtual true, abstract: false, final false
  inline void OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args);

  /// @brief Method OnDeactivated, addr 0x3019b08, size 0x54, virtual true, abstract: false, final false
  inline void OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args);

  /// @brief Method OnSelectEntered, addr 0x3019a08, size 0x54, virtual true, abstract: false, final false
  inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnSelectExited, addr 0x3019a5c, size 0x58, virtual true, abstract: false, final false
  inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method ProcessInteractable, addr 0x3019474, size 0x594, virtual true, abstract: false, final false
  inline void ProcessInteractable(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method Reset, addr 0x3018e50, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SendTeleportRequest, addr 0x3018e64, size 0x4d4, virtual false, abstract: false, final false
  inline void SendTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method UpdateTeleportRequestRotation, addr 0x3019338, size 0x13c, virtual false, abstract: false, final false
  inline void UpdateTeleportRequestRotation(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest);

  constexpr bool const& __cordl_internal_get_m_FilterSelectionByHitNormal() const;

  constexpr bool& __cordl_internal_get_m_FilterSelectionByHitNormal();

  constexpr bool const& __cordl_internal_get_m_MatchDirectionalInput() const;

  constexpr bool& __cordl_internal_get_m_MatchDirectionalInput();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation const& __cordl_internal_get_m_MatchOrientation() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation& __cordl_internal_get_m_MatchOrientation();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3>*& __cordl_internal_get_m_TeleportForwardPerInteractor();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3>*> const&
  __cordl_internal_get_m_TeleportForwardPerInteractor() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const& __cordl_internal_get_m_TeleportTrigger() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger& __cordl_internal_get_m_TeleportTrigger();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> const& __cordl_internal_get_m_TeleportationProvider() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>& __cordl_internal_get_m_TeleportationProvider();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*& __cordl_internal_get_m_Teleporting();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*> const& __cordl_internal_get_m_Teleporting() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>*& __cordl_internal_get_m_TeleportingEventArgs();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>*> const&
  __cordl_internal_get_m_TeleportingEventArgs() const;

  constexpr float_t const& __cordl_internal_get_m_UpNormalToleranceDegrees() const;

  constexpr float_t& __cordl_internal_get_m_UpNormalToleranceDegrees();

  constexpr void __cordl_internal_set_m_FilterSelectionByHitNormal(bool value);

  constexpr void __cordl_internal_set_m_MatchDirectionalInput(bool value);

  constexpr void __cordl_internal_set_m_MatchOrientation(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation value);

  constexpr void
  __cordl_internal_set_m_TeleportForwardPerInteractor(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_m_TeleportTrigger(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger value);

  constexpr void __cordl_internal_set_m_TeleportationProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> value);

  constexpr void __cordl_internal_set_m_Teleporting(::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* value);

  constexpr void
  __cordl_internal_set_m_TeleportingEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* value);

  constexpr void __cordl_internal_set_m_UpNormalToleranceDegrees(float_t value);

  /// @brief Method .ctor, addr 0x3019fd0, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_filterSelectionByHitNormal, addr 0x3018d78, size 0x8, virtual false, abstract: false, final false
  inline bool get_filterSelectionByHitNormal();

  /// @brief Method get_matchDirectionalInput, addr 0x3018d54, size 0x8, virtual false, abstract: false, final false
  inline bool get_matchDirectionalInput();

  /// @brief Method get_matchOrientation, addr 0x3018d44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation get_matchOrientation();

  /// @brief Method get_teleportTrigger, addr 0x3018d68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger get_teleportTrigger();

  /// @brief Method get_teleportationProvider, addr 0x3018d34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> get_teleportationProvider();

  /// @brief Method get_teleporting, addr 0x3018d9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* get_teleporting();

  /// @brief Method get_upNormalToleranceDegrees, addr 0x3018d8c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_upNormalToleranceDegrees();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider* i___UnityEngine__XR__Interaction__Toolkit__IXRReticleDirectionProvider() noexcept;

  /// @brief Method set_filterSelectionByHitNormal, addr 0x3018d80, size 0xc, virtual false, abstract: false, final false
  inline void set_filterSelectionByHitNormal(bool value);

  /// @brief Method set_matchDirectionalInput, addr 0x3018d5c, size 0xc, virtual false, abstract: false, final false
  inline void set_matchDirectionalInput(bool value);

  /// @brief Method set_matchOrientation, addr 0x3018d4c, size 0x8, virtual false, abstract: false, final false
  inline void set_matchOrientation(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation value);

  /// @brief Method set_teleportTrigger, addr 0x3018d70, size 0x8, virtual false, abstract: false, final false
  inline void set_teleportTrigger(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger value);

  /// @brief Method set_teleportationProvider, addr 0x3018d3c, size 0x8, virtual false, abstract: false, final false
  inline void set_teleportationProvider(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider* value);

  /// @brief Method set_teleporting, addr 0x3018da4, size 0x8, virtual false, abstract: false, final false
  inline void set_teleporting(::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* value);

  /// @brief Method set_upNormalToleranceDegrees, addr 0x3018d94, size 0x8, virtual false, abstract: false, final false
  inline void set_upNormalToleranceDegrees(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTeleportationInteractable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTeleportationInteractable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTeleportationInteractable(BaseTeleportationInteractable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTeleportationInteractable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTeleportationInteractable(BaseTeleportationInteractable const&) = delete;

  /// @brief Field m_TeleportationProvider, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> ___m_TeleportationProvider;

  /// @brief Field m_MatchOrientation, offset: 0x1a0, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation ___m_MatchOrientation;

  /// @brief Field m_MatchDirectionalInput, offset: 0x1a4, size: 0x1, def value: None
  bool ___m_MatchDirectionalInput;

  /// @brief Field m_TeleportTrigger, offset: 0x1a8, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger ___m_TeleportTrigger;

  /// @brief Field m_FilterSelectionByHitNormal, offset: 0x1ac, size: 0x1, def value: None
  bool ___m_FilterSelectionByHitNormal;

  /// @brief Field m_UpNormalToleranceDegrees, offset: 0x1b0, size: 0x4, def value: None
  float_t ___m_UpNormalToleranceDegrees;

  /// @brief Field m_Teleporting, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* ___m_Teleporting;

  /// @brief Field m_TeleportingEventArgs, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* ___m_TeleportingEventArgs;

  /// @brief Field m_TeleportForwardPerInteractor, offset: 0x1c8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3>* ___m_TeleportForwardPerInteractor;

  /// @brief Field k_DefaultNormalToleranceDegrees offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultNormalToleranceDegrees{ 30.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, 0x1d0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_TeleportationProvider) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_MatchOrientation) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_MatchDirectionalInput) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_TeleportTrigger) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_FilterSelectionByHitNormal) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_UpNormalToleranceDegrees) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_Teleporting) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_TeleportingEventArgs) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable, ___m_TeleportForwardPerInteractor) == 0x1c8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger, "UnityEngine.XR.Interaction.Toolkit",
                       "BaseTeleportationInteractable/TeleportTrigger");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*, "UnityEngine.XR.Interaction.Toolkit", "BaseTeleportationInteractable");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*, "UnityEngine.XR.Interaction.Toolkit", "BaseTeleportationInteractable/<>c");
