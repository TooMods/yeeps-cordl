#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorManager)
namespace GlobalNamespace {
class PaletteColor;
}
namespace GlobalNamespace {
struct __ColorManager__ColorData;
}
namespace GlobalNamespace {
struct __ColorManager__EmissiveColorData;
}
namespace GlobalNamespace {
struct __ColorManager__GlobalPaletteRow;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct __ColorManager__ColorData;
}
namespace GlobalNamespace {
struct __ColorManager__EmissiveColorData;
}
namespace GlobalNamespace {
struct __ColorManager__GlobalPaletteRow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorManager);
MARK_VAL_T(::GlobalNamespace::__ColorManager__ColorData);
MARK_VAL_T(::GlobalNamespace::__ColorManager__EmissiveColorData);
MARK_VAL_T(::GlobalNamespace::__ColorManager__GlobalPaletteRow);
// Type: ::ColorData
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ColorManager::ColorData
struct CORDL_TYPE __ColorManager__ColorData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorManager__ColorData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr __ColorManager__ColorData(::StringW key, ::UnityEngine::Color color) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field color, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ColorManager__ColorData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorManager__ColorData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorManager__ColorData, color) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EmissiveColorData
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ColorManager::EmissiveColorData
struct CORDL_TYPE __ColorManager__EmissiveColorData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorManager__EmissiveColorData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "baseColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "lightLevel", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ColorManager__EmissiveColorData(::StringW key, ::UnityEngine::Color color, ::UnityEngine::Color baseColor, uint8_t lightLevel) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field color, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field baseColor, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color baseColor;

  /// @brief Field lightLevel, offset: 0x28, size: 0x1, def value: None
  uint8_t lightLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ColorManager__EmissiveColorData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorManager__EmissiveColorData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorManager__EmissiveColorData, color) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorManager__EmissiveColorData, baseColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorManager__EmissiveColorData, lightLevel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GlobalPaletteRow
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ColorManager::GlobalPaletteRow
struct CORDL_TYPE __ColorManager__GlobalPaletteRow {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorManager__GlobalPaletteRow();

  // Ctor Parameters [CppParam { name: "colorKeys", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __ColorManager__GlobalPaletteRow(::ArrayW<::StringW, ::Array<::StringW>*> colorKeys) noexcept;

  /// @brief Field colorKeys, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> colorKeys;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ColorManager__GlobalPaletteRow, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorManager__GlobalPaletteRow, colorKeys) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorManager
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorManager*
class CORDL_TYPE ColorManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::ColorManager>> {
public:
  // Declarations
  using ColorData = ::GlobalNamespace::__ColorManager__ColorData;

  using EmissiveColorData = ::GlobalNamespace::__ColorManager__EmissiveColorData;

  using GlobalPaletteRow = ::GlobalNamespace::__ColorManager__GlobalPaletteRow;

  /// @brief Field allBasicColorKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_allBasicColorKeys, put = setStaticF_allBasicColorKeys))::System::Collections::Generic::List_1<::StringW>* allBasicColorKeys;

  /// @brief Field blackGlobalPaletteCoords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_blackGlobalPaletteCoords, put = setStaticF_blackGlobalPaletteCoords))::UnityEngine::Vector2Int blackGlobalPaletteCoords;

  /// @brief Field blackUVs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_blackUVs, put = setStaticF_blackUVs))::UnityEngine::Vector2 blackUVs;

