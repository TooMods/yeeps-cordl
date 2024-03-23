#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieManager)
namespace GlobalNamespace {
class __LightCookieManager__LightCookieMapping____c;
}
namespace GlobalNamespace {
struct __LightCookieManager__Settings__AtlasSettings;
}
namespace GlobalNamespace {
template <typename T> struct __LightCookieManager__Sorting____c__DisplayClass2_0_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalLightData;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__LightCookieMapping;
}
namespace UnityEngine::Rendering::Universal {
class __LightCookieManager__LightCookieShaderData;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__LightCookieShaderFormat;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__Settings;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__ShaderBitArray;
}
namespace UnityEngine::Rendering::Universal {
class __LightCookieManager__ShaderProperty;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__Sorting;
}
namespace UnityEngine::Rendering::Universal {
class __LightCookieManager__WorkMemory;
}
namespace UnityEngine::Rendering::Universal {
template <typename T> struct __LightCookieManager__WorkSlice_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
class Texture2DAtlas;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__LightCookieShaderFormat;
}
namespace GlobalNamespace {
class __LightCookieManager__LightCookieMapping____c;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
class __LightCookieManager__LightCookieShaderData;
}
namespace UnityEngine::Rendering::Universal {
class __LightCookieManager__ShaderProperty;
}
namespace UnityEngine::Rendering::Universal {
class __LightCookieManager__WorkMemory;
}
namespace GlobalNamespace {
struct __LightCookieManager__Settings__AtlasSettings;
}
namespace GlobalNamespace {
template <typename T> struct __LightCookieManager__Sorting____c__DisplayClass2_0_1;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__LightCookieMapping;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__Settings;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__ShaderBitArray;
}
namespace UnityEngine::Rendering::Universal {
struct __LightCookieManager__Sorting;
}
namespace UnityEngine::Rendering::Universal {
template <typename T> struct __LightCookieManager__WorkSlice_1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat);
MARK_REF_PTR_T(::GlobalNamespace::__LightCookieManager__LightCookieMapping____c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LightCookieManager);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderProperty);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory);
MARK_VAL_T(::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings);
MARK_GEN_VAL_T(::GlobalNamespace::__LightCookieManager__Sorting____c__DisplayClass2_0_1);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LightCookieManager__Settings);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LightCookieManager__Sorting);
MARK_GEN_VAL_T(::UnityEngine::Rendering::Universal::__LightCookieManager__WorkSlice_1);
// Type: ::ShaderProperty
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::LightCookieManager::ShaderProperty*
class CORDL_TYPE __LightCookieManager__ShaderProperty : public ::System::Object {
public:
  // Declarations
  /// @brief Field additionalLightsCookieAtlasTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsCookieAtlasTexture, put = setStaticF_additionalLightsCookieAtlasTexture)) int32_t additionalLightsCookieAtlasTexture;

  /// @brief Field additionalLightsCookieAtlasTextureFormat, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsCookieAtlasTextureFormat, put = setStaticF_additionalLightsCookieAtlasTextureFormat)) int32_t additionalLightsCookieAtlasTextureFormat;

  /// @brief Field additionalLightsCookieAtlasUVRectBuffer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsCookieAtlasUVRectBuffer, put = setStaticF_additionalLightsCookieAtlasUVRectBuffer)) int32_t additionalLightsCookieAtlasUVRectBuffer;

  /// @brief Field additionalLightsCookieAtlasUVRects, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsCookieAtlasUVRects, put = setStaticF_additionalLightsCookieAtlasUVRects)) int32_t additionalLightsCookieAtlasUVRects;

  /// @brief Field additionalLightsCookieEnableBits, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsCookieEnableBits, put = setStaticF_additionalLightsCookieEnableBits)) int32_t additionalLightsCookieEnableBits;

  /// @brief Field additionalLightsLightTypeBuffer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsLightTypeBuffer, put = setStaticF_additionalLightsLightTypeBuffer)) int32_t additionalLightsLightTypeBuffer;

  /// @brief Field additionalLightsLightTypes, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsLightTypes, put = setStaticF_additionalLightsLightTypes)) int32_t additionalLightsLightTypes;

  /// @brief Field additionalLightsWorldToLightBuffer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsWorldToLightBuffer, put = setStaticF_additionalLightsWorldToLightBuffer)) int32_t additionalLightsWorldToLightBuffer;

  /// @brief Field additionalLightsWorldToLights, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_additionalLightsWorldToLights, put = setStaticF_additionalLightsWorldToLights)) int32_t additionalLightsWorldToLights;

  /// @brief Field mainLightCookieTextureFormat, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_mainLightCookieTextureFormat, put = setStaticF_mainLightCookieTextureFormat)) int32_t mainLightCookieTextureFormat;

  /// @brief Field mainLightTexture, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_mainLightTexture, put = setStaticF_mainLightTexture)) int32_t mainLightTexture;

