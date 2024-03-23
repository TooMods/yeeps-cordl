#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PokeFeedbackController)
namespace GlobalNamespace {
class InputController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRPokeInteractor;
}
// Forward declare root types
namespace GlobalNamespace {
class PokeFeedbackController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PokeFeedbackController);
// Type: ::PokeFeedbackController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 86, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PokeFeedbackController*
class CORDL_TYPE PokeFeedbackController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field defaultLayerMask, offset 0x4c, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultLayerMask, put = __cordl_internal_set_defaultLayerMask))::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask defaultLayerMask;

  /// @brief Field hasExternalRestriction, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_hasExternalRestriction, put = __cordl_internal_set_hasExternalRestriction)) bool hasExternalRestriction;

  /// @brief Field hasInitializedDefaultLayerMask, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_hasInitializedDefaultLayerMask, put = __cordl_internal_set_hasInitializedDefaultLayerMask)) bool hasInitializedDefaultLayerMask;

  /// @brief Field hasInternalRestriction, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get_hasInternalRestriction, put = __cordl_internal_set_hasInternalRestriction)) bool hasInternalRestriction;

  /// @brief Field inputController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inputController, put = __cordl_internal_set_inputController))::UnityW<::GlobalNamespace::InputController> inputController;

  /// @brief Field interactor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_interactor, put = __cordl_internal_set_interactor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor> interactor;

  /// @brief Field interactorToRestrict, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_interactorToRestrict, put = __cordl_internal_set_interactorToRestrict))::UnityW<::GlobalNamespace::PokeFeedbackController> interactorToRestrict;

  /// @brief Field isRestrictActive, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isRestrictActive, put = __cordl_internal_set_isRestrictActive)) bool isRestrictActive;

  /// @brief Field isSelecting, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_isSelecting, put = __cordl_internal_set_isSelecting)) bool isSelecting;

  /// @brief Field restrictPokeWhenInputSelecting, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_restrictPokeWhenInputSelecting, put = __cordl_internal_set_restrictPokeWhenInputSelecting)) bool restrictPokeWhenInputSelecting;

  /// @brief Field restrictRemoveTimer, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_restrictRemoveTimer, put = __cordl_internal_set_restrictRemoveTimer)) float_t restrictRemoveTimer;

  /// @brief Field restrictionCooldown, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_restrictionCooldown, put = __cordl_internal_set_restrictionCooldown)) float_t restrictionCooldown;

  /// @brief Field right, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_right, put = __cordl_internal_set_right)) bool right;

  static inline ::GlobalNamespace::PokeFeedbackController* New_ctor();

  /// @brief Method OnPokeSelectEnter, addr 0x29d94e4, size 0x110, virtual false, abstract: false, final false
  inline void OnPokeSelectEnter();

  /// @brief Method OnPokeSelectExit, addr 0x29d9628, size 0x94, virtual false, abstract: false, final false
  inline void OnPokeSelectExit();

  /// @brief Method RefreshRestrictedState, addr 0x29d97a0, size 0x20, virtual false, abstract: false, final false
  inline void RefreshRestrictedState();

  /// @brief Method SetHasExternalRestriction, addr 0x29d95f4, size 0x34, virtual false, abstract: false, final false
  inline void SetHasExternalRestriction(bool newHasRestriction);

  /// @brief Method SetHasInternalRestriction, addr 0x29d9770, size 0x30, virtual false, abstract: false, final false
  inline void SetHasInternalRestriction(bool newHasRestriction);

  /// @brief Method SetIsRestricted, addr 0x29d97c0, size 0x5c, virtual false, abstract: false, final false
  inline void SetIsRestricted(bool newIsRestricted);

  /// @brief Method Update, addr 0x29d96bc, size 0xb4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& __cordl_internal_get_defaultLayerMask() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& __cordl_internal_get_defaultLayerMask();

  constexpr bool const& __cordl_internal_get_hasExternalRestriction() const;

  constexpr bool& __cordl_internal_get_hasExternalRestriction();

  constexpr bool const& __cordl_internal_get_hasInitializedDefaultLayerMask() const;

  constexpr bool& __cordl_internal_get_hasInitializedDefaultLayerMask();

  constexpr bool const& __cordl_internal_get_hasInternalRestriction() const;

  constexpr bool& __cordl_internal_get_hasInternalRestriction();

  constexpr ::UnityW<::GlobalNamespace::InputController> const& __cordl_internal_get_inputController() const;

  constexpr ::UnityW<::GlobalNamespace::InputController>& __cordl_internal_get_inputController();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor> const& __cordl_internal_get_interactor() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor>& __cordl_internal_get_interactor();

  constexpr ::UnityW<::GlobalNamespace::PokeFeedbackController> const& __cordl_internal_get_interactorToRestrict() const;

  constexpr ::UnityW<::GlobalNamespace::PokeFeedbackController>& __cordl_internal_get_interactorToRestrict();

  constexpr bool const& __cordl_internal_get_isRestrictActive() const;

  constexpr bool& __cordl_internal_get_isRestrictActive();

  constexpr bool const& __cordl_internal_get_isSelecting() const;

  constexpr bool& __cordl_internal_get_isSelecting();

  constexpr bool const& __cordl_internal_get_restrictPokeWhenInputSelecting() const;

  constexpr bool& __cordl_internal_get_restrictPokeWhenInputSelecting();

  constexpr float_t const& __cordl_internal_get_restrictRemoveTimer() const;

  constexpr float_t& __cordl_internal_get_restrictRemoveTimer();

  constexpr float_t const& __cordl_internal_get_restrictionCooldown() const;

  constexpr float_t& __cordl_internal_get_restrictionCooldown();

  constexpr bool const& __cordl_internal_get_right() const;

  constexpr bool& __cordl_internal_get_right();

  constexpr void __cordl_internal_set_defaultLayerMask(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask value);

  constexpr void __cordl_internal_set_hasExternalRestriction(bool value);

  constexpr void __cordl_internal_set_hasInitializedDefaultLayerMask(bool value);

  constexpr void __cordl_internal_set_hasInternalRestriction(bool value);

  constexpr void __cordl_internal_set_inputController(::UnityW<::GlobalNamespace::InputController> value);

  constexpr void __cordl_internal_set_interactor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor> value);

  constexpr void __cordl_internal_set_interactorToRestrict(::UnityW<::GlobalNamespace::PokeFeedbackController> value);

  constexpr void __cordl_internal_set_isRestrictActive(bool value);

  constexpr void __cordl_internal_set_isSelecting(bool value);

  constexpr void __cordl_internal_set_restrictPokeWhenInputSelecting(bool value);

  constexpr void __cordl_internal_set_restrictRemoveTimer(float_t value);

  constexpr void __cordl_internal_set_restrictionCooldown(float_t value);

  constexpr void __cordl_internal_set_right(bool value);

  /// @brief Method .ctor, addr 0x29d981c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PokeFeedbackController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PokeFeedbackController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PokeFeedbackController(PokeFeedbackController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PokeFeedbackController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PokeFeedbackController(PokeFeedbackController const&) = delete;

  /// @brief Field right, offset: 0x18, size: 0x1, def value: None
  bool ___right;

  /// @brief Field isSelecting, offset: 0x19, size: 0x1, def value: None
  bool ___isSelecting;

  /// @brief Field interactor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRPokeInteractor> ___interactor;

  /// @brief Field inputController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::InputController> ___inputController;

  /// @brief Field restrictPokeWhenInputSelecting, offset: 0x30, size: 0x1, def value: None
  bool ___restrictPokeWhenInputSelecting;

  /// @brief Field interactorToRestrict, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PokeFeedbackController> ___interactorToRestrict;

  /// @brief Field restrictionCooldown, offset: 0x40, size: 0x4, def value: None
  float_t ___restrictionCooldown;

  /// @brief Field restrictRemoveTimer, offset: 0x44, size: 0x4, def value: None
  float_t ___restrictRemoveTimer;

  /// @brief Field isRestrictActive, offset: 0x48, size: 0x1, def value: None
  bool ___isRestrictActive;

  /// @brief Field hasInitializedDefaultLayerMask, offset: 0x49, size: 0x1, def value: None
  bool ___hasInitializedDefaultLayerMask;

  /// @brief Field defaultLayerMask, offset: 0x4c, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask ___defaultLayerMask;

  /// @brief Field hasExternalRestriction, offset: 0x54, size: 0x1, def value: None
  bool ___hasExternalRestriction;

  /// @brief Field hasInternalRestriction, offset: 0x55, size: 0x1, def value: None
  bool ___hasInternalRestriction;

  /// @brief Field restrictLayerMask offset 0xffffffff size 0x4
  static constexpr int32_t restrictLayerMask{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PokeFeedbackController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___right) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___isSelecting) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___inputController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___restrictPokeWhenInputSelecting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___interactorToRestrict) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___restrictionCooldown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___restrictRemoveTimer) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___isRestrictActive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___hasInitializedDefaultLayerMask) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___defaultLayerMask) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___hasExternalRestriction) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeFeedbackController, ___hasInternalRestriction) == 0x55, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PokeFeedbackController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PokeFeedbackController*, "", "PokeFeedbackController");
