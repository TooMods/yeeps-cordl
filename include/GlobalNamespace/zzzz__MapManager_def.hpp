#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MapManager)
namespace GlobalNamespace {
struct MapData;
}
namespace GlobalNamespace {
class MapObjectGuide;
}
namespace GlobalNamespace {
class MapObjectPickupData;
}
namespace GlobalNamespace {
struct MapObjectSyncData;
}
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class MapSyncData;
}
namespace GlobalNamespace {
class PlayspaceData;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
struct __MapManager__MapObjectDataSet;
}
namespace GlobalNamespace {
struct __MapManager__MapObjectData;
}
namespace GlobalNamespace {
class __MapManager__MapObjectMaterialCache;
}
namespace GlobalNamespace {
class __MapManager__OnSetHasLoadedMapMapData;
}
namespace GlobalNamespace {
class __MapManager___CreateRandomMapObjectsRoutine_d__132;
}
namespace GlobalNamespace {
class __MapManager___DestroyRandomMapObjectsRoutine_d__134;
}
namespace GlobalNamespace {
class __MapManager___LoadMapRoutine_d__76;
}
namespace GlobalNamespace {
class __MapManager___MapTestRoutine_d__128;
}
namespace GlobalNamespace {
class __MapManager___QueueSendMapSyncRoutine_d__68;
}
namespace GlobalNamespace {
struct __MapObject__DropType;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
struct __MapObject__MaterialType;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MapManager;
}
namespace GlobalNamespace {
class __MapManager__MapObjectMaterialCache;
}
namespace GlobalNamespace {
class __MapManager__OnSetHasLoadedMapMapData;
}
namespace GlobalNamespace {
class __MapManager___CreateRandomMapObjectsRoutine_d__132;
}
namespace GlobalNamespace {
class __MapManager___DestroyRandomMapObjectsRoutine_d__134;
}
namespace GlobalNamespace {
class __MapManager___LoadMapRoutine_d__76;
}
namespace GlobalNamespace {
class __MapManager___MapTestRoutine_d__128;
}
namespace GlobalNamespace {
class __MapManager___QueueSendMapSyncRoutine_d__68;
}
namespace GlobalNamespace {
struct __MapManager__MapObjectData;
}
namespace GlobalNamespace {
struct __MapManager__MapObjectDataSet;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapManager);
MARK_REF_PTR_T(::GlobalNamespace::__MapManager__MapObjectMaterialCache);
MARK_REF_PTR_T(::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData);
MARK_REF_PTR_T(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132);
MARK_REF_PTR_T(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134);
MARK_REF_PTR_T(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76);
MARK_REF_PTR_T(::GlobalNamespace::__MapManager___MapTestRoutine_d__128);
MARK_REF_PTR_T(::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68);
MARK_VAL_T(::GlobalNamespace::__MapManager__MapObjectData);
MARK_VAL_T(::GlobalNamespace::__MapManager__MapObjectDataSet);
// Type: ::OnSetHasLoadedMapMapData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapManager::OnSetHasLoadedMapMapData*
class CORDL_TYPE __MapManager__OnSetHasLoadedMapMapData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2f798c4, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newHasLoadedMapData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2f7994c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2f798ac, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newHasLoadedMapData);

  static inline ::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2f6985c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager__OnSetHasLoadedMapMapData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapManager__OnSetHasLoadedMapMapData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapManager__OnSetHasLoadedMapMapData(__MapManager__OnSetHasLoadedMapMapData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapManager__OnSetHasLoadedMapMapData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapManager__OnSetHasLoadedMapMapData(__MapManager__OnSetHasLoadedMapMapData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MapObjectData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapManager::MapObjectData
struct CORDL_TYPE __MapManager__MapObjectData {
public:
  // Declarations
  __declspec(property(get = get_materialCache, put = set_materialCache))::GlobalNamespace::__MapManager__MapObjectMaterialCache* materialCache;

  /// @brief Method .ctor, addr 0x2f71b7c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, ::UnityEngine::GameObject* prefab, ::GlobalNamespace::__MapManager__MapObjectMaterialCache* materialCache);

  /// @brief Method get_materialCache, addr 0x2f79958, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MapManager__MapObjectMaterialCache* get_materialCache();

  /// @brief Method set_materialCache, addr 0x2f79960, size 0x8, virtual false, abstract: false, final false
  inline void set_materialCache(::GlobalNamespace::__MapManager__MapObjectMaterialCache* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager__MapObjectData();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None },
  // CppParam { name: "maintainUp", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_materialCache_k__BackingField", ty: "::GlobalNamespace::__MapManager__MapObjectMaterialCache*",
  // modifiers: "", def_value: None }]
  constexpr __MapManager__MapObjectData(::StringW key, ::UnityW<::UnityEngine::GameObject> prefab, bool maintainUp,
                                        ::GlobalNamespace::__MapManager__MapObjectMaterialCache* _materialCache_k__BackingField) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field prefab, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief Field maintainUp, offset: 0x10, size: 0x1, def value: None
  bool maintainUp;

  /// @brief Field <materialCache>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__MapManager__MapObjectMaterialCache* _materialCache_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager__MapObjectData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectData, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectData, prefab) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectData, maintainUp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectData, _materialCache_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapObjectMaterialCache
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapManager::MapObjectMaterialCache*
class CORDL_TYPE __MapManager__MapObjectMaterialCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isBatchable>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isBatchable_k__BackingField, put = __cordl_internal_set__isBatchable_k__BackingField)) bool _isBatchable_k__BackingField;

  /// @brief Field <key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field dephysicalizedMaterialsDefault, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_dephysicalizedMaterialsDefault,
               put = __cordl_internal_set_dephysicalizedMaterialsDefault))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> dephysicalizedMaterialsDefault;

  /// @brief Field hoveredShader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hoveredShader, put = setStaticF_hoveredShader))::UnityW<::UnityEngine::Shader> hoveredShader;

  __declspec(property(get = get_isBatchable, put = set_isBatchable)) bool isBatchable;

  /// @brief Field itemPreviewMaterialsDefault, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_itemPreviewMaterialsDefault,
                      put = __cordl_internal_set_itemPreviewMaterialsDefault))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> itemPreviewMaterialsDefault;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  /// @brief Field materialsCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_materialsCache, put = __cordl_internal_set_materialsCache))::ArrayW<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*,
      ::Array<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>*> materialsCache;

  /// @brief Field solidHoveredMaterialsDefault, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_solidHoveredMaterialsDefault,
                      put = __cordl_internal_set_solidHoveredMaterialsDefault))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> solidHoveredMaterialsDefault;

  /// @brief Field solidMaterialsDefault, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_solidMaterialsDefault,
                      put = __cordl_internal_set_solidMaterialsDefault))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> solidMaterialsDefault;

  /// @brief Method GetMaterials, addr 0x2f78888, size 0x3cc, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetMaterials(::GlobalNamespace::__MapObject__MaterialType materialType, ::StringW colorKey);

  static inline ::GlobalNamespace::__MapManager__MapObjectMaterialCache* New_ctor(::StringW key, bool isBatchable,
                                                                                  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> solidMaterials,
                                                                                  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> dephysicalizedMaterials);

  constexpr bool const& __cordl_internal_get__isBatchable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isBatchable_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_dephysicalizedMaterialsDefault() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_dephysicalizedMaterialsDefault();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_itemPreviewMaterialsDefault() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_itemPreviewMaterialsDefault();

  constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*,
                     ::Array<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>*> const&
  __cordl_internal_get_materialsCache() const;

  constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*,
                     ::Array<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>*>&
  __cordl_internal_get_materialsCache();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_solidHoveredMaterialsDefault() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_solidHoveredMaterialsDefault();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_solidMaterialsDefault() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_solidMaterialsDefault();

  constexpr void __cordl_internal_set__isBatchable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_dephysicalizedMaterialsDefault(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_itemPreviewMaterialsDefault(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_materialsCache(
      ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*,
               ::Array<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>*>
          value);

  constexpr void __cordl_internal_set_solidHoveredMaterialsDefault(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_solidMaterialsDefault(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  /// @brief Method .ctor, addr 0x2f71510, size 0x66c, virtual false, abstract: false, final false
  inline void _ctor(::StringW key, bool isBatchable, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> solidMaterials,
                    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> dephysicalizedMaterials);

  static inline ::UnityW<::UnityEngine::Shader> getStaticF_hoveredShader();

  /// @brief Method get_isBatchable, addr 0x2f79978, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBatchable();

  /// @brief Method get_key, addr 0x2f79968, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  static inline void setStaticF_hoveredShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method set_isBatchable, addr 0x2f79980, size 0xc, virtual false, abstract: false, final false
  inline void set_isBatchable(bool value);

  /// @brief Method set_key, addr 0x2f79970, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager__MapObjectMaterialCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapManager__MapObjectMaterialCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapManager__MapObjectMaterialCache(__MapManager__MapObjectMaterialCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapManager__MapObjectMaterialCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapManager__MapObjectMaterialCache(__MapManager__MapObjectMaterialCache const&) = delete;

  /// @brief Field <key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <isBatchable>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____isBatchable_k__BackingField;

  /// @brief Field materialsCache, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*,
           ::Array<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>>*>*>
      ___materialsCache;

  /// @brief Field solidMaterialsDefault, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___solidMaterialsDefault;

  /// @brief Field solidHoveredMaterialsDefault, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___solidHoveredMaterialsDefault;

  /// @brief Field dephysicalizedMaterialsDefault, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___dephysicalizedMaterialsDefault;

  /// @brief Field itemPreviewMaterialsDefault, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___itemPreviewMaterialsDefault;

  /// @brief Field brightnessBoostPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString brightnessBoostPropertyName{ u"_BrightnessBoost" };

  /// @brief Field emissionColorPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString emissionColorPropertyName{ u"_Emission" };

  /// @brief Field hoverBrightnessBoostPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString hoverBrightnessBoostPropertyName{ u"_HoverBrightnessBoost" };

  /// @brief Field hoverDistortionAmount offset 0xffffffff size 0x4
  static constexpr float_t hoverDistortionAmount{ 0.03 };

  /// @brief Field hoverDistortionAmountPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString hoverDistortionAmountPropertyName{ u"_DistortionAmount" };

  /// @brief Field hoveredShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString hoveredShaderName{ u"Shader Graphs/MapObjectSolidTexturedHovered" };

  /// @brief Field hoveredToPickupBrightnessBoost offset 0xffffffff size 0x4
  static constexpr float_t hoveredToPickupBrightnessBoost{ 0.125 };

  /// @brief Field triplanarKeywordName offset 0xffffffff size 0x8
  static constexpr ::ConstString triplanarKeywordName{ u"TRIPLANAR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager__MapObjectMaterialCache, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectMaterialCache, ____key_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectMaterialCache, ____isBatchable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectMaterialCache, ___materialsCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectMaterialCache, ___solidMaterialsDefault) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectMaterialCache, ___solidHoveredMaterialsDefault) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectMaterialCache, ___dephysicalizedMaterialsDefault) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectMaterialCache, ___itemPreviewMaterialsDefault) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapObjectDataSet
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapManager::MapObjectDataSet
struct CORDL_TYPE __MapManager__MapObjectDataSet {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager__MapObjectDataSet();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isBatchable", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "materialShareKey", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __MapManager__MapObjectDataSet(::StringW key, bool isBatchable, ::StringW materialShareKey) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field isBatchable, offset: 0x8, size: 0x1, def value: None
  bool isBatchable;

  /// @brief Field materialShareKey, offset: 0x10, size: 0x8, def value: None
  ::StringW materialShareKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager__MapObjectDataSet, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectDataSet, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectDataSet, isBatchable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager__MapObjectDataSet, materialShareKey) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<QueueSendMapSyncRoutine>d__68
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapManager::<QueueSendMapSyncRoutine>d__68*
class CORDL_TYPE __MapManager___QueueSendMapSyncRoutine_d__68 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapManager> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2f79990, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2f79a48, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2f79a50, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2f79a90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2f7998c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapManager> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x2f74228, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager___QueueSendMapSyncRoutine_d__68();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___QueueSendMapSyncRoutine_d__68", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapManager___QueueSendMapSyncRoutine_d__68(__MapManager___QueueSendMapSyncRoutine_d__68&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___QueueSendMapSyncRoutine_d__68", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapManager___QueueSendMapSyncRoutine_d__68(__MapManager___QueueSendMapSyncRoutine_d__68 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadMapRoutine>d__76
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapManager::<LoadMapRoutine>d__76*
class CORDL_TYPE __MapManager___LoadMapRoutine_d__76 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapManager> __4__this;

  /// @brief Field <curIndex>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__curIndex_5__2, put = __cordl_internal_set__curIndex_5__2)) int32_t _curIndex_5__2;

  /// @brief Field mapData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mapData, put = __cordl_internal_set_mapData))::GlobalNamespace::MapSyncData* mapData;

  /// @brief Field oldMapObjects, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_oldMapObjects, put = __cordl_internal_set_oldMapObjects))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* oldMapObjects;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2f79a9c, size 0x358, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MapManager___LoadMapRoutine_d__76* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2f79df4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2f79dfc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2f79e3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2f79a98, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__curIndex_5__2() const;

  constexpr int32_t& __cordl_internal_get__curIndex_5__2();

  constexpr ::GlobalNamespace::MapSyncData*& __cordl_internal_get_mapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapSyncData*> const& __cordl_internal_get_mapData() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get_oldMapObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const& __cordl_internal_get_oldMapObjects() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapManager> value);

  constexpr void __cordl_internal_set__curIndex_5__2(int32_t value);

  constexpr void __cordl_internal_set_mapData(::GlobalNamespace::MapSyncData* value);

  constexpr void __cordl_internal_set_oldMapObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value);

  /// @brief Method .ctor, addr 0x2f74488, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager___LoadMapRoutine_d__76();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___LoadMapRoutine_d__76", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapManager___LoadMapRoutine_d__76(__MapManager___LoadMapRoutine_d__76&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___LoadMapRoutine_d__76", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapManager___LoadMapRoutine_d__76(__MapManager___LoadMapRoutine_d__76 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapManager> _____4__this;

  /// @brief Field mapData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MapSyncData* ___mapData;

  /// @brief Field oldMapObjects, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* ___oldMapObjects;

  /// @brief Field <curIndex>5__2, offset: 0x38, size: 0x4, def value: None
  int32_t ____curIndex_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager___LoadMapRoutine_d__76, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76, ___mapData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76, ___oldMapObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76, ____curIndex_5__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<MapTestRoutine>d__128
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapManager::<MapTestRoutine>d__128*
class CORDL_TYPE __MapManager___MapTestRoutine_d__128 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapManager> __4__this;

  /// @brief Field <>7__wrap3, offset 0x58, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap3,
                      put = __cordl_internal_set___7__wrap3))::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::MapObject>> __7__wrap3;

  /// @brief Field <createdMapObjects>5__3, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__createdMapObjects_5__3,
                      put = __cordl_internal_set__createdMapObjects_5__3))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* _createdMapObjects_5__3;

  /// @brief Field <i>5__2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Field count, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field dimensions, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_dimensions, put = __cordl_internal_set_dimensions))::UnityEngine::Vector3Int dimensions;

  /// @brief Field mapObjectKey, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectKey, put = __cordl_internal_set_mapObjectKey))::StringW mapObjectKey;

  /// @brief Field timeBetweenEvents, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_timeBetweenEvents, put = __cordl_internal_set_timeBetweenEvents)) float_t timeBetweenEvents;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2f79e60, size 0x61c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MapManager___MapTestRoutine_d__128* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2f7a4cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2f7a4d4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2f7a514, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2f79e44, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::MapObject>> const& __cordl_internal_get___7__wrap3() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::MapObject>>& __cordl_internal_get___7__wrap3();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get__createdMapObjects_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const& __cordl_internal_get__createdMapObjects_5__3() const;

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_dimensions() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_dimensions();

  constexpr ::StringW const& __cordl_internal_get_mapObjectKey() const;

  constexpr ::StringW& __cordl_internal_get_mapObjectKey();

  constexpr float_t const& __cordl_internal_get_timeBetweenEvents() const;

  constexpr float_t& __cordl_internal_get_timeBetweenEvents();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapManager> value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::MapObject>> value);

  constexpr void __cordl_internal_set__createdMapObjects_5__3(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_dimensions(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_mapObjectKey(::StringW value);

  constexpr void __cordl_internal_set_timeBetweenEvents(float_t value);

  /// @brief Method <>m__Finally1, addr 0x2f7a47c, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2f79018, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager___MapTestRoutine_d__128();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___MapTestRoutine_d__128", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapManager___MapTestRoutine_d__128(__MapManager___MapTestRoutine_d__128&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___MapTestRoutine_d__128", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapManager___MapTestRoutine_d__128(__MapManager___MapTestRoutine_d__128 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field dimensions, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___dimensions;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapManager> _____4__this;

  /// @brief Field mapObjectKey, offset: 0x38, size: 0x8, def value: None
  ::StringW ___mapObjectKey;

  /// @brief Field timeBetweenEvents, offset: 0x40, size: 0x4, def value: None
  float_t ___timeBetweenEvents;

  /// @brief Field count, offset: 0x44, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field <i>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t ____i_5__2;

  /// @brief Field <createdMapObjects>5__3, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* ____createdMapObjects_5__3;

  /// @brief Field <>7__wrap3, offset: 0x58, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::GlobalNamespace::MapObject>> _____7__wrap3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager___MapTestRoutine_d__128, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, ___dimensions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, ___mapObjectKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, ___timeBetweenEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, ___count) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, ____i_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, ____createdMapObjects_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___MapTestRoutine_d__128, _____7__wrap3) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CreateRandomMapObjectsRoutine>d__132
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapManager::<CreateRandomMapObjectsRoutine>d__132*
class CORDL_TYPE __MapManager___CreateRandomMapObjectsRoutine_d__132 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapManager> __4__this;

  /// @brief Field <attempts>5__3, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__attempts_5__3, put = __cordl_internal_set__attempts_5__3)) int32_t _attempts_5__3;

  /// @brief Field <createdStuffingCount>5__2, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__createdStuffingCount_5__2, put = __cordl_internal_set__createdStuffingCount_5__2)) int32_t _createdStuffingCount_5__2;

  /// @brief Field dimensions, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_dimensions, put = __cordl_internal_set_dimensions))::UnityEngine::Vector3Int dimensions;

  /// @brief Field maxStuffingCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_maxStuffingCount, put = __cordl_internal_set_maxStuffingCount)) int32_t maxStuffingCount;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2f7a520, size 0x224, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2f7a744, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2f7a74c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2f7a78c, size 0x314b0, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2f7a51c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__attempts_5__3() const;

  constexpr int32_t& __cordl_internal_get__attempts_5__3();

  constexpr int32_t const& __cordl_internal_get__createdStuffingCount_5__2() const;

  constexpr int32_t& __cordl_internal_get__createdStuffingCount_5__2();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_dimensions() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_dimensions();

  constexpr int32_t const& __cordl_internal_get_maxStuffingCount() const;

  constexpr int32_t& __cordl_internal_get_maxStuffingCount();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapManager> value);

  constexpr void __cordl_internal_set__attempts_5__3(int32_t value);

  constexpr void __cordl_internal_set__createdStuffingCount_5__2(int32_t value);

  constexpr void __cordl_internal_set_dimensions(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_maxStuffingCount(int32_t value);

  /// @brief Method .ctor, addr 0x2f79148, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager___CreateRandomMapObjectsRoutine_d__132();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___CreateRandomMapObjectsRoutine_d__132", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapManager___CreateRandomMapObjectsRoutine_d__132(__MapManager___CreateRandomMapObjectsRoutine_d__132&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___CreateRandomMapObjectsRoutine_d__132", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapManager___CreateRandomMapObjectsRoutine_d__132(__MapManager___CreateRandomMapObjectsRoutine_d__132 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field dimensions, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___dimensions;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapManager> _____4__this;

  /// @brief Field maxStuffingCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___maxStuffingCount;

  /// @brief Field <createdStuffingCount>5__2, offset: 0x3c, size: 0x4, def value: None
  int32_t ____createdStuffingCount_5__2;

  /// @brief Field <attempts>5__3, offset: 0x40, size: 0x4, def value: None
  int32_t ____attempts_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132, ___dimensions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132, ___maxStuffingCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132, ____createdStuffingCount_5__2) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132, ____attempts_5__3) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DestroyRandomMapObjectsRoutine>d__134
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapManager::<DestroyRandomMapObjectsRoutine>d__134*
class CORDL_TYPE __MapManager___DestroyRandomMapObjectsRoutine_d__134 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapManager> __4__this;

  /// @brief Field <attempts>5__3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__attempts_5__3, put = __cordl_internal_set__attempts_5__3)) int32_t _attempts_5__3;

  /// @brief Field <destroyedStuffingCount>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__destroyedStuffingCount_5__2, put = __cordl_internal_set__destroyedStuffingCount_5__2)) int32_t _destroyedStuffingCount_5__2;

  /// @brief Field maxStuffingCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_maxStuffingCount, put = __cordl_internal_set_maxStuffingCount)) int32_t maxStuffingCount;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3072e48, size 0x19c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3072fe4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3072fec, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x307302c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3072e44, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapManager>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__attempts_5__3() const;

  constexpr int32_t& __cordl_internal_get__attempts_5__3();

  constexpr int32_t const& __cordl_internal_get__destroyedStuffingCount_5__2() const;

  constexpr int32_t& __cordl_internal_get__destroyedStuffingCount_5__2();

  constexpr int32_t const& __cordl_internal_get_maxStuffingCount() const;

  constexpr int32_t& __cordl_internal_get_maxStuffingCount();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapManager> value);

  constexpr void __cordl_internal_set__attempts_5__3(int32_t value);

  constexpr void __cordl_internal_set__destroyedStuffingCount_5__2(int32_t value);

  constexpr void __cordl_internal_set_maxStuffingCount(int32_t value);

  /// @brief Method .ctor, addr 0x3072e1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapManager___DestroyRandomMapObjectsRoutine_d__134();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___DestroyRandomMapObjectsRoutine_d__134", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapManager___DestroyRandomMapObjectsRoutine_d__134(__MapManager___DestroyRandomMapObjectsRoutine_d__134&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapManager___DestroyRandomMapObjectsRoutine_d__134", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapManager___DestroyRandomMapObjectsRoutine_d__134(__MapManager___DestroyRandomMapObjectsRoutine_d__134 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapManager> _____4__this;

  /// @brief Field maxStuffingCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___maxStuffingCount;

  /// @brief Field <destroyedStuffingCount>5__2, offset: 0x2c, size: 0x4, def value: None
  int32_t ____destroyedStuffingCount_5__2;

  /// @brief Field <attempts>5__3, offset: 0x30, size: 0x4, def value: None
  int32_t ____attempts_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134, ___maxStuffingCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134, ____destroyedStuffingCount_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134, ____attempts_5__3) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapManager
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapManager*
class CORDL_TYPE MapManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::MapManager>> {
public:
  // Declarations
  using MapObjectData = ::GlobalNamespace::__MapManager__MapObjectData;

