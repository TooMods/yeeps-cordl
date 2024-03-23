#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MapData)
namespace GlobalNamespace {
class MapSyncData;
}
// Forward declare root types
namespace GlobalNamespace {
struct MapData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MapData);
// Type: ::MapData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapData
struct CORDL_TYPE MapData {
public:
  // Declarations
  /// @brief Method Blank, addr 0x2f6fe00, size 0x8c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MapData Blank();

  /// @brief Method IsValid, addr 0x2f6fe8c, size 0x20, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method NULL, addr 0x2f6fdf4, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MapData _cordl_NULL();

  /// @brief Method .ctor, addr 0x2f6fdd8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MapSyncData* saveData);

  /// @brief Method .ctor, addr 0x2f6fde8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MapSyncData* saveData, int32_t version);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MapData();

  // Ctor Parameters [CppParam { name: "saveData", ty: "::GlobalNamespace::MapSyncData*", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MapData(::GlobalNamespace::MapSyncData* saveData, int32_t version) noexcept;

  /// @brief Field saveData, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::MapSyncData* saveData;

  /// @brief Field version, offset: 0x8, size: 0x4, def value: None
  int32_t version;

  /// @brief Field CLIENT_MAP_DATA_VERSION offset 0xffffffff size 0x4
  static constexpr int32_t CLIENT_MAP_DATA_VERSION{ static_cast<int32_t>(0x1) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapData, saveData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapData, version) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapData, "", "MapData");
