#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__Light2DBlendStyle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Light2DBlendStyle)
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2DBlendStyle__BlendFactors;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2DBlendStyle__BlendMode;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2DBlendStyle__MaskChannelFilter;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2DBlendStyle__TextureChannel;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __Light2DBlendStyle__BlendMode;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2DBlendStyle__TextureChannel;
}
namespace UnityEngine::Rendering::Universal {
struct Light2DBlendStyle;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2DBlendStyle__BlendFactors;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2DBlendStyle__MaskChannelFilter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Light2DBlendStyle);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendFactors);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter);
// Type: ::TextureChannel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2DBlendStyle::TextureChannel
struct CORDL_TYPE __Light2DBlendStyle__TextureChannel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Light2DBlendStyle__TextureChannel_Unwrapped
  enum struct ____Light2DBlendStyle__TextureChannel_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_R = static_cast<int32_t>(0x1),
    __E_G = static_cast<int32_t>(0x2),
    __E_B = static_cast<int32_t>(0x3),
    __E_A = static_cast<int32_t>(0x4),
    __E_OneMinusR = static_cast<int32_t>(0x5),
    __E_OneMinusG = static_cast<int32_t>(0x6),
    __E_OneMinusB = static_cast<int32_t>(0x7),
    __E_OneMinusA = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Light2DBlendStyle__TextureChannel_Unwrapped() const noexcept {
    return static_cast<____Light2DBlendStyle__TextureChannel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2DBlendStyle__TextureChannel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Light2DBlendStyle__TextureChannel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field A value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const A;

  /// @brief Field B value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const B;

  /// @brief Field G value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const G;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const None;

  /// @brief Field OneMinusA value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const OneMinusA;

  /// @brief Field OneMinusB value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const OneMinusB;

  /// @brief Field OneMinusG value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const OneMinusG;

  /// @brief Field OneMinusR value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const OneMinusR;

  /// @brief Field R value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel const R;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::MaskChannelFilter
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2DBlendStyle::MaskChannelFilter
struct CORDL_TYPE __Light2DBlendStyle__MaskChannelFilter {
public:
  // Declarations
  __declspec(property(get = get_inverted, put = set_inverted))::UnityEngine::Vector4 inverted;

  __declspec(property(get = get_mask, put = set_mask))::UnityEngine::Vector4 mask;

  /// @brief Method .ctor, addr 0x2f354d8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 m, ::UnityEngine::Vector4 i);

  /// @brief Method get_inverted, addr 0x2f3552c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_inverted();

  /// @brief Method get_mask, addr 0x2f35514, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_mask();

  /// @brief Method set_inverted, addr 0x2f35538, size 0xc, virtual false, abstract: false, final false
  inline void set_inverted(::UnityEngine::Vector4 value);

  /// @brief Method set_mask, addr 0x2f35520, size 0xc, virtual false, abstract: false, final false
  inline void set_mask(::UnityEngine::Vector4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2DBlendStyle__MaskChannelFilter();

  // Ctor Parameters [CppParam { name: "_mask_k__BackingField", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_inverted_k__BackingField", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr __Light2DBlendStyle__MaskChannelFilter(::UnityEngine::Vector4 _mask_k__BackingField, ::UnityEngine::Vector4 _inverted_k__BackingField) noexcept;

  /// @brief Field <mask>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 _mask_k__BackingField;

  /// @brief Field <inverted>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 _inverted_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter, _mask_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter, _inverted_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::BlendMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2DBlendStyle::BlendMode
struct CORDL_TYPE __Light2DBlendStyle__BlendMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Light2DBlendStyle__BlendMode_Unwrapped
  enum struct ____Light2DBlendStyle__BlendMode_Unwrapped : int32_t {
    __E_Additive = static_cast<int32_t>(0x0),
    __E_Multiply = static_cast<int32_t>(0x1),
    __E_Subtractive = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Light2DBlendStyle__BlendMode_Unwrapped() const noexcept {
    return static_cast<____Light2DBlendStyle__BlendMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2DBlendStyle__BlendMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Light2DBlendStyle__BlendMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Additive value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode const Additive;

  /// @brief Field Multiply value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode const Multiply;

  /// @brief Field Subtractive value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode const Subtractive;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::BlendFactors
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2DBlendStyle::BlendFactors
struct CORDL_TYPE __Light2DBlendStyle__BlendFactors {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2DBlendStyle__BlendFactors();

  // Ctor Parameters [CppParam { name: "multiplicative", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "additive", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __Light2DBlendStyle__BlendFactors(float_t multiplicative, float_t additive) noexcept;

  /// @brief Field multiplicative, offset: 0x0, size: 0x4, def value: None
  float_t multiplicative;

  /// @brief Field additive, offset: 0x4, size: 0x4, def value: None
  float_t additive;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendFactors, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendFactors, multiplicative) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendFactors, additive) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::Light2DBlendStyle
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::Light2DBlendStyle
struct CORDL_TYPE Light2DBlendStyle {
public:
  // Declarations
  using BlendFactors = ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendFactors;

  using BlendMode = ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode;

  using MaskChannelFilter = ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter;

  using TextureChannel = ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel;

  __declspec(property(get = get_blendFactors))::UnityEngine::Vector2 blendFactors;

  __declspec(property(get = get_hasRenderTarget, put = set_hasRenderTarget)) bool hasRenderTarget;

  __declspec(property(get = get_isDirty, put = set_isDirty)) bool isDirty;

  __declspec(property(get = get_maskTextureChannelFilter))::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter maskTextureChannelFilter;

  /// @brief Method get_blendFactors, addr 0x2f35364, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_blendFactors();

  /// @brief Method get_hasRenderTarget, addr 0x2f35500, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRenderTarget();

  /// @brief Method get_isDirty, addr 0x2f354ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDirty();

  /// @brief Method get_maskTextureChannelFilter, addr 0x2f35398, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter get_maskTextureChannelFilter();

  /// @brief Method set_hasRenderTarget, addr 0x2f35508, size 0xc, virtual false, abstract: false, final false
  inline void set_hasRenderTarget(bool value);

  /// @brief Method set_isDirty, addr 0x2f354f4, size 0xc, virtual false, abstract: false, final false
  inline void set_isDirty(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Light2DBlendStyle();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maskTextureChannel", ty:
  // "::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel", modifiers: "", def_value: None }, CppParam { name: "blendMode", ty:
  // "::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode", modifiers: "", def_value: None }, CppParam { name: "_isDirty_k__BackingField", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "_hasRenderTarget_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "renderTargetHandle", ty:
  // "::UnityEngine::Rendering::Universal::RenderTargetHandle", modifiers: "", def_value: None }]
  constexpr Light2DBlendStyle(::StringW name, ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel maskTextureChannel,
                              ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode blendMode, bool _isDirty_k__BackingField, bool _hasRenderTarget_k__BackingField,
                              ::UnityEngine::Rendering::Universal::RenderTargetHandle renderTargetHandle) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field maskTextureChannel, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel maskTextureChannel;

  /// @brief Field blendMode, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode blendMode;

  /// @brief Field <isDirty>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool _isDirty_k__BackingField;

  /// @brief Field <hasRenderTarget>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool _hasRenderTarget_k__BackingField;

  /// @brief Field renderTargetHandle, offset: 0x18, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle renderTargetHandle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Light2DBlendStyle, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2DBlendStyle, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2DBlendStyle, maskTextureChannel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2DBlendStyle, blendMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2DBlendStyle, _isDirty_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2DBlendStyle, _hasRenderTarget_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2DBlendStyle, renderTargetHandle) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendMode, "UnityEngine.Rendering.Universal", "Light2DBlendStyle/BlendMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__TextureChannel, "UnityEngine.Rendering.Universal", "Light2DBlendStyle/TextureChannel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DBlendStyle, "UnityEngine.Rendering.Universal", "Light2DBlendStyle");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__BlendFactors, "UnityEngine.Rendering.Universal", "Light2DBlendStyle/BlendFactors");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2DBlendStyle__MaskChannelFilter, "UnityEngine.Rendering.Universal", "Light2DBlendStyle/MaskChannelFilter");
