#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MapLightData)
// Forward declare root types
namespace GlobalNamespace {
struct MapLightData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MapLightData);
// Type: ::MapLightData
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapLightData
struct CORDL_TYPE MapLightData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2f6965c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(Il2CppObject* blocksAndEmission);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MapLightData();

  // Ctor Parameters [CppParam { name: "blocksAndEmission", ty: "Il2CppObject*", modifiers: "", def_value: None }]
  constexpr MapLightData(Il2CppObject* blocksAndEmission) noexcept;

  /// @brief Field blocksAndEmission, offset: 0x0, size: 0x8, def value: None
  Il2CppObject* blocksAndEmission;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field blockBit offset 0xffffffff size 0x1
  static constexpr uint8_t blockBit{ static_cast<uint8_t>(0x80u) };

  /// @brief Field blockBitFilter offset 0xffffffff size 0x1
  static constexpr uint8_t blockBitFilter{ static_cast<uint8_t>(0x80u) };

  /// @brief Field emissionLevelFilter offset 0xffffffff size 0x1
  static constexpr uint8_t emissionLevelFilter{ static_cast<uint8_t>(0x7fu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapLightData, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapLightData, blocksAndEmission) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapLightData, "", "MapLightData");
