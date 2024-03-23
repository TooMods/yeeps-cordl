#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapLightData_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightingManager)
namespace GlobalNamespace {
struct MapLightData;
}
namespace GlobalNamespace {
class PlayspaceData;
}
namespace GlobalNamespace {
class __LightingManager____c__DisplayClass32_0;
}
namespace System::Threading {
class Thread;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class LightingManager;
}
namespace GlobalNamespace {
class __LightingManager____c__DisplayClass32_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightingManager);
MARK_REF_PTR_T(::GlobalNamespace::__LightingManager____c__DisplayClass32_0);
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightingManager::<>c__DisplayClass32_0*
class CORDL_TYPE __LightingManager____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::LightingManager> __4__this;

  /// @brief Field dimensions, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_dimensions, put = __cordl_internal_set_dimensions))::UnityEngine::Vector3Int dimensions;

  /// @brief Field mapLightData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mapLightData, put = __cordl_internal_set_mapLightData))::GlobalNamespace::MapLightData mapLightData;

  static inline ::GlobalNamespace::__LightingManager____c__DisplayClass32_0* New_ctor();

  /// @brief Method <StartLightingGeneration>b__0, addr 0x2f6c478, size 0x80, virtual false, abstract: false, final false
  inline void _StartLightingGeneration_b__0();

  constexpr ::UnityW<::GlobalNamespace::LightingManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LightingManager>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_dimensions() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_dimensions();

  constexpr ::GlobalNamespace::MapLightData const& __cordl_internal_get_mapLightData() const;

  constexpr ::GlobalNamespace::MapLightData& __cordl_internal_get_mapLightData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LightingManager> value);

  constexpr void __cordl_internal_set_dimensions(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_mapLightData(::GlobalNamespace::MapLightData value);

  /// @brief Method .ctor, addr 0x2f6ab68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightingManager____c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightingManager____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightingManager____c__DisplayClass32_0(__LightingManager____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightingManager____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightingManager____c__DisplayClass32_0(__LightingManager____c__DisplayClass32_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightingManager> _____4__this;

  /// @brief Field dimensions, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___dimensions;

  /// @brief Field mapLightData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MapLightData ___mapLightData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightingManager____c__DisplayClass32_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightingManager____c__DisplayClass32_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightingManager____c__DisplayClass32_0, ___dimensions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightingManager____c__DisplayClass32_0, ___mapLightData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightingManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightingManager*
class CORDL_TYPE LightingManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::LightingManager>> {
public:
  // Declarations
  using __c__DisplayClass32_0 = ::GlobalNamespace::__LightingManager____c__DisplayClass32_0;

  /// @brief Field desiresLightingData, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_desiresLightingData, put = setStaticF_desiresLightingData)) bool desiresLightingData;

  /// @brief Field exposedTexture, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_exposedTexture, put = __cordl_internal_set_exposedTexture))::UnityW<::UnityEngine::Texture3D> exposedTexture;

  /// @brief Field fullIntensityLightLevel, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_fullIntensityLightLevel, put = __cordl_internal_set_fullIntensityLightLevel)) uint8_t fullIntensityLightLevel;

  /// @brief Field inBlockLightLevel, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_inBlockLightLevel, put = __cordl_internal_set_inBlockLightLevel)) uint8_t inBlockLightLevel;

  /// @brief Field isLightingGenerationOutputReady, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isLightingGenerationOutputReady, put = setStaticF_isLightingGenerationOutputReady)) bool isLightingGenerationOutputReady;

  /// @brief Field isRegistered, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isRegistered, put = setStaticF_isRegistered)) bool isRegistered;

  /// @brief Field lightingGenerationThread, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lightingGenerationThread, put = setStaticF_lightingGenerationThread))::System::Threading::Thread* lightingGenerationThread;

  /// @brief Field lightingGenerationThreadOutput, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lightingGenerationThreadOutput, put = setStaticF_lightingGenerationThreadOutput)) Il2CppObject* lightingGenerationThreadOutput;

  /// @brief Field lightingTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lightingTexture, put = setStaticF_lightingTexture))::UnityW<::UnityEngine::Texture3D> lightingTexture;

  /// @brief Field lightingTextureMapDepth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_lightingTextureMapDepth, put = setStaticF_lightingTextureMapDepth)) int32_t lightingTextureMapDepth;

  /// @brief Field minLightIntensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_minLightIntensity, put = __cordl_internal_set_minLightIntensity)) float_t minLightIntensity;

  /// @brief Field readyToAutoRefreshLighting, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_readyToAutoRefreshLighting, put = setStaticF_readyToAutoRefreshLighting)) bool readyToAutoRefreshLighting;

  /// @brief Field registeredPlayspaceData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredPlayspaceData, put = __cordl_internal_set_registeredPlayspaceData))::GlobalNamespace::PlayspaceData* registeredPlayspaceData;

  /// @brief Field sampleDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_sampleDistance, put = __cordl_internal_set_sampleDistance)) float_t sampleDistance;

  /// @brief Field shouldAutoRefreshLighting, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_shouldAutoRefreshLighting, put = setStaticF_shouldAutoRefreshLighting)) bool shouldAutoRefreshLighting;

  /// @brief Field smoothingRatio, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_smoothingRatio, put = __cordl_internal_set_smoothingRatio)) float_t smoothingRatio;

  /// @brief Field sunlightLevel, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_sunlightLevel, put = __cordl_internal_set_sunlightLevel)) uint8_t sunlightLevel;

  /// @brief Method ClearLightingData, addr 0x2f6aa10, size 0x158, virtual false, abstract: false, final false
  inline void ClearLightingData();

  /// @brief Method CreateLightingData, addr 0x2f6ab70, size 0x654, virtual false, abstract: false, final false
  static inline Il2CppObject* CreateLightingData(uint8_t sunlightLevel, uint8_t inBlockLightLevel, float_t smoothingRatio, ::UnityEngine::Vector3Int dimensions,
                                                 ::GlobalNamespace::MapLightData mapLightData);

  /// @brief Method CreateLightingTexture, addr 0x2f6b6e4, size 0x57c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture3D> CreateLightingTexture(Il2CppObject* lightingData, int32_t mapDepth);

  /// @brief Method DoFloodfill, addr 0x2f6bc60, size 0x7b0, virtual false, abstract: false, final false
  static inline void DoFloodfill(::UnityEngine::Vector3Int coords, uint8_t level, Il2CppObject* blocksAndEmission, Il2CppObject* lightingData);

  /// @brief Method DoFloodfillRecursive, addr 0x2f6b344, size 0x3a0, virtual false, abstract: false, final false
  static inline void DoFloodfillRecursive(::UnityEngine::Vector3Int coords, uint8_t level, Il2CppObject* blocksAndEmission, Il2CppObject* lightingData);

  /// @brief Method DoSunColumnFill, addr 0x2f6b1c4, size 0x180, virtual false, abstract: false, final false
  static inline void DoSunColumnFill(int32_t x, int32_t z, uint8_t level, Il2CppObject* blocksAndEmission, Il2CppObject* lightingData);

  static inline ::GlobalNamespace::LightingManager* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x2f69cfc, size 0x4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x2f6a2c4, size 0x18, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnMapDataUpdated, addr 0x2f6a3d4, size 0xb8, virtual false, abstract: false, final false
  inline void OnMapDataUpdated();

  /// @brief Method OnMapObjectPaintEmissionChanged, addr 0x2f6a48c, size 0x4, virtual false, abstract: false, final false
  inline void OnMapObjectPaintEmissionChanged();

  /// @brief Method RefreshLighting, addr 0x2f69920, size 0x204, virtual false, abstract: false, final false
  inline void RefreshLighting();

  /// @brief Method RefreshOnMapDataUpdatedCallbacks, addr 0x2f69b24, size 0x1d8, virtual false, abstract: false, final false
  inline void RefreshOnMapDataUpdatedCallbacks();

  /// @brief Method SetHasLoadedMapData, addr 0x2f6a2dc, size 0x18, virtual false, abstract: false, final false
  inline void SetHasLoadedMapData(bool newHasLoadedMapData);

  /// @brief Method SetLightingData, addr 0x2f69eb8, size 0x40c, virtual false, abstract: false, final false
  inline void SetLightingData(Il2CppObject* newLightingData, int32_t mapDepth);

  /// @brief Method Start, addr 0x2f69664, size 0x1f8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartLightingGeneration, addr 0x2f6a86c, size 0x1a4, virtual false, abstract: false, final false
  inline void StartLightingGeneration(::UnityEngine::Vector3Int dimensions, ::GlobalNamespace::MapLightData mapLightData);

  /// @brief Method TryStopLightingGeneration, addr 0x2f69d00, size 0x134, virtual false, abstract: false, final false
  inline void TryStopLightingGeneration();

  /// @brief Method Update, addr 0x2f69e34, size 0x84, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_exposedTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_exposedTexture();

  constexpr uint8_t const& __cordl_internal_get_fullIntensityLightLevel() const;

  constexpr uint8_t& __cordl_internal_get_fullIntensityLightLevel();

  constexpr uint8_t const& __cordl_internal_get_inBlockLightLevel() const;

  constexpr uint8_t& __cordl_internal_get_inBlockLightLevel();

  constexpr float_t const& __cordl_internal_get_minLightIntensity() const;

  constexpr float_t& __cordl_internal_get_minLightIntensity();

  constexpr ::GlobalNamespace::PlayspaceData*& __cordl_internal_get_registeredPlayspaceData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayspaceData*> const& __cordl_internal_get_registeredPlayspaceData() const;

  constexpr float_t const& __cordl_internal_get_sampleDistance() const;

  constexpr float_t& __cordl_internal_get_sampleDistance();

  constexpr float_t const& __cordl_internal_get_smoothingRatio() const;

  constexpr float_t& __cordl_internal_get_smoothingRatio();

  constexpr uint8_t const& __cordl_internal_get_sunlightLevel() const;

  constexpr uint8_t& __cordl_internal_get_sunlightLevel();

  constexpr void __cordl_internal_set_exposedTexture(::UnityW<::UnityEngine::Texture3D> value);

  constexpr void __cordl_internal_set_fullIntensityLightLevel(uint8_t value);

  constexpr void __cordl_internal_set_inBlockLightLevel(uint8_t value);

  constexpr void __cordl_internal_set_minLightIntensity(float_t value);

  constexpr void __cordl_internal_set_registeredPlayspaceData(::GlobalNamespace::PlayspaceData* value);

  constexpr void __cordl_internal_set_sampleDistance(float_t value);

  constexpr void __cordl_internal_set_smoothingRatio(float_t value);

  constexpr void __cordl_internal_set_sunlightLevel(uint8_t value);

  /// @brief Method .ctor, addr 0x2f6c410, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_desiresLightingData();

  static inline bool getStaticF_isLightingGenerationOutputReady();

  static inline bool getStaticF_isRegistered();

  static inline ::System::Threading::Thread* getStaticF_lightingGenerationThread();

  static inline Il2CppObject* getStaticF_lightingGenerationThreadOutput();

  static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_lightingTexture();

  static inline int32_t getStaticF_lightingTextureMapDepth();

  static inline bool getStaticF_readyToAutoRefreshLighting();

  static inline bool getStaticF_shouldAutoRefreshLighting();

  static inline void setStaticF_desiresLightingData(bool value);

  static inline void setStaticF_isLightingGenerationOutputReady(bool value);

  static inline void setStaticF_isRegistered(bool value);

  static inline void setStaticF_lightingGenerationThread(::System::Threading::Thread* value);

  static inline void setStaticF_lightingGenerationThreadOutput(Il2CppObject* value);

  static inline void setStaticF_lightingTexture(::UnityW<::UnityEngine::Texture3D> value);

  static inline void setStaticF_lightingTextureMapDepth(int32_t value);

  static inline void setStaticF_readyToAutoRefreshLighting(bool value);

  static inline void setStaticF_shouldAutoRefreshLighting(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightingManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightingManager(LightingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightingManager(LightingManager const&) = delete;

  /// @brief Field smoothingRatio, offset: 0x18, size: 0x4, def value: None
  float_t ___smoothingRatio;

  /// @brief Field sunlightLevel, offset: 0x1c, size: 0x1, def value: None
  uint8_t ___sunlightLevel;

  /// @brief Field inBlockLightLevel, offset: 0x1d, size: 0x1, def value: None
  uint8_t ___inBlockLightLevel;

  /// @brief Field fullIntensityLightLevel, offset: 0x1e, size: 0x1, def value: None
  uint8_t ___fullIntensityLightLevel;

  /// @brief Field minLightIntensity, offset: 0x20, size: 0x4, def value: None
  float_t ___minLightIntensity;

  /// @brief Field sampleDistance, offset: 0x24, size: 0x4, def value: None
  float_t ___sampleDistance;

  /// @brief Field exposedTexture, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture3D> ___exposedTexture;

  /// @brief Field registeredPlayspaceData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayspaceData* ___registeredPlayspaceData;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Lighting: " };

  /// @brief Field doLightingKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString doLightingKeyword{ u"_LIGHTMAPPING" };

  /// @brief Field lightingSampleDistance offset 0xffffffff size 0x8
  static constexpr ::ConstString lightingSampleDistance{ u"_LightmapSampleDistance" };

  /// @brief Field lightingSizeName offset 0xffffffff size 0x8
  static constexpr ::ConstString lightingSizeName{ u"_LightmapSize" };

  /// @brief Field lightingTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString lightingTextureName{ u"_Lightmap" };

  /// @brief Field padding offset 0xffffffff size 0x4
  static constexpr int32_t padding{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightingManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightingManager, ___smoothingRatio) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightingManager, ___sunlightLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightingManager, ___inBlockLightLevel) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightingManager, ___fullIntensityLightLevel) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightingManager, ___minLightIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightingManager, ___sampleDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightingManager, ___exposedTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightingManager, ___registeredPlayspaceData) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightingManager*, "", "LightingManager");
NEED_NO_BOX(::GlobalNamespace::__LightingManager____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightingManager____c__DisplayClass32_0*, "", "LightingManager/<>c__DisplayClass32_0");
