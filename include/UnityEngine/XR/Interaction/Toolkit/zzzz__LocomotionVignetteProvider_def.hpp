#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocomotionVignetteProvider)
namespace UnityEngine::XR::Interaction::Toolkit {
class ITunnelingVignetteProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class VignetteParameters;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionVignetteProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider);
// Type: UnityEngine.XR.Interaction.Toolkit::LocomotionVignetteProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::LocomotionVignetteProvider*
class CORDL_TYPE LocomotionVignetteProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_locomotionProvider, put = set_locomotionProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> locomotionProvider;

  /// @brief Field m_Enabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Enabled, put = __cordl_internal_set_m_Enabled)) bool m_Enabled;

  /// @brief Field m_LocomotionProvider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocomotionProvider,
                      put = __cordl_internal_set_m_LocomotionProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> m_LocomotionProvider;

  /// @brief Field m_OverrideDefaultParameters, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverrideDefaultParameters, put = __cordl_internal_set_m_OverrideDefaultParameters)) bool m_OverrideDefaultParameters;

  /// @brief Field m_OverrideParameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OverrideParameters,
                      put = __cordl_internal_set_m_OverrideParameters))::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* m_OverrideParameters;

  __declspec(property(get = get_overrideDefaultParameters, put = set_overrideDefaultParameters)) bool overrideDefaultParameters;

  __declspec(property(get = get_overrideParameters, put = set_overrideParameters))::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* overrideParameters;

  __declspec(property(get = get_vignetteParameters))::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* vignetteParameters;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*() noexcept;

  static inline ::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider* New_ctor();

  constexpr bool const& __cordl_internal_get_m_Enabled() const;

  constexpr bool& __cordl_internal_get_m_Enabled();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> const& __cordl_internal_get_m_LocomotionProvider() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider>& __cordl_internal_get_m_LocomotionProvider();

  constexpr bool const& __cordl_internal_get_m_OverrideDefaultParameters() const;

  constexpr bool& __cordl_internal_get_m_OverrideDefaultParameters();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*& __cordl_internal_get_m_OverrideParameters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*> const& __cordl_internal_get_m_OverrideParameters() const;

  constexpr void __cordl_internal_set_m_Enabled(bool value);

  constexpr void __cordl_internal_set_m_LocomotionProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> value);

  constexpr void __cordl_internal_set_m_OverrideDefaultParameters(bool value);

  constexpr void __cordl_internal_set_m_OverrideParameters(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value);

  /// @brief Method .ctor, addr 0x301b6b8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabled, addr 0x301b668, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_locomotionProvider, addr 0x301b658, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> get_locomotionProvider();

  /// @brief Method get_overrideDefaultParameters, addr 0x301b67c, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideDefaultParameters();

  /// @brief Method get_overrideParameters, addr 0x301b690, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* get_overrideParameters();

  /// @brief Method get_vignetteParameters, addr 0x301b6a0, size 0x18, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* get_vignetteParameters();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* i___UnityEngine__XR__Interaction__Toolkit__ITunnelingVignetteProvider() noexcept;

  /// @brief Method set_enabled, addr 0x301b670, size 0xc, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_locomotionProvider, addr 0x301b660, size 0x8, virtual false, abstract: false, final false
  inline void set_locomotionProvider(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* value);

  /// @brief Method set_overrideDefaultParameters, addr 0x301b684, size 0xc, virtual false, abstract: false, final false
  inline void set_overrideDefaultParameters(bool value);

  /// @brief Method set_overrideParameters, addr 0x301b698, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideParameters(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocomotionVignetteProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocomotionVignetteProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocomotionVignetteProvider(LocomotionVignetteProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocomotionVignetteProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocomotionVignetteProvider(LocomotionVignetteProvider const&) = delete;

  /// @brief Field m_LocomotionProvider, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider> ___m_LocomotionProvider;

  /// @brief Field m_Enabled, offset: 0x18, size: 0x1, def value: None
  bool ___m_Enabled;

  /// @brief Field m_OverrideDefaultParameters, offset: 0x19, size: 0x1, def value: None
  bool ___m_OverrideDefaultParameters;

  /// @brief Field m_OverrideParameters, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* ___m_OverrideParameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider, ___m_LocomotionProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider, ___m_Enabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider, ___m_OverrideDefaultParameters) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider, ___m_OverrideParameters) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*, "UnityEngine.XR.Interaction.Toolkit", "LocomotionVignetteProvider");
