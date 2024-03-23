#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerEnumField)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class __DebugUI__EnumField;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerEnumField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField);
// Type: UnityEngine.Rendering.UI::DebugUIHandlerEnumField
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerEnumField*
class CORDL_TYPE DebugUIHandlerEnumField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Field, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field))::UnityEngine::Rendering::__DebugUI__EnumField* m_Field;

  /// @brief Field nameLabel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel))::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field nextButtonText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nextButtonText, put = __cordl_internal_set_nextButtonText))::UnityW<::UnityEngine::UI::Text> nextButtonText;

  /// @brief Field previousButtonText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_previousButtonText, put = __cordl_internal_set_previousButtonText))::UnityW<::UnityEngine::UI::Text> previousButtonText;

  /// @brief Field valueLabel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_valueLabel, put = __cordl_internal_set_valueLabel))::UnityW<::UnityEngine::UI::Text> valueLabel;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField* New_ctor();

  /// @brief Method OnAction, addr 0x1d94dc8, size 0x10, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDecrement, addr 0x1d94f40, size 0x194, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnDeselection, addr 0x1d94cb8, size 0x110, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnIncrement, addr 0x1d94dd8, size 0x168, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method OnSelection, addr 0x1d94ba0, size 0x118, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x1d94b08, size 0x98, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  /// @brief Method UpdateValueLabel, addr 0x1d950d4, size 0xd8, virtual true, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr ::UnityEngine::Rendering::__DebugUI__EnumField*& __cordl_internal_get_m_Field();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__EnumField*> const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nextButtonText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nextButtonText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_previousButtonText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_previousButtonText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_valueLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_valueLabel();

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::__DebugUI__EnumField* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_nextButtonText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_previousButtonText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x1d951ac, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerEnumField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerEnumField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerEnumField(DebugUIHandlerEnumField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerEnumField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerEnumField(DebugUIHandlerEnumField const&) = delete;

  /// @brief Field nextButtonText, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nextButtonText;

  /// @brief Field previousButtonText, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___previousButtonText;

  /// @brief Field nameLabel, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueLabel, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___valueLabel;

  /// @brief Field m_Field, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__EnumField* ___m_Field;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField, ___nextButtonText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField, ___previousButtonText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField, ___nameLabel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField, ___valueLabel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField, ___m_Field) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*, "UnityEngine.Rendering.UI", "DebugUIHandlerEnumField");