  using MapObjectDataSet = ::GlobalNamespace::__MapManager__MapObjectDataSet;

  using MapObjectMaterialCache = ::GlobalNamespace::__MapManager__MapObjectMaterialCache;

  using OnSetHasLoadedMapMapData = ::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData;

  using _CreateRandomMapObjectsRoutine_d__132 = ::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132;

  using _DestroyRandomMapObjectsRoutine_d__134 = ::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134;

  using _LoadMapRoutine_d__76 = ::GlobalNamespace::__MapManager___LoadMapRoutine_d__76;

  using _MapTestRoutine_d__128 = ::GlobalNamespace::__MapManager___MapTestRoutine_d__128;

  using _QueueSendMapSyncRoutine_d__68 = ::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68;

  /// @brief Field <hasLoadedMapData>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLoadedMapData_k__BackingField, put = __cordl_internal_set__hasLoadedMapData_k__BackingField)) bool _hasLoadedMapData_k__BackingField;

  /// @brief Field <isBuildBlocked>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isBuildBlocked_k__BackingField, put = setStaticF__isBuildBlocked_k__BackingField)) bool _isBuildBlocked_k__BackingField;

  /// @brief Field <isWaitingForMapData>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__isWaitingForMapData_k__BackingField, put = __cordl_internal_set__isWaitingForMapData_k__BackingField)) bool _isWaitingForMapData_k__BackingField;

