#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MobileTapIndicator)
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class MobileTapIndicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobileTapIndicator);
// Type: ::MobileTapIndicator
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileTapIndicator*
class CORDL_TYPE MobileTapIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field color, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field duration, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field image, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_image, put = __cordl_internal_set_image))::UnityW<::UnityEngine::UI::RawImage> image;

  /// @brief Field maxOpacity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxOpacity, put = __cordl_internal_set_maxOpacity)) float_t maxOpacity;

  /// @brief Field maxScale, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxScale, put = __cordl_internal_set_maxScale)) float_t maxScale;

  /// @brief Field opacityCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_opacityCurve, put = __cordl_internal_set_opacityCurve))::UnityEngine::AnimationCurve* opacityCurve;

  /// @brief Field p, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) float_t p;

  /// @brief Field scaleCurve, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleCurve, put = __cordl_internal_set_scaleCurve))::UnityEngine::AnimationCurve* scaleCurve;

  static inline ::GlobalNamespace::MobileTapIndicator* New_ctor();

  /// @brief Method Start, addr 0x2e00d90, size 0x94, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2e00e24, size 0x13c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get_image() const;

  constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get_image();

  constexpr float_t const& __cordl_internal_get_maxOpacity() const;

  constexpr float_t& __cordl_internal_get_maxOpacity();

  constexpr float_t const& __cordl_internal_get_maxScale() const;

  constexpr float_t& __cordl_internal_get_maxScale();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_opacityCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_opacityCurve() const;

  constexpr float_t const& __cordl_internal_get_p() const;

  constexpr float_t& __cordl_internal_get_p();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_scaleCurve() const;

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_image(::UnityW<::UnityEngine::UI::RawImage> value);

  constexpr void __cordl_internal_set_maxOpacity(float_t value);

  constexpr void __cordl_internal_set_maxScale(float_t value);

  constexpr void __cordl_internal_set_opacityCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_p(float_t value);

  constexpr void __cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x2e00f60, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileTapIndicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileTapIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileTapIndicator(MobileTapIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileTapIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileTapIndicator(MobileTapIndicator const&) = delete;

  /// @brief Field scaleCurve, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleCurve;

  /// @brief Field maxScale, offset: 0x20, size: 0x4, def value: None
  float_t ___maxScale;

  /// @brief Field opacityCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___opacityCurve;

  /// @brief Field maxOpacity, offset: 0x30, size: 0x4, def value: None
  float_t ___maxOpacity;

  /// @brief Field duration, offset: 0x34, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field p, offset: 0x38, size: 0x4, def value: None
  float_t ___p;

  /// @brief Field image, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RawImage> ___image;

  /// @brief Field color, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileTapIndicator, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTapIndicator, ___scaleCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTapIndicator, ___maxScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTapIndicator, ___opacityCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTapIndicator, ___maxOpacity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTapIndicator, ___duration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTapIndicator, ___p) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTapIndicator, ___image) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTapIndicator, ___color) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobileTapIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileTapIndicator*, "", "MobileTapIndicator");
