#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MapObjectBatcher)
namespace GlobalNamespace {
class MapObjectBatch;
}
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class __MapManager__MapObjectMaterialCache;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectBatcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectBatcher);
// Type: ::MapObjectBatcher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectBatcher*
class CORDL_TYPE MapObjectBatcher : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::MapObjectBatcher>> {
public:
  // Declarations
  /// @brief Field batches, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_batches,
                      put = __cordl_internal_set_batches))::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW>,
                                                                                                       ::GlobalNamespace::MapObjectBatch*>* batches;

  /// @brief Method BakeAll, addr 0x3074564, size 0x220, virtual false, abstract: false, final false
  inline void BakeAll();

  /// @brief Method DeleteAll, addr 0x3074aac, size 0x244, virtual false, abstract: false, final false
  inline void DeleteAll();

  /// @brief Method DeleteAllSilent, addr 0x3074e3c, size 0x244, virtual false, abstract: false, final false
  inline void DeleteAllSilent();

  static inline ::GlobalNamespace::MapObjectBatcher* New_ctor();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x3074784, size 0x80, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnSetLoadedMapData, addr 0x3074a24, size 0x88, virtual false, abstract: false, final false
  inline void OnSetLoadedMapData(bool newHasLoadedMapData);

  /// @brief Method RegisterForBatching, addr 0x3074cf0, size 0x14c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MapObjectBatch* RegisterForBatching(::GlobalNamespace::MapObject* mapObject, ::GlobalNamespace::__MapManager__MapObjectMaterialCache* materialCache, ::StringW colorKey);

  /// @brief Method Start, addr 0x3074370, size 0x1f4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryCreateBakedMesh, addr 0x3073564, size 0xa54, virtual false, abstract: false, final false
  static inline bool TryCreateBakedMesh(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects, ByRef<::UnityEngine::Mesh*> mesh);

  /// @brief Method UnbakeAll, addr 0x3074804, size 0x220, virtual false, abstract: false, final false
  inline void UnbakeAll();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW>, ::GlobalNamespace::MapObjectBatch*>*&
  __cordl_internal_get_batches();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW>, ::GlobalNamespace::MapObjectBatch*>*> const&
  __cordl_internal_get_batches() const;

  constexpr void __cordl_internal_set_batches(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW>, ::GlobalNamespace::MapObjectBatch*>* value);

  /// @brief Method .ctor, addr 0x3075080, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectBatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectBatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectBatcher(MapObjectBatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectBatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectBatcher(MapObjectBatcher const&) = delete;

  /// @brief Field batches, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::GlobalNamespace::__MapManager__MapObjectMaterialCache*, ::StringW>, ::GlobalNamespace::MapObjectBatch*>* ___batches;

  /// @brief Field allowBatching offset 0xffffffff size 0x1
  static constexpr bool allowBatching{ true };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Batcher: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectBatcher, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectBatcher, ___batches) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectBatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectBatcher*, "", "MapObjectBatcher");