  /// @brief Field mainLightWorldToLight, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_mainLightWorldToLight, put = setStaticF_mainLightWorldToLight)) int32_t mainLightWorldToLight;

  static inline int32_t getStaticF_additionalLightsCookieAtlasTexture();

  static inline int32_t getStaticF_additionalLightsCookieAtlasTextureFormat();

  static inline int32_t getStaticF_additionalLightsCookieAtlasUVRectBuffer();

  static inline int32_t getStaticF_additionalLightsCookieAtlasUVRects();

  static inline int32_t getStaticF_additionalLightsCookieEnableBits();

  static inline int32_t getStaticF_additionalLightsLightTypeBuffer();

  static inline int32_t getStaticF_additionalLightsLightTypes();

  static inline int32_t getStaticF_additionalLightsWorldToLightBuffer();

  static inline int32_t getStaticF_additionalLightsWorldToLights();

  static inline int32_t getStaticF_mainLightCookieTextureFormat();

  static inline int32_t getStaticF_mainLightTexture();

  static inline int32_t getStaticF_mainLightWorldToLight();

  static inline void setStaticF_additionalLightsCookieAtlasTexture(int32_t value);

  static inline void setStaticF_additionalLightsCookieAtlasTextureFormat(int32_t value);

  static inline void setStaticF_additionalLightsCookieAtlasUVRectBuffer(int32_t value);

  static inline void setStaticF_additionalLightsCookieAtlasUVRects(int32_t value);

  static inline void setStaticF_additionalLightsCookieEnableBits(int32_t value);

  static inline void setStaticF_additionalLightsLightTypeBuffer(int32_t value);

  static inline void setStaticF_additionalLightsLightTypes(int32_t value);

  static inline void setStaticF_additionalLightsWorldToLightBuffer(int32_t value);

  static inline void setStaticF_additionalLightsWorldToLights(int32_t value);

  static inline void setStaticF_mainLightCookieTextureFormat(int32_t value);

  static inline void setStaticF_mainLightTexture(int32_t value);

  static inline void setStaticF_mainLightWorldToLight(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__ShaderProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightCookieManager__ShaderProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightCookieManager__ShaderProperty(__LightCookieManager__ShaderProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightCookieManager__ShaderProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightCookieManager__ShaderProperty(__LightCookieManager__ShaderProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderProperty, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::LightCookieShaderFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LightCookieManager::LightCookieShaderFormat
struct CORDL_TYPE __LightCookieManager__LightCookieShaderFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LightCookieManager__LightCookieShaderFormat_Unwrapped
  enum struct ____LightCookieManager__LightCookieShaderFormat_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_RGB = static_cast<int32_t>(0x0),
    __E_Alpha = static_cast<int32_t>(0x1),
    __E_Red = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LightCookieManager__LightCookieShaderFormat_Unwrapped() const noexcept {
    return static_cast<____LightCookieManager__LightCookieShaderFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__LightCookieShaderFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LightCookieManager__LightCookieShaderFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Alpha value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat const Alpha;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat const None;

  /// @brief Field RGB value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat const RGB;

  /// @brief Field Red value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat const Red;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::AtlasSettings
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 29, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LightCookieManager::Settings::AtlasSettings
struct CORDL_TYPE __LightCookieManager__Settings__AtlasSettings {
public:
  // Declarations
  __declspec(property(get = get_isPow2)) bool isPow2;

  __declspec(property(get = get_isSquare)) bool isSquare;

  /// @brief Method get_isPow2, addr 0x2e27810, size 0x34, virtual false, abstract: false, final false
  inline bool get_isPow2();

  /// @brief Method get_isSquare, addr 0x2e29b3c, size 0x4eda8, virtual false, abstract: false, final false
  inline bool get_isSquare();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__Settings__AtlasSettings();

  // Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "format", ty:
  // "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "useMips", ty: "bool", modifiers: "", def_value: None }]
  constexpr __LightCookieManager__Settings__AtlasSettings(::UnityEngine::Vector2Int resolution, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool useMips) noexcept;

  /// @brief Field resolution, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2Int resolution;

  /// @brief Field format, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat format;

  /// @brief Field useMips, offset: 0xc, size: 0x1, def value: None
  bool useMips;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings, resolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings, format) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings, useMips) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Settings
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 41, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LightCookieManager::Settings
struct CORDL_TYPE __LightCookieManager__Settings {
public:
  // Declarations
  using AtlasSettings = ::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings;

  /// @brief Method GetDefault, addr 0x2e29a70, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::__LightCookieManager__Settings GetDefault();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__Settings();

  // Ctor Parameters [CppParam { name: "atlas", ty: "::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings", modifiers: "", def_value: None }, CppParam { name: "maxAdditionalLights", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "cubeOctahedralSizeScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "useStructuredBuffer", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr __LightCookieManager__Settings(::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings atlas, int32_t maxAdditionalLights, float_t cubeOctahedralSizeScale,
                                           bool useStructuredBuffer) noexcept;

  /// @brief Field atlas, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings atlas;

  /// @brief Field maxAdditionalLights, offset: 0x10, size: 0x4, def value: None
  int32_t maxAdditionalLights;

  /// @brief Field cubeOctahedralSizeScale, offset: 0x14, size: 0x4, def value: None
  float_t cubeOctahedralSizeScale;

  /// @brief Field useStructuredBuffer, offset: 0x18, size: 0x1, def value: None
  bool useStructuredBuffer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightCookieManager__Settings, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__Settings, atlas) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__Settings, maxAdditionalLights) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__Settings, cubeOctahedralSizeScale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__Settings, useStructuredBuffer) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c__DisplayClass2_0`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::LightCookieManager::Sorting::<>c__DisplayClass2_0`1<T>
struct CORDL_TYPE __LightCookieManager__Sorting____c__DisplayClass2_0_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__Sorting____c__DisplayClass2_0_1();

  // Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }]
  constexpr __LightCookieManager__Sorting____c__DisplayClass2_0_1(::ArrayW<T, ::Array<T>*> data) noexcept;

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::Sorting
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LightCookieManager::Sorting
#pragma pack(push, 0)
struct CORDL_TYPE __LightCookieManager__Sorting {
public:
  // Declarations
  template <typename T> using __c__DisplayClass2_0_1 = ::GlobalNamespace::__LightCookieManager__Sorting____c__DisplayClass2_0_1<T>;

  /// @brief Method InsertionSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InsertionSort(::ArrayW<T, ::Array<T>*> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method Median3Pivot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Median3Pivot(::ArrayW<T, ::Array<T>*> data, int32_t start, int32_t pivot, int32_t end, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t Partition(::ArrayW<T, ::Array<T>*> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::ArrayW<T, ::Array<T>*> data, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::ArrayW<T, ::Array<T>*> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method <Median3Pivot>g__Swap|2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void _Median3Pivot_g__Swap_2_0(int32_t a, int32_t b, ByRef<::GlobalNamespace::__LightCookieManager__Sorting____c__DisplayClass2_0_1<T>> _cordl_fixed_empty_name_whitespace);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__Sorting();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightCookieManager__Sorting, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightCookieManager::LightCookieMapping::<>c*
class CORDL_TYPE __LightCookieManager__LightCookieMapping____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LightCookieManager__LightCookieMapping____c* __9;

  static inline ::GlobalNamespace::__LightCookieManager__LightCookieMapping____c* New_ctor();

  /// @brief Method <.cctor>b__6_0, addr 0x2724090, size 0xcc, virtual false, abstract: false, final false
  inline int32_t __cctor_b__6_0(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping a, ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping b);

  /// @brief Method <.cctor>b__6_1, addr 0x272415c, size 0xc, virtual false, abstract: false, final false
  inline int32_t __cctor_b__6_1(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping a, ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping b);

  /// @brief Method .ctor, addr 0x2724088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__LightCookieManager__LightCookieMapping____c* getStaticF___9();

  static inline void setStaticF___9(::GlobalNamespace::__LightCookieManager__LightCookieMapping____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__LightCookieMapping____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightCookieManager__LightCookieMapping____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightCookieManager__LightCookieMapping____c(__LightCookieManager__LightCookieMapping____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightCookieManager__LightCookieMapping____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightCookieManager__LightCookieMapping____c(__LightCookieManager__LightCookieMapping____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightCookieManager__LightCookieMapping____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LightCookieMapping
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LightCookieManager::LightCookieMapping
struct CORDL_TYPE __LightCookieManager__LightCookieMapping {
public:
  // Declarations
  using __c = ::GlobalNamespace::__LightCookieManager__LightCookieMapping____c;

  /// @brief Field s_CompareByBufferIndex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CompareByBufferIndex,
                             put = setStaticF_s_CompareByBufferIndex))::System::Func_3<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping,
                                                                                       ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, int32_t>* s_CompareByBufferIndex;

  /// @brief Field s_CompareByCookieSize, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CompareByCookieSize,
                             put = setStaticF_s_CompareByCookieSize))::System::Func_3<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping,
                                                                                      ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, int32_t>* s_CompareByCookieSize;

  static inline ::System::Func_3<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, int32_t>*
  getStaticF_s_CompareByBufferIndex();

  static inline ::System::Func_3<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, int32_t>*
  getStaticF_s_CompareByCookieSize();

  static inline void setStaticF_s_CompareByBufferIndex(
      ::System::Func_3<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, int32_t>* value);

