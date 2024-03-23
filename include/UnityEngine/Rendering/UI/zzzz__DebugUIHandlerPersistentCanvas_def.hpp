#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerPersistentCanvas)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerValue;
}
namespace UnityEngine::Rendering::UI {
class __DebugUIHandlerPersistentCanvas____c__DisplayClass3_0;
}
namespace UnityEngine::Rendering {
class __DebugUI__Value;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPersistentCanvas;
}
namespace UnityEngine::Rendering::UI {
class __DebugUIHandlerPersistentCanvas____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas);
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::DebugUIHandlerPersistentCanvas::<>c__DisplayClass3_0*
class CORDL_TYPE __DebugUIHandlerPersistentCanvas____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field widget, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_widget, put = __cordl_internal_set_widget))::UnityEngine::Rendering::__DebugUI__Value* widget;

  static inline ::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0* New_ctor();

  /// @brief Method <Toggle>b__0, addr 0x1d97648, size 0x24, virtual false, abstract: false, final false
  inline bool _Toggle_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerValue* x);

  constexpr ::UnityEngine::Rendering::__DebugUI__Value*& __cordl_internal_get_widget();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__Value*> const& __cordl_internal_get_widget() const;

  constexpr void __cordl_internal_set_widget(::UnityEngine::Rendering::__DebugUI__Value* value);

  /// @brief Method .ctor, addr 0x1d9740c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugUIHandlerPersistentCanvas____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugUIHandlerPersistentCanvas____c__DisplayClass3_0(__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugUIHandlerPersistentCanvas____c__DisplayClass3_0(__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0 const&) = delete;

  /// @brief Field widget, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__Value* ___widget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0, ___widget) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
// Type: UnityEngine.Rendering.UI::DebugUIHandlerPersistentCanvas
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerPersistentCanvas*
class CORDL_TYPE DebugUIHandlerPersistentCanvas : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0;

  /// @brief Field m_Items, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Items,
                      put = __cordl_internal_set_m_Items))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>* m_Items;

  /// @brief Field panel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel))::UnityW<::UnityEngine::RectTransform> panel;

  /// @brief Field valuePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_valuePrefab, put = __cordl_internal_set_valuePrefab))::UnityW<::UnityEngine::RectTransform> valuePrefab;

  /// @brief Method Clear, addr 0x1d97414, size 0x1b8, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas* New_ctor();

  /// @brief Method Toggle, addr 0x1d97158, size 0x2b4, virtual false, abstract: false, final false
  inline void Toggle(::UnityEngine::Rendering::__DebugUI__Value* widget);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>*& __cordl_internal_get_m_Items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>*> const& __cordl_internal_get_m_Items() const;

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_panel() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_panel();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_valuePrefab() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_valuePrefab();

  constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>* value);

  constexpr void __cordl_internal_set_panel(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_valuePrefab(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x1d975cc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerPersistentCanvas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPersistentCanvas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerPersistentCanvas(DebugUIHandlerPersistentCanvas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPersistentCanvas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerPersistentCanvas(DebugUIHandlerPersistentCanvas const&) = delete;

  /// @brief Field panel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___panel;

  /// @brief Field valuePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___valuePrefab;

  /// @brief Field m_Items, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>* ___m_Items;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, ___panel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, ___valuePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas, ___m_Items) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*, "UnityEngine.Rendering.UI", "DebugUIHandlerPersistentCanvas");
NEED_NO_BOX(::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0*, "UnityEngine.Rendering.UI", "DebugUIHandlerPersistentCanvas/<>c__DisplayClass3_0");
