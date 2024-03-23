#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterControllerDriver)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionSystem;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRRig;
}
namespace UnityEngine {
class CharacterController;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class CharacterControllerDriver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver);
// Type: UnityEngine.XR.Interaction.Toolkit::CharacterControllerDriver
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::CharacterControllerDriver*
class CORDL_TYPE CharacterControllerDriver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_characterController))::UnityW<::UnityEngine::CharacterController> characterController;

  __declspec(property(get = get_locomotionProvider, put = set_locomotionProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> locomotionProvider;

  /// @brief Field m_CharacterController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CharacterController, put = __cordl_internal_set_m_CharacterController))::UnityW<::UnityEngine::CharacterController> m_CharacterController;

  /// @brief Field m_LocomotionProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocomotionProvider,
                      put = __cordl_internal_set_m_LocomotionProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> m_LocomotionProvider;

  /// @brief Field m_MaxHeight, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxHeight, put = __cordl_internal_set_m_MaxHeight)) float_t m_MaxHeight;

  /// @brief Field m_MinHeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinHeight, put = __cordl_internal_set_m_MinHeight)) float_t m_MinHeight;

  /// @brief Field m_XROrigin, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XROrigin, put = __cordl_internal_set_m_XROrigin))::UnityW<::Unity::XR::CoreUtils::XROrigin> m_XROrigin;

  __declspec(property(get = get_maxHeight, put = set_maxHeight)) float_t maxHeight;

  __declspec(property(get = get_minHeight, put = set_minHeight)) float_t minHeight;

  __declspec(property(get = get_xrOrigin))::UnityW<::Unity::XR::CoreUtils::XROrigin> xrOrigin;

  __declspec(property(get = get_xrRig))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig> xrRig;

  /// @brief Method Awake, addr 0x3013dc0, size 0x144, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver* New_ctor();

  /// @brief Method OnBeginLocomotion, addr 0x3014330, size 0xc, virtual false, abstract: false, final false
  inline void OnBeginLocomotion(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* system);

  /// @brief Method OnDisable, addr 0x3013f0c, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3013f04, size 0x8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEndLocomotion, addr 0x301433c, size 0xc, virtual false, abstract: false, final false
  inline void OnEndLocomotion(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* system);

  /// @brief Method SetupCharacterController, addr 0x3013b88, size 0x208, virtual false, abstract: false, final false
  inline void SetupCharacterController();

  /// @brief Method Start, addr 0x3013f14, size 0x20, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Subscribe, addr 0x3013a70, size 0x118, virtual false, abstract: false, final false
  inline void Subscribe(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* provider);

  /// @brief Method Unsubscribe, addr 0x3013958, size 0x118, virtual false, abstract: false, final false
  inline void Unsubscribe(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* provider);

  /// @brief Method UpdateCharacterController, addr 0x3013f34, size 0x13c, virtual true, abstract: false, final false
  inline void UpdateCharacterController();

  constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_CharacterController() const;

  constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_CharacterController();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> const& __cordl_internal_get_m_LocomotionProvider() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider>& __cordl_internal_get_m_LocomotionProvider();

  constexpr float_t const& __cordl_internal_get_m_MaxHeight() const;

  constexpr float_t& __cordl_internal_get_m_MaxHeight();

  constexpr float_t const& __cordl_internal_get_m_MinHeight() const;

  constexpr float_t& __cordl_internal_get_m_MinHeight();

  constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_XROrigin() const;

  constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_XROrigin();

  constexpr void __cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController> value);

  constexpr void __cordl_internal_set_m_LocomotionProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> value);

  constexpr void __cordl_internal_set_m_MaxHeight(float_t value);

  constexpr void __cordl_internal_set_m_MinHeight(float_t value);

  constexpr void __cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin> value);

  /// @brief Method .ctor, addr 0x30143c4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_characterController, addr 0x3013db8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::CharacterController> get_characterController();

  /// @brief Method get_locomotionProvider, addr 0x3013904, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> get_locomotionProvider();

  /// @brief Method get_maxHeight, addr 0x3013da0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxHeight();

  /// @brief Method get_minHeight, addr 0x3013d90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_xrOrigin, addr 0x3013db0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> get_xrOrigin();

  /// @brief Method get_xrRig, addr 0x3014348, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig> get_xrRig();

  /// @brief Method set_locomotionProvider, addr 0x301390c, size 0x4c, virtual false, abstract: false, final false
  inline void set_locomotionProvider(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* value);

  /// @brief Method set_maxHeight, addr 0x3013da8, size 0x8, virtual false, abstract: false, final false
  inline void set_maxHeight(float_t value);

  /// @brief Method set_minHeight, addr 0x3013d98, size 0x8, virtual false, abstract: false, final false
  inline void set_minHeight(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterControllerDriver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CharacterControllerDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharacterControllerDriver(CharacterControllerDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharacterControllerDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharacterControllerDriver(CharacterControllerDriver const&) = delete;

  /// @brief Field m_LocomotionProvider, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> ___m_LocomotionProvider;

  /// @brief Field m_MinHeight, offset: 0x20, size: 0x4, def value: None
  float_t ___m_MinHeight;

  /// @brief Field m_MaxHeight, offset: 0x24, size: 0x4, def value: None
  float_t ___m_MaxHeight;

  /// @brief Field m_XROrigin, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Unity::XR::CoreUtils::XROrigin> ___m_XROrigin;

  /// @brief Field m_CharacterController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CharacterController> ___m_CharacterController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver, ___m_LocomotionProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver, ___m_MinHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver, ___m_MaxHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver, ___m_XROrigin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver, ___m_CharacterController) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*, "UnityEngine.XR.Interaction.Toolkit", "CharacterControllerDriver");
