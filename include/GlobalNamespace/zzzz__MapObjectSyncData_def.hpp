#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MapObjectSyncData)
namespace GlobalNamespace {
struct MapObjectSyncDataCompressed;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
struct MapObjectSyncData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MapObjectSyncData);
// Type: ::MapObjectSyncData
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapObjectSyncData
struct CORDL_TYPE MapObjectSyncData {
public:
  // Declarations
  /// @brief Method GetPlacedDirectionData, addr 0x307a5a4, size 0xc, virtual false, abstract: false, final false
  inline uint8_t GetPlacedDirectionData();

  /// @brief Method .ctor, addr 0x307a504, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MapObjectSyncDataCompressed compressesdData, ::ArrayW<::StringW, ::Array<::StringW>*> keys, ::ArrayW<::StringW, ::Array<::StringW>*> colorKeys,
                    ::ArrayW<::StringW, ::Array<::StringW>*> ownerUserIDs);

  /// @brief Method .ctor, addr 0x307a4f0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                    ::StringW colorKey, ::StringW ownerUserID);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectSyncData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "placedPosition", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None },
  // CppParam { name: "placedForwardFacing", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "placedUpFacing", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "colorKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ownerUserID", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr MapObjectSyncData(::StringW key, ::UnityEngine::Vector3Int placedPosition, int32_t placedForwardFacing, int32_t placedUpFacing, ::StringW colorKey, ::StringW ownerUserID) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field placedPosition, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3Int placedPosition;

  /// @brief Field placedForwardFacing, offset: 0x14, size: 0x4, def value: None
  int32_t placedForwardFacing;

  /// @brief Field placedUpFacing, offset: 0x18, size: 0x4, def value: None
  int32_t placedUpFacing;

  /// @brief Field colorKey, offset: 0x20, size: 0x8, def value: None
  ::StringW colorKey;

  /// @brief Field ownerUserID, offset: 0x28, size: 0x8, def value: None
  ::StringW ownerUserID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectSyncData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncData, placedPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncData, placedForwardFacing) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncData, placedUpFacing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncData, colorKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncData, ownerUserID) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectSyncData, "", "MapObjectSyncData");
