#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerMessageBox)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class __DebugUI__MessageBox;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerMessageBox;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox);
// Type: UnityEngine.Rendering.UI::DebugUIHandlerMessageBox
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerMessageBox*
class CORDL_TYPE DebugUIHandlerMessageBox : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field k_ErrorBackgroundColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ErrorBackgroundColor, put = setStaticF_k_ErrorBackgroundColor))::UnityEngine::Color32 k_ErrorBackgroundColor;

  /// @brief Field k_ErrorTextColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ErrorTextColor, put = setStaticF_k_ErrorTextColor))::UnityEngine::Color32 k_ErrorTextColor;

  /// @brief Field k_WarningBackgroundColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_WarningBackgroundColor, put = setStaticF_k_WarningBackgroundColor))::UnityEngine::Color32 k_WarningBackgroundColor;

  /// @brief Field k_WarningTextColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_WarningTextColor, put = setStaticF_k_WarningTextColor))::UnityEngine::Color32 k_WarningTextColor;

  /// @brief Field m_Field, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field))::UnityEngine::Rendering::__DebugUI__MessageBox* m_Field;

  /// @brief Field nameLabel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel))::UnityW<::UnityEngine::UI::Text> nameLabel;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox* New_ctor();

  /// @brief Method OnSelection, addr 0x1d96dc4, size 0x8, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x1d96c4c, size 0x178, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  constexpr ::UnityEngine::Rendering::__DebugUI__MessageBox*& __cordl_internal_get_m_Field();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__MessageBox*> const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::__DebugUI__MessageBox* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x1d96dcc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Color32 getStaticF_k_ErrorBackgroundColor();

  static inline ::UnityEngine::Color32 getStaticF_k_ErrorTextColor();

  static inline ::UnityEngine::Color32 getStaticF_k_WarningBackgroundColor();

  static inline ::UnityEngine::Color32 getStaticF_k_WarningTextColor();

  static inline void setStaticF_k_ErrorBackgroundColor(::UnityEngine::Color32 value);

  static inline void setStaticF_k_ErrorTextColor(::UnityEngine::Color32 value);

  static inline void setStaticF_k_WarningBackgroundColor(::UnityEngine::Color32 value);

  static inline void setStaticF_k_WarningTextColor(::UnityEngine::Color32 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerMessageBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerMessageBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerMessageBox(DebugUIHandlerMessageBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerMessageBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerMessageBox(DebugUIHandlerMessageBox const&) = delete;

  /// @brief Field nameLabel, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field m_Field, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__MessageBox* ___m_Field;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox, ___nameLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox, ___m_Field) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*, "UnityEngine.Rendering.UI", "DebugUIHandlerMessageBox");