  /// @brief Field <mapBuildLimitHeight>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__mapBuildLimitHeight_k__BackingField, put = setStaticF__mapBuildLimitHeight_k__BackingField)) float_t _mapBuildLimitHeight_k__BackingField;

  /// @brief Field activeGuides, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_activeGuides,
                      put = __cordl_internal_set_activeGuides))::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObjectGuide>>* activeGuides;

  /// @brief Field autoRunTest, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_autoRunTest, put = __cordl_internal_set_autoRunTest)) bool autoRunTest;

  /// @brief Field awaitingGuides, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_awaitingGuides,
                      put = __cordl_internal_set_awaitingGuides))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectGuide>>* awaitingGuides;

  /// @brief Field curLoadMapRoutine, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_curLoadMapRoutine, put = __cordl_internal_set_curLoadMapRoutine))::UnityEngine::Coroutine* curLoadMapRoutine;

  /// @brief Field curQueuedSendMapSyncRoutine, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_curQueuedSendMapSyncRoutine, put = __cordl_internal_set_curQueuedSendMapSyncRoutine))::UnityEngine::Coroutine* curQueuedSendMapSyncRoutine;

  /// @brief Field dephysicalizedMapObjectMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_dephysicalizedMapObjectMaterial,
                      put = __cordl_internal_set_dephysicalizedMapObjectMaterial))::UnityW<::UnityEngine::Material> dephysicalizedMapObjectMaterial;

  __declspec(property(get = get_hasLoadedMapData, put = set_hasLoadedMapData)) bool hasLoadedMapData;

  __declspec(property(get = get_hasPendingMapObjects)) bool hasPendingMapObjects;

  __declspec(property(get = get_hasReceivedMapSync)) bool hasReceivedMapSync;

  /// @brief Field hoveredMapObjectMaterial, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_hoveredMapObjectMaterial, put = __cordl_internal_set_hoveredMapObjectMaterial))::UnityW<::UnityEngine::Material> hoveredMapObjectMaterial;

  __declspec(property(get = get_isWaitingForMapData, put = set_isWaitingForMapData)) bool isWaitingForMapData;

  /// @brief Field mapLoadingPlayerBlocker, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_mapLoadingPlayerBlocker, put = __cordl_internal_set_mapLoadingPlayerBlocker))::UnityW<::UnityEngine::GameObject> mapLoadingPlayerBlocker;

  /// @brief Field mapObjectBounceCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectBounceCurve, put = __cordl_internal_set_mapObjectBounceCurve))::UnityEngine::AnimationCurve* mapObjectBounceCurve;

  /// @brief Field mapObjectDataDictionary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mapObjectDataDictionary,
                             put = setStaticF_mapObjectDataDictionary))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MapManager__MapObjectData>* mapObjectDataDictionary;

  /// @brief Field mapObjectDataSets, offset 0x88, size 0x8
  __declspec(
      property(get = __cordl_internal_get_mapObjectDataSets,
               put = __cordl_internal_set_mapObjectDataSets))::ArrayW<::GlobalNamespace::__MapManager__MapObjectDataSet, ::Array<::GlobalNamespace::__MapManager__MapObjectDataSet>*> mapObjectDataSets;

  /// @brief Field mapObjectDatas, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectDatas,
                      put = __cordl_internal_set_mapObjectDatas))::ArrayW<::GlobalNamespace::__MapManager__MapObjectData, ::Array<::GlobalNamespace::__MapManager__MapObjectData>*> mapObjectDatas;

  /// @brief Field mapObjectDestroyCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectDestroyCurve, put = __cordl_internal_set_mapObjectDestroyCurve))::UnityEngine::AnimationCurve* mapObjectDestroyCurve;

  /// @brief Field mapObjectPlacementCurve, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectPlacementCurve, put = __cordl_internal_set_mapObjectPlacementCurve))::UnityEngine::AnimationCurve* mapObjectPlacementCurve;

  /// @brief Field mapObjectResetCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectResetCurve, put = __cordl_internal_set_mapObjectResetCurve))::UnityEngine::AnimationCurve* mapObjectResetCurve;

  /// @brief Field mapObjectsThatFinishedPendingPlacement, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_mapObjectsThatFinishedPendingPlacement,
      put = __cordl_internal_set_mapObjectsThatFinishedPendingPlacement))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjectsThatFinishedPendingPlacement;

  /// @brief Field mapObjectsWhosePendingPlacementsWereInvalidated, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectsWhosePendingPlacementsWereInvalidated, put = __cordl_internal_set_mapObjectsWhosePendingPlacementsWereInvalidated))::System::Collections::
      Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjectsWhosePendingPlacementsWereInvalidated;

  /// @brief Field onSetHasLoadedMapDataCallbacks, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_onSetHasLoadedMapDataCallbacks,
                      put = __cordl_internal_set_onSetHasLoadedMapDataCallbacks))::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData* onSetHasLoadedMapDataCallbacks;

  /// @brief Field onSetHasLoadedMapDataPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onSetHasLoadedMapDataPersistantCallbacks,
                             put = setStaticF_onSetHasLoadedMapDataPersistantCallbacks))::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData* onSetHasLoadedMapDataPersistantCallbacks;

  /// @brief Field pendingMapObjects, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_pendingMapObjects,
                      put = __cordl_internal_set_pendingMapObjects))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* pendingMapObjects;

  /// @brief Field playspaceData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_playspaceData, put = __cordl_internal_set_playspaceData))::GlobalNamespace::PlayspaceData* playspaceData;

  /// @brief Field receivedMapSync, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_receivedMapSync, put = __cordl_internal_set_receivedMapSync))::GlobalNamespace::MapSyncData* receivedMapSync;

  /// @brief Field sendMapSyncOnMapDataLoaded, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_sendMapSyncOnMapDataLoaded, put = __cordl_internal_set_sendMapSyncOnMapDataLoaded)) bool sendMapSyncOnMapDataLoaded;

  /// @brief Field solidMapObjectMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_solidMapObjectMaterial, put = __cordl_internal_set_solidMapObjectMaterial))::UnityW<::UnityEngine::Material> solidMapObjectMaterial;

  /// @brief Field staticTerrainLayerMask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_staticTerrainLayerMask, put = __cordl_internal_set_staticTerrainLayerMask))::UnityEngine::LayerMask staticTerrainLayerMask;

  /// @brief Field zeroCellWorldPosition, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_zeroCellWorldPosition, put = __cordl_internal_set_zeroCellWorldPosition))::UnityEngine::Vector3 zeroCellWorldPosition;

  /// @brief Method BuildMapObjectDatasDictionary, addr 0x2f70e18, size 0x6f8, virtual false, abstract: false, final false
  static inline void BuildMapObjectDatasDictionary();

  /// @brief Method CalculateWorldStuffingCountOfAllMapObjects, addr 0x2f79040, size 0x2c, virtual false, abstract: false, final false
  inline int32_t CalculateWorldStuffingCountOfAllMapObjects();

  /// @brief Method CancelMapLoading, addr 0x2f73a14, size 0x30, virtual false, abstract: false, final false
  inline void CancelMapLoading();

  /// @brief Method CancelQueuedSendMapSync, addr 0x2f73f90, size 0x90, virtual false, abstract: false, final false
  inline void CancelQueuedSendMapSync();

  /// @brief Method CellToWorldPosition, addr 0x2f77628, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CellToWorldPosition(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method CellToWorldPositionCenter, addr 0x2f7852c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CellToWorldPositionCenter(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method CreateMapObjectFromSync, addr 0x2f744b0, size 0x290, virtual false, abstract: false, final false
  inline void CreateMapObjectFromSync(::GlobalNamespace::MapObjectSyncData mapObjectSyncData);

  /// @brief Method CreatePlayspaceData, addr 0x2f72aec, size 0x388, virtual false, abstract: false, final false
  inline void CreatePlayspaceData(::UnityEngine::Vector3Int dimensions);

  /// @brief Method CreateRandomMapObjects, addr 0x2f7906c, size 0x4c, virtual false, abstract: false, final false
  inline void CreateRandomMapObjects(int32_t maxStuffingCount);

  /// @brief Method CreateRandomMapObjectsRoutine, addr 0x2f790b8, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CreateRandomMapObjectsRoutine(::UnityEngine::Vector3Int dimensions, int32_t maxStuffingCount);

  /// @brief Method DeleteAllPendingPlacementsLocally, addr 0x2f73a44, size 0x1d0, virtual false, abstract: false, final false
  inline void DeleteAllPendingPlacementsLocally();

  /// @brief Method DeleteMap, addr 0x2f73948, size 0xbc, virtual false, abstract: false, final false
  inline void DeleteMap();

  /// @brief Method DeregisterGuide, addr 0x2f79568, size 0xe4, virtual false, abstract: false, final false
  inline void DeregisterGuide(::GlobalNamespace::MapObjectGuide* guide);

  /// @brief Method DestroyRandomMapObjects, addr 0x2f79170, size 0x30, virtual false, abstract: false, final false
  inline void DestroyRandomMapObjects(int32_t maxStuffingCount);

  /// @brief Method DestroyRandomMapObjectsRoutine, addr 0x2f791a0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DestroyRandomMapObjectsRoutine(int32_t maxStuffingCount);

  /// @brief Method DoGuidePlacementCheck, addr 0x2f771fc, size 0xd0, virtual false, abstract: false, final false
  inline void DoGuidePlacementCheck(::GlobalNamespace::MapObject* mapObject, bool added);

  /// @brief Method DoPlacementPendingUpdate, addr 0x2f727c0, size 0x32c, virtual false, abstract: false, final false
  inline void DoPlacementPendingUpdate();

  /// @brief Method DoesOverlapWithPendingPlacements, addr 0x2f763fc, size 0x1b4, virtual false, abstract: false, final false
  inline bool DoesOverlapWithPendingPlacements(::UnityEngine::Vector3Int placedPosition, ::UnityEngine::Vector3Int placedDimensions);

  /// @brief Method ExecuteRegisterGuide, addr 0x2f792dc, size 0x28c, virtual false, abstract: false, final false
  inline void ExecuteRegisterGuide(::GlobalNamespace::MapObjectGuide* guide);

  /// @brief Method ExpressStoredMapSync, addr 0x2f72f54, size 0x2e4, virtual false, abstract: false, final false
  inline void ExpressStoredMapSync(bool instant);

  /// @brief Method GetIntentionalPlaceDirectionShiftFilter, addr 0x2f75944, size 0x1a4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetIntentionalPlaceDirectionShiftFilter(::UnityEngine::Vector3 mapObjectItemPosition);

  /// @brief Method GetMapObjectMaterials, addr 0x2f70c08, size 0x80, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MapManager__MapObjectMaterialCache* GetMapObjectMaterials(::StringW mapObjectKey);

  /// @brief Method GetMapObjectWorldTransformation, addr 0x2f765b0, size 0x90, virtual false, abstract: false, final false
  inline void GetMapObjectWorldTransformation(::UnityEngine::Vector3Int placedPosition, ::UnityEngine::Vector3Int placedDimensions, ::GlobalNamespace::__MapObject__Facing forwardFacing,
                                              ::GlobalNamespace::__MapObject__Facing upFacing, ByRef<::UnityEngine::Vector3> worldPositionCenter,
                                              ByRef<::UnityEngine::Quaternion> mapObjectWorldRotation);

  /// @brief Method GetStaticTerrainData, addr 0x2f782d8, size 0x254, virtual false, abstract: false, final false
  inline Il2CppObject* GetStaticTerrainData(::UnityEngine::Vector3Int dimensions);

  /// @brief Method IsPlayerWithinPlayspace, addr 0x2f78c54, size 0x104, virtual false, abstract: false, final false
  inline bool IsPlayerWithinPlayspace();

  /// @brief Method LoadMapInstant, addr 0x2f74254, size 0x1b8, virtual false, abstract: false, final false
  inline void LoadMapInstant(::GlobalNamespace::MapSyncData* mapData);

  /// @brief Method LoadMapRoutine, addr 0x2f7440c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* LoadMapRoutine(::GlobalNamespace::MapSyncData* mapData, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* oldMapObjects);

  /// @brief Method MapTestRoutine, addr 0x2f78f74, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* MapTestRoutine(::UnityEngine::Vector3Int dimensions, int32_t count, ::StringW mapObjectKey, float_t timeBetweenEvents);

  /// @brief Method MarkAsPendingPlacement, addr 0x2f76640, size 0x120, virtual false, abstract: false, final false
  inline void MarkAsPendingPlacement(::GlobalNamespace::MapObject* mapObject);

  static inline ::GlobalNamespace::MapManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x2f72344, size 0x46c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnFailedToGetMapData, addr 0x2f73e20, size 0xa4, virtual false, abstract: false, final false
  inline void OnFailedToGetMapData(::StringW errType);

  /// @brief Method OnJoinedPhotonRoom, addr 0x2f73c14, size 0x20c, virtual false, abstract: false, final false
  inline void OnJoinedPhotonRoom(::StringW roomName);

  /// @brief Method OnLeftPhotonRoom, addr 0x2f73f84, size 0xc, virtual false, abstract: false, final false
  inline void OnLeftPhotonRoom();

  /// @brief Method OnMapSyncSentOverNetworkByAnotherPlayer, addr 0x2f74250, size 0x4, virtual false, abstract: false, final false
  inline void OnMapSyncSentOverNetworkByAnotherPlayer();

  /// @brief Method OnMasterPlayerPlacedMapObject, addr 0x2f76760, size 0x124, virtual false, abstract: false, final false
  inline void OnMasterPlayerPlacedMapObject(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method OnPhotonPlayerJoinedRoom, addr 0x2f74020, size 0x9c, virtual false, abstract: false, final false
  inline void OnPhotonPlayerJoinedRoom(::Photon::Realtime::Player* photonPlayer);

  /// @brief Method OnPhotonPlayerLeftRoom, addr 0x2f741ac, size 0x4, virtual false, abstract: false, final false
  inline void OnPhotonPlayerLeftRoom(::Photon::Realtime::Player* photonPlayer);

  /// @brief Method OnReceiveChangeMapObjectColor, addr 0x2f78060, size 0x138, virtual false, abstract: false, final false
  inline void OnReceiveChangeMapObjectColor(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW newColorKey);

  /// @brief Method OnReceiveDestroyMapObject, addr 0x2f77a30, size 0x394, virtual false, abstract: false, final false
  inline bool OnReceiveDestroyMapObject(::StringW mapObjectKey, ::UnityEngine::Vector3Int placedPosition, ::StringW accountID, ::GlobalNamespace::__MapObject__DropType dropType,
                                        ::UnityEngine::Vector3 dropVelocity, bool isPickup, bool localCall);

  /// @brief Method OnReceiveMapData, addr 0x2f73ec4, size 0xc0, virtual false, abstract: false, final false
  inline void OnReceiveMapData(::GlobalNamespace::MapData mapData, bool forceExpress);

  /// @brief Method OnReceiveMapObjectCreated, addr 0x2f76ed4, size 0x328, virtual false, abstract: false, final false
  inline void OnReceiveMapObjectCreated(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing forwardFacing, ::GlobalNamespace::__MapObject__Facing upFacing,
                                        ::StringW colorKey, ::StringW accountID);

  /// @brief Method OnReceivePlayerCollidedWithMapObject, addr 0x2f77dc4, size 0x29c, virtual false, abstract: false, final false
  inline void OnReceivePlayerCollidedWithMapObject(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW userID, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method OnReceiveSimplCustomMapObjectMessage, addr 0x2f78198, size 0x140, virtual false, abstract: false, final false
  inline void OnReceiveSimplCustomMapObjectMessage(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW payload);

  /// @brief Method OnRoomLoaded, addr 0x2f722ac, size 0x98, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomUnloaded, addr 0x2f73a04, size 0x10, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method QueueSendMapSync, addr 0x2f740bc, size 0xf0, virtual false, abstract: false, final false
  inline void QueueSendMapSync(float_t delay);

  /// @brief Method QueueSendMapSyncRoutine, addr 0x2f741b0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* QueueSendMapSyncRoutine(float_t delay);

  /// @brief Method RegisterAwaitingGuides, addr 0x2f734bc, size 0x178, virtual false, abstract: false, final false
  inline void RegisterAwaitingGuides();

  /// @brief Method RegisterGuide, addr 0x2f79218, size 0xc4, virtual false, abstract: false, final false
  inline void RegisterGuide(::GlobalNamespace::MapObjectGuide* guide);

  /// @brief Method RunMapTest, addr 0x2f738b8, size 0x7c, virtual false, abstract: false, final false
  inline void RunMapTest(::UnityEngine::Vector3Int dimensions);

  /// @brief Method SendDestroyMapObject, addr 0x2f77814, size 0x21c, virtual false, abstract: false, final false
  inline bool SendDestroyMapObject(::GlobalNamespace::MapObject* mapObject, ::GlobalNamespace::__MapObject__DropType dropType, ::UnityEngine::Vector3 dropVelocity, bool isPickup);

  /// @brief Method SendForceExpressMapData, addr 0x2f74820, size 0x100, virtual false, abstract: false, final false
  inline void SendForceExpressMapData(::GlobalNamespace::MapData mapData);

  /// @brief Method SendMapSync, addr 0x2f73634, size 0x284, virtual false, abstract: false, final false
  inline void SendMapSync();

  /// @brief Method SetBuildBlocked, addr 0x2f78e0c, size 0x168, virtual false, abstract: false, final false
  static inline bool SetBuildBlocked(bool isBuildBlocked);

  /// @brief Method SetHasLoadedMapData, addr 0x2f73238, size 0x284, virtual false, abstract: false, final false
  inline void SetHasLoadedMapData(bool newHasLoadedMapData);

  /// @brief Method Start, addr 0x2f71e54, size 0x458, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryApplyRotationToMapObjects, addr 0x2f7533c, size 0x1e0, virtual false, abstract: false, final false
  inline bool TryApplyRotationToMapObjects(::GlobalNamespace::MapSyncData* sync, ::StringW mapObjectKey, ::UnityEngine::Quaternion rotation);

  /// @brief Method TryCheckMapObjectPlacement, addr 0x2f7551c, size 0x428, virtual false, abstract: false, final false
  inline bool TryCheckMapObjectPlacement(::UnityEngine::Vector3Int size, bool maintainUp, ::UnityEngine::Vector3 worldPosition, ::UnityEngine::Quaternion worldRotation,
                                         ::UnityEngine::Vector3 placementCollisionDirection, ::GlobalNamespace::MapObjectPickupData* pickupData, ByRef<::UnityEngine::Vector3Int> validPlacePosition,
                                         ByRef<::UnityEngine::Vector3Int> validPlaceDimensions, ByRef<::GlobalNamespace::__MapObject__Facing> forwardFacing,
                                         ByRef<::GlobalNamespace::__MapObject__Facing> upFacing);

  /// @brief Method TryCreateMapObject, addr 0x2f76884, size 0x650, virtual false, abstract: false, final false
  inline bool TryCreateMapObject(::StringW key, ::StringW colorKey, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing forwardFacing,
                                 ::GlobalNamespace::__MapObject__Facing upFacing, ByRef<::GlobalNamespace::MapObject*> mapObject);

  /// @brief Method TryCreateMapObject, addr 0x2f75c04, size 0x7f8, virtual false, abstract: false, final false
  inline bool TryCreateMapObject(::StringW key, bool maintainUp, ::StringW colorKey, ::UnityEngine::Vector3 worldPosition, ::UnityEngine::Quaternion worldRotation,
                                 ::UnityEngine::Vector3 placementCollisionDirection, ::GlobalNamespace::MapObjectPickupData* pickupData, ByRef<::GlobalNamespace::MapObject*> mapObject);

  /// @brief Method TryCreateMapObjectVisualCopy, addr 0x2f7867c, size 0x20c, virtual false, abstract: false, final false
  inline bool TryCreateMapObjectVisualCopy(::StringW key, ::StringW colorKey, ::UnityEngine::Transform* container, float_t minWorldRadius, float_t maxWorldRadius,
                                           ByRef<::UnityEngine::GameObject*> mapObjectPreview);

  /// @brief Method TryDestroyMapLoadingPlayerBlocker, addr 0x2f72e74, size 0xd0, virtual false, abstract: false, final false
  inline void TryDestroyMapLoadingPlayerBlocker();

  /// @brief Method TryExtractMapData, addr 0x2f74740, size 0xe0, virtual false, abstract: false, final false
  inline bool TryExtractMapData(ByRef<::GlobalNamespace::MapData> extractedMapData);

  /// @brief Method TryFlipMap, addr 0x2f74d18, size 0x27c, virtual false, abstract: false, final false
  inline bool TryFlipMap(int32_t flipIndex);

  /// @brief Method TryGetMapObjectData, addr 0x2f70c88, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryGetMapObjectData(::StringW mapObjectKey, ByRef<::GlobalNamespace::__MapManager__MapObjectData> mapObjectData);

  /// @brief Method TryGetPendingMapObject, addr 0x2f77660, size 0x1b4, virtual false, abstract: false, final false
  inline bool TryGetPendingMapObject(::StringW key, ::UnityEngine::Vector3Int placedPosition, ByRef<::GlobalNamespace::MapObject*> mapObject);

  /// @brief Method TryGetPlayspaceData, addr 0x2f6a3b0, size 0x24, virtual false, abstract: false, final false
  inline bool TryGetPlayspaceData(ByRef<::GlobalNamespace::PlayspaceData*> placespaceData);

  /// @brief Method TryGetRandomMapObjectData, addr 0x2f71bf8, size 0x25c, virtual false, abstract: false, final false
  static inline bool TryGetRandomMapObjectData(ByRef<::GlobalNamespace::__MapManager__MapObjectData> mapObjectData);

  /// @brief Method TryGetValidTeleportPosition, addr 0x2f677ac, size 0x9c4, virtual false, abstract: false, final false
  inline bool TryGetValidTeleportPosition(::UnityEngine::Vector3 worldPosition, ByRef<::UnityEngine::Vector3> validTeleportPosition);

  /// @brief Method TryRotateMap, addr 0x2f74f94, size 0x3a8, virtual false, abstract: false, final false
  inline bool TryRotateMap(bool clockwise);

  /// @brief Method TryShiftMap, addr 0x2f74920, size 0x3f8, virtual false, abstract: false, final false
  inline bool TryShiftMap(::UnityEngine::Vector3Int shift, bool isDestructive, ByRef<::StringW> errType);

  /// @brief Method Update, addr 0x2f727b0, size 0x10, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method ValidatePendingPlacements, addr 0x2f7731c, size 0x30c, virtual false, abstract: false, final false
  inline void ValidatePendingPlacements();

  /// @brief Method WorldToCellPosition, addr 0x2f78578, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int WorldToCellPosition(::UnityEngine::Vector3 worldPosition);

  /// @brief Method WorldToCellPosition, addr 0x2f785d8, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int WorldToCellPosition(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3Int dimensions);

  /// @brief Method WorldToCellPosition, addr 0x2f75ae8, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int WorldToCellPosition(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3Int dimensions, ::UnityEngine::Quaternion rotation,
                                                       ::UnityEngine::Vector3 localAnchorPosition);

  /// @brief Method <OnJoinedPhotonRoom>b__58_0, addr 0x2f797b4, size 0xf8, virtual false, abstract: false, final false
  inline void _OnJoinedPhotonRoom_b__58_0(::GlobalNamespace::MapData mapData);

  constexpr bool const& __cordl_internal_get__hasLoadedMapData_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasLoadedMapData_k__BackingField();

  constexpr bool const& __cordl_internal_get__isWaitingForMapData_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isWaitingForMapData_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObjectGuide>>*& __cordl_internal_get_activeGuides();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObjectGuide>>*> const&
  __cordl_internal_get_activeGuides() const;

  constexpr bool const& __cordl_internal_get_autoRunTest() const;

  constexpr bool& __cordl_internal_get_autoRunTest();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectGuide>>*& __cordl_internal_get_awaitingGuides();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectGuide>>*> const& __cordl_internal_get_awaitingGuides() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curLoadMapRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curLoadMapRoutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curQueuedSendMapSyncRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curQueuedSendMapSyncRoutine() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_dephysicalizedMapObjectMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_dephysicalizedMapObjectMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_hoveredMapObjectMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_hoveredMapObjectMaterial();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mapLoadingPlayerBlocker() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mapLoadingPlayerBlocker();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_mapObjectBounceCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_mapObjectBounceCurve() const;

  constexpr ::ArrayW<::GlobalNamespace::__MapManager__MapObjectDataSet, ::Array<::GlobalNamespace::__MapManager__MapObjectDataSet>*> const& __cordl_internal_get_mapObjectDataSets() const;

  constexpr ::ArrayW<::GlobalNamespace::__MapManager__MapObjectDataSet, ::Array<::GlobalNamespace::__MapManager__MapObjectDataSet>*>& __cordl_internal_get_mapObjectDataSets();

  constexpr ::ArrayW<::GlobalNamespace::__MapManager__MapObjectData, ::Array<::GlobalNamespace::__MapManager__MapObjectData>*> const& __cordl_internal_get_mapObjectDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__MapManager__MapObjectData, ::Array<::GlobalNamespace::__MapManager__MapObjectData>*>& __cordl_internal_get_mapObjectDatas();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_mapObjectDestroyCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_mapObjectDestroyCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_mapObjectPlacementCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_mapObjectPlacementCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_mapObjectResetCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_mapObjectResetCurve() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get_mapObjectsThatFinishedPendingPlacement();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const&
  __cordl_internal_get_mapObjectsThatFinishedPendingPlacement() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get_mapObjectsWhosePendingPlacementsWereInvalidated();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const&
  __cordl_internal_get_mapObjectsWhosePendingPlacementsWereInvalidated() const;

  constexpr ::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData*& __cordl_internal_get_onSetHasLoadedMapDataCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData*> const& __cordl_internal_get_onSetHasLoadedMapDataCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get_pendingMapObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const& __cordl_internal_get_pendingMapObjects() const;

  constexpr ::GlobalNamespace::PlayspaceData*& __cordl_internal_get_playspaceData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayspaceData*> const& __cordl_internal_get_playspaceData() const;

  constexpr ::GlobalNamespace::MapSyncData*& __cordl_internal_get_receivedMapSync();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapSyncData*> const& __cordl_internal_get_receivedMapSync() const;

  constexpr bool const& __cordl_internal_get_sendMapSyncOnMapDataLoaded() const;

  constexpr bool& __cordl_internal_get_sendMapSyncOnMapDataLoaded();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_solidMapObjectMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_solidMapObjectMaterial();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_staticTerrainLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_staticTerrainLayerMask();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_zeroCellWorldPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_zeroCellWorldPosition();

  constexpr void __cordl_internal_set__hasLoadedMapData_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isWaitingForMapData_k__BackingField(bool value);

  constexpr void __cordl_internal_set_activeGuides(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObjectGuide>>* value);

  constexpr void __cordl_internal_set_autoRunTest(bool value);

  constexpr void __cordl_internal_set_awaitingGuides(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectGuide>>* value);

  constexpr void __cordl_internal_set_curLoadMapRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curQueuedSendMapSyncRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_dephysicalizedMapObjectMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_hoveredMapObjectMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_mapLoadingPlayerBlocker(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_mapObjectBounceCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_mapObjectDataSets(::ArrayW<::GlobalNamespace::__MapManager__MapObjectDataSet, ::Array<::GlobalNamespace::__MapManager__MapObjectDataSet>*> value);

  constexpr void __cordl_internal_set_mapObjectDatas(::ArrayW<::GlobalNamespace::__MapManager__MapObjectData, ::Array<::GlobalNamespace::__MapManager__MapObjectData>*> value);

  constexpr void __cordl_internal_set_mapObjectDestroyCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_mapObjectPlacementCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_mapObjectResetCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_mapObjectsThatFinishedPendingPlacement(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value);

  constexpr void __cordl_internal_set_mapObjectsWhosePendingPlacementsWereInvalidated(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value);

  constexpr void __cordl_internal_set_onSetHasLoadedMapDataCallbacks(::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData* value);

  constexpr void __cordl_internal_set_pendingMapObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value);

  constexpr void __cordl_internal_set_playspaceData(::GlobalNamespace::PlayspaceData* value);

  constexpr void __cordl_internal_set_receivedMapSync(::GlobalNamespace::MapSyncData* value);

  constexpr void __cordl_internal_set_sendMapSyncOnMapDataLoaded(bool value);

  constexpr void __cordl_internal_set_solidMapObjectMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_staticTerrainLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_zeroCellWorldPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2f7964c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__isBuildBlocked_k__BackingField();

  static inline float_t getStaticF__mapBuildLimitHeight_k__BackingField();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MapManager__MapObjectData>* getStaticF_mapObjectDataDictionary();

  static inline ::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData* getStaticF_onSetHasLoadedMapDataPersistantCallbacks();

  /// @brief Method get_hasLoadedMapData, addr 0x2f70d48, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasLoadedMapData();

  /// @brief Method get_hasPendingMapObjects, addr 0x2f772cc, size 0x50, virtual false, abstract: false, final false
  inline bool get_hasPendingMapObjects();

  /// @brief Method get_hasReceivedMapSync, addr 0x2f72f44, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasReceivedMapSync();

  /// @brief Method get_isBuildBlocked, addr 0x2f78d58, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isBuildBlocked();

  /// @brief Method get_isWaitingForMapData, addr 0x2f73934, size 0x8, virtual false, abstract: false, final false
  inline bool get_isWaitingForMapData();

  /// @brief Method get_mapBuildLimitHeight, addr 0x2f70d5c, size 0x58, virtual false, abstract: false, final false
  static inline float_t get_mapBuildLimitHeight();

  static inline void setStaticF__isBuildBlocked_k__BackingField(bool value);

  static inline void setStaticF__mapBuildLimitHeight_k__BackingField(float_t value);

  static inline void setStaticF_mapObjectDataDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MapManager__MapObjectData>* value);

  static inline void setStaticF_onSetHasLoadedMapDataPersistantCallbacks(::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData* value);

  /// @brief Method set_hasLoadedMapData, addr 0x2f70d50, size 0xc, virtual false, abstract: false, final false
  inline void set_hasLoadedMapData(bool value);

  /// @brief Method set_isBuildBlocked, addr 0x2f78db0, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isBuildBlocked(bool value);

  /// @brief Method set_isWaitingForMapData, addr 0x2f7393c, size 0xc, virtual false, abstract: false, final false
  inline void set_isWaitingForMapData(bool value);

  /// @brief Method set_mapBuildLimitHeight, addr 0x2f70db4, size 0x64, virtual false, abstract: false, final false
  static inline void set_mapBuildLimitHeight(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapManager(MapManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapManager(MapManager const&) = delete;

  /// @brief Field staticTerrainLayerMask, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___staticTerrainLayerMask;

  /// @brief Field mapObjectPlacementCurve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___mapObjectPlacementCurve;

  /// @brief Field mapObjectDestroyCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___mapObjectDestroyCurve;

  /// @brief Field mapObjectResetCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___mapObjectResetCurve;

  /// @brief Field mapObjectBounceCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___mapObjectBounceCurve;

  /// @brief Field solidMapObjectMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___solidMapObjectMaterial;

  /// @brief Field dephysicalizedMapObjectMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___dephysicalizedMapObjectMaterial;

  /// @brief Field hoveredMapObjectMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___hoveredMapObjectMaterial;

  /// @brief Field zeroCellWorldPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___zeroCellWorldPosition;

  /// @brief Field playspaceData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PlayspaceData* ___playspaceData;

  /// @brief Field <hasLoadedMapData>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____hasLoadedMapData_k__BackingField;

  /// @brief Field onSetHasLoadedMapDataCallbacks, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData* ___onSetHasLoadedMapDataCallbacks;

  /// @brief Field mapObjectDatas, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MapManager__MapObjectData, ::Array<::GlobalNamespace::__MapManager__MapObjectData>*> ___mapObjectDatas;

  /// @brief Field mapObjectDataSets, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MapManager__MapObjectDataSet, ::Array<::GlobalNamespace::__MapManager__MapObjectDataSet>*> ___mapObjectDataSets;

  /// @brief Field <isWaitingForMapData>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____isWaitingForMapData_k__BackingField;

  /// @brief Field receivedMapSync, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MapSyncData* ___receivedMapSync;

  /// @brief Field sendMapSyncOnMapDataLoaded, offset: 0xa0, size: 0x1, def value: None
  bool ___sendMapSyncOnMapDataLoaded;

  /// @brief Field curQueuedSendMapSyncRoutine, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curQueuedSendMapSyncRoutine;

  /// @brief Field curLoadMapRoutine, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curLoadMapRoutine;

  /// @brief Field mapLoadingPlayerBlocker, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___mapLoadingPlayerBlocker;

  /// @brief Field pendingMapObjects, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* ___pendingMapObjects;

  /// @brief Field mapObjectsThatFinishedPendingPlacement, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* ___mapObjectsThatFinishedPendingPlacement;

  /// @brief Field mapObjectsWhosePendingPlacementsWereInvalidated, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* ___mapObjectsWhosePendingPlacementsWereInvalidated;

  /// @brief Field autoRunTest, offset: 0xd8, size: 0x1, def value: None
  bool ___autoRunTest;

  /// @brief Field activeGuides, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObjectGuide>>* ___activeGuides;

  /// @brief Field awaitingGuides, offset: 0xe8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectGuide>>* ___awaitingGuides;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Map: " };

  /// @brief Field gridSize offset 0xffffffff size 0x4
  static constexpr float_t gridSize{ 0.5 };

  /// @brief Field halfGridSize offset 0xffffffff size 0x4
  static constexpr float_t halfGridSize{ 0.25 };

  /// @brief Field logPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString logPreface{ u"Map" };

  /// @brief Field mapLoadingPlayerBlockerLayer offset 0xffffffff size 0x4
  static constexpr int32_t mapLoadingPlayerBlockerLayer{ static_cast<int32_t>(0x12) };

  /// @brief Field mapObjectBounceDuration offset 0xffffffff size 0x4
  static constexpr float_t mapObjectBounceDuration{ 0.5 };

  /// @brief Field mapObjectDestroyDuration offset 0xffffffff size 0x4
  static constexpr float_t mapObjectDestroyDuration{ 0.2 };

  /// @brief Field mapObjectPlacementDuration offset 0xffffffff size 0x4
  static constexpr float_t mapObjectPlacementDuration{ 0.3 };

  /// @brief Field mapObjectRadiusForMaxPreviewScale offset 0xffffffff size 0x4
  static constexpr float_t mapObjectRadiusForMaxPreviewScale{ 3.0 };

  /// @brief Field mapObjectRadiusForMinPreviewScale offset 0xffffffff size 0x4
  static constexpr float_t mapObjectRadiusForMinPreviewScale{ 0.5 };

  /// @brief Field mapObjectResetDuration offset 0xffffffff size 0x4
  static constexpr float_t mapObjectResetDuration{ 0.5 };

  /// @brief Field mapObjectResourcesPath offset 0xffffffff size 0x8
  static constexpr ::ConstString mapObjectResourcesPath{ u"MapObjects/" };

  /// @brief Field mapObjectsToLoadPerFrame offset 0xffffffff size 0x4
  static constexpr int32_t mapObjectsToLoadPerFrame{ static_cast<int32_t>(0x1e) };

  /// @brief Field nonHostMapSyncSendMaxWait offset 0xffffffff size 0x4
  static constexpr float_t nonHostMapSyncSendMaxWait{ 4.0 };

  /// @brief Field nonHostMapSyncSendMinWait offset 0xffffffff size 0x4
  static constexpr float_t nonHostMapSyncSendMinWait{ 1.5 };

  /// @brief Field randomMapObjectAttempts offset 0xffffffff size 0x4
  static constexpr int32_t randomMapObjectAttempts{ static_cast<int32_t>(0x1e) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapManager, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___staticTerrainLayerMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapObjectPlacementCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapObjectDestroyCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapObjectResetCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapObjectBounceCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___solidMapObjectMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___dephysicalizedMapObjectMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___hoveredMapObjectMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___zeroCellWorldPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___playspaceData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ____hasLoadedMapData_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___onSetHasLoadedMapDataCallbacks) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapObjectDatas) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapObjectDataSets) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ____isWaitingForMapData_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___receivedMapSync) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___sendMapSyncOnMapDataLoaded) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___curQueuedSendMapSyncRoutine) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___curLoadMapRoutine) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapLoadingPlayerBlocker) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___pendingMapObjects) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapObjectsThatFinishedPendingPlacement) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___mapObjectsWhosePendingPlacementsWereInvalidated) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___autoRunTest) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___activeGuides) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapManager, ___awaitingGuides) == 0xe8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapManager*, "", "MapManager");
