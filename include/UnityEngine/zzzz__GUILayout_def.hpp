#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayout)
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class __GUILayout__LayoutedWindow;
}
namespace UnityEngine {
class __GUI__WindowFunction;
}
// Forward declare root types
namespace UnityEngine {
class GUILayout;
}
namespace UnityEngine {
class __GUILayout__LayoutedWindow;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayout);
MARK_REF_PTR_T(::UnityEngine::__GUILayout__LayoutedWindow);
// Type: ::LayoutedWindow
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::GUILayout::LayoutedWindow*
class CORDL_TYPE __GUILayout__LayoutedWindow : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Func, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Func, put = __cordl_internal_set_m_Func))::UnityEngine::__GUI__WindowFunction* m_Func;

  /// @brief Field m_Options, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Options, put = __cordl_internal_set_m_Options))::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> m_Options;

  /// @brief Field m_ScreenRect, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ScreenRect, put = __cordl_internal_set_m_ScreenRect))::UnityEngine::Rect m_ScreenRect;

  /// @brief Field m_Style, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Style, put = __cordl_internal_set_m_Style))::UnityEngine::GUIStyle* m_Style;

  /// @brief Method DoWindow, addr 0x2010088, size 0xf8, virtual false, abstract: false, final false
  inline void DoWindow(int32_t windowID);

  static inline ::UnityEngine::__GUILayout__LayoutedWindow* New_ctor(::UnityEngine::__GUI__WindowFunction* f, ::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content,
                                                                     ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options, ::UnityEngine::GUIStyle* style);

  constexpr ::UnityEngine::__GUI__WindowFunction*& __cordl_internal_get_m_Func();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__GUI__WindowFunction*> const& __cordl_internal_get_m_Func() const;

  constexpr ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> const& __cordl_internal_get_m_Options() const;

  constexpr ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>& __cordl_internal_get_m_Options();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_ScreenRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_ScreenRect();

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_Style();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_Style() const;

  constexpr void __cordl_internal_set_m_Func(::UnityEngine::__GUI__WindowFunction* value);

  constexpr void __cordl_internal_set_m_Options(::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> value);

  constexpr void __cordl_internal_set_m_ScreenRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_Style(::UnityEngine::GUIStyle* value);

  /// @brief Method .ctor, addr 0x2010024, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::__GUI__WindowFunction* f, ::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content,
                    ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options, ::UnityEngine::GUIStyle* style);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GUILayout__LayoutedWindow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GUILayout__LayoutedWindow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GUILayout__LayoutedWindow(__GUILayout__LayoutedWindow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GUILayout__LayoutedWindow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GUILayout__LayoutedWindow(__GUILayout__LayoutedWindow const&) = delete;

  /// @brief Field m_Func, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::__GUI__WindowFunction* ___m_Func;

  /// @brief Field m_ScreenRect, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_ScreenRect;

  /// @brief Field m_Options, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> ___m_Options;

  /// @brief Field m_Style, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_Style;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GUILayout__LayoutedWindow, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__GUILayout__LayoutedWindow, ___m_Func) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__GUILayout__LayoutedWindow, ___m_ScreenRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__GUILayout__LayoutedWindow, ___m_Options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__GUILayout__LayoutedWindow, ___m_Style) == 0x30, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::GUILayout
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUILayout*
class CORDL_TYPE GUILayout : public ::System::Object {
public:
  // Declarations
  using LayoutedWindow = ::UnityEngine::__GUILayout__LayoutedWindow;

  /// @brief Method BeginArea, addr 0x2d1c300, size 0xc0, virtual false, abstract: false, final false
  static inline void BeginArea(::UnityEngine::Rect screenRect);

  /// @brief Method BeginArea, addr 0x2d1c3c0, size 0x228, virtual false, abstract: false, final false
  static inline void BeginArea(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method BeginHorizontal, addr 0x2d1c100, size 0x1b4, virtual false, abstract: false, final false
  static inline void BeginHorizontal(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method BeginHorizontal, addr 0x2d1c068, size 0x98, virtual false, abstract: false, final false
  static inline void BeginHorizontal(::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Box, addr 0x2d1b9f0, size 0xb0, virtual false, abstract: false, final false
  static inline void Box(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Button, addr 0x2d1bb6c, size 0xb0, virtual false, abstract: false, final false
  static inline bool Button(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoBox, addr 0x2d1baa0, size 0xcc, virtual false, abstract: false, final false
  static inline void DoBox(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoButton, addr 0x2d1bc1c, size 0xcc, virtual false, abstract: false, final false
  static inline bool DoButton(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoHorizontalSlider, addr 0x2d1bf2c, size 0x13c, virtual false, abstract: false, final false
  static inline float_t DoHorizontalSlider(float_t value, float_t leftValue, float_t rightValue, ::UnityEngine::GUIStyle* slider, ::UnityEngine::GUIStyle* thumb,
                                           ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoLabel, addr 0x2d1b924, size 0xcc, virtual false, abstract: false, final false
  static inline void DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoToggle, addr 0x2d1bda4, size 0xdc, virtual false, abstract: false, final false
  static inline bool DoToggle(bool value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style,
                              ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoWindow, addr 0x2d1c88c, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect DoWindow(int32_t id, ::UnityEngine::Rect screenRect, ::UnityEngine::__GUI__WindowFunction* func, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style,
                                             ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method EndArea, addr 0x2d1c5e8, size 0x1ac, virtual false, abstract: false, final false
  static inline void EndArea();

  /// @brief Method EndHorizontal, addr 0x2d1c2b4, size 0x4c, virtual false, abstract: false, final false
  static inline void EndHorizontal();

  /// @brief Method Height, addr 0x2d0ec74, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutOption* Height(float_t height);

  /// @brief Method HorizontalSlider, addr 0x2d1be80, size 0xac, virtual false, abstract: false, final false
  static inline float_t HorizontalSlider(float_t value, float_t leftValue, float_t rightValue, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Label, addr 0x2d1b874, size 0xb0, virtual false, abstract: false, final false
  static inline void Label(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Toggle, addr 0x2d1bce8, size 0xbc, virtual false, abstract: false, final false
  static inline bool Toggle(bool value, ::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Width, addr 0x2d0ebd8, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutOption* Width(float_t width);

  /// @brief Method Window, addr 0x2d1c794, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect Window(int32_t id, ::UnityEngine::Rect screenRect, ::UnityEngine::__GUI__WindowFunction* func, ::StringW text,
                                           ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayout(GUILayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayout(GUILayout const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayout, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayout*, "UnityEngine", "GUILayout");
NEED_NO_BOX(::UnityEngine::__GUILayout__LayoutedWindow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GUILayout__LayoutedWindow*, "UnityEngine", "GUILayout/LayoutedWindow");
