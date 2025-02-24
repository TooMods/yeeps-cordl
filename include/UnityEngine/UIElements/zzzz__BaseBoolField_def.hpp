#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BaseBoolField)
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseBoolField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseBoolField);
// Type: UnityEngine.UIElements::BaseBoolField
// SizeInfo { instance_size: 1064, native_size: -1, calculated_instance_size: 1064, calculated_native_size: 1064, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BaseBoolField*
class CORDL_TYPE BaseBoolField : public ::UnityEngine::UIElements::BaseField_1<bool> {
public:
  // Declarations
  /// @brief Field m_CheckMark, offset 0x410, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CheckMark, put = __cordl_internal_set_m_CheckMark))::UnityEngine::UIElements::VisualElement* m_CheckMark;

  /// @brief Field m_Clickable, offset 0x418, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clickable, put = __cordl_internal_set_m_Clickable))::UnityEngine::UIElements::Clickable* m_Clickable;

  /// @brief Field m_Label, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Label, put = __cordl_internal_set_m_Label))::UnityEngine::UIElements::Label* m_Label;

  /// @brief Field m_OriginalText, offset 0x420, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalText, put = __cordl_internal_set_m_OriginalText))::StringW m_OriginalText;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  /// @brief Method InitLabel, addr 0x2cd952c, size 0x94, virtual true, abstract: false, final false
  inline void InitLabel();

  static inline ::UnityEngine::UIElements::BaseBoolField* New_ctor(::StringW label);

  /// @brief Method OnClickEvent, addr 0x2cd96a0, size 0x288, virtual false, abstract: false, final false
  inline void OnClickEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method OnKeyDown, addr 0x2cd93fc, size 0x114, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnNavigationSubmit, addr 0x2cd93c8, size 0x34, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method SetValueWithoutNotify, addr 0x2cd95c0, size 0xe0, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(bool newValue);

  /// @brief Method ToggleValue, addr 0x2cd9928, size 0x38, virtual true, abstract: false, final false
  inline void ToggleValue();

  /// @brief Method UpdateMixedValueContent, addr 0x2cd9960, size 0x184, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CheckMark();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_CheckMark() const;

  constexpr ::UnityEngine::UIElements::Clickable*& __cordl_internal_get_m_Clickable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Clickable*> const& __cordl_internal_get_m_Clickable() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_Label();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& __cordl_internal_get_m_Label() const;

  constexpr ::StringW const& __cordl_internal_get_m_OriginalText() const;

  constexpr ::StringW& __cordl_internal_get_m_OriginalText();

  constexpr void __cordl_internal_set_m_CheckMark(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Clickable(::UnityEngine::UIElements::Clickable* value);

  constexpr void __cordl_internal_set_m_Label(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_OriginalText(::StringW value);

  /// @brief Method .ctor, addr 0x2cd90a4, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  /// @brief Method get_text, addr 0x2cd9510, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x2cd9340, size 0x88, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseBoolField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseBoolField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseBoolField(BaseBoolField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseBoolField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseBoolField(BaseBoolField const&) = delete;

  /// @brief Field m_Label, offset: 0x408, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_Label;

  /// @brief Field m_CheckMark, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CheckMark;

  /// @brief Field m_Clickable, offset: 0x418, size: 0x8, def value: None
  ::UnityEngine::UIElements::Clickable* ___m_Clickable;

  /// @brief Field m_OriginalText, offset: 0x420, size: 0x8, def value: None
  ::StringW ___m_OriginalText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseBoolField, 0x428>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ___m_Label) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ___m_CheckMark) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ___m_Clickable) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseBoolField, ___m_OriginalText) == 0x420, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseBoolField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseBoolField*, "UnityEngine.UIElements", "BaseBoolField");