  /// @brief Field colorDatas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_colorDatas,
                      put = __cordl_internal_set_colorDatas))::ArrayW<::GlobalNamespace::__ColorManager__ColorData, ::Array<::GlobalNamespace::__ColorManager__ColorData>*> colorDatas;

  /// @brief Field colorEmissionLevels, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_colorEmissionLevels, put = setStaticF_colorEmissionLevels))::System::Collections::Generic::Dictionary_2<::StringW, uint8_t>* colorEmissionLevels;

  /// @brief Field currencyUIColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_currencyUIColor, put = __cordl_internal_set_currencyUIColor))::UnityEngine::Color currencyUIColor;

  /// @brief Field emissiveColorDatas, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_emissiveColorDatas,
      put = __cordl_internal_set_emissiveColorDatas))::ArrayW<::GlobalNamespace::__ColorManager__EmissiveColorData, ::Array<::GlobalNamespace::__ColorManager__EmissiveColorData>*> emissiveColorDatas;

  /// @brief Field globalPalette, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_globalPalette, put = setStaticF_globalPalette)) Il2CppObject* globalPalette;

  /// @brief Field globalPaletteRows, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get_globalPaletteRows,
      put = __cordl_internal_set_globalPaletteRows))::ArrayW<::GlobalNamespace::__ColorManager__GlobalPaletteRow, ::Array<::GlobalNamespace::__ColorManager__GlobalPaletteRow>*> globalPaletteRows;

  /// @brief Field notEnoughCurrencyUIColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_notEnoughCurrencyUIColor, put = __cordl_internal_set_notEnoughCurrencyUIColor))::UnityEngine::Color notEnoughCurrencyUIColor;

  /// @brief Field paletteColors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_paletteColors, put = setStaticF_paletteColors))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PaletteColor*>* paletteColors;

  /// @brief Field stuffingUIColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_stuffingUIColor, put = __cordl_internal_set_stuffingUIColor))::UnityEngine::Color stuffingUIColor;

  /// @brief Method GetAllBasicColorKeys, addr 0x144575c, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetAllBasicColorKeys();

  /// @brief Method GetEmissionLightLevel, addr 0x14455d0, size 0xd8, virtual false, abstract: false, final false
  inline uint8_t GetEmissionLightLevel(::StringW key);

  /// @brief Method GetFilterRange, addr 0x144602c, size 0x48, virtual false, abstract: false, final false
  static inline void GetFilterRange(::UnityEngine::Vector2Int coords, ByRef<float_t> minX, ByRef<float_t> minY, ByRef<float_t> maxX, ByRef<float_t> maxY);

  /// @brief Method GetGlobalPaletteColor, addr 0x1445ba0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PaletteColor* GetGlobalPaletteColor(::UnityEngine::Vector2Int coords);

  /// @brief Method GetGlobalPaletteColor, addr 0x1445ba8, size 0x3c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PaletteColor* GetGlobalPaletteColor(::UnityEngine::Vector2 uv);

  /// @brief Method GetGlobalPaletteColor, addr 0x1445abc, size 0xe4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PaletteColor* GetGlobalPaletteColor(int32_t x, int32_t y);

  /// @brief Method GetGlobalPaletteCoords, addr 0x1445fe4, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int GetGlobalPaletteCoords(::UnityEngine::Vector2 uv);

  /// @brief Method GetGlobalPaletteCoordsForColor, addr 0x1445be4, size 0x1d0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int GetGlobalPaletteCoordsForColor(::StringW colorKey);

  /// @brief Method GetPaletteColor, addr 0x1445414, size 0x1bc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PaletteColor* GetPaletteColor(::StringW key);

  /// @brief Method GetUVs, addr 0x1445fb4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetUVs(::UnityEngine::Vector2Int coords);

  /// @brief Method GetUVsForColor, addr 0x1445db4, size 0x200, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetUVsForColor(::StringW colorKey);

  /// @brief Method InitializeGlobalPalette, addr 0x1445914, size 0x1a8, virtual false, abstract: false, final false
  inline void InitializeGlobalPalette();

  /// @brief Method InitializePaletteColors, addr 0x1445104, size 0x310, virtual false, abstract: false, final false
  inline void InitializePaletteColors();

  /// @brief Method IsColorDefined, addr 0x14456a8, size 0xb4, virtual false, abstract: false, final false
  inline bool IsColorDefined(::StringW key);

  static inline ::GlobalNamespace::ColorManager* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__ColorManager__ColorData, ::Array<::GlobalNamespace::__ColorManager__ColorData>*> const& __cordl_internal_get_colorDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__ColorManager__ColorData, ::Array<::GlobalNamespace::__ColorManager__ColorData>*>& __cordl_internal_get_colorDatas();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_currencyUIColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_currencyUIColor();

  constexpr ::ArrayW<::GlobalNamespace::__ColorManager__EmissiveColorData, ::Array<::GlobalNamespace::__ColorManager__EmissiveColorData>*> const& __cordl_internal_get_emissiveColorDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__ColorManager__EmissiveColorData, ::Array<::GlobalNamespace::__ColorManager__EmissiveColorData>*>& __cordl_internal_get_emissiveColorDatas();

  constexpr ::ArrayW<::GlobalNamespace::__ColorManager__GlobalPaletteRow, ::Array<::GlobalNamespace::__ColorManager__GlobalPaletteRow>*> const& __cordl_internal_get_globalPaletteRows() const;

  constexpr ::ArrayW<::GlobalNamespace::__ColorManager__GlobalPaletteRow, ::Array<::GlobalNamespace::__ColorManager__GlobalPaletteRow>*>& __cordl_internal_get_globalPaletteRows();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_notEnoughCurrencyUIColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_notEnoughCurrencyUIColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_stuffingUIColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_stuffingUIColor();

  constexpr void __cordl_internal_set_colorDatas(::ArrayW<::GlobalNamespace::__ColorManager__ColorData, ::Array<::GlobalNamespace::__ColorManager__ColorData>*> value);

  constexpr void __cordl_internal_set_currencyUIColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_emissiveColorDatas(::ArrayW<::GlobalNamespace::__ColorManager__EmissiveColorData, ::Array<::GlobalNamespace::__ColorManager__EmissiveColorData>*> value);

  constexpr void __cordl_internal_set_globalPaletteRows(::ArrayW<::GlobalNamespace::__ColorManager__GlobalPaletteRow, ::Array<::GlobalNamespace::__ColorManager__GlobalPaletteRow>*> value);

  constexpr void __cordl_internal_set_notEnoughCurrencyUIColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_stuffingUIColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x1446074, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_allBasicColorKeys();

  static inline ::UnityEngine::Vector2Int getStaticF_blackGlobalPaletteCoords();

  static inline ::UnityEngine::Vector2 getStaticF_blackUVs();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, uint8_t>* getStaticF_colorEmissionLevels();

  static inline Il2CppObject* getStaticF_globalPalette();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PaletteColor*>* getStaticF_paletteColors();

  static inline void setStaticF_allBasicColorKeys(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_blackGlobalPaletteCoords(::UnityEngine::Vector2Int value);

  static inline void setStaticF_blackUVs(::UnityEngine::Vector2 value);

  static inline void setStaticF_colorEmissionLevels(::System::Collections::Generic::Dictionary_2<::StringW, uint8_t>* value);

  static inline void setStaticF_globalPalette(Il2CppObject* value);

  static inline void setStaticF_paletteColors(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PaletteColor*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorManager(ColorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorManager(ColorManager const&) = delete;

  /// @brief Field colorDatas, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ColorManager__ColorData, ::Array<::GlobalNamespace::__ColorManager__ColorData>*> ___colorDatas;

  /// @brief Field emissiveColorDatas, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ColorManager__EmissiveColorData, ::Array<::GlobalNamespace::__ColorManager__EmissiveColorData>*> ___emissiveColorDatas;

  /// @brief Field stuffingUIColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___stuffingUIColor;

  /// @brief Field currencyUIColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ___currencyUIColor;

  /// @brief Field notEnoughCurrencyUIColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___notEnoughCurrencyUIColor;

  /// @brief Field globalPaletteRows, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ColorManager__GlobalPaletteRow, ::Array<::GlobalNamespace::__ColorManager__GlobalPaletteRow>*> ___globalPaletteRows;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Colors: " };

  /// @brief Field globalPaletteSize offset 0xffffffff size 0x4
  static constexpr int32_t globalPaletteSize{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorManager, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorManager, ___colorDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorManager, ___emissiveColorDatas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorManager, ___stuffingUIColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorManager, ___currencyUIColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorManager, ___notEnoughCurrencyUIColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorManager, ___globalPaletteRows) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorManager*, "", "ColorManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ColorManager__ColorData, "", "ColorManager/ColorData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ColorManager__EmissiveColorData, "", "ColorManager/EmissiveColorData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ColorManager__GlobalPaletteRow, "", "ColorManager/GlobalPaletteRow");
