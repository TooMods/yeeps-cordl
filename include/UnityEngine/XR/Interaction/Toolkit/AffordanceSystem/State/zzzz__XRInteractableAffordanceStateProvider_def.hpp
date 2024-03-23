#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__BaseAffordanceStateProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractableAffordanceStateProvider)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct __XRInteractableAffordanceStateProvider__ActivateClickAnimationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct __XRInteractableAffordanceStateProvider__SelectClickAnimationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class __XRInteractableAffordanceStateProvider___ClickAnimation_d__77;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class __XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractionStrengthInteractable;
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
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct __XRInteractableAffordanceStateProvider__ActivateClickAnimationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct __XRInteractableAffordanceStateProvider__SelectClickAnimationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractableAffordanceStateProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class __XRInteractableAffordanceStateProvider___ClickAnimation_d__77;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class __XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79);
// Type: ::SelectClickAnimationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: true
// CS Name: ::XRInteractableAffordanceStateProvider::SelectClickAnimationMode
struct CORDL_TYPE __XRInteractableAffordanceStateProvider__SelectClickAnimationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRInteractableAffordanceStateProvider__SelectClickAnimationMode_Unwrapped
  enum struct ____XRInteractableAffordanceStateProvider__SelectClickAnimationMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SelectEntered = static_cast<int32_t>(0x1),
    __E_SelectExited = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRInteractableAffordanceStateProvider__SelectClickAnimationMode_Unwrapped() const noexcept {
    return static_cast<____XRInteractableAffordanceStateProvider__SelectClickAnimationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRInteractableAffordanceStateProvider__SelectClickAnimationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRInteractableAffordanceStateProvider__SelectClickAnimationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode const None;

  /// @brief Field SelectEntered value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode const SelectEntered;

  /// @brief Field SelectExited value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode const SelectExited;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode, 0x4>,
              "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
// Type: ::ActivateClickAnimationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: true
// CS Name: ::XRInteractableAffordanceStateProvider::ActivateClickAnimationMode
struct CORDL_TYPE __XRInteractableAffordanceStateProvider__ActivateClickAnimationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRInteractableAffordanceStateProvider__ActivateClickAnimationMode_Unwrapped
  enum struct ____XRInteractableAffordanceStateProvider__ActivateClickAnimationMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Activated = static_cast<int32_t>(0x1),
    __E_Deactivated = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRInteractableAffordanceStateProvider__ActivateClickAnimationMode_Unwrapped() const noexcept {
    return static_cast<____XRInteractableAffordanceStateProvider__ActivateClickAnimationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRInteractableAffordanceStateProvider__ActivateClickAnimationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRInteractableAffordanceStateProvider__ActivateClickAnimationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Activated value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode const Activated;

  /// @brief Field Deactivated value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode const Deactivated;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode, 0x4>,
              "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
// Type: ::<ClickAnimation>d__77
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: ::XRInteractableAffordanceStateProvider::<ClickAnimation>d__77*
class CORDL_TYPE __XRInteractableAffordanceStateProvider___ClickAnimation_d__77 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this,
                      put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> __4__this;

  /// @brief Field <elapsedTime>5__2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Field duration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field onComplete, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onComplete, put = __cordl_internal_set_onComplete))::System::Action* onComplete;

  /// @brief Field targetStateIndex, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_targetStateIndex, put = __cordl_internal_set_targetStateIndex)) uint8_t targetStateIndex;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2a2ecd4, size 0x188, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2a2ee5c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2a2ee64, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2a2eea4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2a2ecd0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::System::Action*& __cordl_internal_get_onComplete();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_onComplete() const;

  constexpr uint8_t const& __cordl_internal_get_targetStateIndex() const;

  constexpr uint8_t& __cordl_internal_get_targetStateIndex();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_onComplete(::System::Action* value);

  constexpr void __cordl_internal_set_targetStateIndex(uint8_t value);

  /// @brief Method .ctor, addr 0x2a2d4bc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __XRInteractableAffordanceStateProvider___ClickAnimation_d__77();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRInteractableAffordanceStateProvider___ClickAnimation_d__77", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRInteractableAffordanceStateProvider___ClickAnimation_d__77(__XRInteractableAffordanceStateProvider___ClickAnimation_d__77&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRInteractableAffordanceStateProvider___ClickAnimation_d__77", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRInteractableAffordanceStateProvider___ClickAnimation_d__77(__XRInteractableAffordanceStateProvider___ClickAnimation_d__77 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field duration, offset: 0x20, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> _____4__this;

  /// @brief Field targetStateIndex, offset: 0x30, size: 0x1, def value: None
  uint8_t ___targetStateIndex;

  /// @brief Field onComplete, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___onComplete;

  /// @brief Field <elapsedTime>5__2, offset: 0x40, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77, 0x48>,
              "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77, ___targetStateIndex) == 0x30,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77, ___onComplete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77, ____elapsedTime_5__2) == 0x40,
              "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
// Type: ::<HoveredPriorityRoutine>d__79
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: ::XRInteractableAffordanceStateProvider::<HoveredPriorityRoutine>d__79*
class CORDL_TYPE __XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this,
                      put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2a2eeb0, size 0x168, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2a2f018, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2a2f020, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2a2f060, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2a2eeac, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> value);

  /// @brief Method .ctor, addr 0x2a2d954, size 0x28, virtual false, abstract: false, final false
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
  constexpr __XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79(__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79(__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79, 0x28>,
              "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79, _____1__state) == 0x10,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79, _____2__current) == 0x18,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79, _____4__this) == 0x20,
              "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State::XRInteractableAffordanceStateProvider
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 196, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State::XRInteractableAffordanceStateProvider*
class CORDL_TYPE XRInteractableAffordanceStateProvider : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider {
public:
  // Declarations
  using ActivateClickAnimationMode = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode;

  using SelectClickAnimationMode = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode;

  using _ClickAnimation_d__77 = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77;

  using _HoveredPriorityRoutine_d__79 = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79;

  __declspec(property(get = get_activateClickAnimationMode,
                      put = set_activateClickAnimationMode))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode
      activateClickAnimationMode;

  __declspec(property(get = get_clickAnimationCurve, put = set_clickAnimationCurve))::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* clickAnimationCurve;

  __declspec(property(get = get_clickAnimationDuration, put = set_clickAnimationDuration)) float_t clickAnimationDuration;

  __declspec(property(get = get_ignoreActivateEvents, put = set_ignoreActivateEvents)) bool ignoreActivateEvents;

  __declspec(property(get = get_ignoreHoverEvents, put = set_ignoreHoverEvents)) bool ignoreHoverEvents;

  __declspec(property(get = get_ignoreHoverPriorityEvents, put = set_ignoreHoverPriorityEvents)) bool ignoreHoverPriorityEvents;

  __declspec(property(get = get_ignoreSelectEvents, put = set_ignoreSelectEvents)) bool ignoreSelectEvents;

  __declspec(property(get = get_interactableSource, put = set_interactableSource))::UnityW<::UnityEngine::Object> interactableSource;

  __declspec(property(get = get_isActivated)) bool isActivated;

  __declspec(property(get = get_isHovered)) bool isHovered;

  __declspec(property(get = get_isRegistered)) bool isRegistered;

  __declspec(property(get = get_isSelected)) bool isSelected;

  /// @brief Field m_ActivateClickAnimationMode, offset 0x68, size 0x4
  __declspec(property(
      get = __cordl_internal_get_m_ActivateClickAnimationMode,
      put = __cordl_internal_set_m_ActivateClickAnimationMode))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode
      m_ActivateClickAnimationMode;

  /// @brief Field m_ActivateInteractable, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActivateInteractable,
                      put = __cordl_internal_set_m_ActivateInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* m_ActivateInteractable;

  /// @brief Field m_ActivatedClickAnimation, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActivatedClickAnimation, put = __cordl_internal_set_m_ActivatedClickAnimation))::UnityEngine::Coroutine* m_ActivatedClickAnimation;

  /// @brief Field m_ClickAnimationCurve, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClickAnimationCurve,
                      put = __cordl_internal_set_m_ClickAnimationCurve))::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* m_ClickAnimationCurve;

  /// @brief Field m_ClickAnimationDuration, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClickAnimationDuration, put = __cordl_internal_set_m_ClickAnimationDuration)) float_t m_ClickAnimationDuration;

  /// @brief Field m_HasInteractionStrengthInteractable, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasInteractionStrengthInteractable, put = __cordl_internal_set_m_HasInteractionStrengthInteractable)) bool m_HasInteractionStrengthInteractable;

  /// @brief Field m_HoverInteractable, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverInteractable,
                      put = __cordl_internal_set_m_HoverInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* m_HoverInteractable;

  /// @brief Field m_HoveredPriorityRoutine, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoveredPriorityRoutine, put = __cordl_internal_set_m_HoveredPriorityRoutine))::UnityEngine::Coroutine* m_HoveredPriorityRoutine;

  /// @brief Field m_HoveringPriorityInteractorCount, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HoveringPriorityInteractorCount, put = __cordl_internal_set_m_HoveringPriorityInteractorCount)) int32_t m_HoveringPriorityInteractorCount;

  /// @brief Field m_IgnoreActivateEvents, offset 0x63, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreActivateEvents, put = __cordl_internal_set_m_IgnoreActivateEvents)) bool m_IgnoreActivateEvents;

  /// @brief Field m_IgnoreHoverEvents, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreHoverEvents, put = __cordl_internal_set_m_IgnoreHoverEvents)) bool m_IgnoreHoverEvents;

  /// @brief Field m_IgnoreHoverPriorityEvents, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreHoverPriorityEvents, put = __cordl_internal_set_m_IgnoreHoverPriorityEvents)) bool m_IgnoreHoverPriorityEvents;

  /// @brief Field m_IgnoreSelectEvents, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreSelectEvents, put = __cordl_internal_set_m_IgnoreSelectEvents)) bool m_IgnoreSelectEvents;

  /// @brief Field m_Interactable, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interactable, put = __cordl_internal_set_m_Interactable))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* m_Interactable;

  /// @brief Field m_InteractableSource, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractableSource, put = __cordl_internal_set_m_InteractableSource))::UnityW<::UnityEngine::Object> m_InteractableSource;

  /// @brief Field m_InteractionStrengthInteractable, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InteractionStrengthInteractable,
                      put = __cordl_internal_set_m_InteractionStrengthInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable* m_InteractionStrengthInteractable;

  /// @brief Field m_IsActivated, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsActivated, put = __cordl_internal_set_m_IsActivated)) bool m_IsActivated;

  /// @brief Field m_IsBoundToInteractionEvents, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsBoundToInteractionEvents, put = __cordl_internal_set_m_IsBoundToInteractionEvents)) bool m_IsBoundToInteractionEvents;

  /// @brief Field m_IsHoveredPriority, offset 0xbb, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsHoveredPriority, put = __cordl_internal_set_m_IsHoveredPriority)) bool m_IsHoveredPriority;

  /// @brief Field m_IsRegistered, offset 0xba, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsRegistered, put = __cordl_internal_set_m_IsRegistered)) bool m_IsRegistered;

  /// @brief Field m_SelectClickAnimationMode, offset 0x64, size 0x4
  __declspec(property(
      get = __cordl_internal_get_m_SelectClickAnimationMode,
      put = __cordl_internal_set_m_SelectClickAnimationMode))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode
      m_SelectClickAnimationMode;

  /// @brief Field m_SelectInteractable, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectInteractable,
                      put = __cordl_internal_set_m_SelectInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* m_SelectInteractable;

  /// @brief Field m_SelectedClickAnimation, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectedClickAnimation, put = __cordl_internal_set_m_SelectedClickAnimation))::UnityEngine::Coroutine* m_SelectedClickAnimation;

  __declspec(property(get = get_selectClickAnimationMode,
                      put = set_selectClickAnimationMode))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode
      selectClickAnimationMode;

  /// @brief Method ActivatedClickBehavior, addr 0x2a2d360, size 0xcc, virtual true, abstract: false, final false
  inline void ActivatedClickBehavior();

  /// @brief Method Awake, addr 0x2a2cac0, size 0x174, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method BindToProviders, addr 0x2a2d97c, size 0xaac, virtual true, abstract: false, final false
  inline void BindToProviders();

  /// @brief Method ClearBindings, addr 0x2a2e428, size 0x7f8, virtual true, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method ClickAnimation, addr 0x2a2d42c, size 0x90, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* ClickAnimation(uint8_t targetStateIndex, float_t duration, ::System::Action* onComplete);

  /// @brief Method GenerateNewAffordanceState, addr 0x2a2d4e4, size 0x470, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData GenerateNewAffordanceState();

  /// @brief Method HoveredPriorityRoutine, addr 0x2a2ce84, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HoveredPriorityRoutine();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider* New_ctor();

  /// @brief Method OnActivatedEvent, addr 0x2a2d0fc, size 0xac, virtual true, abstract: false, final false
  inline void OnActivatedEvent(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args);

  /// @brief Method OnDeactivatedEvent, addr 0x2a2d1a8, size 0xa8, virtual true, abstract: false, final false
  inline void OnDeactivatedEvent(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args);

  /// @brief Method OnFirstHoverEntered, addr 0x2a2cd34, size 0x28, virtual true, abstract: false, final false
  inline void OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnFirstSelectEntered, addr 0x2a2cfb4, size 0xa4, virtual true, abstract: false, final false
  inline void OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnHoverEntered, addr 0x2a2cd84, size 0x100, virtual true, abstract: false, final false
  inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnHoverExited, addr 0x2a2ceec, size 0xc8, virtual true, abstract: false, final false
  inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnLargestInteractionStrengthChanged, addr 0x2a2d250, size 0x44, virtual true, abstract: false, final false
  inline void OnLargestInteractionStrengthChanged(float_t value);

  /// @brief Method OnLastHoverExited, addr 0x2a2cd5c, size 0x28, virtual true, abstract: false, final false
  inline void OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnLastSelectExited, addr 0x2a2d058, size 0xa4, virtual true, abstract: false, final false
  inline void OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method OnRegistered, addr 0x2a2ccd8, size 0x30, virtual true, abstract: false, final false
  inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* args);

  /// @brief Method OnUnregistered, addr 0x2a2cd08, size 0x2c, virtual true, abstract: false, final false
  inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* args);

  /// @brief Method OnValidate, addr 0x2a2cc34, size 0xa4, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RefreshState, addr 0x2a2c8c0, size 0x28, virtual false, abstract: false, final false
  inline void RefreshState();

  /// @brief Method SelectedClickBehavior, addr 0x2a2d294, size 0xcc, virtual true, abstract: false, final false
  inline void SelectedClickBehavior();

  /// @brief Method SetBoundInteractionReceiver, addr 0x2a2c66c, size 0x174, virtual false, abstract: false, final false
  inline bool SetBoundInteractionReceiver(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* receiver);

  /// @brief Method StopHoveredPriorityRoutine, addr 0x2a2c894, size 0x2c, virtual false, abstract: false, final false
  inline void StopHoveredPriorityRoutine();

  /// @brief Method <ActivatedClickBehavior>b__76_0, addr 0x2a2ecc8, size 0x8, virtual false, abstract: false, final false
  inline void _ActivatedClickBehavior_b__76_0();

  /// @brief Method <SelectedClickBehavior>b__75_0, addr 0x2a2ecc0, size 0x8, virtual false, abstract: false, final false
  inline void _SelectedClickBehavior_b__75_0();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode const&
  __cordl_internal_get_m_ActivateClickAnimationMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode& __cordl_internal_get_m_ActivateClickAnimationMode();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*& __cordl_internal_get_m_ActivateInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*> const& __cordl_internal_get_m_ActivateInteractable() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_ActivatedClickAnimation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_ActivatedClickAnimation() const;

  constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*& __cordl_internal_get_m_ClickAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*> const& __cordl_internal_get_m_ClickAnimationCurve() const;

  constexpr float_t const& __cordl_internal_get_m_ClickAnimationDuration() const;

  constexpr float_t& __cordl_internal_get_m_ClickAnimationDuration();

  constexpr bool const& __cordl_internal_get_m_HasInteractionStrengthInteractable() const;

  constexpr bool& __cordl_internal_get_m_HasInteractionStrengthInteractable();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*& __cordl_internal_get_m_HoverInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*> const& __cordl_internal_get_m_HoverInteractable() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_HoveredPriorityRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_HoveredPriorityRoutine() const;

  constexpr int32_t const& __cordl_internal_get_m_HoveringPriorityInteractorCount() const;

  constexpr int32_t& __cordl_internal_get_m_HoveringPriorityInteractorCount();

  constexpr bool const& __cordl_internal_get_m_IgnoreActivateEvents() const;

  constexpr bool& __cordl_internal_get_m_IgnoreActivateEvents();

  constexpr bool const& __cordl_internal_get_m_IgnoreHoverEvents() const;

  constexpr bool& __cordl_internal_get_m_IgnoreHoverEvents();

  constexpr bool const& __cordl_internal_get_m_IgnoreHoverPriorityEvents() const;

  constexpr bool& __cordl_internal_get_m_IgnoreHoverPriorityEvents();

  constexpr bool const& __cordl_internal_get_m_IgnoreSelectEvents() const;

  constexpr bool& __cordl_internal_get_m_IgnoreSelectEvents();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& __cordl_internal_get_m_Interactable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const& __cordl_internal_get_m_Interactable() const;

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_InteractableSource() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_InteractableSource();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*& __cordl_internal_get_m_InteractionStrengthInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable*> const& __cordl_internal_get_m_InteractionStrengthInteractable() const;

  constexpr bool const& __cordl_internal_get_m_IsActivated() const;

  constexpr bool& __cordl_internal_get_m_IsActivated();

  constexpr bool const& __cordl_internal_get_m_IsBoundToInteractionEvents() const;

  constexpr bool& __cordl_internal_get_m_IsBoundToInteractionEvents();

  constexpr bool const& __cordl_internal_get_m_IsHoveredPriority() const;

  constexpr bool& __cordl_internal_get_m_IsHoveredPriority();

  constexpr bool const& __cordl_internal_get_m_IsRegistered() const;

  constexpr bool& __cordl_internal_get_m_IsRegistered();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode const&
  __cordl_internal_get_m_SelectClickAnimationMode() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode& __cordl_internal_get_m_SelectClickAnimationMode();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*& __cordl_internal_get_m_SelectInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> const& __cordl_internal_get_m_SelectInteractable() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_SelectedClickAnimation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_m_SelectedClickAnimation() const;

  constexpr void
  __cordl_internal_set_m_ActivateClickAnimationMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode value);

  constexpr void __cordl_internal_set_m_ActivateInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* value);

  constexpr void __cordl_internal_set_m_ActivatedClickAnimation(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_ClickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* value);

  constexpr void __cordl_internal_set_m_ClickAnimationDuration(float_t value);

  constexpr void __cordl_internal_set_m_HasInteractionStrengthInteractable(bool value);

  constexpr void __cordl_internal_set_m_HoverInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* value);

  constexpr void __cordl_internal_set_m_HoveredPriorityRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_HoveringPriorityInteractorCount(int32_t value);

  constexpr void __cordl_internal_set_m_IgnoreActivateEvents(bool value);

  constexpr void __cordl_internal_set_m_IgnoreHoverEvents(bool value);

  constexpr void __cordl_internal_set_m_IgnoreHoverPriorityEvents(bool value);

  constexpr void __cordl_internal_set_m_IgnoreSelectEvents(bool value);

  constexpr void __cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

  constexpr void __cordl_internal_set_m_InteractableSource(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_m_InteractionStrengthInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable* value);

  constexpr void __cordl_internal_set_m_IsActivated(bool value);

  constexpr void __cordl_internal_set_m_IsBoundToInteractionEvents(bool value);

  constexpr void __cordl_internal_set_m_IsHoveredPriority(bool value);

  constexpr void __cordl_internal_set_m_IsRegistered(bool value);

  constexpr void
  __cordl_internal_set_m_SelectClickAnimationMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode value);

  constexpr void __cordl_internal_set_m_SelectInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);

  constexpr void __cordl_internal_set_m_SelectedClickAnimation(::UnityEngine::Coroutine* value);

  /// @brief Method .ctor, addr 0x2a2ec20, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activateClickAnimationMode, addr 0x2a2c920, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode get_activateClickAnimationMode();

  /// @brief Method get_clickAnimationCurve, addr 0x2a2c940, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* get_clickAnimationCurve();

  /// @brief Method get_clickAnimationDuration, addr 0x2a2c930, size 0x8, virtual false, abstract: false, final false
  inline float_t get_clickAnimationDuration();

  /// @brief Method get_ignoreActivateEvents, addr 0x2a2c8fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreActivateEvents();

  /// @brief Method get_ignoreHoverEvents, addr 0x2a2c7e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreHoverEvents();

  /// @brief Method get_ignoreHoverPriorityEvents, addr 0x2a2c7f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreHoverPriorityEvents();

  /// @brief Method get_ignoreSelectEvents, addr 0x2a2c8e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreSelectEvents();

  /// @brief Method get_interactableSource, addr 0x2a2c5e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_interactableSource();

  /// @brief Method get_isActivated, addr 0x2a2cab0, size 0x8, virtual true, abstract: false, final false
  inline bool get_isActivated();

  /// @brief Method get_isHovered, addr 0x2a2c950, size 0xb0, virtual true, abstract: false, final false
  inline bool get_isHovered();

  /// @brief Method get_isRegistered, addr 0x2a2cab8, size 0x8, virtual true, abstract: false, final false
  inline bool get_isRegistered();

  /// @brief Method get_isSelected, addr 0x2a2ca00, size 0xb0, virtual true, abstract: false, final false
  inline bool get_isSelected();

  /// @brief Method get_selectClickAnimationMode, addr 0x2a2c910, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode get_selectClickAnimationMode();

  /// @brief Method set_activateClickAnimationMode, addr 0x2a2c928, size 0x8, virtual false, abstract: false, final false
  inline void set_activateClickAnimationMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode value);

  /// @brief Method set_clickAnimationCurve, addr 0x2a2c948, size 0x8, virtual false, abstract: false, final false
  inline void set_clickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* value);

  /// @brief Method set_clickAnimationDuration, addr 0x2a2c938, size 0x8, virtual false, abstract: false, final false
  inline void set_clickAnimationDuration(float_t value);

  /// @brief Method set_ignoreActivateEvents, addr 0x2a2c904, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreActivateEvents(bool value);

  /// @brief Method set_ignoreHoverEvents, addr 0x2a2c7e8, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreHoverEvents(bool value);

  /// @brief Method set_ignoreHoverPriorityEvents, addr 0x2a2c7fc, size 0x98, virtual false, abstract: false, final false
  inline void set_ignoreHoverPriorityEvents(bool value);

  /// @brief Method set_ignoreSelectEvents, addr 0x2a2c8f0, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreSelectEvents(bool value);

  /// @brief Method set_interactableSource, addr 0x2a2c5e8, size 0x84, virtual false, abstract: false, final false
  inline void set_interactableSource(::UnityEngine::Object* value);

  /// @brief Method set_selectClickAnimationMode, addr 0x2a2c918, size 0x8, virtual false, abstract: false, final false
  inline void set_selectClickAnimationMode(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractableAffordanceStateProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractableAffordanceStateProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractableAffordanceStateProvider(XRInteractableAffordanceStateProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractableAffordanceStateProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractableAffordanceStateProvider(XRInteractableAffordanceStateProvider const&) = delete;

  /// @brief Field m_InteractableSource, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___m_InteractableSource;

  /// @brief Field m_IgnoreHoverEvents, offset: 0x60, size: 0x1, def value: None
  bool ___m_IgnoreHoverEvents;

  /// @brief Field m_IgnoreHoverPriorityEvents, offset: 0x61, size: 0x1, def value: None
  bool ___m_IgnoreHoverPriorityEvents;

  /// @brief Field m_IgnoreSelectEvents, offset: 0x62, size: 0x1, def value: None
  bool ___m_IgnoreSelectEvents;

  /// @brief Field m_IgnoreActivateEvents, offset: 0x63, size: 0x1, def value: None
  bool ___m_IgnoreActivateEvents;

  /// @brief Field m_SelectClickAnimationMode, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode ___m_SelectClickAnimationMode;

  /// @brief Field m_ActivateClickAnimationMode, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode ___m_ActivateClickAnimationMode;

  /// @brief Field m_ClickAnimationDuration, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_ClickAnimationDuration;

  /// @brief Field m_ClickAnimationCurve, offset: 0x70, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* ___m_ClickAnimationCurve;

  /// @brief Field m_Interactable, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* ___m_Interactable;

  /// @brief Field m_HoverInteractable, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* ___m_HoverInteractable;

  /// @brief Field m_SelectInteractable, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* ___m_SelectInteractable;

  /// @brief Field m_ActivateInteractable, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable* ___m_ActivateInteractable;

  /// @brief Field m_InteractionStrengthInteractable, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionStrengthInteractable* ___m_InteractionStrengthInteractable;

  /// @brief Field m_SelectedClickAnimation, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_SelectedClickAnimation;

  /// @brief Field m_ActivatedClickAnimation, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_ActivatedClickAnimation;

  /// @brief Field m_HoveredPriorityRoutine, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_HoveredPriorityRoutine;

  /// @brief Field m_IsBoundToInteractionEvents, offset: 0xb8, size: 0x1, def value: None
  bool ___m_IsBoundToInteractionEvents;

  /// @brief Field m_IsActivated, offset: 0xb9, size: 0x1, def value: None
  bool ___m_IsActivated;

  /// @brief Field m_IsRegistered, offset: 0xba, size: 0x1, def value: None
  bool ___m_IsRegistered;

  /// @brief Field m_IsHoveredPriority, offset: 0xbb, size: 0x1, def value: None
  bool ___m_IsHoveredPriority;

  /// @brief Field m_HasInteractionStrengthInteractable, offset: 0xbc, size: 0x1, def value: None
  bool ___m_HasInteractionStrengthInteractable;

  /// @brief Field m_HoveringPriorityInteractorCount, offset: 0xc0, size: 0x4, def value: None
  int32_t ___m_HoveringPriorityInteractorCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, 0xc8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_InteractableSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreHoverEvents) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreHoverPriorityEvents) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreSelectEvents) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreActivateEvents) == 0x63, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_SelectClickAnimationMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ActivateClickAnimationMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ClickAnimationDuration) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ClickAnimationCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_Interactable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HoverInteractable) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_SelectInteractable) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ActivateInteractable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_InteractionStrengthInteractable) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_SelectedClickAnimation) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ActivatedClickAnimation) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HoveredPriorityRoutine) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IsBoundToInteractionEvents) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IsActivated) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IsRegistered) == 0xba, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IsHoveredPriority) == 0xbb, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HasInteractionStrengthInteractable) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HoveringPriorityInteractorCount) == 0xc0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__ActivateClickAnimationMode,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractableAffordanceStateProvider/ActivateClickAnimationMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider__SelectClickAnimationMode,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractableAffordanceStateProvider/SelectClickAnimationMode");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State",
                       "XRInteractableAffordanceStateProvider");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___ClickAnimation_d__77*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractableAffordanceStateProvider/<ClickAnimation>d__77");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::__XRInteractableAffordanceStateProvider___HoveredPriorityRoutine_d__79*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractableAffordanceStateProvider/<HoveredPriorityRoutine>d__79");
