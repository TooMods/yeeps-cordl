#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRTintInteractableVisual)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRTintInteractableVisual__ShaderPropertyLookup;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRTintInteractableVisual;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRTintInteractableVisual__ShaderPropertyLookup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup);
// Type: ::ShaderPropertyLookup
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRTintInteractableVisual::ShaderPropertyLookup
#pragma pack(push, 0)
struct CORDL_TYPE __XRTintInteractableVisual__ShaderPropertyLookup {
public:
  // Declarations
  /// @brief Field emissionColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_emissionColor, put = setStaticF_emissionColor)) int32_t emissionColor;

  static inline int32_t getStaticF_emissionColor();

  static inline void setStaticF_emissionColor(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRTintInteractableVisual__ShaderPropertyLookup();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup, 0x1>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRTintInteractableVisual
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRTintInteractableVisual*
class CORDL_TYPE XRTintInteractableVisual : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ShaderPropertyLookup = ::UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup;

  /// @brief Field m_EmissionEnabled, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EmissionEnabled, put = __cordl_internal_set_m_EmissionEnabled)) bool m_EmissionEnabled;

  /// @brief Field m_HasLoggedMaterialInstance, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasLoggedMaterialInstance, put = __cordl_internal_set_m_HasLoggedMaterialInstance)) bool m_HasLoggedMaterialInstance;

  /// @brief Field m_HoverInteractable, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HoverInteractable,
                      put = __cordl_internal_set_m_HoverInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* m_HoverInteractable;

  /// @brief Field m_Interactable, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Interactable, put = __cordl_internal_set_m_Interactable))::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* m_Interactable;

  /// @brief Field m_SelectInteractable, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectInteractable,
                      put = __cordl_internal_set_m_SelectInteractable))::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* m_SelectInteractable;

  /// @brief Field m_TintColor, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TintColor, put = __cordl_internal_set_m_TintColor))::UnityEngine::Color m_TintColor;

  /// @brief Field m_TintOnHover, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TintOnHover, put = __cordl_internal_set_m_TintOnHover)) bool m_TintOnHover;

  /// @brief Field m_TintOnSelection, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TintOnSelection, put = __cordl_internal_set_m_TintOnSelection)) bool m_TintOnSelection;

  /// @brief Field m_TintPropertyBlock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TintPropertyBlock, put = __cordl_internal_set_m_TintPropertyBlock))::UnityEngine::MaterialPropertyBlock* m_TintPropertyBlock;

  /// @brief Field m_TintRenderers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TintRenderers,
                      put = __cordl_internal_set_m_TintRenderers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* m_TintRenderers;

  /// @brief Field s_Materials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Materials, put = setStaticF_s_Materials))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* s_Materials;

  __declspec(property(get = get_tintColor, put = set_tintColor))::UnityEngine::Color tintColor;

  __declspec(property(get = get_tintOnHover, put = set_tintOnHover)) bool tintOnHover;

  __declspec(property(get = get_tintOnSelection, put = set_tintOnSelection)) bool tintOnSelection;

  __declspec(property(get = get_tintRenderers, put = set_tintRenderers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* tintRenderers;

  /// @brief Method Awake, addr 0x259ac3c, size 0x724, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetEmissionEnabled, addr 0x259bcd4, size 0x404, virtual true, abstract: false, final false
  inline bool GetEmissionEnabled();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual* New_ctor();

  /// @brief Method OnDestroy, addr 0x259b360, size 0x440, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnFirstHoverEntered, addr 0x259c0d8, size 0x1c, virtual false, abstract: false, final false
  inline void OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args);

  /// @brief Method OnFirstSelectEntered, addr 0x259c1e0, size 0x1c, virtual false, abstract: false, final false
  inline void OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);

  /// @brief Method OnLastHoverExited, addr 0x259c0f4, size 0xec, virtual false, abstract: false, final false
  inline void OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args);

  /// @brief Method OnLastSelectExited, addr 0x259c1fc, size 0xec, virtual false, abstract: false, final false
  inline void OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args);

  /// @brief Method SetTint, addr 0x259b7a0, size 0x534, virtual true, abstract: false, final false
  inline void SetTint(bool on);

  constexpr bool const& __cordl_internal_get_m_EmissionEnabled() const;

  constexpr bool& __cordl_internal_get_m_EmissionEnabled();

  constexpr bool const& __cordl_internal_get_m_HasLoggedMaterialInstance() const;

  constexpr bool& __cordl_internal_get_m_HasLoggedMaterialInstance();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*& __cordl_internal_get_m_HoverInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*> const& __cordl_internal_get_m_HoverInteractable() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& __cordl_internal_get_m_Interactable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const& __cordl_internal_get_m_Interactable() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*& __cordl_internal_get_m_SelectInteractable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> const& __cordl_internal_get_m_SelectInteractable() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_TintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_TintColor();

  constexpr bool const& __cordl_internal_get_m_TintOnHover() const;

  constexpr bool& __cordl_internal_get_m_TintOnHover();

  constexpr bool const& __cordl_internal_get_m_TintOnSelection() const;

  constexpr bool& __cordl_internal_get_m_TintOnSelection();

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_TintPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get_m_TintPropertyBlock() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_m_TintRenderers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get_m_TintRenderers() const;

  constexpr void __cordl_internal_set_m_EmissionEnabled(bool value);

  constexpr void __cordl_internal_set_m_HasLoggedMaterialInstance(bool value);

  constexpr void __cordl_internal_set_m_HoverInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* value);

  constexpr void __cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value);

  constexpr void __cordl_internal_set_m_SelectInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value);

  constexpr void __cordl_internal_set_m_TintColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_TintOnHover(bool value);

  constexpr void __cordl_internal_set_m_TintOnSelection(bool value);

  constexpr void __cordl_internal_set_m_TintPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_m_TintRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* value);

  /// @brief Method .ctor, addr 0x259c2e8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* getStaticF_s_Materials();

  /// @brief Method get_tintColor, addr 0x259abec, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_tintColor();

  /// @brief Method get_tintOnHover, addr 0x259ac04, size 0x8, virtual false, abstract: false, final false
  inline bool get_tintOnHover();

  /// @brief Method get_tintOnSelection, addr 0x259ac18, size 0x8, virtual false, abstract: false, final false
  inline bool get_tintOnSelection();

  /// @brief Method get_tintRenderers, addr 0x259ac2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* get_tintRenderers();

  static inline void setStaticF_s_Materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value);

  /// @brief Method set_tintColor, addr 0x259abf8, size 0xc, virtual false, abstract: false, final false
  inline void set_tintColor(::UnityEngine::Color value);

  /// @brief Method set_tintOnHover, addr 0x259ac0c, size 0xc, virtual false, abstract: false, final false
  inline void set_tintOnHover(bool value);

  /// @brief Method set_tintOnSelection, addr 0x259ac20, size 0xc, virtual false, abstract: false, final false
  inline void set_tintOnSelection(bool value);

  /// @brief Method set_tintRenderers, addr 0x259ac34, size 0x8, virtual false, abstract: false, final false
  inline void set_tintRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRTintInteractableVisual();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRTintInteractableVisual", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRTintInteractableVisual(XRTintInteractableVisual&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRTintInteractableVisual", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRTintInteractableVisual(XRTintInteractableVisual const&) = delete;

  /// @brief Field m_TintColor, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ___m_TintColor;

  /// @brief Field m_TintOnHover, offset: 0x28, size: 0x1, def value: None
  bool ___m_TintOnHover;

  /// @brief Field m_TintOnSelection, offset: 0x29, size: 0x1, def value: None
  bool ___m_TintOnSelection;

  /// @brief Field m_TintRenderers, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* ___m_TintRenderers;

  /// @brief Field m_Interactable, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* ___m_Interactable;

  /// @brief Field m_HoverInteractable, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* ___m_HoverInteractable;

  /// @brief Field m_SelectInteractable, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* ___m_SelectInteractable;

  /// @brief Field m_TintPropertyBlock, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_TintPropertyBlock;

  /// @brief Field m_EmissionEnabled, offset: 0x58, size: 0x1, def value: None
  bool ___m_EmissionEnabled;

  /// @brief Field m_HasLoggedMaterialInstance, offset: 0x59, size: 0x1, def value: None
  bool ___m_HasLoggedMaterialInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_TintColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_TintOnHover) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_TintOnSelection) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_TintRenderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_Interactable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_HoverInteractable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_SelectInteractable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_TintPropertyBlock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_EmissionEnabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual, ___m_HasLoggedMaterialInstance) == 0x59, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*, "UnityEngine.XR.Interaction.Toolkit", "XRTintInteractableVisual");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup, "UnityEngine.XR.Interaction.Toolkit",
                       "XRTintInteractableVisual/ShaderPropertyLookup");
