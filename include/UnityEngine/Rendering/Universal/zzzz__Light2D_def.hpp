#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/U2D/zzzz__Light2DBase_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Light2D)
namespace UnityEngine::Rendering::Universal {
struct __Light2D__ComponentVersions;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__DeprecatedLightType;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__LightType;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__NormalMapQuality;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__OverlapOperation;
}
namespace UnityEngine::Rendering::Universal {
struct __LightUtility__LightMeshVertex;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __Light2D__ComponentVersions;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__DeprecatedLightType;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__LightType;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__NormalMapQuality;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__OverlapOperation;
}
namespace UnityEngine::Rendering::Universal {
class Light2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2D__LightType);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Light2D);
// Type: ::DeprecatedLightType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2D::DeprecatedLightType
struct CORDL_TYPE __Light2D__DeprecatedLightType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Light2D__DeprecatedLightType_Unwrapped
  enum struct ____Light2D__DeprecatedLightType_Unwrapped : int32_t {
    __E_Parametric = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Light2D__DeprecatedLightType_Unwrapped() const noexcept {
    return static_cast<____Light2D__DeprecatedLightType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2D__DeprecatedLightType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Light2D__DeprecatedLightType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Parametric value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType const Parametric;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::LightType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2D::LightType
struct CORDL_TYPE __Light2D__LightType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Light2D__LightType_Unwrapped
  enum struct ____Light2D__LightType_Unwrapped : int32_t {
    __E_Parametric = static_cast<int32_t>(0x0),
    __E_Freeform = static_cast<int32_t>(0x1),
    __E_Sprite = static_cast<int32_t>(0x2),
    __E_Point = static_cast<int32_t>(0x3),
    __E_Global = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Light2D__LightType_Unwrapped() const noexcept {
    return static_cast<____Light2D__LightType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2D__LightType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Light2D__LightType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Freeform value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Light2D__LightType const Freeform;

  /// @brief Field Global value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::__Light2D__LightType const Global;

  /// @brief Field Parametric value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Light2D__LightType const Parametric;

  /// @brief Field Point value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::__Light2D__LightType const Point;

  /// @brief Field Sprite value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__Light2D__LightType const Sprite;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2D__LightType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2D__LightType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::NormalMapQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2D::NormalMapQuality
struct CORDL_TYPE __Light2D__NormalMapQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Light2D__NormalMapQuality_Unwrapped
  enum struct ____Light2D__NormalMapQuality_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x2),
    __E_Fast = static_cast<int32_t>(0x0),
    __E_Accurate = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Light2D__NormalMapQuality_Unwrapped() const noexcept {
    return static_cast<____Light2D__NormalMapQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2D__NormalMapQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Light2D__NormalMapQuality(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Accurate value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality const Accurate;

  /// @brief Field Disabled value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality const Disabled;

  /// @brief Field Fast value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality const Fast;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::OverlapOperation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2D::OverlapOperation
struct CORDL_TYPE __Light2D__OverlapOperation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Light2D__OverlapOperation_Unwrapped
  enum struct ____Light2D__OverlapOperation_Unwrapped : int32_t {
    __E_Additive = static_cast<int32_t>(0x0),
    __E_AlphaBlend = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Light2D__OverlapOperation_Unwrapped() const noexcept {
    return static_cast<____Light2D__OverlapOperation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2D__OverlapOperation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Light2D__OverlapOperation(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Additive value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation const Additive;

  /// @brief Field AlphaBlend value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation const AlphaBlend;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::ComponentVersions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Light2D::ComponentVersions
struct CORDL_TYPE __Light2D__ComponentVersions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Light2D__ComponentVersions_Unwrapped
  enum struct ____Light2D__ComponentVersions_Unwrapped : int32_t {
    __E_Version_Unserialized = static_cast<int32_t>(0x0),
    __E_Version_1 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Light2D__ComponentVersions_Unwrapped() const noexcept {
    return static_cast<____Light2D__ComponentVersions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Light2D__ComponentVersions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Light2D__ComponentVersions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Version_1 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions const Version_1;

  /// @brief Field Version_Unserialized value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions const Version_Unserialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::Light2D
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Light2D*
class CORDL_TYPE Light2D : public ::UnityEngine::U2D::Light2DBase {
public:
  // Declarations
  using ComponentVersions = ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions;

  using DeprecatedLightType = ::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType;

  using LightType = ::UnityEngine::Rendering::Universal::__Light2D__LightType;

  using NormalMapQuality = ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality;

  using OverlapOperation = ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation;

  /// @brief Field <boundingSphere>k__BackingField, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get__boundingSphere_k__BackingField,
                      put = __cordl_internal_set__boundingSphere_k__BackingField))::UnityEngine::BoundingSphere _boundingSphere_k__BackingField;

  __declspec(property(get = get_affectedSortingLayers))::ArrayW<int32_t, ::Array<int32_t>*> affectedSortingLayers;

  __declspec(property(get = get_alphaBlendOnOverlap)) bool alphaBlendOnOverlap;

  __declspec(property(get = get_blendStyleIndex, put = set_blendStyleIndex)) int32_t blendStyleIndex;

  __declspec(property(get = get_boundingSphere, put = set_boundingSphere))::UnityEngine::BoundingSphere boundingSphere;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_falloffIntensity, put = set_falloffIntensity)) float_t falloffIntensity;

  /// @brief Field forceUpdate, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_forceUpdate, put = __cordl_internal_set_forceUpdate)) bool forceUpdate;

  __declspec(property(get = get_hasCachedMesh)) bool hasCachedMesh;

  __declspec(property(get = get_indices, put = set_indices))::ArrayW<uint16_t, ::Array<uint16_t>*> indices;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_isPointLight)) bool isPointLight;

  __declspec(property(get = get_lightCookieSprite, put = set_lightCookieSprite))::UnityW<::UnityEngine::Sprite> lightCookieSprite;

  __declspec(property(get = get_lightCookieSpriteInstanceID)) int32_t lightCookieSpriteInstanceID;

  __declspec(property(get = get_lightMesh))::UnityW<::UnityEngine::Mesh> lightMesh;

  __declspec(property(get = get_lightOrder, put = set_lightOrder)) int32_t lightOrder;

  __declspec(property(get = get_lightType, put = set_lightType))::UnityEngine::Rendering::Universal::__Light2D__LightType lightType;

  /// @brief Field m_AlphaBlendOnOverlap, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AlphaBlendOnOverlap, put = __cordl_internal_set_m_AlphaBlendOnOverlap)) bool m_AlphaBlendOnOverlap;

  /// @brief Field m_ApplyToSortingLayers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ApplyToSortingLayers, put = __cordl_internal_set_m_ApplyToSortingLayers))::ArrayW<int32_t, ::Array<int32_t>*> m_ApplyToSortingLayers;

  /// @brief Field m_BlendStyleIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlendStyleIndex, put = __cordl_internal_set_m_BlendStyleIndex)) int32_t m_BlendStyleIndex;

  /// @brief Field m_CachedPosition, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get_m_CachedPosition, put = __cordl_internal_set_m_CachedPosition))::UnityEngine::Vector3 m_CachedPosition;

  /// @brief Field m_Color, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Color, put = __cordl_internal_set_m_Color))::UnityEngine::Color m_Color;

  /// @brief Field m_ComponentVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ComponentVersion,
                      put = __cordl_internal_set_m_ComponentVersion))::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions m_ComponentVersion;

  /// @brief Field m_DeprecatedPointLightCookieSprite, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeprecatedPointLightCookieSprite,
                      put = __cordl_internal_set_m_DeprecatedPointLightCookieSprite))::UnityW<::UnityEngine::Sprite> m_DeprecatedPointLightCookieSprite;

  /// @brief Field m_FalloffIntensity, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FalloffIntensity, put = __cordl_internal_set_m_FalloffIntensity)) float_t m_FalloffIntensity;

  /// @brief Field m_Intensity, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Intensity, put = __cordl_internal_set_m_Intensity)) float_t m_Intensity;

  /// @brief Field m_LightCookieSprite, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieSprite, put = __cordl_internal_set_m_LightCookieSprite))::UnityW<::UnityEngine::Sprite> m_LightCookieSprite;

  /// @brief Field m_LightOrder, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LightOrder, put = __cordl_internal_set_m_LightOrder)) int32_t m_LightOrder;

  /// @brief Field m_LightType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LightType, put = __cordl_internal_set_m_LightType))::UnityEngine::Rendering::Universal::__Light2D__LightType m_LightType;

  /// @brief Field m_LightVolumeIntensity, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LightVolumeIntensity, put = __cordl_internal_set_m_LightVolumeIntensity)) float_t m_LightVolumeIntensity;

  /// @brief Field m_LightVolumeIntensityEnabled, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LightVolumeIntensityEnabled, put = __cordl_internal_set_m_LightVolumeIntensityEnabled)) bool m_LightVolumeIntensityEnabled;

  /// @brief Field m_LocalBounds, offset 0xb0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_LocalBounds, put = __cordl_internal_set_m_LocalBounds))::UnityEngine::Bounds m_LocalBounds;

  /// @brief Field m_Mesh, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh))::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_NormalMapDistance, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NormalMapDistance, put = __cordl_internal_set_m_NormalMapDistance)) float_t m_NormalMapDistance;

  /// @brief Field m_NormalMapQuality, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NormalMapQuality, put = __cordl_internal_set_m_NormalMapQuality))::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality m_NormalMapQuality;

  /// @brief Field m_OverlapOperation, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OverlapOperation, put = __cordl_internal_set_m_OverlapOperation))::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation m_OverlapOperation;

  /// @brief Field m_PointLightInnerAngle, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PointLightInnerAngle, put = __cordl_internal_set_m_PointLightInnerAngle)) float_t m_PointLightInnerAngle;

  /// @brief Field m_PointLightInnerRadius, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PointLightInnerRadius, put = __cordl_internal_set_m_PointLightInnerRadius)) float_t m_PointLightInnerRadius;

  /// @brief Field m_PointLightOuterAngle, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PointLightOuterAngle, put = __cordl_internal_set_m_PointLightOuterAngle)) float_t m_PointLightOuterAngle;

  /// @brief Field m_PointLightOuterRadius, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PointLightOuterRadius, put = __cordl_internal_set_m_PointLightOuterRadius)) float_t m_PointLightOuterRadius;

  /// @brief Field m_PreviousLightCookieSprite, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousLightCookieSprite, put = __cordl_internal_set_m_PreviousLightCookieSprite)) int32_t m_PreviousLightCookieSprite;

  /// @brief Field m_PreviousLightType, offset 0x124, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousLightType, put = __cordl_internal_set_m_PreviousLightType))::UnityEngine::Rendering::Universal::__Light2D__LightType m_PreviousLightType;

  /// @brief Field m_PreviousShapeLightFalloffSize, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousShapeLightFalloffSize, put = __cordl_internal_set_m_PreviousShapeLightFalloffSize)) float_t m_PreviousShapeLightFalloffSize;

  /// @brief Field m_PreviousShapeLightParametricAngleOffset, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousShapeLightParametricAngleOffset,
                      put = __cordl_internal_set_m_PreviousShapeLightParametricAngleOffset)) float_t m_PreviousShapeLightParametricAngleOffset;

  /// @brief Field m_PreviousShapeLightParametricRadius, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousShapeLightParametricRadius, put = __cordl_internal_set_m_PreviousShapeLightParametricRadius)) float_t m_PreviousShapeLightParametricRadius;

  /// @brief Field m_PreviousShapeLightParametricSides, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousShapeLightParametricSides, put = __cordl_internal_set_m_PreviousShapeLightParametricSides)) int32_t m_PreviousShapeLightParametricSides;

  /// @brief Field m_PreviousShapePathHash, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousShapePathHash, put = __cordl_internal_set_m_PreviousShapePathHash)) int32_t m_PreviousShapePathHash;

  /// @brief Field m_ShadowIntensity, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowIntensity, put = __cordl_internal_set_m_ShadowIntensity)) float_t m_ShadowIntensity;

  /// @brief Field m_ShadowIntensityEnabled, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShadowIntensityEnabled, put = __cordl_internal_set_m_ShadowIntensityEnabled)) bool m_ShadowIntensityEnabled;

  /// @brief Field m_ShadowVolumeIntensity, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowVolumeIntensity, put = __cordl_internal_set_m_ShadowVolumeIntensity)) float_t m_ShadowVolumeIntensity;

  /// @brief Field m_ShadowVolumeIntensityEnabled, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShadowVolumeIntensityEnabled, put = __cordl_internal_set_m_ShadowVolumeIntensityEnabled)) bool m_ShadowVolumeIntensityEnabled;

  /// @brief Field m_ShapeLightFalloffOffset, offset 0xfc, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShapeLightFalloffOffset, put = __cordl_internal_set_m_ShapeLightFalloffOffset))::UnityEngine::Vector2 m_ShapeLightFalloffOffset;

  /// @brief Field m_ShapeLightFalloffSize, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShapeLightFalloffSize, put = __cordl_internal_set_m_ShapeLightFalloffSize)) float_t m_ShapeLightFalloffSize;

  /// @brief Field m_ShapeLightParametricAngleOffset, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShapeLightParametricAngleOffset, put = __cordl_internal_set_m_ShapeLightParametricAngleOffset)) float_t m_ShapeLightParametricAngleOffset;

  /// @brief Field m_ShapeLightParametricRadius, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShapeLightParametricRadius, put = __cordl_internal_set_m_ShapeLightParametricRadius)) float_t m_ShapeLightParametricRadius;

  /// @brief Field m_ShapeLightParametricSides, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShapeLightParametricSides, put = __cordl_internal_set_m_ShapeLightParametricSides)) int32_t m_ShapeLightParametricSides;

  /// @brief Field m_ShapePath, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShapePath, put = __cordl_internal_set_m_ShapePath))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_ShapePath;

  /// @brief Field m_Triangles, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Triangles, put = __cordl_internal_set_m_Triangles))::ArrayW<uint16_t, ::Array<uint16_t>*> m_Triangles;

  /// @brief Field m_UseNormalMap, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseNormalMap, put = __cordl_internal_set_m_UseNormalMap)) bool m_UseNormalMap;

  /// @brief Field m_Vertices, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Vertices, put = __cordl_internal_set_m_Vertices))::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex,
                                                                                                             ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> m_Vertices;

  __declspec(property(get = get_normalMapDistance)) float_t normalMapDistance;

  __declspec(property(get = get_normalMapQuality))::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality normalMapQuality;

  __declspec(property(get = get_overlapOperation, put = set_overlapOperation))::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation overlapOperation;

  __declspec(property(get = get_pointLightDistance)) float_t pointLightDistance;

  __declspec(property(get = get_pointLightInnerAngle, put = set_pointLightInnerAngle)) float_t pointLightInnerAngle;

  __declspec(property(get = get_pointLightInnerRadius, put = set_pointLightInnerRadius)) float_t pointLightInnerRadius;

  __declspec(property(get = get_pointLightOuterAngle, put = set_pointLightOuterAngle)) float_t pointLightOuterAngle;

  __declspec(property(get = get_pointLightOuterRadius, put = set_pointLightOuterRadius)) float_t pointLightOuterRadius;

  __declspec(property(get = get_pointLightQuality))::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality pointLightQuality;

  __declspec(property(get = get_renderVolumetricShadows)) bool renderVolumetricShadows;

  __declspec(property(get = get_shadowIntensity, put = set_shadowIntensity)) float_t shadowIntensity;

  __declspec(property(get = get_shadowVolumeIntensity, put = set_shadowVolumeIntensity)) float_t shadowVolumeIntensity;

  __declspec(property(get = get_shadowsEnabled, put = set_shadowsEnabled)) bool shadowsEnabled;

  __declspec(property(get = get_shapeLightFalloffSize, put = set_shapeLightFalloffSize)) float_t shapeLightFalloffSize;

  __declspec(property(get = get_shapeLightParametricAngleOffset)) float_t shapeLightParametricAngleOffset;

  __declspec(property(get = get_shapeLightParametricRadius, put = set_shapeLightParametricRadius)) float_t shapeLightParametricRadius;

  __declspec(property(get = get_shapeLightParametricSides)) int32_t shapeLightParametricSides;

  __declspec(property(get = get_shapePath, put = set_shapePath))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath;

  __declspec(property(
      get = get_vertices,
      put = set_vertices))::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> vertices;

  __declspec(property(get = get_volumeIntensity)) float_t volumeIntensity;

  __declspec(property(get = get_volumeIntensityEnabled, put = set_volumeIntensityEnabled)) bool volumeIntensityEnabled;

  __declspec(property(get = get_volumeOpacity)) float_t volumeOpacity;

  __declspec(property(get = get_volumetricShadowsEnabled, put = set_volumetricShadowsEnabled)) bool volumetricShadowsEnabled;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Awake, addr 0x2f34cb8, size 0x194, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CacheValues, addr 0x2f32fc0, size 0x30, virtual false, abstract: false, final false
  inline void CacheValues();

  /// @brief Method GetTopMostLitLayer, addr 0x2f32ff0, size 0x130, virtual false, abstract: false, final false
  inline int32_t GetTopMostLitLayer();

  /// @brief Method IsLitLayer, addr 0x2f34c60, size 0x58, virtual false, abstract: false, final false
  inline bool IsLitLayer(int32_t layer);

  /// @brief Method LateUpdate, addr 0x2f350b8, size 0x30, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method MarkForUpdate, addr 0x2f32fb4, size 0xc, virtual false, abstract: false, final false
  inline void MarkForUpdate();

  static inline ::UnityEngine::Rendering::Universal::Light2D* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x2f350f4, size 0x74, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x2f350e8, size 0xc, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDisable, addr 0x2f34fb4, size 0x54, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2f34e4c, size 0x68, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetShapePath, addr 0x2f35200, size 0x8, virtual false, abstract: false, final false
  inline void SetShapePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> path);

  /// @brief Method UpdateBoundingSphere, addr 0x2f34a54, size 0x1fc, virtual false, abstract: false, final false
  inline void UpdateBoundingSphere();

  /// @brief Method UpdateMesh, addr 0x2f32b50, size 0x174, virtual false, abstract: false, final false
  inline void UpdateMesh(bool forceUpdate);

  /// @brief Method UpdateSpriteMesh, addr 0x2f331c4, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds UpdateSpriteMesh();

  constexpr ::UnityEngine::BoundingSphere const& __cordl_internal_get__boundingSphere_k__BackingField() const;

  constexpr ::UnityEngine::BoundingSphere& __cordl_internal_get__boundingSphere_k__BackingField();

  constexpr bool const& __cordl_internal_get_forceUpdate() const;

  constexpr bool& __cordl_internal_get_forceUpdate();

  constexpr bool const& __cordl_internal_get_m_AlphaBlendOnOverlap() const;

  constexpr bool& __cordl_internal_get_m_AlphaBlendOnOverlap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_ApplyToSortingLayers() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_ApplyToSortingLayers();

  constexpr int32_t const& __cordl_internal_get_m_BlendStyleIndex() const;

  constexpr int32_t& __cordl_internal_get_m_BlendStyleIndex();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CachedPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CachedPosition();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_Color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_Color();

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions const& __cordl_internal_get_m_ComponentVersion() const;

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions& __cordl_internal_get_m_ComponentVersion();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_DeprecatedPointLightCookieSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_DeprecatedPointLightCookieSprite();

  constexpr float_t const& __cordl_internal_get_m_FalloffIntensity() const;

  constexpr float_t& __cordl_internal_get_m_FalloffIntensity();

  constexpr float_t const& __cordl_internal_get_m_Intensity() const;

  constexpr float_t& __cordl_internal_get_m_Intensity();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_LightCookieSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_LightCookieSprite();

  constexpr int32_t const& __cordl_internal_get_m_LightOrder() const;

  constexpr int32_t& __cordl_internal_get_m_LightOrder();

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType const& __cordl_internal_get_m_LightType() const;

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType& __cordl_internal_get_m_LightType();

  constexpr float_t const& __cordl_internal_get_m_LightVolumeIntensity() const;

  constexpr float_t& __cordl_internal_get_m_LightVolumeIntensity();

  constexpr bool const& __cordl_internal_get_m_LightVolumeIntensityEnabled() const;

  constexpr bool& __cordl_internal_get_m_LightVolumeIntensityEnabled();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_LocalBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_LocalBounds();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr float_t const& __cordl_internal_get_m_NormalMapDistance() const;

  constexpr float_t& __cordl_internal_get_m_NormalMapDistance();

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality const& __cordl_internal_get_m_NormalMapQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality& __cordl_internal_get_m_NormalMapQuality();

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation const& __cordl_internal_get_m_OverlapOperation() const;

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation& __cordl_internal_get_m_OverlapOperation();

  constexpr float_t const& __cordl_internal_get_m_PointLightInnerAngle() const;

  constexpr float_t& __cordl_internal_get_m_PointLightInnerAngle();

  constexpr float_t const& __cordl_internal_get_m_PointLightInnerRadius() const;

  constexpr float_t& __cordl_internal_get_m_PointLightInnerRadius();

  constexpr float_t const& __cordl_internal_get_m_PointLightOuterAngle() const;

  constexpr float_t& __cordl_internal_get_m_PointLightOuterAngle();

  constexpr float_t const& __cordl_internal_get_m_PointLightOuterRadius() const;

  constexpr float_t& __cordl_internal_get_m_PointLightOuterRadius();

  constexpr int32_t const& __cordl_internal_get_m_PreviousLightCookieSprite() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousLightCookieSprite();

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType const& __cordl_internal_get_m_PreviousLightType() const;

  constexpr ::UnityEngine::Rendering::Universal::__Light2D__LightType& __cordl_internal_get_m_PreviousLightType();

  constexpr float_t const& __cordl_internal_get_m_PreviousShapeLightFalloffSize() const;

  constexpr float_t& __cordl_internal_get_m_PreviousShapeLightFalloffSize();

  constexpr float_t const& __cordl_internal_get_m_PreviousShapeLightParametricAngleOffset() const;

  constexpr float_t& __cordl_internal_get_m_PreviousShapeLightParametricAngleOffset();

  constexpr float_t const& __cordl_internal_get_m_PreviousShapeLightParametricRadius() const;

  constexpr float_t& __cordl_internal_get_m_PreviousShapeLightParametricRadius();

  constexpr int32_t const& __cordl_internal_get_m_PreviousShapeLightParametricSides() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousShapeLightParametricSides();

  constexpr int32_t const& __cordl_internal_get_m_PreviousShapePathHash() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousShapePathHash();

  constexpr float_t const& __cordl_internal_get_m_ShadowIntensity() const;

  constexpr float_t& __cordl_internal_get_m_ShadowIntensity();

  constexpr bool const& __cordl_internal_get_m_ShadowIntensityEnabled() const;

  constexpr bool& __cordl_internal_get_m_ShadowIntensityEnabled();

  constexpr float_t const& __cordl_internal_get_m_ShadowVolumeIntensity() const;

  constexpr float_t& __cordl_internal_get_m_ShadowVolumeIntensity();

  constexpr bool const& __cordl_internal_get_m_ShadowVolumeIntensityEnabled() const;

  constexpr bool& __cordl_internal_get_m_ShadowVolumeIntensityEnabled();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ShapeLightFalloffOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ShapeLightFalloffOffset();

  constexpr float_t const& __cordl_internal_get_m_ShapeLightFalloffSize() const;

  constexpr float_t& __cordl_internal_get_m_ShapeLightFalloffSize();

  constexpr float_t const& __cordl_internal_get_m_ShapeLightParametricAngleOffset() const;

  constexpr float_t& __cordl_internal_get_m_ShapeLightParametricAngleOffset();

  constexpr float_t const& __cordl_internal_get_m_ShapeLightParametricRadius() const;

  constexpr float_t& __cordl_internal_get_m_ShapeLightParametricRadius();

  constexpr int32_t const& __cordl_internal_get_m_ShapeLightParametricSides() const;

  constexpr int32_t& __cordl_internal_get_m_ShapeLightParametricSides();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_m_ShapePath() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_m_ShapePath();

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __cordl_internal_get_m_Triangles() const;

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __cordl_internal_get_m_Triangles();

  constexpr bool const& __cordl_internal_get_m_UseNormalMap() const;

  constexpr bool& __cordl_internal_get_m_UseNormalMap();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> const&
  __cordl_internal_get_m_Vertices() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*>&
  __cordl_internal_get_m_Vertices();

  constexpr void __cordl_internal_set__boundingSphere_k__BackingField(::UnityEngine::BoundingSphere value);

  constexpr void __cordl_internal_set_forceUpdate(bool value);

  constexpr void __cordl_internal_set_m_AlphaBlendOnOverlap(bool value);

  constexpr void __cordl_internal_set_m_ApplyToSortingLayers(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_BlendStyleIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CachedPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_ComponentVersion(::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions value);

  constexpr void __cordl_internal_set_m_DeprecatedPointLightCookieSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_FalloffIntensity(float_t value);

  constexpr void __cordl_internal_set_m_Intensity(float_t value);

  constexpr void __cordl_internal_set_m_LightCookieSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_LightOrder(int32_t value);

  constexpr void __cordl_internal_set_m_LightType(::UnityEngine::Rendering::Universal::__Light2D__LightType value);

  constexpr void __cordl_internal_set_m_LightVolumeIntensity(float_t value);

  constexpr void __cordl_internal_set_m_LightVolumeIntensityEnabled(bool value);

  constexpr void __cordl_internal_set_m_LocalBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_NormalMapDistance(float_t value);

  constexpr void __cordl_internal_set_m_NormalMapQuality(::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality value);

  constexpr void __cordl_internal_set_m_OverlapOperation(::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation value);

  constexpr void __cordl_internal_set_m_PointLightInnerAngle(float_t value);

  constexpr void __cordl_internal_set_m_PointLightInnerRadius(float_t value);

  constexpr void __cordl_internal_set_m_PointLightOuterAngle(float_t value);

  constexpr void __cordl_internal_set_m_PointLightOuterRadius(float_t value);

  constexpr void __cordl_internal_set_m_PreviousLightCookieSprite(int32_t value);

  constexpr void __cordl_internal_set_m_PreviousLightType(::UnityEngine::Rendering::Universal::__Light2D__LightType value);

  constexpr void __cordl_internal_set_m_PreviousShapeLightFalloffSize(float_t value);

  constexpr void __cordl_internal_set_m_PreviousShapeLightParametricAngleOffset(float_t value);

  constexpr void __cordl_internal_set_m_PreviousShapeLightParametricRadius(float_t value);

  constexpr void __cordl_internal_set_m_PreviousShapeLightParametricSides(int32_t value);

  constexpr void __cordl_internal_set_m_PreviousShapePathHash(int32_t value);

  constexpr void __cordl_internal_set_m_ShadowIntensity(float_t value);

  constexpr void __cordl_internal_set_m_ShadowIntensityEnabled(bool value);

  constexpr void __cordl_internal_set_m_ShadowVolumeIntensity(float_t value);

  constexpr void __cordl_internal_set_m_ShadowVolumeIntensityEnabled(bool value);

  constexpr void __cordl_internal_set_m_ShapeLightFalloffOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_ShapeLightFalloffSize(float_t value);

  constexpr void __cordl_internal_set_m_ShapeLightParametricAngleOffset(float_t value);

  constexpr void __cordl_internal_set_m_ShapeLightParametricRadius(float_t value);

  constexpr void __cordl_internal_set_m_ShapeLightParametricSides(int32_t value);

  constexpr void __cordl_internal_set_m_ShapePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_m_Triangles(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr void __cordl_internal_set_m_UseNormalMap(bool value);

  constexpr void
  __cordl_internal_set_m_Vertices(::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> value);

  /// @brief Method .ctor, addr 0x2f35208, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_affectedSortingLayers, addr 0x2f329b8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_affectedSortingLayers();

  /// @brief Method get_alphaBlendOnOverlap, addr 0x2f32f54, size 0x10, virtual false, abstract: false, final false
  inline bool get_alphaBlendOnOverlap();

  /// @brief Method get_blendStyleIndex, addr 0x2f32e40, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_blendStyleIndex();

  /// @brief Method get_boundingSphere, addr 0x2f329d4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::BoundingSphere get_boundingSphere();

  /// @brief Method get_color, addr 0x2f32ec0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_falloffIntensity, addr 0x2f32f30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_falloffIntensity();

  /// @brief Method get_hasCachedMesh, addr 0x2f32a94, size 0x40, virtual false, abstract: false, final false
  inline bool get_hasCachedMesh();

  /// @brief Method get_indices, addr 0x2f329a8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint16_t, ::Array<uint16_t>*> get_indices();

  /// @brief Method get_intensity, addr 0x2f32ed8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_isPointLight, addr 0x2f34c50, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPointLight();

  /// @brief Method get_lightCookieSprite, addr 0x2f32f0c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_lightCookieSprite();

  /// @brief Method get_lightCookieSpriteInstanceID, addr 0x2f329c0, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_lightCookieSpriteInstanceID();

  /// @brief Method get_lightMesh, addr 0x2f329ec, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_lightMesh();

  /// @brief Method get_lightOrder, addr 0x2f32f74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lightOrder();

  /// @brief Method get_lightType, addr 0x2f32ad4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__Light2D__LightType get_lightType();

  /// @brief Method get_normalMapDistance, addr 0x2f32f84, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalMapDistance();

  /// @brief Method get_normalMapQuality, addr 0x2f32f8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality get_normalMapQuality();

  /// @brief Method get_overlapOperation, addr 0x2f32f64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation get_overlapOperation();

  /// @brief Method get_pointLightDistance, addr 0x2f351a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pointLightDistance();

  /// @brief Method get_pointLightInnerAngle, addr 0x2f35168, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pointLightInnerAngle();

  /// @brief Method get_pointLightInnerRadius, addr 0x2f35188, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pointLightInnerRadius();

  /// @brief Method get_pointLightOuterAngle, addr 0x2f35178, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pointLightOuterAngle();

  /// @brief Method get_pointLightOuterRadius, addr 0x2f35198, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pointLightOuterRadius();

  /// @brief Method get_pointLightQuality, addr 0x2f351b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality get_pointLightQuality();

  /// @brief Method get_renderVolumetricShadows, addr 0x2f32f94, size 0x20, virtual false, abstract: false, final false
  inline bool get_renderVolumetricShadows();

  /// @brief Method get_shadowIntensity, addr 0x2f32e50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shadowIntensity();

  /// @brief Method get_shadowVolumeIntensity, addr 0x2f32e88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shadowVolumeIntensity();

  /// @brief Method get_shadowsEnabled, addr 0x2f32e74, size 0x8, virtual false, abstract: false, final false
  inline bool get_shadowsEnabled();

  /// @brief Method get_shapeLightFalloffSize, addr 0x2f351d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shapeLightFalloffSize();

  /// @brief Method get_shapeLightParametricAngleOffset, addr 0x2f351c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shapeLightParametricAngleOffset();

  /// @brief Method get_shapeLightParametricRadius, addr 0x2f351c8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shapeLightParametricRadius();

  /// @brief Method get_shapeLightParametricSides, addr 0x2f351b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_shapeLightParametricSides();

  /// @brief Method get_shapePath, addr 0x2f351f0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_shapePath();

  /// @brief Method get_vertices, addr 0x2f32998, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> get_vertices();

  /// @brief Method get_volumeIntensity, addr 0x2f32ef0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_volumeIntensity();

  /// @brief Method get_volumeIntensityEnabled, addr 0x2f32ef8, size 0x8, virtual false, abstract: false, final false
  inline bool get_volumeIntensityEnabled();

  /// @brief Method get_volumeOpacity, addr 0x2f32ee8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_volumeOpacity();

  /// @brief Method get_volumetricShadowsEnabled, addr 0x2f32eac, size 0x8, virtual false, abstract: false, final false
  inline bool get_volumetricShadowsEnabled();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_blendStyleIndex, addr 0x2f32e48, size 0x8, virtual false, abstract: false, final false
  inline void set_blendStyleIndex(int32_t value);

  /// @brief Method set_boundingSphere, addr 0x2f329e0, size 0xc, virtual false, abstract: false, final false
  inline void set_boundingSphere(::UnityEngine::BoundingSphere value);

  /// @brief Method set_color, addr 0x2f32ecc, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_falloffIntensity, addr 0x2f32f38, size 0x1c, virtual false, abstract: false, final false
  inline void set_falloffIntensity(float_t value);

  /// @brief Method set_indices, addr 0x2f329b0, size 0x8, virtual false, abstract: false, final false
  inline void set_indices(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  /// @brief Method set_intensity, addr 0x2f32ee0, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method set_lightCookieSprite, addr 0x2f32f28, size 0x8, virtual false, abstract: false, final false
  inline void set_lightCookieSprite(::UnityEngine::Sprite* value);

  /// @brief Method set_lightOrder, addr 0x2f32f7c, size 0x8, virtual false, abstract: false, final false
  inline void set_lightOrder(int32_t value);

  /// @brief Method set_lightType, addr 0x2f32adc, size 0x74, virtual false, abstract: false, final false
  inline void set_lightType(::UnityEngine::Rendering::Universal::__Light2D__LightType value);

  /// @brief Method set_overlapOperation, addr 0x2f32f6c, size 0x8, virtual false, abstract: false, final false
  inline void set_overlapOperation(::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation value);

  /// @brief Method set_pointLightInnerAngle, addr 0x2f35170, size 0x8, virtual false, abstract: false, final false
  inline void set_pointLightInnerAngle(float_t value);

  /// @brief Method set_pointLightInnerRadius, addr 0x2f35190, size 0x8, virtual false, abstract: false, final false
  inline void set_pointLightInnerRadius(float_t value);

  /// @brief Method set_pointLightOuterAngle, addr 0x2f35180, size 0x8, virtual false, abstract: false, final false
  inline void set_pointLightOuterAngle(float_t value);

  /// @brief Method set_pointLightOuterRadius, addr 0x2f351a0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointLightOuterRadius(float_t value);

  /// @brief Method set_shadowIntensity, addr 0x2f32e58, size 0x1c, virtual false, abstract: false, final false
  inline void set_shadowIntensity(float_t value);

  /// @brief Method set_shadowVolumeIntensity, addr 0x2f32e90, size 0x1c, virtual false, abstract: false, final false
  inline void set_shadowVolumeIntensity(float_t value);

  /// @brief Method set_shadowsEnabled, addr 0x2f32e7c, size 0xc, virtual false, abstract: false, final false
  inline void set_shadowsEnabled(bool value);

  /// @brief Method set_shapeLightFalloffSize, addr 0x2f351e0, size 0x10, virtual false, abstract: false, final false
  inline void set_shapeLightFalloffSize(float_t value);

  /// @brief Method set_shapeLightParametricRadius, addr 0x2f351d0, size 0x8, virtual false, abstract: false, final false
  inline void set_shapeLightParametricRadius(float_t value);

  /// @brief Method set_shapePath, addr 0x2f351f8, size 0x8, virtual false, abstract: false, final false
  inline void set_shapePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method set_vertices, addr 0x2f329a0, size 0x8, virtual false, abstract: false, final false
  inline void set_vertices(::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> value);

  /// @brief Method set_volumeIntensityEnabled, addr 0x2f32f00, size 0xc, virtual false, abstract: false, final false
  inline void set_volumeIntensityEnabled(bool value);

  /// @brief Method set_volumetricShadowsEnabled, addr 0x2f32eb4, size 0xc, virtual false, abstract: false, final false
  inline void set_volumetricShadowsEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Light2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Light2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Light2D(Light2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Light2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Light2D(Light2D const&) = delete;

  /// @brief Field m_ComponentVersion, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions ___m_ComponentVersion;

  /// @brief Field m_LightType, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__Light2D__LightType ___m_LightType;

  /// @brief Field m_BlendStyleIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_BlendStyleIndex;

  /// @brief Field m_FalloffIntensity, offset: 0x24, size: 0x4, def value: None
  float_t ___m_FalloffIntensity;

  /// @brief Field m_Color, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___m_Color;

  /// @brief Field m_Intensity, offset: 0x38, size: 0x4, def value: None
  float_t ___m_Intensity;

  /// @brief Field m_LightVolumeIntensity, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_LightVolumeIntensity;

  /// @brief Field m_LightVolumeIntensityEnabled, offset: 0x40, size: 0x1, def value: None
  bool ___m_LightVolumeIntensityEnabled;

  /// @brief Field m_ApplyToSortingLayers, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_ApplyToSortingLayers;

  /// @brief Field m_LightCookieSprite, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_LightCookieSprite;

  /// @brief Field m_DeprecatedPointLightCookieSprite, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_DeprecatedPointLightCookieSprite;

  /// @brief Field m_LightOrder, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_LightOrder;

  /// @brief Field m_AlphaBlendOnOverlap, offset: 0x64, size: 0x1, def value: None
  bool ___m_AlphaBlendOnOverlap;

  /// @brief Field m_OverlapOperation, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation ___m_OverlapOperation;

  /// @brief Field m_NormalMapDistance, offset: 0x6c, size: 0x4, def value: None
  float_t ___m_NormalMapDistance;

  /// @brief Field m_NormalMapQuality, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality ___m_NormalMapQuality;

  /// @brief Field m_UseNormalMap, offset: 0x74, size: 0x1, def value: None
  bool ___m_UseNormalMap;

  /// @brief Field m_ShadowIntensityEnabled, offset: 0x75, size: 0x1, def value: None
  bool ___m_ShadowIntensityEnabled;

  /// @brief Field m_ShadowIntensity, offset: 0x78, size: 0x4, def value: None
  float_t ___m_ShadowIntensity;

  /// @brief Field m_ShadowVolumeIntensityEnabled, offset: 0x7c, size: 0x1, def value: None
  bool ___m_ShadowVolumeIntensityEnabled;

  /// @brief Field m_ShadowVolumeIntensity, offset: 0x80, size: 0x4, def value: None
  float_t ___m_ShadowVolumeIntensity;

  /// @brief Field m_Mesh, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_Mesh;

  /// @brief Field m_Vertices, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, ::Array<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex>*> ___m_Vertices;

  /// @brief Field m_Triangles, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint16_t, ::Array<uint16_t>*> ___m_Triangles;

  /// @brief Field m_PreviousLightCookieSprite, offset: 0xa0, size: 0x4, def value: None
  int32_t ___m_PreviousLightCookieSprite;

  /// @brief Field m_CachedPosition, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_CachedPosition;

  /// @brief Field m_LocalBounds, offset: 0xb0, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_LocalBounds;

  /// @brief Field <boundingSphere>k__BackingField, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::BoundingSphere ____boundingSphere_k__BackingField;

  /// @brief Field forceUpdate, offset: 0xd8, size: 0x1, def value: None
  bool ___forceUpdate;

  /// @brief Field m_PointLightInnerAngle, offset: 0xdc, size: 0x4, def value: None
  float_t ___m_PointLightInnerAngle;

  /// @brief Field m_PointLightOuterAngle, offset: 0xe0, size: 0x4, def value: None
  float_t ___m_PointLightOuterAngle;

  /// @brief Field m_PointLightInnerRadius, offset: 0xe4, size: 0x4, def value: None
  float_t ___m_PointLightInnerRadius;

  /// @brief Field m_PointLightOuterRadius, offset: 0xe8, size: 0x4, def value: None
  float_t ___m_PointLightOuterRadius;

  /// @brief Field m_ShapeLightParametricSides, offset: 0xec, size: 0x4, def value: None
  int32_t ___m_ShapeLightParametricSides;

  /// @brief Field m_ShapeLightParametricAngleOffset, offset: 0xf0, size: 0x4, def value: None
  float_t ___m_ShapeLightParametricAngleOffset;

  /// @brief Field m_ShapeLightParametricRadius, offset: 0xf4, size: 0x4, def value: None
  float_t ___m_ShapeLightParametricRadius;

  /// @brief Field m_ShapeLightFalloffSize, offset: 0xf8, size: 0x4, def value: None
  float_t ___m_ShapeLightFalloffSize;

  /// @brief Field m_ShapeLightFalloffOffset, offset: 0xfc, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ShapeLightFalloffOffset;

  /// @brief Field m_ShapePath, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___m_ShapePath;

  /// @brief Field m_PreviousShapeLightFalloffSize, offset: 0x110, size: 0x4, def value: None
  float_t ___m_PreviousShapeLightFalloffSize;

  /// @brief Field m_PreviousShapeLightParametricSides, offset: 0x114, size: 0x4, def value: None
  int32_t ___m_PreviousShapeLightParametricSides;

  /// @brief Field m_PreviousShapeLightParametricAngleOffset, offset: 0x118, size: 0x4, def value: None
  float_t ___m_PreviousShapeLightParametricAngleOffset;

  /// @brief Field m_PreviousShapeLightParametricRadius, offset: 0x11c, size: 0x4, def value: None
  float_t ___m_PreviousShapeLightParametricRadius;

  /// @brief Field m_PreviousShapePathHash, offset: 0x120, size: 0x4, def value: None
  int32_t ___m_PreviousShapePathHash;

  /// @brief Field m_PreviousLightType, offset: 0x124, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::__Light2D__LightType ___m_PreviousLightType;

  /// @brief Field k_CurrentComponentVersion value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions const k_CurrentComponentVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Light2D, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ComponentVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_LightType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_BlendStyleIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_FalloffIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_Color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_Intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_LightVolumeIntensity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_LightVolumeIntensityEnabled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ApplyToSortingLayers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_LightCookieSprite) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_DeprecatedPointLightCookieSprite) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_LightOrder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_AlphaBlendOnOverlap) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_OverlapOperation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_NormalMapDistance) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_NormalMapQuality) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_UseNormalMap) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShadowIntensityEnabled) == 0x75, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShadowIntensity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShadowVolumeIntensityEnabled) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShadowVolumeIntensity) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_Mesh) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_Vertices) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_Triangles) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PreviousLightCookieSprite) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_CachedPosition) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_LocalBounds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ____boundingSphere_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___forceUpdate) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PointLightInnerAngle) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PointLightOuterAngle) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PointLightInnerRadius) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PointLightOuterRadius) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShapeLightParametricSides) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShapeLightParametricAngleOffset) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShapeLightParametricRadius) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShapeLightFalloffSize) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShapeLightFalloffOffset) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_ShapePath) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PreviousShapeLightFalloffSize) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PreviousShapeLightParametricSides) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PreviousShapeLightParametricAngleOffset) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PreviousShapeLightParametricRadius) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PreviousShapePathHash) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Light2D, ___m_PreviousLightType) == 0x124, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2D__ComponentVersions, "UnityEngine.Rendering.Universal", "Light2D/ComponentVersions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2D__DeprecatedLightType, "UnityEngine.Rendering.Universal", "Light2D/DeprecatedLightType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2D__LightType, "UnityEngine.Rendering.Universal", "Light2D/LightType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2D__NormalMapQuality, "UnityEngine.Rendering.Universal", "Light2D/NormalMapQuality");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Light2D__OverlapOperation, "UnityEngine.Rendering.Universal", "Light2D/OverlapOperation");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Light2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2D*, "UnityEngine.Rendering.Universal", "Light2D");
