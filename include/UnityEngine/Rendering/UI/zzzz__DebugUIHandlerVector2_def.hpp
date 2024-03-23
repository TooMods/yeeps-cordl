#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerVector2)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerContainer;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerIndirectFloatField;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering::UI {
class UIFoldout;
}
namespace UnityEngine::Rendering {
class __DebugUI__Vector2Field;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerVector2;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerVector2);
// Type: UnityEngine.Rendering.UI::DebugUIHandlerVector2
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerVector2*
class CORDL_TYPE DebugUIHandlerVector2 : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field fieldX, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldX, put = __cordl_internal_set_fieldX))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldX;

  /// @brief Field fieldY, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldY, put = __cordl_internal_set_fieldY))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldY;

  /// @brief Field m_Container, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> m_Container;

  /// @brief Field m_Field, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field))::UnityEngine::Rendering::__DebugUI__Vector2Field* m_Field;

  /// @brief Field nameLabel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel))::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field valueToggle, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_valueToggle, put = __cordl_internal_set_valueToggle))::UnityW<::UnityEngine::Rendering::UI::UIFoldout> valueToggle;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerVector2* New_ctor();

  /// @brief Method Next, addr 0x1d9907c, size 0xc8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnAction, addr 0x1d99054, size 0x28, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDecrement, addr 0x1d99034, size 0x20, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnDeselection, addr 0x1d98fe4, size 0x30, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnIncrement, addr 0x1d99014, size 0x20, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method OnSelection, addr 0x1d98f00, size 0xe4, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetValue, addr 0x1d98e60, size 0xa0, virtual false, abstract: false, final false
  inline void SetValue(float_t v, bool x, bool y);

  /// @brief Method SetWidget, addr 0x1d98b5c, size 0x200, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  /// @brief Method SetupSettings, addr 0x1d98d5c, size 0x104, virtual false, abstract: false, final false
  inline void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field);

  /// @brief Method <SetWidget>b__6_0, addr 0x1d99164, size 0x50, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__6_0();

  /// @brief Method <SetWidget>b__6_1, addr 0x1d991b4, size 0xc, virtual false, abstract: false, final false
  inline void _SetWidget_b__6_1(float_t x);

  /// @brief Method <SetWidget>b__6_2, addr 0x1d991c0, size 0x58, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__6_2();

  /// @brief Method <SetWidget>b__6_3, addr 0x1d99218, size 0xc, virtual false, abstract: false, final false
  inline void _SetWidget_b__6_3(float_t x);

  /// @brief Method <SetupSettings>b__8_0, addr 0x1d99224, size 0x1c, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__8_0();

  /// @brief Method <SetupSettings>b__8_1, addr 0x1d99240, size 0x1c, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__8_1();

  /// @brief Method <SetupSettings>b__8_2, addr 0x1d9925c, size 0x20, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__8_2();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldX() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldX();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldY() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldY();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& __cordl_internal_get_m_Container();

  constexpr ::UnityEngine::Rendering::__DebugUI__Vector2Field*& __cordl_internal_get_m_Field();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__Vector2Field*> const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> const& __cordl_internal_get_valueToggle() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout>& __cordl_internal_get_valueToggle();

  constexpr void __cordl_internal_set_fieldX(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_fieldY(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value);

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::__DebugUI__Vector2Field* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_valueToggle(::UnityW<::UnityEngine::Rendering::UI::UIFoldout> value);

  /// @brief Method .ctor, addr 0x1d99144, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerVector2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerVector2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerVector2(DebugUIHandlerVector2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerVector2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerVector2(DebugUIHandlerVector2 const&) = delete;

  /// @brief Field nameLabel, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueToggle, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> ___valueToggle;

  /// @brief Field fieldX, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldX;

  /// @brief Field fieldY, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldY;

  /// @brief Field m_Field, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__Vector2Field* ___m_Field;

  /// @brief Field m_Container, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerVector2, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector2, ___nameLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector2, ___valueToggle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector2, ___fieldX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector2, ___fieldY) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector2, ___m_Field) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector2, ___m_Container) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerVector2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerVector2*, "UnityEngine.Rendering.UI", "DebugUIHandlerVector2");
