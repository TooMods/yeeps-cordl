#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerBitField)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerContainer;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerIndirectToggle;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering::UI {
class UIFoldout;
}
namespace UnityEngine::Rendering {
class __DebugUI__BitField;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerBitField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerBitField);
// Type: UnityEngine.Rendering.UI::DebugUIHandlerBitField
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerBitField*
class CORDL_TYPE DebugUIHandlerBitField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Container, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container))::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> m_Container;

  /// @brief Field m_Field, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field))::UnityEngine::Rendering::__DebugUI__BitField* m_Field;

  /// @brief Field nameLabel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel))::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field toggles, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_toggles,
                      put = __cordl_internal_set_toggles))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* toggles;

  /// @brief Field valueToggle, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_valueToggle, put = __cordl_internal_set_valueToggle))::UnityW<::UnityEngine::Rendering::UI::UIFoldout> valueToggle;

  /// @brief Method GetValue, addr 0x1d90dd0, size 0xb0, virtual false, abstract: false, final false
  inline bool GetValue(int32_t index);

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerBitField* New_ctor();

  /// @brief Method Next, addr 0x1d914e0, size 0xc8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnAction, addr 0x1d914b8, size 0x28, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDecrement, addr 0x1d91498, size 0x20, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnDeselection, addr 0x1d91448, size 0x30, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnIncrement, addr 0x1d91478, size 0x20, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method OnSelection, addr 0x1d911d0, size 0xe4, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetValue, addr 0x1d90e80, size 0x2a8, virtual false, abstract: false, final false
  inline void SetValue(int32_t index, bool value);

  /// @brief Method SetWidget, addr 0x1d909ec, size 0x334, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& __cordl_internal_get_m_Container();

  constexpr ::UnityEngine::Rendering::__DebugUI__BitField*& __cordl_internal_get_m_Field();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__BitField*> const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>*& __cordl_internal_get_toggles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>*> const&
  __cordl_internal_get_toggles() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> const& __cordl_internal_get_valueToggle() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout>& __cordl_internal_get_valueToggle();

  constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value);

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::__DebugUI__BitField* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_toggles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* value);

  constexpr void __cordl_internal_set_valueToggle(::UnityW<::UnityEngine::Rendering::UI::UIFoldout> value);

  /// @brief Method .ctor, addr 0x1d9173c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerBitField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerBitField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerBitField(DebugUIHandlerBitField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerBitField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerBitField(DebugUIHandlerBitField const&) = delete;

  /// @brief Field nameLabel, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueToggle, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> ___valueToggle;

  /// @brief Field toggles, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* ___toggles;

  /// @brief Field m_Field, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__BitField* ___m_Field;

  /// @brief Field m_Container, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerBitField, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerBitField, ___nameLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerBitField, ___valueToggle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerBitField, ___toggles) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerBitField, ___m_Field) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerBitField, ___m_Container) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerBitField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerBitField*, "UnityEngine.Rendering.UI", "DebugUIHandlerBitField");
