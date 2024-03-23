#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionPhase_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocomotionProvider)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct LocomotionPhase;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionSystem;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::LocomotionProvider
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::LocomotionProvider*
class CORDL_TYPE LocomotionProvider : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <locomotionPhase>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__locomotionPhase_k__BackingField,
                      put = __cordl_internal_set__locomotionPhase_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase _locomotionPhase_k__BackingField;

  /// @brief Field beginLocomotion, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beginLocomotion,
                      put = __cordl_internal_set_beginLocomotion))::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* beginLocomotion;

  /// @brief Field endLocomotion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_endLocomotion,
                      put = __cordl_internal_set_endLocomotion))::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* endLocomotion;

  __declspec(property(get = get_locomotionPhase, put = set_locomotionPhase))::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase locomotionPhase;

  /// @brief Field m_System, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_System, put = __cordl_internal_set_m_System))::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> m_System;

  /// @brief Field startLocomotion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_startLocomotion,
                      put = __cordl_internal_set_startLocomotion))::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* startLocomotion;

  __declspec(property(get = get_system, put = set_system))::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> system;

  /// @brief Method Awake, addr 0x3016b74, size 0x98, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method BeginLocomotion, addr 0x3014a0c, size 0xa8, virtual false, abstract: false, final false
  inline bool BeginLocomotion();

  /// @brief Method CanBeginLocomotion, addr 0x3014984, size 0x88, virtual false, abstract: false, final false
  inline bool CanBeginLocomotion();

  /// @brief Method EndLocomotion, addr 0x3014ab4, size 0xa8, virtual false, abstract: false, final false
  inline bool EndLocomotion();

  static inline ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* New_ctor();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const& __cordl_internal_get__locomotionPhase_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase& __cordl_internal_get__locomotionPhase_k__BackingField();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& __cordl_internal_get_beginLocomotion();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*> const& __cordl_internal_get_beginLocomotion() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& __cordl_internal_get_endLocomotion();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*> const& __cordl_internal_get_endLocomotion() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> const& __cordl_internal_get_m_System() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>& __cordl_internal_get_m_System();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& __cordl_internal_get_startLocomotion();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*> const& __cordl_internal_get_startLocomotion() const;

  constexpr void __cordl_internal_set__locomotionPhase_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase value);

  constexpr void __cordl_internal_set_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  constexpr void __cordl_internal_set_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  constexpr void __cordl_internal_set_m_System(::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> value);

  constexpr void __cordl_internal_set_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  /// @brief Method .ctor, addr 0x3014b74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_beginLocomotion, addr 0x3014070, size 0xb0, virtual false, abstract: false, final false
  inline void add_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  /// @brief Method add_endLocomotion, addr 0x3014120, size 0xb0, virtual false, abstract: false, final false
  inline void add_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  /// @brief Method add_startLocomotion, addr 0x3017d3c, size 0xb0, virtual false, abstract: false, final false
  inline void add_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  /// @brief Method get_locomotionPhase, addr 0x3017b10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase get_locomotionPhase();

  /// @brief Method get_system, addr 0x3017b00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> get_system();

  /// @brief Method remove_beginLocomotion, addr 0x30141d0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  /// @brief Method remove_endLocomotion, addr 0x3014280, size 0xb0, virtual false, abstract: false, final false
  inline void remove_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  /// @brief Method remove_startLocomotion, addr 0x3017dec, size 0xb0, virtual false, abstract: false, final false
  inline void remove_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* value);

  /// @brief Method set_locomotionPhase, addr 0x3017b18, size 0x8, virtual false, abstract: false, final false
  inline void set_locomotionPhase(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase value);

  /// @brief Method set_system, addr 0x3017b08, size 0x8, virtual false, abstract: false, final false
  inline void set_system(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocomotionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocomotionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocomotionProvider(LocomotionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocomotionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocomotionProvider(LocomotionProvider const&) = delete;

  /// @brief Field beginLocomotion, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* ___beginLocomotion;

  /// @brief Field endLocomotion, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* ___endLocomotion;

  /// @brief Field m_System, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> ___m_System;

  /// @brief Field <locomotionPhase>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase ____locomotionPhase_k__BackingField;

  /// @brief Field startLocomotion, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* ___startLocomotion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider, ___beginLocomotion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider, ___endLocomotion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider, ___m_System) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider, ____locomotionPhase_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider, ___startLocomotion) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*, "UnityEngine.XR.Interaction.Toolkit", "LocomotionProvider");
