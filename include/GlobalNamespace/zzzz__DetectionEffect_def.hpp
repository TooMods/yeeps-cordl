#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DetectionEffect)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class DetectionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DetectionEffect);
// Type: ::DetectionEffect
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DetectionEffect*
class CORDL_TYPE DetectionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field color, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field detectFresnelPower, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_detectFresnelPower, put = __cordl_internal_set_detectFresnelPower)) float_t detectFresnelPower;

  /// @brief Field detectSoundEffectKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_detectSoundEffectKey, put = __cordl_internal_set_detectSoundEffectKey))::StringW detectSoundEffectKey;

  /// @brief Field mat, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mat, put = __cordl_internal_set_mat))::UnityW<::UnityEngine::Material> mat;

  /// @brief Field maxAlpha, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAlpha, put = __cordl_internal_set_maxAlpha)) float_t maxAlpha;

  /// @brief Field noDetectAlphaMul, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_noDetectAlphaMul, put = __cordl_internal_set_noDetectAlphaMul)) float_t noDetectAlphaMul;

  /// @brief Field noDetectFresnelPower, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_noDetectFresnelPower, put = __cordl_internal_set_noDetectFresnelPower)) float_t noDetectFresnelPower;

  /// @brief Field noDetectSoundEffectKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_noDetectSoundEffectKey, put = __cordl_internal_set_noDetectSoundEffectKey))::StringW noDetectSoundEffectKey;

  /// @brief Field p, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) float_t p;

  /// @brief Field r, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) float_t r;

  /// @brief Field radius, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Method Initialize, addr 0x29c3844, size 0x1e8, virtual false, abstract: false, final false
  inline void Initialize(float_t radius, bool didDetect);

  static inline ::GlobalNamespace::DetectionEffect* New_ctor();

  /// @brief Method Update, addr 0x29c3a2c, size 0x144, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr float_t const& __cordl_internal_get_detectFresnelPower() const;

  constexpr float_t& __cordl_internal_get_detectFresnelPower();

  constexpr ::StringW const& __cordl_internal_get_detectSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_detectSoundEffectKey();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mat();

  constexpr float_t const& __cordl_internal_get_maxAlpha() const;

  constexpr float_t& __cordl_internal_get_maxAlpha();

  constexpr float_t const& __cordl_internal_get_noDetectAlphaMul() const;

  constexpr float_t& __cordl_internal_get_noDetectAlphaMul();

  constexpr float_t const& __cordl_internal_get_noDetectFresnelPower() const;

  constexpr float_t& __cordl_internal_get_noDetectFresnelPower();

  constexpr ::StringW const& __cordl_internal_get_noDetectSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_noDetectSoundEffectKey();

  constexpr float_t const& __cordl_internal_get_p() const;

  constexpr float_t& __cordl_internal_get_p();

  constexpr float_t const& __cordl_internal_get_r() const;

  constexpr float_t& __cordl_internal_get_r();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_detectFresnelPower(float_t value);

  constexpr void __cordl_internal_set_detectSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_mat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_maxAlpha(float_t value);

  constexpr void __cordl_internal_set_noDetectAlphaMul(float_t value);

  constexpr void __cordl_internal_set_noDetectFresnelPower(float_t value);

  constexpr void __cordl_internal_set_noDetectSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_p(float_t value);

  constexpr void __cordl_internal_set_r(float_t value);

  constexpr void __cordl_internal_set_radius(float_t value);

  /// @brief Method .ctor, addr 0x29c3b70, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DetectionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DetectionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DetectionEffect(DetectionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DetectionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DetectionEffect(DetectionEffect const&) = delete;

  /// @brief Field p, offset: 0x18, size: 0x4, def value: None
  float_t ___p;

  /// @brief Field r, offset: 0x1c, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field radius, offset: 0x20, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field detectSoundEffectKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___detectSoundEffectKey;

  /// @brief Field noDetectSoundEffectKey, offset: 0x30, size: 0x8, def value: None
  ::StringW ___noDetectSoundEffectKey;

  /// @brief Field noDetectAlphaMul, offset: 0x38, size: 0x4, def value: None
  float_t ___noDetectAlphaMul;

  /// @brief Field detectFresnelPower, offset: 0x3c, size: 0x4, def value: None
  float_t ___detectFresnelPower;

  /// @brief Field noDetectFresnelPower, offset: 0x40, size: 0x4, def value: None
  float_t ___noDetectFresnelPower;

  /// @brief Field mat, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___mat;

  /// @brief Field color, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field maxAlpha, offset: 0x60, size: 0x4, def value: None
  float_t ___maxAlpha;

  /// @brief Field duration offset 0xffffffff size 0x4
  static constexpr float_t duration{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DetectionEffect, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___p) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___r) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___detectSoundEffectKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___noDetectSoundEffectKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___noDetectAlphaMul) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___detectFresnelPower) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___noDetectFresnelPower) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___mat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___color) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectionEffect, ___maxAlpha) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DetectionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DetectionEffect*, "", "DetectionEffect");
