#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SectorInteraction)
namespace UnityEngine::InputSystem {
template <typename TValue> class IInputInteraction_1;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
struct __SectorInteraction__Directions;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
struct __SectorInteraction__State;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
struct __SectorInteraction__SweepBehavior;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
struct Cardinal;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
struct __SectorInteraction__Directions;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
struct __SectorInteraction__State;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
struct __SectorInteraction__SweepBehavior;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
class SectorInteraction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction);
// Type: ::Directions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
// Is value type: true
// CS Name: ::SectorInteraction::Directions
struct CORDL_TYPE __SectorInteraction__Directions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SectorInteraction__Directions_Unwrapped
  enum struct ____SectorInteraction__Directions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_North = static_cast<int32_t>(0x1),
    __E_South = static_cast<int32_t>(0x2),
    __E_East = static_cast<int32_t>(0x4),
    __E_West = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SectorInteraction__Directions_Unwrapped() const noexcept {
    return static_cast<____SectorInteraction__Directions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SectorInteraction__Directions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SectorInteraction__Directions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field East value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions const East;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions const None;

  /// @brief Field North value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions const North;

  /// @brief Field South value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions const South;

  /// @brief Field West value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions const West;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions
// Type: ::SweepBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
// Is value type: true
// CS Name: ::SectorInteraction::SweepBehavior
struct CORDL_TYPE __SectorInteraction__SweepBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SectorInteraction__SweepBehavior_Unwrapped
  enum struct ____SectorInteraction__SweepBehavior_Unwrapped : int32_t {
    __E_Locked = static_cast<int32_t>(0x0),
    __E_AllowReentry = static_cast<int32_t>(0x1),
    __E_DisallowReentry = static_cast<int32_t>(0x2),
    __E_HistoryIndependent = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SectorInteraction__SweepBehavior_Unwrapped() const noexcept {
    return static_cast<____SectorInteraction__SweepBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SectorInteraction__SweepBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SectorInteraction__SweepBehavior(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllowReentry value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior const AllowReentry;

  /// @brief Field DisallowReentry value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior const DisallowReentry;

  /// @brief Field HistoryIndependent value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior const HistoryIndependent;

  /// @brief Field Locked value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior const Locked;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
// Is value type: true
// CS Name: ::SectorInteraction::State
struct CORDL_TYPE __SectorInteraction__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SectorInteraction__State_Unwrapped
  enum struct ____SectorInteraction__State_Unwrapped : int32_t {
    __E_Centered = static_cast<int32_t>(0x0),
    __E_StartedValidDirection = static_cast<int32_t>(0x1),
    __E_StartedInvalidDirection = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SectorInteraction__State_Unwrapped() const noexcept {
    return static_cast<____SectorInteraction__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SectorInteraction__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SectorInteraction__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Centered value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State const Centered;

  /// @brief Field StartedInvalidDirection value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State const StartedInvalidDirection;

  /// @brief Field StartedValidDirection value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State const StartedValidDirection;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions::SectorInteraction
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions::SectorInteraction*
class CORDL_TYPE SectorInteraction : public ::System::Object {
public:
  // Declarations
  using Directions = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions;

  using State = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State;

  using SweepBehavior = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior;

  /// @brief Field <defaultPressPoint>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__defaultPressPoint_k__BackingField, put = setStaticF__defaultPressPoint_k__BackingField)) float_t _defaultPressPoint_k__BackingField;

  /// @brief Field directions, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_directions,
                      put = __cordl_internal_set_directions))::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions directions;

  /// @brief Field m_State, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State))::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State m_State;

  /// @brief Field m_WasValidDirection, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WasValidDirection, put = __cordl_internal_set_m_WasValidDirection)) bool m_WasValidDirection;

  /// @brief Field pressPoint, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_pressPoint, put = __cordl_internal_set_pressPoint)) float_t pressPoint;

  __declspec(property(get = get_pressPointOrDefault)) float_t pressPointOrDefault;

  /// @brief Field sweepBehavior, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_sweepBehavior,
                      put = __cordl_internal_set_sweepBehavior))::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior sweepBehavior;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>"
  constexpr operator ::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*() noexcept;

  /// @brief Method GetNearestDirection, addr 0x2a2a074, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions GetNearestDirection(::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal value);

  /// @brief Method Initialize, addr 0x2a2a124, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method IsValidDirection, addr 0x2a29fc0, size 0xb4, virtual false, abstract: false, final false
  inline bool IsValidDirection(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction* New_ctor();

  /// @brief Method Process, addr 0x2a29ea8, size 0x118, virtual true, abstract: false, final true
  inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);

  /// @brief Method Reset, addr 0x2a2a094, size 0x4, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions const& __cordl_internal_get_directions() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions& __cordl_internal_get_directions();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State const& __cordl_internal_get_m_State() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State& __cordl_internal_get_m_State();

  constexpr bool const& __cordl_internal_get_m_WasValidDirection() const;

  constexpr bool& __cordl_internal_get_m_WasValidDirection();

  constexpr float_t const& __cordl_internal_get_pressPoint() const;

  constexpr float_t& __cordl_internal_get_pressPoint();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior const& __cordl_internal_get_sweepBehavior() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior& __cordl_internal_get_sweepBehavior();

  constexpr void __cordl_internal_set_directions(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions value);

  constexpr void __cordl_internal_set_m_State(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State value);

  constexpr void __cordl_internal_set_m_WasValidDirection(bool value);

  constexpr void __cordl_internal_set_pressPoint(float_t value);

  constexpr void __cordl_internal_set_sweepBehavior(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior value);

  /// @brief Method .ctor, addr 0x2a2a128, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF__defaultPressPoint_k__BackingField();

  /// @brief Method get_defaultPressPoint, addr 0x2a29dec, size 0x58, virtual false, abstract: false, final false
  static inline float_t get_defaultPressPoint();

  /// @brief Method get_pressPointOrDefault, addr 0x2a29d54, size 0x98, virtual false, abstract: false, final false
  inline float_t get_pressPointOrDefault();

  /// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr ::UnityEngine::InputSystem::IInputInteraction* i___UnityEngine__InputSystem__IInputInteraction() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>"
  constexpr ::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>* i___UnityEngine__InputSystem__IInputInteraction_1___UnityEngine__Vector2_() noexcept;

  static inline void setStaticF__defaultPressPoint_k__BackingField(float_t value);

  /// @brief Method set_defaultPressPoint, addr 0x2a29e44, size 0x64, virtual false, abstract: false, final false
  static inline void set_defaultPressPoint(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SectorInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SectorInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SectorInteraction(SectorInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SectorInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SectorInteraction(SectorInteraction const&) = delete;

  /// @brief Field directions, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions ___directions;

  /// @brief Field sweepBehavior, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior ___sweepBehavior;

  /// @brief Field pressPoint, offset: 0x18, size: 0x4, def value: None
  float_t ___pressPoint;

  /// @brief Field m_State, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State ___m_State;

  /// @brief Field m_WasValidDirection, offset: 0x20, size: 0x1, def value: None
  bool ___m_WasValidDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___directions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___sweepBehavior) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___pressPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___m_State) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___m_WasValidDirection) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__Directions, "UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions",
                       "SectorInteraction/Directions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__State, "UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions", "SectorInteraction/State");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::__SectorInteraction__SweepBehavior, "UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions",
                       "SectorInteraction/SweepBehavior");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions", "SectorInteraction");
