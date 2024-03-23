#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapObjectRestrictionData)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
struct __MapObjectRestrictions__MapObjectRestrictionDataRaw;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectRestrictionData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectRestrictionData);
// Type: ::MapObjectRestrictionData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectRestrictionData*
class CORDL_TYPE MapObjectRestrictionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <canRemoveLastInstance>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__canRemoveLastInstance_k__BackingField,
                      put = __cordl_internal_set__canRemoveLastInstance_k__BackingField)) bool _canRemoveLastInstance_k__BackingField;

  /// @brief Field <mapObjectKey>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mapObjectKey_k__BackingField, put = __cordl_internal_set__mapObjectKey_k__BackingField))::StringW _mapObjectKey_k__BackingField;

  /// @brief Field <maxCount>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxCount_k__BackingField, put = __cordl_internal_set__maxCount_k__BackingField)) int32_t _maxCount_k__BackingField;

  __declspec(property(get = get_canPickup)) bool canPickup;

  __declspec(property(get = get_canRemoveLastInstance, put = set_canRemoveLastInstance)) bool canRemoveLastInstance;

  __declspec(property(get = get_mapObjectKey, put = set_mapObjectKey))::StringW mapObjectKey;

  /// @brief Field mapObjects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjects, put = __cordl_internal_set_mapObjects))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects;

  __declspec(property(get = get_maxCount, put = set_maxCount)) int32_t maxCount;

  static inline ::GlobalNamespace::MapObjectRestrictionData* New_ctor(::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw rawData);

  /// @brief Method OnMapObjectCreated, addr 0x30757ec, size 0x1f0, virtual false, abstract: false, final false
  inline void OnMapObjectCreated(::GlobalNamespace::MapObject* mapObject, bool isCreatedByLocalPlayer);

  /// @brief Method OnMapObjectDestroyed, addr 0x3075a38, size 0x108, virtual false, abstract: false, final false
  inline void OnMapObjectDestroyed(::GlobalNamespace::MapObject* mapObject);

  constexpr bool const& __cordl_internal_get__canRemoveLastInstance_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canRemoveLastInstance_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__mapObjectKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__mapObjectKey_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxCount_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get_mapObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const& __cordl_internal_get_mapObjects() const;

  constexpr void __cordl_internal_set__canRemoveLastInstance_k__BackingField(bool value);

  constexpr void __cordl_internal_set__mapObjectKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__maxCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_mapObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value);

  /// @brief Method .ctor, addr 0x30756f4, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw rawData);

  /// @brief Method get_canPickup, addr 0x3075694, size 0x60, virtual false, abstract: false, final false
  inline bool get_canPickup();

  /// @brief Method get_canRemoveLastInstance, addr 0x3075670, size 0x8, virtual false, abstract: false, final false
  inline bool get_canRemoveLastInstance();

  /// @brief Method get_mapObjectKey, addr 0x3075660, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_mapObjectKey();

  /// @brief Method get_maxCount, addr 0x3075684, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxCount();

  /// @brief Method set_canRemoveLastInstance, addr 0x3075678, size 0xc, virtual false, abstract: false, final false
  inline void set_canRemoveLastInstance(bool value);

  /// @brief Method set_mapObjectKey, addr 0x3075668, size 0x8, virtual false, abstract: false, final false
  inline void set_mapObjectKey(::StringW value);

  /// @brief Method set_maxCount, addr 0x307568c, size 0x8, virtual false, abstract: false, final false
  inline void set_maxCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectRestrictionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectRestrictionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectRestrictionData(MapObjectRestrictionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectRestrictionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectRestrictionData(MapObjectRestrictionData const&) = delete;

  /// @brief Field <mapObjectKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____mapObjectKey_k__BackingField;

  /// @brief Field <canRemoveLastInstance>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____canRemoveLastInstance_k__BackingField;

  /// @brief Field <maxCount>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____maxCount_k__BackingField;

  /// @brief Field mapObjects, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* ___mapObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectRestrictionData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectRestrictionData, ____mapObjectKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectRestrictionData, ____canRemoveLastInstance_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectRestrictionData, ____maxCount_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectRestrictionData, ___mapObjects) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectRestrictionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectRestrictionData*, "", "MapObjectRestrictionData");