  static inline void setStaticF_s_CompareByCookieSize(
      ::System::Func_3<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, int32_t>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__LightCookieMapping();

  // Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lightBufferIndex", ty: "uint16_t", modifiers: "", def_value: None },
  // CppParam { name: "light", ty: "::UnityW<::UnityEngine::Light>", modifiers: "", def_value: None }]
  constexpr __LightCookieManager__LightCookieMapping(uint16_t visibleLightIndex, uint16_t lightBufferIndex, ::UnityW<::UnityEngine::Light> light) noexcept;

  /// @brief Field visibleLightIndex, offset: 0x0, size: 0x2, def value: None
  uint16_t visibleLightIndex;

  /// @brief Field lightBufferIndex, offset: 0x2, size: 0x2, def value: None
  uint16_t lightBufferIndex;

  /// @brief Field light, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Light> light;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, visibleLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, lightBufferIndex) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, light) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::WorkSlice`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::LightCookieManager::WorkSlice`1<T>
struct CORDL_TYPE __LightCookieManager__WorkSlice_1 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_capacity)) int32_t capacity;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sort(::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> src, int32_t srcLen);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> src, int32_t srcStart, int32_t srcLen);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_capacity();

  /// @brief Method get_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__WorkSlice_1();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LightCookieManager__WorkSlice_1(::ArrayW<T, ::Array<T>*> m_Data, int32_t m_Start, int32_t m_Length) noexcept;

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> m_Data;

  /// @brief Field m_Start, offset: 0x8, size: 0x4, def value: None
  int32_t m_Start;

  /// @brief Field m_Length, offset: 0xc, size: 0x4, def value: None
  int32_t m_Length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
