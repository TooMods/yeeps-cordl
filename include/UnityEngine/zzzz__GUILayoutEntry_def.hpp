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
CORDL_MODULE_EXPORT(GUILayoutEntry)
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayoutEntry);
// Type: UnityEngine::GUILayoutEntry
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUILayoutEntry*
class CORDL_TYPE GUILayoutEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field consideredForMargin, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_consideredForMargin, put = __cordl_internal_set_consideredForMargin)) bool consideredForMargin;

  /// @brief Field indent, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_indent, put = setStaticF_indent)) int32_t indent;

  /// @brief Field kDummyRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kDummyRect, put = setStaticF_kDummyRect))::UnityEngine::Rect kDummyRect;

  /// @brief Field m_Style, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Style, put = __cordl_internal_set_m_Style))::UnityEngine::GUIStyle* m_Style;

  __declspec(property(get = get_marginBottom)) int32_t marginBottom;

  __declspec(property(get = get_marginHorizontal)) int32_t marginHorizontal;

  __declspec(property(get = get_marginLeft)) int32_t marginLeft;

  __declspec(property(get = get_marginRight)) int32_t marginRight;

  __declspec(property(get = get_marginTop)) int32_t marginTop;

  __declspec(property(get = get_marginVertical)) int32_t marginVertical;

  /// @brief Field maxHeight, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxHeight, put = __cordl_internal_set_maxHeight)) float_t maxHeight;

  /// @brief Field maxWidth, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_maxWidth, put = __cordl_internal_set_maxWidth)) float_t maxWidth;

  /// @brief Field minHeight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_minHeight, put = __cordl_internal_set_minHeight)) float_t minHeight;

  /// @brief Field minWidth, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_minWidth, put = __cordl_internal_set_minWidth)) float_t minWidth;

  /// @brief Field rect, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_rect, put = __cordl_internal_set_rect))::UnityEngine::Rect rect;

  /// @brief Field stretchHeight, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_stretchHeight, put = __cordl_internal_set_stretchHeight)) int32_t stretchHeight;

  /// @brief Field stretchWidth, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_stretchWidth, put = __cordl_internal_set_stretchWidth)) int32_t stretchWidth;

  __declspec(property(get = get_style, put = set_style))::UnityEngine::GUIStyle* style;

  /// @brief Method ApplyOptions, addr 0x2d0b448, size 0x2d4, virtual true, abstract: false, final false
  inline void ApplyOptions(::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method ApplyStyleSettings, addr 0x2d0b3bc, size 0x8c, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(::UnityEngine::GUIStyle* style);

  /// @brief Method CalcHeight, addr 0x2d0b350, size 0x4, virtual true, abstract: false, final false
  inline void CalcHeight();

  /// @brief Method CalcWidth, addr 0x2d0b34c, size 0x4, virtual true, abstract: false, final false
  inline void CalcWidth();

  static inline ::UnityEngine::GUILayoutEntry* New_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style);

  static inline ::UnityEngine::GUILayoutEntry* New_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style,
                                                        ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method SetHorizontal, addr 0x2d0b354, size 0x34, virtual true, abstract: false, final false
  inline void SetHorizontal(float_t x, float_t width);

  /// @brief Method SetVertical, addr 0x2d0b388, size 0x34, virtual true, abstract: false, final false
  inline void SetVertical(float_t y, float_t height);

  /// @brief Method ToString, addr 0x2d0b71c, size 0x5e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_consideredForMargin() const;

  constexpr bool& __cordl_internal_get_consideredForMargin();

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_Style();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_Style() const;

  constexpr float_t const& __cordl_internal_get_maxHeight() const;

  constexpr float_t& __cordl_internal_get_maxHeight();

  constexpr float_t const& __cordl_internal_get_maxWidth() const;

  constexpr float_t& __cordl_internal_get_maxWidth();

  constexpr float_t const& __cordl_internal_get_minHeight() const;

  constexpr float_t& __cordl_internal_get_minHeight();

  constexpr float_t const& __cordl_internal_get_minWidth() const;

  constexpr float_t& __cordl_internal_get_minWidth();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_rect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_rect();

  constexpr int32_t const& __cordl_internal_get_stretchHeight() const;

  constexpr int32_t& __cordl_internal_get_stretchHeight();

  constexpr int32_t const& __cordl_internal_get_stretchWidth() const;

  constexpr int32_t& __cordl_internal_get_stretchWidth();

  constexpr void __cordl_internal_set_consideredForMargin(bool value);

  constexpr void __cordl_internal_set_m_Style(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_maxHeight(float_t value);

  constexpr void __cordl_internal_set_maxWidth(float_t value);

  constexpr void __cordl_internal_set_minHeight(float_t value);

  constexpr void __cordl_internal_set_minWidth(float_t value);

  constexpr void __cordl_internal_set_rect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_stretchHeight(int32_t value);

  constexpr void __cordl_internal_set_stretchWidth(int32_t value);

  /// @brief Method .ctor, addr 0x2d0b138, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style);

  /// @brief Method .ctor, addr 0x2d0b244, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, ::UnityEngine::GUIStyle* _style,
                    ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  static inline int32_t getStaticF_indent();

  static inline ::UnityEngine::Rect getStaticF_kDummyRect();

  /// @brief Method get_marginBottom, addr 0x2d0b098, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_marginBottom();

  /// @brief Method get_marginHorizontal, addr 0x2d0b0c0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_marginHorizontal();

  /// @brief Method get_marginLeft, addr 0x2d0b020, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_marginLeft();

  /// @brief Method get_marginRight, addr 0x2d0b048, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_marginRight();

  /// @brief Method get_marginTop, addr 0x2d0b070, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_marginTop();

  /// @brief Method get_marginVertical, addr 0x2d0b0fc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_marginVertical();

  /// @brief Method get_style, addr 0x2d0b008, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_style();

  static inline void setStaticF_indent(int32_t value);

  static inline void setStaticF_kDummyRect(::UnityEngine::Rect value);

  /// @brief Method set_style, addr 0x2d0b010, size 0x10, virtual false, abstract: false, final false
  inline void set_style(::UnityEngine::GUIStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayoutEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayoutEntry(GUILayoutEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayoutEntry(GUILayoutEntry const&) = delete;

  /// @brief Field minWidth, offset: 0x10, size: 0x4, def value: None
  float_t ___minWidth;

  /// @brief Field maxWidth, offset: 0x14, size: 0x4, def value: None
  float_t ___maxWidth;

  /// @brief Field minHeight, offset: 0x18, size: 0x4, def value: None
  float_t ___minHeight;

  /// @brief Field maxHeight, offset: 0x1c, size: 0x4, def value: None
  float_t ___maxHeight;

  /// @brief Field rect, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rect ___rect;

  /// @brief Field stretchWidth, offset: 0x30, size: 0x4, def value: None
  int32_t ___stretchWidth;

  /// @brief Field stretchHeight, offset: 0x34, size: 0x4, def value: None
  int32_t ___stretchHeight;

  /// @brief Field consideredForMargin, offset: 0x38, size: 0x1, def value: None
  bool ___consideredForMargin;

  /// @brief Field m_Style, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_Style;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutEntry, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___minWidth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___maxWidth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___minHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___maxHeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___rect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___stretchWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___stretchHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___consideredForMargin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutEntry, ___m_Style) == 0x40, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayoutEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutEntry*, "UnityEngine", "GUILayoutEntry");
