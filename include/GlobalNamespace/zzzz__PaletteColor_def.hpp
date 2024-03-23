#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PaletteColor)
namespace GlobalNamespace {
struct ColorValue;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class PaletteColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PaletteColor);
// Type: ::PaletteColor
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PaletteColor*
class CORDL_TYPE PaletteColor : public ::System::Object {
public:
  // Declarations
  /// @brief Field color, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field emissive, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_emissive, put = __cordl_internal_set_emissive)) bool emissive;

  /// @brief Field emissiveColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_emissiveColor, put = __cordl_internal_set_emissiveColor))::UnityEngine::Color emissiveColor;

  /// @brief Field emissiveLightLevel, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_emissiveLightLevel, put = __cordl_internal_set_emissiveLightLevel)) uint8_t emissiveLightLevel;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::StringW key;

  /// @brief Method GetColor, addr 0x1445090, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::GlobalNamespace::ColorValue colorValue);

  static inline ::GlobalNamespace::PaletteColor* New_ctor(::StringW key, ::UnityEngine::Color color);

  static inline ::GlobalNamespace::PaletteColor* New_ctor(::StringW key, ::UnityEngine::Color color, ::UnityEngine::Color emissiveColor, uint8_t emissiveLightLevel);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr bool const& __cordl_internal_get_emissive() const;

  constexpr bool& __cordl_internal_get_emissive();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_emissiveColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_emissiveColor();

  constexpr uint8_t const& __cordl_internal_get_emissiveLightLevel() const;

  constexpr uint8_t& __cordl_internal_get_emissiveLightLevel();

  constexpr ::StringW const& __cordl_internal_get_key() const;

  constexpr ::StringW& __cordl_internal_get_key();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_emissive(bool value);

  constexpr void __cordl_internal_set_emissiveColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_emissiveLightLevel(uint8_t value);

  constexpr void __cordl_internal_set_key(::StringW value);

  /// @brief Method .ctor, addr 0x1444fb4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::UnityEngine::Color color);

  /// @brief Method .ctor, addr 0x1445008, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::UnityEngine::Color color, ::UnityEngine::Color emissiveColor, uint8_t emissiveLightLevel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaletteColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaletteColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaletteColor(PaletteColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaletteColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaletteColor(PaletteColor const&) = delete;

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::StringW ___key;

  /// @brief Field color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field emissiveColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___emissiveColor;

  /// @brief Field emissive, offset: 0x38, size: 0x1, def value: None
  bool ___emissive;

  /// @brief Field emissiveLightLevel, offset: 0x39, size: 0x1, def value: None
  uint8_t ___emissiveLightLevel;

  /// @brief Field range offset 0xffffffff size 0x4
  static constexpr float_t range{ 0.15 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PaletteColor, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PaletteColor, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaletteColor, ___color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaletteColor, ___emissiveColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaletteColor, ___emissive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaletteColor, ___emissiveLightLevel) == 0x39, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PaletteColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PaletteColor*, "", "PaletteColor");