// Type: ::WorkMemory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::LightCookieManager::WorkMemory*
class CORDL_TYPE __LightCookieManager__WorkMemory : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightMappings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightMappings,
                      put = __cordl_internal_set_lightMappings))::ArrayW<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping,
                                                                         ::Array<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>*> lightMappings;

  /// @brief Field uvRects, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_uvRects, put = __cordl_internal_set_uvRects))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvRects;

  static inline ::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory* New_ctor();

  /// @brief Method Resize, addr 0x2724168, size 0x128, virtual false, abstract: false, final false
  inline void Resize(int32_t size);

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>*> const&
  __cordl_internal_get_lightMappings() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>*>&
  __cordl_internal_get_lightMappings();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_uvRects() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_uvRects();

  constexpr void __cordl_internal_set_lightMappings(
      ::ArrayW<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>*> value);

  constexpr void __cordl_internal_set_uvRects(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method .ctor, addr 0x2724290, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__WorkMemory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightCookieManager__WorkMemory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightCookieManager__WorkMemory(__LightCookieManager__WorkMemory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightCookieManager__WorkMemory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightCookieManager__WorkMemory(__LightCookieManager__WorkMemory const&) = delete;

  /// @brief Field lightMappings, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>*> ___lightMappings;

  /// @brief Field uvRects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___uvRects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory, ___lightMappings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory, ___uvRects) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::ShaderBitArray
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LightCookieManager::ShaderBitArray
struct CORDL_TYPE __LightCookieManager__ShaderBitArray {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_bitCapacity)) int32_t bitCapacity;

  __declspec(property(get = get_data))::ArrayW<float_t, ::Array<float_t>*> data;

  __declspec(property(get = get_elemLength)) int32_t elemLength;

  /// @brief Method Clear, addr 0x2724418, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetElementIndexAndBitOffset, addr 0x2724468, size 0x14, virtual false, abstract: false, final false
  inline void GetElementIndexAndBitOffset(int32_t index, ByRef<int32_t> elemIndex, ByRef<int32_t> bitOffset);

  /// @brief Method Resize, addr 0x27242d4, size 0x144, virtual false, abstract: false, final false
  inline void Resize(int32_t bitCount);

  /// @brief Method ToString, addr 0x2724500, size 0x170, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Item, addr 0x272447c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Method get_bitCapacity, addr 0x27242b0, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_bitCapacity();

  /// @brief Method get_data, addr 0x27242cc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_data();

  /// @brief Method get_elemLength, addr 0x2724298, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_elemLength();

  /// @brief Method set_Item, addr 0x27244b8, size 0x48, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__ShaderBitArray();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
  constexpr __LightCookieManager__ShaderBitArray(::ArrayW<float_t, ::Array<float_t>*> m_Data) noexcept;

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> m_Data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_BitsPerElement offset 0xffffffff size 0x4
  static constexpr int32_t k_BitsPerElement{ static_cast<int32_t>(0x20) };

  /// @brief Field k_ElementMask offset 0xffffffff size 0x4
  static constexpr int32_t k_ElementMask{ static_cast<int32_t>(0x1f) };

  /// @brief Field k_ElementShift offset 0xffffffff size 0x4
  static constexpr int32_t k_ElementShift{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray, m_Data) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::LightCookieShaderData
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::LightCookieManager::LightCookieShaderData*
class CORDL_TYPE __LightCookieManager__LightCookieShaderData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isUploaded>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isUploaded_k__BackingField, put = __cordl_internal_set__isUploaded_k__BackingField)) bool _isUploaded_k__BackingField;

  __declspec(property(get = get_atlasUVRects))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> atlasUVRects;

  __declspec(property(get = get_cookieEnableBits))::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray cookieEnableBits;

  __declspec(property(get = get_isUploaded, put = set_isUploaded)) bool isUploaded;

  __declspec(property(get = get_lightTypes))::ArrayW<float_t, ::Array<float_t>*> lightTypes;

  /// @brief Field m_AtlasUVRectBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasUVRectBuffer, put = __cordl_internal_set_m_AtlasUVRectBuffer))::UnityEngine::ComputeBuffer* m_AtlasUVRectBuffer;

  /// @brief Field m_AtlasUVRectCpuData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasUVRectCpuData,
                      put = __cordl_internal_set_m_AtlasUVRectCpuData))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_AtlasUVRectCpuData;

  /// @brief Field m_CookieEnableBitsCpuData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CookieEnableBitsCpuData,
                      put = __cordl_internal_set_m_CookieEnableBitsCpuData))::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray m_CookieEnableBitsCpuData;

  /// @brief Field m_LightTypeBuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightTypeBuffer, put = __cordl_internal_set_m_LightTypeBuffer))::UnityEngine::ComputeBuffer* m_LightTypeBuffer;

  /// @brief Field m_LightTypeCpuData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightTypeCpuData, put = __cordl_internal_set_m_LightTypeCpuData))::ArrayW<float_t, ::Array<float_t>*> m_LightTypeCpuData;

  /// @brief Field m_Size, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) int32_t m_Size;

  /// @brief Field m_UseStructuredBuffer, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseStructuredBuffer, put = __cordl_internal_set_m_UseStructuredBuffer)) bool m_UseStructuredBuffer;

  /// @brief Field m_WorldToLightBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldToLightBuffer, put = __cordl_internal_set_m_WorldToLightBuffer))::UnityEngine::ComputeBuffer* m_WorldToLightBuffer;

  /// @brief Field m_WorldToLightCpuData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldToLightCpuData,
                      put = __cordl_internal_set_m_WorldToLightCpuData))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_WorldToLightCpuData;

  __declspec(property(get = get_worldToLights))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> worldToLights;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clear, addr 0x2724aac, size 0x8c, virtual false, abstract: false, final false
  inline void Clear(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Dispose, addr 0x27248cc, size 0x4c, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData* New_ctor(int32_t size, bool useStructuredBuffer);

  /// @brief Method Resize, addr 0x27246d8, size 0x1f4, virtual false, abstract: false, final false
  inline void Resize(int32_t size);

  /// @brief Method Upload, addr 0x2724918, size 0x194, virtual false, abstract: false, final false
  inline void Upload(::UnityEngine::Rendering::CommandBuffer* cmd);

  constexpr bool const& __cordl_internal_get__isUploaded_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isUploaded_k__BackingField();

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_AtlasUVRectBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_AtlasUVRectBuffer() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AtlasUVRectCpuData() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AtlasUVRectCpuData();

  constexpr ::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray const& __cordl_internal_get_m_CookieEnableBitsCpuData() const;

  constexpr ::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray& __cordl_internal_get_m_CookieEnableBitsCpuData();

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_LightTypeBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_LightTypeBuffer() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_LightTypeCpuData() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_LightTypeCpuData();

  constexpr int32_t const& __cordl_internal_get_m_Size() const;

  constexpr int32_t& __cordl_internal_get_m_Size();

  constexpr bool const& __cordl_internal_get_m_UseStructuredBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseStructuredBuffer();

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_WorldToLightBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_WorldToLightBuffer() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_WorldToLightCpuData() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_WorldToLightCpuData();

  constexpr void __cordl_internal_set__isUploaded_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_AtlasUVRectBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_AtlasUVRectCpuData(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CookieEnableBitsCpuData(::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray value);

  constexpr void __cordl_internal_set_m_LightTypeBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_LightTypeCpuData(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_Size(int32_t value);

  constexpr void __cordl_internal_set_m_UseStructuredBuffer(bool value);

  constexpr void __cordl_internal_set_m_WorldToLightBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_WorldToLightCpuData(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method .ctor, addr 0x27246a4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, bool useStructuredBuffer);

  /// @brief Method get_atlasUVRects, addr 0x2724680, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> get_atlasUVRects();

  /// @brief Method get_cookieEnableBits, addr 0x2724678, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray get_cookieEnableBits();

  /// @brief Method get_isUploaded, addr 0x2724690, size 0x8, virtual false, abstract: false, final false
  inline bool get_isUploaded();

  /// @brief Method get_lightTypes, addr 0x2724688, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_lightTypes();

  /// @brief Method get_worldToLights, addr 0x2724670, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_worldToLights();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_isUploaded, addr 0x2724698, size 0xc, virtual false, abstract: false, final false
  inline void set_isUploaded(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightCookieManager__LightCookieShaderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightCookieManager__LightCookieShaderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightCookieManager__LightCookieShaderData(__LightCookieManager__LightCookieShaderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightCookieManager__LightCookieShaderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightCookieManager__LightCookieShaderData(__LightCookieManager__LightCookieShaderData const&) = delete;

  /// @brief Field m_Size, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Size;

  /// @brief Field m_UseStructuredBuffer, offset: 0x14, size: 0x1, def value: None
  bool ___m_UseStructuredBuffer;

  /// @brief Field m_WorldToLightCpuData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_WorldToLightCpuData;

  /// @brief Field m_AtlasUVRectCpuData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AtlasUVRectCpuData;

  /// @brief Field m_LightTypeCpuData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_LightTypeCpuData;

  /// @brief Field m_CookieEnableBitsCpuData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray ___m_CookieEnableBitsCpuData;

  /// @brief Field m_WorldToLightBuffer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_WorldToLightBuffer;

  /// @brief Field m_AtlasUVRectBuffer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_AtlasUVRectBuffer;

  /// @brief Field m_LightTypeBuffer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_LightTypeBuffer;

  /// @brief Field <isUploaded>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____isUploaded_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_UseStructuredBuffer) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_WorldToLightCpuData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_AtlasUVRectCpuData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_LightTypeCpuData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_CookieEnableBitsCpuData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_WorldToLightBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_AtlasUVRectBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ___m_LightTypeBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData, ____isUploaded_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::LightCookieManager
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::LightCookieManager*
class CORDL_TYPE LightCookieManager : public ::System::Object {
public:
  // Declarations
  using LightCookieMapping = ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping;

  using LightCookieShaderData = ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData;

  using LightCookieShaderFormat = ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat;

  using Settings = ::UnityEngine::Rendering::Universal::__LightCookieManager__Settings;

  using ShaderBitArray = ::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray;

  using ShaderProperty = ::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderProperty;

  using Sorting = ::UnityEngine::Rendering::Universal::__LightCookieManager__Sorting;

  using WorkMemory = ::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory;

  template <typename T> using WorkSlice_1 = ::UnityEngine::Rendering::Universal::__LightCookieManager__WorkSlice_1<T>;

  __declspec(property(get = get_IsKeywordLightCookieEnabled, put = set_IsKeywordLightCookieEnabled)) bool IsKeywordLightCookieEnabled;

  /// @brief Field <IsKeywordLightCookieEnabled>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField,
                      put = __cordl_internal_set__IsKeywordLightCookieEnabled_k__BackingField)) bool _IsKeywordLightCookieEnabled_k__BackingField;

  /// @brief Field m_AdditionalLightsCookieAtlas, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsCookieAtlas,
                      put = __cordl_internal_set_m_AdditionalLightsCookieAtlas))::UnityEngine::Rendering::Texture2DAtlas* m_AdditionalLightsCookieAtlas;

  /// @brief Field m_AdditionalLightsCookieShaderData, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_AdditionalLightsCookieShaderData,
               put = __cordl_internal_set_m_AdditionalLightsCookieShaderData))::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData* m_AdditionalLightsCookieShaderData;

  /// @brief Field m_CookieSizeDivisor, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CookieSizeDivisor, put = __cordl_internal_set_m_CookieSizeDivisor)) int32_t m_CookieSizeDivisor;

  /// @brief Field m_PrevCookieRequestPixelCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevCookieRequestPixelCount, put = __cordl_internal_set_m_PrevCookieRequestPixelCount)) uint32_t m_PrevCookieRequestPixelCount;

  /// @brief Field m_Settings, offset 0x20, size 0x1c
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityEngine::Rendering::Universal::__LightCookieManager__Settings m_Settings;

  /// @brief Field m_VisibleLightIndexToShaderDataIndex, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleLightIndexToShaderDataIndex,
                      put = __cordl_internal_set_m_VisibleLightIndexToShaderDataIndex))::ArrayW<int32_t, ::Array<int32_t>*> m_VisibleLightIndexToShaderDataIndex;

  /// @brief Field m_WorkMem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorkMem, put = __cordl_internal_set_m_WorkMem))::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory* m_WorkMem;

  /// @brief Field s_DirLightProj, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_s_DirLightProj, put = setStaticF_s_DirLightProj))::UnityEngine::Matrix4x4 s_DirLightProj;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AdjustUVRect, addr 0x2e29428, size 0x1a4, virtual false, abstract: false, final false
  inline void AdjustUVRect(ByRef<::UnityEngine::Vector4> uvScaleOffset, ::UnityEngine::Texture* cookie, ByRef<::UnityEngine::Vector2> cookieSize);

  /// @brief Method ApproximateCookieSizeDivisor, addr 0x2e28ee8, size 0x2c, virtual false, abstract: false, final false
  inline int32_t ApproximateCookieSizeDivisor(float_t requestAtlasRatio);

  /// @brief Method ComputeCookieRequestPixelCount, addr 0x2e28dec, size 0xfc, virtual false, abstract: false, final false
  inline uint32_t ComputeCookieRequestPixelCount(
      ByRef<::UnityEngine::Rendering::Universal::__LightCookieManager__WorkSlice_1<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>> validLightMappings);

  /// @brief Method ComputeOctahedralCookieSize, addr 0x2e295cc, size 0x120, virtual false, abstract: false, final false
  inline int32_t ComputeOctahedralCookieSize(::UnityEngine::Texture* cookie);

  /// @brief Method Dispose, addr 0x2e27864, size 0x34, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Fetch2D, addr 0x2e292d0, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 Fetch2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* cookie, int32_t cookieSizeDivisor);

  /// @brief Method FetchCube, addr 0x2e2916c, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 FetchCube(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* cookie, int32_t cookieSizeDivisor);

  /// @brief Method FetchUVRects, addr 0x2e28f14, size 0x258, virtual false, abstract: false, final false
  inline int32_t
  FetchUVRects(::UnityEngine::Rendering::CommandBuffer* cmd,
               ByRef<::UnityEngine::Rendering::Universal::__LightCookieManager__WorkSlice_1<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>> validLightMappings,
               ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> textureAtlasUVRects, int32_t cookieSizeDivisor);

  /// @brief Method FilterAndValidateAdditionalLights, addr 0x2e28348, size 0x3bc, virtual false, abstract: false, final false
  inline int32_t FilterAndValidateAdditionalLights(
      ByRef<::UnityEngine::Rendering::Universal::LightData> lightData,
      ::ArrayW<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>*>
          validLightMappings);

  /// @brief Method GetLightCookieShaderDataIndex, addr 0x2e27898, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetLightCookieShaderDataIndex(int32_t visibleLightIndex);

  /// @brief Method GetLightCookieShaderFormat, addr 0x2e28134, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat GetLightCookieShaderFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat cookieFormat);

  /// @brief Method GetLightUVScaleOffset, addr 0x2e28208, size 0x140, virtual false, abstract: false, final false
  inline void GetLightUVScaleOffset(ByRef<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*> additionalLightData, ByRef<::UnityEngine::Matrix4x4> uvTransform);

  /// @brief Method InitAdditionalLights, addr 0x2e27664, size 0x1ac, virtual false, abstract: false, final false
  inline void InitAdditionalLights(int32_t size);

  static inline ::UnityEngine::Rendering::Universal::LightCookieManager* New_ctor(ByRef<::UnityEngine::Rendering::Universal::__LightCookieManager__Settings> settings);

  /// @brief Method Setup, addr 0x2e278e0, size 0x28c, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext ctx, ::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::LightData> lightData);

  /// @brief Method SetupAdditionalLights, addr 0x2e27fa0, size 0x194, virtual false, abstract: false, final false
  inline bool SetupAdditionalLights(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::LightData> lightData);

  /// @brief Method SetupMainLight, addr 0x2e27b6c, size 0x434, virtual false, abstract: false, final false
  inline bool SetupMainLight(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::VisibleLight> visibleMainLight);

  /// @brief Method ShrinkUVRect, addr 0x2e296ec, size 0x90, virtual false, abstract: false, final false
  inline void ShrinkUVRect(ByRef<::UnityEngine::Vector4> uvScaleOffset, float_t amountPixels, ByRef<::UnityEngine::Vector2> cookieSize);

  /// @brief Method UpdateAdditionalLightsAtlas, addr 0x2e28704, size 0x180, virtual false, abstract: false, final false
  inline int32_t UpdateAdditionalLightsAtlas(
      ::UnityEngine::Rendering::CommandBuffer* cmd,
      ByRef<::UnityEngine::Rendering::Universal::__LightCookieManager__WorkSlice_1<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>> validLightMappings,
      ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> textureAtlasUVRects);

  /// @brief Method UploadAdditionalLights, addr 0x2e28884, size 0x568, virtual false, abstract: false, final false
  inline void UploadAdditionalLights(
      ::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::LightData> lightData,
      ByRef<::UnityEngine::Rendering::Universal::__LightCookieManager__WorkSlice_1<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping>> validLightMappings,
      ByRef<::UnityEngine::Rendering::Universal::__LightCookieManager__WorkSlice_1<::UnityEngine::Vector4>> validUvRects);

  constexpr bool const& __cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField();

  constexpr ::UnityEngine::Rendering::Texture2DAtlas*& __cordl_internal_get_m_AdditionalLightsCookieAtlas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Texture2DAtlas*> const& __cordl_internal_get_m_AdditionalLightsCookieAtlas() const;

  constexpr ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData*& __cordl_internal_get_m_AdditionalLightsCookieShaderData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData*> const&
  __cordl_internal_get_m_AdditionalLightsCookieShaderData() const;

  constexpr int32_t const& __cordl_internal_get_m_CookieSizeDivisor() const;

  constexpr int32_t& __cordl_internal_get_m_CookieSizeDivisor();

  constexpr uint32_t const& __cordl_internal_get_m_PrevCookieRequestPixelCount() const;

  constexpr uint32_t& __cordl_internal_get_m_PrevCookieRequestPixelCount();

  constexpr ::UnityEngine::Rendering::Universal::__LightCookieManager__Settings const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::Universal::__LightCookieManager__Settings& __cordl_internal_get_m_Settings();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_VisibleLightIndexToShaderDataIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_VisibleLightIndexToShaderDataIndex();

  constexpr ::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory*& __cordl_internal_get_m_WorkMem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory*> const& __cordl_internal_get_m_WorkMem() const;

  constexpr void __cordl_internal_set__IsKeywordLightCookieEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_AdditionalLightsCookieAtlas(::UnityEngine::Rendering::Texture2DAtlas* value);

  constexpr void __cordl_internal_set_m_AdditionalLightsCookieShaderData(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData* value);

  constexpr void __cordl_internal_set_m_CookieSizeDivisor(int32_t value);

  constexpr void __cordl_internal_set_m_PrevCookieRequestPixelCount(uint32_t value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::__LightCookieManager__Settings value);

  constexpr void __cordl_internal_set_m_VisibleLightIndexToShaderDataIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_WorkMem(::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory* value);

  /// @brief Method .ctor, addr 0x2e275c8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::UnityEngine::Rendering::Universal::__LightCookieManager__Settings> settings);

  static inline ::UnityEngine::Matrix4x4 getStaticF_s_DirLightProj();

  /// @brief Method get_IsKeywordLightCookieEnabled, addr 0x2e275b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsKeywordLightCookieEnabled();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method isInitialized, addr 0x2e27844, size 0x20, virtual false, abstract: false, final false
  inline bool isInitialized();

  static inline void setStaticF_s_DirLightProj(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_IsKeywordLightCookieEnabled, addr 0x2e275bc, size 0xc, virtual false, abstract: false, final false
  inline void set_IsKeywordLightCookieEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightCookieManager(LightCookieManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightCookieManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightCookieManager(LightCookieManager const&) = delete;

  /// @brief Field m_AdditionalLightsCookieAtlas, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Texture2DAtlas* ___m_AdditionalLightsCookieAtlas;

  /// @brief Field m_AdditionalLightsCookieShaderData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData* ___m_AdditionalLightsCookieShaderData;

  /// @brief Field m_Settings, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::Rendering::Universal::__LightCookieManager__Settings ___m_Settings;

  /// @brief Field m_WorkMem, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory* ___m_WorkMem;

  /// @brief Field m_VisibleLightIndexToShaderDataIndex, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_VisibleLightIndexToShaderDataIndex;

  /// @brief Field m_CookieSizeDivisor, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_CookieSizeDivisor;

  /// @brief Field m_PrevCookieRequestPixelCount, offset: 0x54, size: 0x4, def value: None
  uint32_t ___m_PrevCookieRequestPixelCount;

  /// @brief Field <IsKeywordLightCookieEnabled>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____IsKeywordLightCookieEnabled_k__BackingField;

  /// @brief Field k_MaxCookieSizeDivisor offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxCookieSizeDivisor{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieManager, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_AdditionalLightsCookieAtlas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_AdditionalLightsCookieShaderData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_WorkMem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_VisibleLightIndexToShaderDataIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_CookieSizeDivisor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_PrevCookieRequestPixelCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ____IsKeywordLightCookieEnabled_k__BackingField) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderFormat, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieShaderFormat");
NEED_NO_BOX(::GlobalNamespace::__LightCookieManager__LightCookieMapping____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightCookieManager__LightCookieMapping____c*, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieMapping/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightCookieManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager*, "UnityEngine.Rendering.Universal", "LightCookieManager");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieShaderData*, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieShaderData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderProperty*, "UnityEngine.Rendering.Universal", "LightCookieManager/ShaderProperty");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightCookieManager__WorkMemory*, "UnityEngine.Rendering.Universal", "LightCookieManager/WorkMemory");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightCookieManager__Settings__AtlasSettings, "UnityEngine.Rendering.Universal", "LightCookieManager/Settings/AtlasSettings");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__LightCookieManager__Sorting____c__DisplayClass2_0_1, "UnityEngine.Rendering.Universal", "LightCookieManager/Sorting/<>c__DisplayClass2_0`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightCookieManager__LightCookieMapping, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieMapping");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightCookieManager__Settings, "UnityEngine.Rendering.Universal", "LightCookieManager/Settings");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightCookieManager__ShaderBitArray, "UnityEngine.Rendering.Universal", "LightCookieManager/ShaderBitArray");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightCookieManager__Sorting, "UnityEngine.Rendering.Universal", "LightCookieManager/Sorting");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::Universal::__LightCookieManager__WorkSlice_1, "UnityEngine.Rendering.Universal", "LightCookieManager/WorkSlice`1");
