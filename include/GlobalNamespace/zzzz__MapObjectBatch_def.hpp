#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapObjectBatch)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class __MapManager__MapObjectMaterialCache;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectBatch;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectBatch);
// Type: ::MapObjectBatch
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectBatch*
class CORDL_TYPE MapObjectBatch : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isBaked>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isBaked_k__BackingField, put = __cordl_internal_set__isBaked_k__BackingField)) bool _isBaked_k__BackingField;

  /// @brief Field bakedObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bakedObject, put = __cordl_internal_set_bakedObject))::UnityW<::UnityEngine::GameObject> bakedObject;

  /// @brief Field colorKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_colorKey, put = __cordl_internal_set_colorKey))::StringW colorKey;

  __declspec(property(get = get_isBaked, put = set_isBaked)) bool isBaked;

  /// @brief Field mapObjects, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjects, put = __cordl_internal_set_mapObjects))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects;

  /// @brief Field materialCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_materialCache, put = __cordl_internal_set_materialCache))::GlobalNamespace::__MapManager__MapObjectMaterialCache* materialCache;

  /// @brief Method Bake, addr 0x307337c, size 0x1e8, virtual false, abstract: false, final false
  inline void Bake();

  /// @brief Method Deregister, addr 0x3073194, size 0x58, virtual false, abstract: false, final false
  inline void Deregister(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method DestroySelf, addr 0x3074044, size 0x198, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DestroySelfSilent, addr 0x30741e4, size 0x18c, virtual false, abstract: false, final false
  inline void DestroySelfSilent();

  static inline ::GlobalNamespace::MapObjectBatch* New_ctor(::GlobalNamespace::__MapManager__MapObjectMaterialCache* materialCache, ::StringW colorKey);

  /// @brief Method Register, addr 0x30730dc, size 0xb8, virtual false, abstract: false, final false
  inline bool Register(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method SetIsBaked, addr 0x30731ec, size 0x17c, virtual false, abstract: false, final false
  inline void SetIsBaked(bool newIsBaked);

  /// @brief Method Unbake, addr 0x3073fb8, size 0x8c, virtual false, abstract: false, final false
  inline void Unbake();

  constexpr bool const& __cordl_internal_get__isBaked_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isBaked_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bakedObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bakedObject();

  constexpr ::StringW const& __cordl_internal_get_colorKey() const;

  constexpr ::StringW& __cordl_internal_get_colorKey();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get_mapObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const& __cordl_internal_get_mapObjects() const;

  constexpr ::GlobalNamespace::__MapManager__MapObjectMaterialCache*& __cordl_internal_get_materialCache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MapManager__MapObjectMaterialCache*> const& __cordl_internal_get_materialCache() const;

  constexpr void __cordl_internal_set__isBaked_k__BackingField(bool value);

  constexpr void __cordl_internal_set_bakedObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_colorKey(::StringW value);

  constexpr void __cordl_internal_set_mapObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value);

  constexpr void __cordl_internal_set_materialCache(::GlobalNamespace::__MapManager__MapObjectMaterialCache* value);

  /// @brief Method .ctor, addr 0x3073048, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__MapManager__MapObjectMaterialCache* materialCache, ::StringW colorKey);

  /// @brief Method get_isBaked, addr 0x3073034, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBaked();

  /// @brief Method set_isBaked, addr 0x307303c, size 0xc, virtual false, abstract: false, final false
  inline void set_isBaked(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectBatch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectBatch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectBatch(MapObjectBatch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectBatch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectBatch(MapObjectBatch const&) = delete;

  /// @brief Field materialCache, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__MapManager__MapObjectMaterialCache* ___materialCache;

  /// @brief Field colorKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___colorKey;

  /// @brief Field <isBaked>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isBaked_k__BackingField;

  /// @brief Field mapObjects, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* ___mapObjects;

  /// @brief Field bakedObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___bakedObject;

  /// @brief Field bakedObjectLayer offset 0xffffffff size 0x4
  static constexpr int32_t bakedObjectLayer{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectBatch, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectBatch, ___materialCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectBatch, ___colorKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectBatch, ____isBaked_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectBatch, ___mapObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectBatch, ___bakedObject) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectBatch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectBatch*, "", "MapObjectBatch");
