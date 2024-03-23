#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapSyncDataCompressed)
namespace GlobalNamespace {
class MapSyncData;
}
// Forward declare root types
namespace GlobalNamespace {
class MapSyncDataCompressed;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapSyncDataCompressed);
// Type: ::MapSyncDataCompressed
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapSyncDataCompressed*
class CORDL_TYPE MapSyncDataCompressed : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorKeys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_colorKeys, put = __cordl_internal_set_colorKeys))::ArrayW<::StringW, ::Array<::StringW>*> colorKeys;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::ArrayW<::StringW, ::Array<::StringW>*> keys;

  /// @brief Field mapObjectByteStream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectByteStream, put = __cordl_internal_set_mapObjectByteStream))::ArrayW<uint8_t, ::Array<uint8_t>*> mapObjectByteStream;

  /// @brief Field ownerUserIDs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ownerUserIDs, put = __cordl_internal_set_ownerUserIDs))::ArrayW<::StringW, ::Array<::StringW>*> ownerUserIDs;

  static inline ::GlobalNamespace::MapSyncDataCompressed* New_ctor(::GlobalNamespace::MapSyncData* mapSyncData);

  /// @brief Method TryDecompress, addr 0x2f6ff24, size 0x2b8, virtual false, abstract: false, final false
  inline bool TryDecompress(ByRef<::GlobalNamespace::MapSyncData*> data);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_colorKeys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_colorKeys();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_keys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_keys();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mapObjectByteStream() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mapObjectByteStream();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_ownerUserIDs() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_ownerUserIDs();

  constexpr void __cordl_internal_set_colorKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_keys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_mapObjectByteStream(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_ownerUserIDs(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x2f702d4, size 0x660, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MapSyncData* mapSyncData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapSyncDataCompressed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapSyncDataCompressed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapSyncDataCompressed(MapSyncDataCompressed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapSyncDataCompressed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapSyncDataCompressed(MapSyncDataCompressed const&) = delete;

  /// @brief Field mapObjectByteStream, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mapObjectByteStream;

  /// @brief Field keys, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___keys;

  /// @brief Field colorKeys, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___colorKeys;

  /// @brief Field ownerUserIDs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___ownerUserIDs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapSyncDataCompressed, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapSyncDataCompressed, ___mapObjectByteStream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapSyncDataCompressed, ___keys) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapSyncDataCompressed, ___colorKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapSyncDataCompressed, ___ownerUserIDs) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapSyncDataCompressed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapSyncDataCompressed*, "", "MapSyncDataCompressed");
