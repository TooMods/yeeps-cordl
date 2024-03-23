#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MapObjectSyncDataCompressed)
namespace GlobalNamespace {
struct MapObjectSyncData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct MapObjectSyncDataCompressed;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MapObjectSyncDataCompressed);
// Type: ::MapObjectSyncDataCompressed
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapObjectSyncDataCompressed
struct CORDL_TYPE MapObjectSyncDataCompressed {
public:
  // Declarations
  /// @brief Method AppendBytes, addr 0x307a604, size 0x490, virtual false, abstract: false, final false
  inline void AppendBytes(::System::Collections::Generic::List_1<uint8_t>* bytes);

  /// @brief Method ConvertFromByteStream, addr 0x307aa94, size 0x12c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MapObjectSyncDataCompressed ConvertFromByteStream(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex);

  /// @brief Method .ctor, addr 0x307a5e4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int16_t keyIndex, int16_t positionX, int16_t positionY, int16_t positionZ, uint8_t placedDirectionData, uint8_t colorKeyIndex, int16_t ownerUserIDIndex);

  /// @brief Method .ctor, addr 0x307a5b0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MapObjectSyncData originalData, int32_t keyIndex, int32_t colorKeyIndex, int32_t ownerUserIDIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectSyncDataCompressed();

  // Ctor Parameters [CppParam { name: "keyIndex", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "positionX", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name:
  // "positionY", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "positionZ", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "placedDirectionData", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "colorKeyIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "ownerUserIDIndex", ty: "int16_t", modifiers: "", def_value:
  // None }]
  constexpr MapObjectSyncDataCompressed(int16_t keyIndex, int16_t positionX, int16_t positionY, int16_t positionZ, uint8_t placedDirectionData, uint8_t colorKeyIndex,
                                        int16_t ownerUserIDIndex) noexcept;

  /// @brief Field keyIndex, offset: 0x0, size: 0x2, def value: None
  int16_t keyIndex;

  /// @brief Field positionX, offset: 0x2, size: 0x2, def value: None
  int16_t positionX;

  /// @brief Field positionY, offset: 0x4, size: 0x2, def value: None
  int16_t positionY;

  /// @brief Field positionZ, offset: 0x6, size: 0x2, def value: None
  int16_t positionZ;

  /// @brief Field placedDirectionData, offset: 0x8, size: 0x1, def value: None
  uint8_t placedDirectionData;

  /// @brief Field colorKeyIndex, offset: 0x9, size: 0x1, def value: None
  uint8_t colorKeyIndex;

  /// @brief Field ownerUserIDIndex, offset: 0xa, size: 0x2, def value: None
  int16_t ownerUserIDIndex;

  /// @brief Field NUM_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t NUM_BYTES{ static_cast<int32_t>(0xc) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectSyncDataCompressed, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncDataCompressed, keyIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncDataCompressed, positionX) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncDataCompressed, positionY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncDataCompressed, positionZ) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncDataCompressed, placedDirectionData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncDataCompressed, colorKeyIndex) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectSyncDataCompressed, ownerUserIDIndex) == 0xa, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectSyncDataCompressed, "", "MapObjectSyncDataCompressed");
