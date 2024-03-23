#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeAsset)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
class __ProbeReferenceVolume__Cell;
}
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeAsset__AssetVersion;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct __ProbeVolumeAsset__AssetVersion;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumeAsset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset);
// Type: ::AssetVersion
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeVolumeAsset::AssetVersion
struct CORDL_TYPE __ProbeVolumeAsset__AssetVersion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ProbeVolumeAsset__AssetVersion_Unwrapped
  enum struct ____ProbeVolumeAsset__AssetVersion_Unwrapped : int32_t {
    __E_First = static_cast<int32_t>(0x0),
    __E_AddProbeVolumesAtlasEncodingModes = static_cast<int32_t>(0x1),
    __E_PV2 = static_cast<int32_t>(0x2),
    __E_ChunkBasedIndex = static_cast<int32_t>(0x3),
    __E_Max = static_cast<int32_t>(0x4),
    __E_Current = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ProbeVolumeAsset__AssetVersion_Unwrapped() const noexcept {
    return static_cast<____ProbeVolumeAsset__AssetVersion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeVolumeAsset__AssetVersion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProbeVolumeAsset__AssetVersion(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AddProbeVolumesAtlasEncodingModes value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion const AddProbeVolumesAtlasEncodingModes;

  /// @brief Field ChunkBasedIndex value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion const ChunkBasedIndex;

  /// @brief Field Current value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion const Current;

  /// @brief Field First value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion const First;

  /// @brief Field Max value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion const Max;

  /// @brief Field PV2 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion const PV2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: UnityEngine.Experimental.Rendering::ProbeVolumeAsset
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolumeAsset*
class CORDL_TYPE ProbeVolumeAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using AssetVersion = ::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field bands, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_bands, put = __cordl_internal_set_bands))::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands bands;

  /// @brief Field cellSizeInBricks, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_cellSizeInBricks, put = __cordl_internal_set_cellSizeInBricks)) int32_t cellSizeInBricks;

  /// @brief Field cells, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cells,
                      put = __cordl_internal_set_cells))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>* cells;

  /// @brief Field globalBounds, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get_globalBounds, put = __cordl_internal_set_globalBounds))::UnityEngine::Bounds globalBounds;

  /// @brief Field m_AssetFullPath, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetFullPath, put = __cordl_internal_set_m_AssetFullPath))::StringW m_AssetFullPath;

  /// @brief Field m_Version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Field maxCellPosition, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_maxCellPosition, put = __cordl_internal_set_maxCellPosition))::UnityEngine::Vector3Int maxCellPosition;

  __declspec(property(get = get_maxSubdivision)) int32_t maxSubdivision;

  __declspec(property(get = get_minBrickSize)) float_t minBrickSize;

  /// @brief Field minCellPosition, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_minCellPosition, put = __cordl_internal_set_minCellPosition))::UnityEngine::Vector3Int minCellPosition;

  /// @brief Field minDistanceBetweenProbes, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_minDistanceBetweenProbes, put = __cordl_internal_set_minDistanceBetweenProbes)) float_t minDistanceBetweenProbes;

  /// @brief Field simplificationLevels, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_simplificationLevels, put = __cordl_internal_set_simplificationLevels)) int32_t simplificationLevels;

  /// @brief Method CompatibleWith, addr 0x23c1748, size 0x68, virtual false, abstract: false, final false
  inline bool CompatibleWith(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* otherAsset);

  /// @brief Method GetSerializedFullPath, addr 0x23c79ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetSerializedFullPath();

  static inline ::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* New_ctor();

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands const& __cordl_internal_get_bands() const;

  constexpr ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands& __cordl_internal_get_bands();

  constexpr int32_t const& __cordl_internal_get_cellSizeInBricks() const;

  constexpr int32_t& __cordl_internal_get_cellSizeInBricks();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>*& __cordl_internal_get_cells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>*> const&
  __cordl_internal_get_cells() const;

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_globalBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_globalBounds();

  constexpr ::StringW const& __cordl_internal_get_m_AssetFullPath() const;

  constexpr ::StringW& __cordl_internal_get_m_AssetFullPath();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_maxCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_maxCellPosition();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_minCellPosition() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_minCellPosition();

  constexpr float_t const& __cordl_internal_get_minDistanceBetweenProbes() const;

  constexpr float_t& __cordl_internal_get_minDistanceBetweenProbes();

  constexpr int32_t const& __cordl_internal_get_simplificationLevels() const;

  constexpr int32_t& __cordl_internal_get_simplificationLevels();

  constexpr void __cordl_internal_set_bands(::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands value);

  constexpr void __cordl_internal_set_cellSizeInBricks(int32_t value);

  constexpr void __cordl_internal_set_cells(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>* value);

  constexpr void __cordl_internal_set_globalBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_AssetFullPath(::StringW value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  constexpr void __cordl_internal_set_maxCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_minCellPosition(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_minDistanceBetweenProbes(float_t value);

  constexpr void __cordl_internal_set_simplificationLevels(int32_t value);

  /// @brief Method .ctor, addr 0x23c79f4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Version, addr 0x23c79e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_maxSubdivision, addr 0x23c25b8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_maxSubdivision();

  /// @brief Method get_minBrickSize, addr 0x23c259c, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_minBrickSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeAsset(ProbeVolumeAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeAsset(ProbeVolumeAsset const&) = delete;

  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field cells, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolume__Cell*>* ___cells;

  /// @brief Field maxCellPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___maxCellPosition;

  /// @brief Field minCellPosition, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___minCellPosition;

  /// @brief Field globalBounds, offset: 0x40, size: 0x18, def value: None
  ::UnityEngine::Bounds ___globalBounds;

  /// @brief Field bands, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands ___bands;

  /// @brief Field m_AssetFullPath, offset: 0x60, size: 0x8, def value: None
  ::StringW ___m_AssetFullPath;

  /// @brief Field cellSizeInBricks, offset: 0x68, size: 0x4, def value: None
  int32_t ___cellSizeInBricks;

  /// @brief Field minDistanceBetweenProbes, offset: 0x6c, size: 0x4, def value: None
  float_t ___minDistanceBetweenProbes;

  /// @brief Field simplificationLevels, offset: 0x70, size: 0x4, def value: None
  int32_t ___simplificationLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___cells) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___maxCellPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___minCellPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___globalBounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___bands) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___m_AssetFullPath) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___cellSizeInBricks) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___minDistanceBetweenProbes) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset, ___simplificationLevels) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeVolumeAsset__AssetVersion, "UnityEngine.Experimental.Rendering", "ProbeVolumeAsset/AssetVersion");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolumeAsset*, "UnityEngine.Experimental.Rendering", "ProbeVolumeAsset");
