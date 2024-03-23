#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextToggleIsOnTransition)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class TextToggleIsOnTransition;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition);
// Type: Photon.Pun.UtilityScripts::TextToggleIsOnTransition
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::TextToggleIsOnTransition*
class CORDL_TYPE TextToggleIsOnTransition : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field HoverOffColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_HoverOffColor, put = __cordl_internal_set_HoverOffColor))::UnityEngine::Color HoverOffColor;

  /// @brief Field HoverOnColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_HoverOnColor, put = __cordl_internal_set_HoverOnColor))::UnityEngine::Color HoverOnColor;

  /// @brief Field NormalOffColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_NormalOffColor, put = __cordl_internal_set_NormalOffColor))::UnityEngine::Color NormalOffColor;

  /// @brief Field NormalOnColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_NormalOnColor, put = __cordl_internal_set_NormalOnColor))::UnityEngine::Color NormalOnColor;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::UnityEngine::UI::Text> _text;

  /// @brief Field isHover, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isHover, put = __cordl_internal_set_isHover)) bool isHover;

  /// @brief Field toggle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_toggle, put = __cordl_internal_set_toggle))::UnityW<::UnityEngine::UI::Toggle> toggle;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  static inline ::Photon::Pun::UtilityScripts::TextToggleIsOnTransition* New_ctor();

  /// @brief Method OnDisable, addr 0x1ecd024, size 0xa8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1eccee0, size 0xe0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPointerEnter, addr 0x1ecd0cc, size 0x74, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x1ecd140, size 0x70, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnValueChanged, addr 0x1eccfc0, size 0x64, virtual false, abstract: false, final false
  inline void OnValueChanged(bool isOn);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_HoverOffColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_HoverOffColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_HoverOnColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_HoverOnColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_NormalOffColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_NormalOffColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_NormalOnColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_NormalOnColor();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__text();

  constexpr bool const& __cordl_internal_get_isHover() const;

  constexpr bool& __cordl_internal_get_isHover();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_toggle();

  constexpr void __cordl_internal_set_HoverOffColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_HoverOnColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_NormalOffColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_NormalOnColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__text(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_isHover(bool value);

  constexpr void __cordl_internal_set_toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x1ecd1b0, size 0x60c84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextToggleIsOnTransition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextToggleIsOnTransition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextToggleIsOnTransition(TextToggleIsOnTransition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextToggleIsOnTransition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextToggleIsOnTransition(TextToggleIsOnTransition const&) = delete;

  /// @brief Field toggle, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___toggle;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ____text;

  /// @brief Field NormalOnColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___NormalOnColor;

  /// @brief Field NormalOffColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ___NormalOffColor;

  /// @brief Field HoverOnColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___HoverOnColor;

  /// @brief Field HoverOffColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ___HoverOffColor;

  /// @brief Field isHover, offset: 0x68, size: 0x1, def value: None
  bool ___isHover;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::TextToggleIsOnTransition, 0x70>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition, ___toggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition, ___NormalOnColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition, ___NormalOffColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition, ___HoverOnColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition, ___HoverOffColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition, ___isHover) == 0x68, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition*, "Photon.Pun.UtilityScripts", "TextToggleIsOnTransition");
