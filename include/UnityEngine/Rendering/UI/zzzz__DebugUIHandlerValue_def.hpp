#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerValue)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class __DebugUI__Value;
}
namespace UnityEngine::Rendering {
class __DebugUI__Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerValue;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerValue);
// Type: UnityEngine.Rendering.UI::DebugUIHandlerValue
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerValue*
class CORDL_TYPE DebugUIHandlerValue : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Field, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field))::UnityEngine::Rendering::__DebugUI__Value* m_Field;

  /// @brief Field m_Timer, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timer, put = __cordl_internal_set_m_Timer)) float_t m_Timer;

  /// @brief Field nameLabel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel))::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field valueLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_valueLabel, put = __cordl_internal_set_valueLabel))::UnityW<::UnityEngine::UI::Text> valueLabel;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerValue* New_ctor();

  /// @brief Method OnDeselection, addr 0x1d98860, size 0x50, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnEnable, addr 0x1d9877c, size 0x8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSelection, addr 0x1d98808, size 0x58, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x1d98784, size 0x84, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget);

  /// @brief Method Update, addr 0x1d988b0, size 0x9c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Rendering::__DebugUI__Value*& __cordl_internal_get_m_Field();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__Value*> const& __cordl_internal_get_m_Field() const;

  constexpr float_t const& __cordl_internal_get_m_Timer() const;

  constexpr float_t& __cordl_internal_get_m_Timer();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_valueLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_valueLabel();

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::__DebugUI__Value* value);

  constexpr void __cordl_internal_set_m_Timer(float_t value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x1d9894c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerValue(DebugUIHandlerValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerValue(DebugUIHandlerValue const&) = delete;

  /// @brief Field nameLabel, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___valueLabel;

  /// @brief Field m_Field, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__Value* ___m_Field;

  /// @brief Field m_Timer, offset: 0x70, size: 0x4, def value: None
  float_t ___m_Timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerValue, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerValue, ___nameLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerValue, ___valueLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerValue, ___m_Field) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerValue, ___m_Timer) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerValue*, "UnityEngine.Rendering.UI", "DebugUIHandlerValue");
