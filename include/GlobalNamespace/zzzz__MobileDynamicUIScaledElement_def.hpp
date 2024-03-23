#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileDynamicUIElement_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MobileDynamicUIScaledElement)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileDynamicUIScaledElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileDynamicUIScaledElement);
// Type: ::MobileDynamicUIScaledElement
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileDynamicUIScaledElement*
class CORDL_TYPE MobileDynamicUIScaledElement : public ::GlobalNamespace::MobileDynamicUIElement {
public:
  // Declarations
  /// @brief Field canvasRect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_canvasRect, put = __cordl_internal_set_canvasRect))::UnityW<::UnityEngine::RectTransform> canvasRect;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::UnityW<::UnityEngine::RectTransform> container;

  /// @brief Field isLandscape, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isLandscape, put = __cordl_internal_set_isLandscape)) bool isLandscape;

  /// @brief Field landscapeScaleMultiplier, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_landscapeScaleMultiplier, put = __cordl_internal_set_landscapeScaleMultiplier)) float_t landscapeScaleMultiplier;

  /// @brief Field newLandscapeHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_newLandscapeHeight, put = __cordl_internal_set_newLandscapeHeight)) float_t newLandscapeHeight;

  /// @brief Method Initialize, addr 0x3085f94, size 0x4c, virtual true, abstract: false, final false
  inline void Initialize(bool initialIsLandscape);

  /// @brief Method LateUpdate, addr 0x3086138, size 0x84, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MobileDynamicUIScaledElement* New_ctor();

  /// @brief Method OnOrientationChanged, addr 0x3085fe0, size 0x158, virtual true, abstract: false, final false
  inline void OnOrientationChanged(bool newIsLandscape);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_canvasRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_canvasRect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_container() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_container();

  constexpr bool const& __cordl_internal_get_isLandscape() const;

  constexpr bool& __cordl_internal_get_isLandscape();

  constexpr float_t const& __cordl_internal_get_landscapeScaleMultiplier() const;

  constexpr float_t& __cordl_internal_get_landscapeScaleMultiplier();

  constexpr float_t const& __cordl_internal_get_newLandscapeHeight() const;

  constexpr float_t& __cordl_internal_get_newLandscapeHeight();

  constexpr void __cordl_internal_set_canvasRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_container(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_isLandscape(bool value);

  constexpr void __cordl_internal_set_landscapeScaleMultiplier(float_t value);

  constexpr void __cordl_internal_set_newLandscapeHeight(float_t value);

  /// @brief Method .ctor, addr 0x30861bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileDynamicUIScaledElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIScaledElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileDynamicUIScaledElement(MobileDynamicUIScaledElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileDynamicUIScaledElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileDynamicUIScaledElement(MobileDynamicUIScaledElement const&) = delete;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___container;

  /// @brief Field canvasRect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___canvasRect;

  /// @brief Field newLandscapeHeight, offset: 0x28, size: 0x4, def value: None
  float_t ___newLandscapeHeight;

  /// @brief Field landscapeScaleMultiplier, offset: 0x2c, size: 0x4, def value: None
  float_t ___landscapeScaleMultiplier;

  /// @brief Field isLandscape, offset: 0x30, size: 0x1, def value: None
  bool ___isLandscape;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileDynamicUIScaledElement, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIScaledElement, ___container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIScaledElement, ___canvasRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIScaledElement, ___newLandscapeHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIScaledElement, ___landscapeScaleMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileDynamicUIScaledElement, ___isLandscape) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileDynamicUIScaledElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileDynamicUIScaledElement*, "", "MobileDynamicUIScaledElement");
