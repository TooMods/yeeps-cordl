#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapSyncData)
namespace GlobalNamespace {
struct MapObjectSyncData;
}
// Forward declare root types
namespace GlobalNamespace {
class MapSyncData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapSyncData);
// Type: ::MapSyncData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapSyncData*
class CORDL_TYPE MapSyncData : public ::System::Object {
public:
  // Declarations
  /// @brief Field mapObjects, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjects,
                      put = __cordl_internal_set_mapObjects))::ArrayW<::GlobalNamespace::MapObjectSyncData, ::Array<::GlobalNamespace::MapObjectSyncData>*> mapObjects;

  /// @brief Method Compress, addr 0x2f70270, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compress();

  /// @brief Method DebugCompressionDifference, addr 0x2f7093c, size 0x260, virtual false, abstract: false, final false
  inline void DebugCompressionDifference();

  /// @brief Method Decompress, addr 0x2f6feac, size 0x78, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MapSyncData* Decompress(::ArrayW<uint8_t, ::Array<uint8_t>*> serializedData);

  /// @brief Method Deserialize, addr 0x2f701dc, size 0x94, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MapSyncData* Deserialize(::StringW serializedDataString);

  static inline ::GlobalNamespace::MapSyncData* New_ctor(::ArrayW<::GlobalNamespace::MapObjectSyncData, ::Array<::GlobalNamespace::MapObjectSyncData>*> mapObjects);

  /// @brief Method Serialize, addr 0x2f70934, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Serialize();

  /// @brief Method SerializeToString, addr 0x2f70b9c, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW SerializeToString();

  constexpr ::ArrayW<::GlobalNamespace::MapObjectSyncData, ::Array<::GlobalNamespace::MapObjectSyncData>*> const& __cordl_internal_get_mapObjects() const;

  constexpr ::ArrayW<::GlobalNamespace::MapObjectSyncData, ::Array<::GlobalNamespace::MapObjectSyncData>*>& __cordl_internal_get_mapObjects();

  constexpr void __cordl_internal_set_mapObjects(::ArrayW<::GlobalNamespace::MapObjectSyncData, ::Array<::GlobalNamespace::MapObjectSyncData>*> value);

  /// @brief Method .ctor, addr 0x2f6f81c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::GlobalNamespace::MapObjectSyncData, ::Array<::GlobalNamespace::MapObjectSyncData>*> mapObjects);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapSyncData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapSyncData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapSyncData(MapSyncData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapSyncData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapSyncData(MapSyncData const&) = delete;

  /// @brief Field mapObjects, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MapObjectSyncData, ::Array<::GlobalNamespace::MapObjectSyncData>*> ___mapObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapSyncData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapSyncData, ___mapObjects) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapSyncData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapSyncData*, "", "MapSyncData");
