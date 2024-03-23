#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorValue_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Theme)
namespace GlobalNamespace {
struct ColorValue;
}
namespace GlobalNamespace {
struct RandomColorType;
}
namespace GlobalNamespace {
struct __ThemeManager__ThemeData;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class Theme;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Theme);
// Type: ::Theme
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Theme*
class CORDL_TYPE Theme : public ::System::Object {
public:
  // Declarations
  /// @brief Field <ambientLightColor>k__BackingField, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__ambientLightColor_k__BackingField,
                      put = __cordl_internal_set__ambientLightColor_k__BackingField))::UnityEngine::Color _ambientLightColor_k__BackingField;

  /// @brief Field <ambientSoundSetKey>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__ambientSoundSetKey_k__BackingField, put = __cordl_internal_set__ambientSoundSetKey_k__BackingField))::StringW _ambientSoundSetKey_k__BackingField;

  /// @brief Field <analyticsKey>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsKey_k__BackingField, put = __cordl_internal_set__analyticsKey_k__BackingField))::StringW _analyticsKey_k__BackingField;

  /// @brief Field <brightenLightingInCreative>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__brightenLightingInCreative_k__BackingField,
                      put = __cordl_internal_set__brightenLightingInCreative_k__BackingField)) bool _brightenLightingInCreative_k__BackingField;

  /// @brief Field <corridorFloorMaterial>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__corridorFloorMaterial_k__BackingField,
                      put = __cordl_internal_set__corridorFloorMaterial_k__BackingField))::UnityW<::UnityEngine::Material> _corridorFloorMaterial_k__BackingField;

  /// @brief Field <corridorWallMaterial>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__corridorWallMaterial_k__BackingField,
                      put = __cordl_internal_set__corridorWallMaterial_k__BackingField))::UnityW<::UnityEngine::Material> _corridorWallMaterial_k__BackingField;

  /// @brief Field <cosmeticsStoreKey>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__cosmeticsStoreKey_k__BackingField, put = __cordl_internal_set__cosmeticsStoreKey_k__BackingField))::StringW _cosmeticsStoreKey_k__BackingField;

  /// @brief Field <directionalLightColor>k__BackingField, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__directionalLightColor_k__BackingField,
                      put = __cordl_internal_set__directionalLightColor_k__BackingField))::UnityEngine::Color _directionalLightColor_k__BackingField;

  /// @brief Field <groundBlockColorKey>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__groundBlockColorKey_k__BackingField, put = __cordl_internal_set__groundBlockColorKey_k__BackingField))::StringW _groundBlockColorKey_k__BackingField;

  /// @brief Field <groundColorKey>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__groundColorKey_k__BackingField, put = __cordl_internal_set__groundColorKey_k__BackingField))::StringW _groundColorKey_k__BackingField;

  /// @brief Field <groundColorValue>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__groundColorValue_k__BackingField,
                      put = __cordl_internal_set__groundColorValue_k__BackingField))::GlobalNamespace::ColorValue _groundColorValue_k__BackingField;

  /// @brief Field <groundMapObjectKey>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__groundMapObjectKey_k__BackingField, put = __cordl_internal_set__groundMapObjectKey_k__BackingField))::StringW _groundMapObjectKey_k__BackingField;

  /// @brief Field <groundMapObjectTriplanarMaterialIndex>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__groundMapObjectTriplanarMaterialIndex_k__BackingField,
                      put = __cordl_internal_set__groundMapObjectTriplanarMaterialIndex_k__BackingField)) int32_t _groundMapObjectTriplanarMaterialIndex_k__BackingField;

  /// @brief Field <groundSoundEffectKey>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__groundSoundEffectKey_k__BackingField,
                      put = __cordl_internal_set__groundSoundEffectKey_k__BackingField))::StringW _groundSoundEffectKey_k__BackingField;

  /// @brief Field <hallwayArchPrefab>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__hallwayArchPrefab_k__BackingField,
                      put = __cordl_internal_set__hallwayArchPrefab_k__BackingField))::UnityW<::UnityEngine::GameObject> _hallwayArchPrefab_k__BackingField;

  /// @brief Field <hallwayEntranceFlatLargePrefab>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__hallwayEntranceFlatLargePrefab_k__BackingField,
                      put = __cordl_internal_set__hallwayEntranceFlatLargePrefab_k__BackingField))::UnityW<::UnityEngine::GameObject> _hallwayEntranceFlatLargePrefab_k__BackingField;

  /// @brief Field <hallwayEntranceFlatSmallPrefab>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__hallwayEntranceFlatSmallPrefab_k__BackingField,
                      put = __cordl_internal_set__hallwayEntranceFlatSmallPrefab_k__BackingField))::UnityW<::UnityEngine::GameObject> _hallwayEntranceFlatSmallPrefab_k__BackingField;

  /// @brief Field <key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field <leaveFootprintsOnGround>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__leaveFootprintsOnGround_k__BackingField,
                      put = __cordl_internal_set__leaveFootprintsOnGround_k__BackingField)) bool _leaveFootprintsOnGround_k__BackingField;

  /// @brief Field <playspaceColorKey>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playspaceColorKey_k__BackingField, put = __cordl_internal_set__playspaceColorKey_k__BackingField))::StringW _playspaceColorKey_k__BackingField;

  /// @brief Field <playspaceColorValue>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__playspaceColorValue_k__BackingField,
                      put = __cordl_internal_set__playspaceColorValue_k__BackingField))::GlobalNamespace::ColorValue _playspaceColorValue_k__BackingField;

  /// @brief Field <representativePrefab>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__representativePrefab_k__BackingField,
                      put = __cordl_internal_set__representativePrefab_k__BackingField))::UnityW<::UnityEngine::GameObject> _representativePrefab_k__BackingField;

  /// @brief Field <sceneryGroundMaterial>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneryGroundMaterial_k__BackingField,
                      put = __cordl_internal_set__sceneryGroundMaterial_k__BackingField))::UnityW<::UnityEngine::Material> _sceneryGroundMaterial_k__BackingField;

  /// @brief Field <sceneryPrefab>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneryPrefab_k__BackingField,
                      put = __cordl_internal_set__sceneryPrefab_k__BackingField))::UnityW<::UnityEngine::GameObject> _sceneryPrefab_k__BackingField;

  /// @brief Field <skyTexture>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__skyTexture_k__BackingField, put = __cordl_internal_set__skyTexture_k__BackingField))::UnityW<::UnityEngine::Texture2D> _skyTexture_k__BackingField;

  /// @brief Field <structuralColorKey>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__structuralColorKey_k__BackingField, put = __cordl_internal_set__structuralColorKey_k__BackingField))::StringW _structuralColorKey_k__BackingField;

  /// @brief Field <stuffedColorKeys>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__stuffedColorKeys_k__BackingField,
                      put = __cordl_internal_set__stuffedColorKeys_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _stuffedColorKeys_k__BackingField;

  /// @brief Field <techWebPrefab>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__techWebPrefab_k__BackingField,
                      put = __cordl_internal_set__techWebPrefab_k__BackingField))::UnityW<::UnityEngine::GameObject> _techWebPrefab_k__BackingField;

  __declspec(property(get = get_ambientLightColor, put = set_ambientLightColor))::UnityEngine::Color ambientLightColor;

  __declspec(property(get = get_ambientSoundSetKey, put = set_ambientSoundSetKey))::StringW ambientSoundSetKey;

  __declspec(property(get = get_analyticsKey, put = set_analyticsKey))::StringW analyticsKey;

  __declspec(property(get = get_brightenLightingInCreative, put = set_brightenLightingInCreative)) bool brightenLightingInCreative;

  __declspec(property(get = get_corridorFloorMaterial, put = set_corridorFloorMaterial))::UnityW<::UnityEngine::Material> corridorFloorMaterial;

  __declspec(property(get = get_corridorWallMaterial, put = set_corridorWallMaterial))::UnityW<::UnityEngine::Material> corridorWallMaterial;

  __declspec(property(get = get_cosmeticsStoreKey, put = set_cosmeticsStoreKey))::StringW cosmeticsStoreKey;

  __declspec(property(get = get_directionalLightColor, put = set_directionalLightColor))::UnityEngine::Color directionalLightColor;

  __declspec(property(get = get_groundBlockColorKey, put = set_groundBlockColorKey))::StringW groundBlockColorKey;

  __declspec(property(get = get_groundColorKey, put = set_groundColorKey))::StringW groundColorKey;

  __declspec(property(get = get_groundColorValue, put = set_groundColorValue))::GlobalNamespace::ColorValue groundColorValue;

  __declspec(property(get = get_groundMapObjectKey, put = set_groundMapObjectKey))::StringW groundMapObjectKey;

  __declspec(property(get = get_groundMapObjectTriplanarMaterialIndex, put = set_groundMapObjectTriplanarMaterialIndex)) int32_t groundMapObjectTriplanarMaterialIndex;

  __declspec(property(get = get_groundSoundEffectKey, put = set_groundSoundEffectKey))::StringW groundSoundEffectKey;

  __declspec(property(get = get_hallwayArchPrefab, put = set_hallwayArchPrefab))::UnityW<::UnityEngine::GameObject> hallwayArchPrefab;

  __declspec(property(get = get_hallwayEntranceFlatLargePrefab, put = set_hallwayEntranceFlatLargePrefab))::UnityW<::UnityEngine::GameObject> hallwayEntranceFlatLargePrefab;

  __declspec(property(get = get_hallwayEntranceFlatSmallPrefab, put = set_hallwayEntranceFlatSmallPrefab))::UnityW<::UnityEngine::GameObject> hallwayEntranceFlatSmallPrefab;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  __declspec(property(get = get_leaveFootprintsOnGround, put = set_leaveFootprintsOnGround)) bool leaveFootprintsOnGround;

  __declspec(property(get = get_playspaceColorKey, put = set_playspaceColorKey))::StringW playspaceColorKey;

  __declspec(property(get = get_playspaceColorValue, put = set_playspaceColorValue))::GlobalNamespace::ColorValue playspaceColorValue;

  __declspec(property(get = get_representativePrefab, put = set_representativePrefab))::UnityW<::UnityEngine::GameObject> representativePrefab;

  __declspec(property(get = get_sceneryGroundMaterial, put = set_sceneryGroundMaterial))::UnityW<::UnityEngine::Material> sceneryGroundMaterial;

  __declspec(property(get = get_sceneryPrefab, put = set_sceneryPrefab))::UnityW<::UnityEngine::GameObject> sceneryPrefab;

  __declspec(property(get = get_skyTexture, put = set_skyTexture))::UnityW<::UnityEngine::Texture2D> skyTexture;

  __declspec(property(get = get_structuralColorKey, put = set_structuralColorKey))::StringW structuralColorKey;

  __declspec(property(get = get_stuffedColorKeys, put = set_stuffedColorKeys))::ArrayW<::StringW, ::Array<::StringW>*> stuffedColorKeys;

  __declspec(property(get = get_techWebPrefab, put = set_techWebPrefab))::UnityW<::UnityEngine::GameObject> techWebPrefab;

  /// @brief Method GetRandomColorKey, addr 0x1447af8, size 0x144, virtual false, abstract: false, final false
  inline ::StringW GetRandomColorKey(::GlobalNamespace::RandomColorType randomColorType);

  static inline ::GlobalNamespace::Theme* New_ctor(::GlobalNamespace::__ThemeManager__ThemeData themeData);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__ambientLightColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__ambientLightColor_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ambientSoundSetKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ambientSoundSetKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__analyticsKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__analyticsKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__brightenLightingInCreative_k__BackingField() const;

  constexpr bool& __cordl_internal_get__brightenLightingInCreative_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__corridorFloorMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__corridorFloorMaterial_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__corridorWallMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__corridorWallMaterial_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__cosmeticsStoreKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__cosmeticsStoreKey_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__directionalLightColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__directionalLightColor_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__groundBlockColorKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__groundBlockColorKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__groundColorKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__groundColorKey_k__BackingField();

  constexpr ::GlobalNamespace::ColorValue const& __cordl_internal_get__groundColorValue_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorValue& __cordl_internal_get__groundColorValue_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__groundMapObjectKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__groundMapObjectKey_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__groundMapObjectTriplanarMaterialIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__groundMapObjectTriplanarMaterialIndex_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__groundSoundEffectKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__groundSoundEffectKey_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hallwayArchPrefab_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hallwayArchPrefab_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hallwayEntranceFlatLargePrefab_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hallwayEntranceFlatLargePrefab_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__hallwayEntranceFlatSmallPrefab_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__hallwayEntranceFlatSmallPrefab_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr bool const& __cordl_internal_get__leaveFootprintsOnGround_k__BackingField() const;

  constexpr bool& __cordl_internal_get__leaveFootprintsOnGround_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playspaceColorKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playspaceColorKey_k__BackingField();

  constexpr ::GlobalNamespace::ColorValue const& __cordl_internal_get__playspaceColorValue_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorValue& __cordl_internal_get__playspaceColorValue_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__representativePrefab_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__representativePrefab_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__sceneryGroundMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__sceneryGroundMaterial_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__sceneryPrefab_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__sceneryPrefab_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__skyTexture_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__skyTexture_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__structuralColorKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__structuralColorKey_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__stuffedColorKeys_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__stuffedColorKeys_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__techWebPrefab_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__techWebPrefab_k__BackingField();

  constexpr void __cordl_internal_set__ambientLightColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__ambientSoundSetKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__analyticsKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__brightenLightingInCreative_k__BackingField(bool value);

  constexpr void __cordl_internal_set__corridorFloorMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__corridorWallMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__cosmeticsStoreKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__directionalLightColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__groundBlockColorKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__groundColorKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__groundColorValue_k__BackingField(::GlobalNamespace::ColorValue value);

  constexpr void __cordl_internal_set__groundMapObjectKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__groundMapObjectTriplanarMaterialIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__groundSoundEffectKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__hallwayArchPrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__hallwayEntranceFlatLargePrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__hallwayEntranceFlatSmallPrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__leaveFootprintsOnGround_k__BackingField(bool value);

  constexpr void __cordl_internal_set__playspaceColorKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__playspaceColorValue_k__BackingField(::GlobalNamespace::ColorValue value);

  constexpr void __cordl_internal_set__representativePrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__sceneryGroundMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__sceneryPrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__skyTexture_k__BackingField(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__structuralColorKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__stuffedColorKeys_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__techWebPrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x14477a4, size 0x354, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__ThemeManager__ThemeData themeData);

  /// @brief Method get_ambientLightColor, addr 0x1447690, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_ambientLightColor();

  /// @brief Method get_ambientSoundSetKey, addr 0x1447784, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ambientSoundSetKey();

  /// @brief Method get_analyticsKey, addr 0x14475dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_analyticsKey();

  /// @brief Method get_brightenLightingInCreative, addr 0x14476c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_brightenLightingInCreative();

  /// @brief Method get_corridorFloorMaterial, addr 0x1447704, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_corridorFloorMaterial();

  /// @brief Method get_corridorWallMaterial, addr 0x1447714, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_corridorWallMaterial();

  /// @brief Method get_cosmeticsStoreKey, addr 0x1447764, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_cosmeticsStoreKey();

  /// @brief Method get_directionalLightColor, addr 0x14476a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_directionalLightColor();

  /// @brief Method get_groundBlockColorKey, addr 0x1447724, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groundBlockColorKey();

  /// @brief Method get_groundColorKey, addr 0x14475fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groundColorKey();

  /// @brief Method get_groundColorValue, addr 0x144760c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorValue get_groundColorValue();

  /// @brief Method get_groundMapObjectKey, addr 0x1447660, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groundMapObjectKey();

  /// @brief Method get_groundMapObjectTriplanarMaterialIndex, addr 0x1447670, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_groundMapObjectTriplanarMaterialIndex();

  /// @brief Method get_groundSoundEffectKey, addr 0x1447774, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groundSoundEffectKey();

  /// @brief Method get_hallwayArchPrefab, addr 0x14476f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_hallwayArchPrefab();

  /// @brief Method get_hallwayEntranceFlatLargePrefab, addr 0x14476d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_hallwayEntranceFlatLargePrefab();

  /// @brief Method get_hallwayEntranceFlatSmallPrefab, addr 0x14476e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_hallwayEntranceFlatSmallPrefab();

  /// @brief Method get_key, addr 0x14475cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_leaveFootprintsOnGround, addr 0x144763c, size 0x8, virtual false, abstract: false, final false
  inline bool get_leaveFootprintsOnGround();

  /// @brief Method get_playspaceColorKey, addr 0x144761c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playspaceColorKey();

  /// @brief Method get_playspaceColorValue, addr 0x144762c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorValue get_playspaceColorValue();

  /// @brief Method get_representativePrefab, addr 0x1447794, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_representativePrefab();

  /// @brief Method get_sceneryGroundMaterial, addr 0x1447650, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_sceneryGroundMaterial();

  /// @brief Method get_sceneryPrefab, addr 0x14475ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_sceneryPrefab();

  /// @brief Method get_skyTexture, addr 0x1447680, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_skyTexture();

  /// @brief Method get_structuralColorKey, addr 0x1447734, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_structuralColorKey();

  /// @brief Method get_stuffedColorKeys, addr 0x1447744, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_stuffedColorKeys();

  /// @brief Method get_techWebPrefab, addr 0x1447754, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_techWebPrefab();

  /// @brief Method set_ambientLightColor, addr 0x144769c, size 0xc, virtual false, abstract: false, final false
  inline void set_ambientLightColor(::UnityEngine::Color value);

  /// @brief Method set_ambientSoundSetKey, addr 0x144778c, size 0x8, virtual false, abstract: false, final false
  inline void set_ambientSoundSetKey(::StringW value);

  /// @brief Method set_analyticsKey, addr 0x14475e4, size 0x8, virtual false, abstract: false, final false
  inline void set_analyticsKey(::StringW value);

  /// @brief Method set_brightenLightingInCreative, addr 0x14476c8, size 0xc, virtual false, abstract: false, final false
  inline void set_brightenLightingInCreative(bool value);

  /// @brief Method set_corridorFloorMaterial, addr 0x144770c, size 0x8, virtual false, abstract: false, final false
  inline void set_corridorFloorMaterial(::UnityEngine::Material* value);

  /// @brief Method set_corridorWallMaterial, addr 0x144771c, size 0x8, virtual false, abstract: false, final false
  inline void set_corridorWallMaterial(::UnityEngine::Material* value);

  /// @brief Method set_cosmeticsStoreKey, addr 0x144776c, size 0x8, virtual false, abstract: false, final false
  inline void set_cosmeticsStoreKey(::StringW value);

  /// @brief Method set_directionalLightColor, addr 0x14476b4, size 0xc, virtual false, abstract: false, final false
  inline void set_directionalLightColor(::UnityEngine::Color value);

  /// @brief Method set_groundBlockColorKey, addr 0x144772c, size 0x8, virtual false, abstract: false, final false
  inline void set_groundBlockColorKey(::StringW value);

  /// @brief Method set_groundColorKey, addr 0x1447604, size 0x8, virtual false, abstract: false, final false
  inline void set_groundColorKey(::StringW value);

  /// @brief Method set_groundColorValue, addr 0x1447614, size 0x8, virtual false, abstract: false, final false
  inline void set_groundColorValue(::GlobalNamespace::ColorValue value);

  /// @brief Method set_groundMapObjectKey, addr 0x1447668, size 0x8, virtual false, abstract: false, final false
  inline void set_groundMapObjectKey(::StringW value);

  /// @brief Method set_groundMapObjectTriplanarMaterialIndex, addr 0x1447678, size 0x8, virtual false, abstract: false, final false
  inline void set_groundMapObjectTriplanarMaterialIndex(int32_t value);

  /// @brief Method set_groundSoundEffectKey, addr 0x144777c, size 0x8, virtual false, abstract: false, final false
  inline void set_groundSoundEffectKey(::StringW value);

  /// @brief Method set_hallwayArchPrefab, addr 0x14476fc, size 0x8, virtual false, abstract: false, final false
  inline void set_hallwayArchPrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_hallwayEntranceFlatLargePrefab, addr 0x14476dc, size 0x8, virtual false, abstract: false, final false
  inline void set_hallwayEntranceFlatLargePrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_hallwayEntranceFlatSmallPrefab, addr 0x14476ec, size 0x8, virtual false, abstract: false, final false
  inline void set_hallwayEntranceFlatSmallPrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_key, addr 0x14475d4, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

  /// @brief Method set_leaveFootprintsOnGround, addr 0x1447644, size 0xc, virtual false, abstract: false, final false
  inline void set_leaveFootprintsOnGround(bool value);

  /// @brief Method set_playspaceColorKey, addr 0x1447624, size 0x8, virtual false, abstract: false, final false
  inline void set_playspaceColorKey(::StringW value);

  /// @brief Method set_playspaceColorValue, addr 0x1447634, size 0x8, virtual false, abstract: false, final false
  inline void set_playspaceColorValue(::GlobalNamespace::ColorValue value);

  /// @brief Method set_representativePrefab, addr 0x144779c, size 0x8, virtual false, abstract: false, final false
  inline void set_representativePrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_sceneryGroundMaterial, addr 0x1447658, size 0x8, virtual false, abstract: false, final false
  inline void set_sceneryGroundMaterial(::UnityEngine::Material* value);

  /// @brief Method set_sceneryPrefab, addr 0x14475f4, size 0x8, virtual false, abstract: false, final false
  inline void set_sceneryPrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_skyTexture, addr 0x1447688, size 0x8, virtual false, abstract: false, final false
  inline void set_skyTexture(::UnityEngine::Texture2D* value);

  /// @brief Method set_structuralColorKey, addr 0x144773c, size 0x8, virtual false, abstract: false, final false
  inline void set_structuralColorKey(::StringW value);

  /// @brief Method set_stuffedColorKeys, addr 0x144774c, size 0x8, virtual false, abstract: false, final false
  inline void set_stuffedColorKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_techWebPrefab, addr 0x144775c, size 0x8, virtual false, abstract: false, final false
  inline void set_techWebPrefab(::UnityEngine::GameObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Theme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Theme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Theme(Theme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Theme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Theme(Theme const&) = delete;

  /// @brief Field <key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <analyticsKey>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____analyticsKey_k__BackingField;

  /// @brief Field <sceneryPrefab>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____sceneryPrefab_k__BackingField;

  /// @brief Field <groundColorKey>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____groundColorKey_k__BackingField;

  /// @brief Field <groundColorValue>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::ColorValue ____groundColorValue_k__BackingField;

  /// @brief Field <playspaceColorKey>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____playspaceColorKey_k__BackingField;

  /// @brief Field <playspaceColorValue>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::ColorValue ____playspaceColorValue_k__BackingField;

  /// @brief Field <leaveFootprintsOnGround>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____leaveFootprintsOnGround_k__BackingField;

  /// @brief Field <sceneryGroundMaterial>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____sceneryGroundMaterial_k__BackingField;

  /// @brief Field <groundMapObjectKey>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____groundMapObjectKey_k__BackingField;

  /// @brief Field <groundMapObjectTriplanarMaterialIndex>k__BackingField, offset: 0x58, size: 0x4, def value: None
  int32_t ____groundMapObjectTriplanarMaterialIndex_k__BackingField;

  /// @brief Field <skyTexture>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____skyTexture_k__BackingField;

  /// @brief Field <ambientLightColor>k__BackingField, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____ambientLightColor_k__BackingField;

  /// @brief Field <directionalLightColor>k__BackingField, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____directionalLightColor_k__BackingField;

  /// @brief Field <brightenLightingInCreative>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____brightenLightingInCreative_k__BackingField;

  /// @brief Field <hallwayEntranceFlatLargePrefab>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____hallwayEntranceFlatLargePrefab_k__BackingField;

  /// @brief Field <hallwayEntranceFlatSmallPrefab>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____hallwayEntranceFlatSmallPrefab_k__BackingField;

  /// @brief Field <hallwayArchPrefab>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____hallwayArchPrefab_k__BackingField;

  /// @brief Field <corridorFloorMaterial>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____corridorFloorMaterial_k__BackingField;

  /// @brief Field <corridorWallMaterial>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____corridorWallMaterial_k__BackingField;

  /// @brief Field <groundBlockColorKey>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____groundBlockColorKey_k__BackingField;

  /// @brief Field <structuralColorKey>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____structuralColorKey_k__BackingField;

  /// @brief Field <stuffedColorKeys>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____stuffedColorKeys_k__BackingField;

  /// @brief Field <techWebPrefab>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____techWebPrefab_k__BackingField;

  /// @brief Field <cosmeticsStoreKey>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::StringW ____cosmeticsStoreKey_k__BackingField;

  /// @brief Field <groundSoundEffectKey>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::StringW ____groundSoundEffectKey_k__BackingField;

  /// @brief Field <ambientSoundSetKey>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::StringW ____ambientSoundSetKey_k__BackingField;

  /// @brief Field <representativePrefab>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____representativePrefab_k__BackingField;

  /// @brief Field representativePrefabResourcePath offset 0xffffffff size 0x8
  static constexpr ::ConstString representativePrefabResourcePath{ u"ThemeRepresentatives/themeRepresentative_" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Theme, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____key_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____analyticsKey_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____sceneryPrefab_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____groundColorKey_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____groundColorValue_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____playspaceColorKey_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____playspaceColorValue_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____leaveFootprintsOnGround_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____sceneryGroundMaterial_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____groundMapObjectKey_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____groundMapObjectTriplanarMaterialIndex_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____skyTexture_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____ambientLightColor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____directionalLightColor_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____brightenLightingInCreative_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____hallwayEntranceFlatLargePrefab_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____hallwayEntranceFlatSmallPrefab_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____hallwayArchPrefab_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____corridorFloorMaterial_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____corridorWallMaterial_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____groundBlockColorKey_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____structuralColorKey_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____stuffedColorKeys_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____techWebPrefab_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____cosmeticsStoreKey_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____groundSoundEffectKey_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____ambientSoundSetKey_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Theme, ____representativePrefab_k__BackingField) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Theme);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Theme*, "", "Theme");
