#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ApplicationVersionDisplayUI)
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class ApplicationVersionDisplayUI;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ApplicationVersionDisplayUI);
// Type: ::ApplicationVersionDisplayUI
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ApplicationVersionDisplayUI*
class CORDL_TYPE ApplicationVersionDisplayUI : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field alsoShowCompatabilityVersion, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_alsoShowCompatabilityVersion, put = __cordl_internal_set_alsoShowCompatabilityVersion)) bool alsoShowCompatabilityVersion;

  /// @brief Field versionText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_versionText, put = __cordl_internal_set_versionText))::UnityW<::UnityEngine::UI::Text> versionText;

  static inline ::GlobalNamespace::ApplicationVersionDisplayUI* New_ctor();

  /// @brief Method Start, addr 0x153fddc, size 0x10c, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get_alsoShowCompatabilityVersion() const;

  constexpr bool& __cordl_internal_get_alsoShowCompatabilityVersion();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_versionText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_versionText();

  constexpr void __cordl_internal_set_alsoShowCompatabilityVersion(bool value);

  constexpr void __cordl_internal_set_versionText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x153fee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationVersionDisplayUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ApplicationVersionDisplayUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationVersionDisplayUI(ApplicationVersionDisplayUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationVersionDisplayUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationVersionDisplayUI(ApplicationVersionDisplayUI const&) = delete;

  /// @brief Field versionText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___versionText;

  /// @brief Field alsoShowCompatabilityVersion, offset: 0x20, size: 0x1, def value: None
  bool ___alsoShowCompatabilityVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ApplicationVersionDisplayUI, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplicationVersionDisplayUI, ___versionText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ApplicationVersionDisplayUI, ___alsoShowCompatabilityVersion) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ApplicationVersionDisplayUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ApplicationVersionDisplayUI*, "", "ApplicationVersionDisplayUI");