NEED_NO_BOX(::GlobalNamespace::__MapManager__MapObjectMaterialCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager__MapObjectMaterialCache*, "", "MapManager/MapObjectMaterialCache");
NEED_NO_BOX(::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager__OnSetHasLoadedMapMapData*, "", "MapManager/OnSetHasLoadedMapMapData");
NEED_NO_BOX(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager___CreateRandomMapObjectsRoutine_d__132*, "", "MapManager/<CreateRandomMapObjectsRoutine>d__132");
NEED_NO_BOX(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager___DestroyRandomMapObjectsRoutine_d__134*, "", "MapManager/<DestroyRandomMapObjectsRoutine>d__134");
NEED_NO_BOX(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager___LoadMapRoutine_d__76*, "", "MapManager/<LoadMapRoutine>d__76");
NEED_NO_BOX(::GlobalNamespace::__MapManager___MapTestRoutine_d__128);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager___MapTestRoutine_d__128*, "", "MapManager/<MapTestRoutine>d__128");
NEED_NO_BOX(::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager___QueueSendMapSyncRoutine_d__68*, "", "MapManager/<QueueSendMapSyncRoutine>d__68");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager__MapObjectData, "", "MapManager/MapObjectData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapManager__MapObjectDataSet, "", "MapManager/MapObjectDataSet");
