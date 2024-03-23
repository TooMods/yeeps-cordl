#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColliderBatcher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderBatch)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class __ColliderBatch____c__DisplayClass29_0;
}
namespace GlobalNamespace {
struct __ColliderBatcher__ColliderBatchData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading {
class Thread;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class ColliderBatch;
}
namespace GlobalNamespace {
class __ColliderBatch____c__DisplayClass29_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColliderBatch);
MARK_REF_PTR_T(::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0);
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColliderBatch::<>c__DisplayClass29_0*
class CORDL_TYPE __ColliderBatch____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::ColliderBatch* __4__this;

  /// @brief Field dataCopy, offset 0x30, size 0x30
  __declspec(property(get = __cordl_internal_get_dataCopy, put = __cordl_internal_set_dataCopy))::GlobalNamespace::__ColliderBatcher__ColliderBatchData dataCopy;

  /// @brief Field occupiedCellCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_occupiedCellCount, put = __cordl_internal_set_occupiedCellCount)) int32_t occupiedCellCount;

  /// @brief Field occupiedCells, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_occupiedCells, put = __cordl_internal_set_occupiedCells)) Il2CppObject* occupiedCells;

  /// @brief Field yLayerHasOccupiedCells, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_yLayerHasOccupiedCells, put = __cordl_internal_set_yLayerHasOccupiedCells))::ArrayW<bool, ::Array<bool>*> yLayerHasOccupiedCells;

  static inline ::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0* New_ctor();

  /// @brief Method <Bake>b__0, addr 0x275e1b0, size 0x78, virtual false, abstract: false, final false
  inline void _Bake_b__0();

  constexpr ::GlobalNamespace::ColliderBatch*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColliderBatch*> const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData const& __cordl_internal_get_dataCopy() const;

  constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData& __cordl_internal_get_dataCopy();

  constexpr int32_t const& __cordl_internal_get_occupiedCellCount() const;

  constexpr int32_t& __cordl_internal_get_occupiedCellCount();

  constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> const& __cordl_internal_get_occupiedCells() const;

  constexpr Il2CppObject*& __cordl_internal_get_occupiedCells();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_yLayerHasOccupiedCells() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_yLayerHasOccupiedCells();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::ColliderBatch* value);

  constexpr void __cordl_internal_set_dataCopy(::GlobalNamespace::__ColliderBatcher__ColliderBatchData value);

  constexpr void __cordl_internal_set_occupiedCellCount(int32_t value);

  constexpr void __cordl_internal_set_occupiedCells(Il2CppObject* value);

  constexpr void __cordl_internal_set_yLayerHasOccupiedCells(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method .ctor, addr 0x275d834, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColliderBatch____c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColliderBatch____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColliderBatch____c__DisplayClass29_0(__ColliderBatch____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColliderBatch____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColliderBatch____c__DisplayClass29_0(__ColliderBatch____c__DisplayClass29_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColliderBatch* _____4__this;

  /// @brief Field occupiedCells, offset: 0x18, size: 0x8, def value: None
  Il2CppObject* ___occupiedCells;

  /// @brief Field yLayerHasOccupiedCells, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___yLayerHasOccupiedCells;

  /// @brief Field occupiedCellCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___occupiedCellCount;

  /// @brief Field dataCopy, offset: 0x30, size: 0x30, def value: None
  ::GlobalNamespace::__ColliderBatcher__ColliderBatchData ___dataCopy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0, ___occupiedCells) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0, ___yLayerHasOccupiedCells) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0, ___occupiedCellCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0, ___dataCopy) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColliderBatch
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColliderBatch*
class CORDL_TYPE ColliderBatch : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass29_0 = ::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0;

  /// @brief Field <data>k__BackingField, offset 0x10, size 0x30
  __declspec(property(get = __cordl_internal_get__data_k__BackingField, put = __cordl_internal_set__data_k__BackingField))::GlobalNamespace::__ColliderBatcher__ColliderBatchData _data_k__BackingField;

  /// @brief Field <isBakeQueued>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isBakeQueued_k__BackingField, put = __cordl_internal_set__isBakeQueued_k__BackingField)) bool _isBakeQueued_k__BackingField;

  /// @brief Field <isBaked>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isBaked_k__BackingField, put = __cordl_internal_set__isBaked_k__BackingField)) bool _isBaked_k__BackingField;

  /// @brief Field bakeDimensions, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_bakeDimensions, put = __cordl_internal_set_bakeDimensions))::UnityEngine::Vector3Int bakeDimensions;

  /// @brief Field bakeThread, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_bakeThread, put = __cordl_internal_set_bakeThread))::System::Threading::Thread* bakeThread;

  /// @brief Field bakeThreadOutput, offset 0x80, size 0x8
  __declspec(
      property(get = __cordl_internal_get_bakeThreadOutput,
               put = __cordl_internal_set_bakeThreadOutput))::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* bakeThreadOutput;

  /// @brief Field bakeTimer, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_bakeTimer, put = __cordl_internal_set_bakeTimer)) float_t bakeTimer;

  /// @brief Field bakedObject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_bakedObject, put = __cordl_internal_set_bakedObject))::UnityW<::UnityEngine::GameObject> bakedObject;

  __declspec(property(get = get_data, put = set_data))::GlobalNamespace::__ColliderBatcher__ColliderBatchData data;

  /// @brief Field desiresBakeOutput, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_desiresBakeOutput, put = __cordl_internal_set_desiresBakeOutput)) bool desiresBakeOutput;

  __declspec(property(get = get_isBakeQueued, put = set_isBakeQueued)) bool isBakeQueued;

  /// @brief Field isBakeThreadOutputReady, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_isBakeThreadOutputReady, put = __cordl_internal_set_isBakeThreadOutputReady)) bool isBakeThreadOutputReady;

  __declspec(property(get = get_isBaked, put = set_isBaked)) bool isBaked;

  /// @brief Field mapObjects, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjects, put = __cordl_internal_set_mapObjects))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* mapObjects;

  /// @brief Method Bake, addr 0x275cc14, size 0x244, virtual false, abstract: false, final false
  inline void Bake();

  /// @brief Method Deregister, addr 0x275c7a4, size 0x9c, virtual false, abstract: false, final false
  inline void Deregister(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method DestroySelf, addr 0x275deb4, size 0x154, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DestroySelfSilent, addr 0x275e008, size 0x1a8, virtual false, abstract: false, final false
  inline void DestroySelfSilent();

  static inline ::GlobalNamespace::ColliderBatch* New_ctor(::GlobalNamespace::__ColliderBatcher__ColliderBatchData data);

  /// @brief Method OnUpdate, addr 0x275ca68, size 0x1ac, virtual false, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method QueueBake, addr 0x275c8e0, size 0x14, virtual false, abstract: false, final false
  inline void QueueBake();

  /// @brief Method Register, addr 0x275c6ec, size 0xb8, virtual false, abstract: false, final false
  inline bool Register(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method SetIsBaked, addr 0x275c8f4, size 0x174, virtual false, abstract: false, final false
  inline void SetIsBaked(bool newIsBaked);

  /// @brief Method TryStopBakeThread, addr 0x275d710, size 0x124, virtual false, abstract: false, final false
  inline void TryStopBakeThread();

  /// @brief Method Unbake, addr 0x275c840, size 0xa0, virtual false, abstract: false, final false
  inline void Unbake();

  constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData const& __cordl_internal_get__data_k__BackingField() const;

  constexpr ::GlobalNamespace::__ColliderBatcher__ColliderBatchData& __cordl_internal_get__data_k__BackingField();

  constexpr bool const& __cordl_internal_get__isBakeQueued_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isBakeQueued_k__BackingField();

  constexpr bool const& __cordl_internal_get__isBaked_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isBaked_k__BackingField();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_bakeDimensions() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_bakeDimensions();

  constexpr ::System::Threading::Thread*& __cordl_internal_get_bakeThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __cordl_internal_get_bakeThread() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*& __cordl_internal_get_bakeThreadOutput();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>*> const&
  __cordl_internal_get_bakeThreadOutput() const;

  constexpr float_t const& __cordl_internal_get_bakeTimer() const;

  constexpr float_t& __cordl_internal_get_bakeTimer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bakedObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bakedObject();

  constexpr bool const& __cordl_internal_get_desiresBakeOutput() const;

  constexpr bool& __cordl_internal_get_desiresBakeOutput();

  constexpr bool const& __cordl_internal_get_isBakeThreadOutputReady() const;

  constexpr bool& __cordl_internal_get_isBakeThreadOutputReady();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*& __cordl_internal_get_mapObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> const& __cordl_internal_get_mapObjects() const;

  constexpr void __cordl_internal_set__data_k__BackingField(::GlobalNamespace::__ColliderBatcher__ColliderBatchData value);

  constexpr void __cordl_internal_set__isBakeQueued_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isBaked_k__BackingField(bool value);

  constexpr void __cordl_internal_set_bakeDimensions(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_bakeThread(::System::Threading::Thread* value);

  constexpr void __cordl_internal_set_bakeThreadOutput(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* value);

  constexpr void __cordl_internal_set_bakeTimer(float_t value);

  constexpr void __cordl_internal_set_bakedObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_desiresBakeOutput(bool value);

  constexpr void __cordl_internal_set_isBakeThreadOutputReady(bool value);

  constexpr void __cordl_internal_set_mapObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* value);

  /// @brief Method .ctor, addr 0x275c650, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__ColliderBatcher__ColliderBatchData data);

  /// @brief Method get_data, addr 0x275c600, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__ColliderBatcher__ColliderBatchData get_data();

  /// @brief Method get_isBakeQueued, addr 0x275c63c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBakeQueued();

  /// @brief Method get_isBaked, addr 0x275c628, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBaked();

  /// @brief Method set_data, addr 0x275c614, size 0x14, virtual false, abstract: false, final false
  inline void set_data(::GlobalNamespace::__ColliderBatcher__ColliderBatchData value);

  /// @brief Method set_isBakeQueued, addr 0x275c644, size 0xc, virtual false, abstract: false, final false
  inline void set_isBakeQueued(bool value);

  /// @brief Method set_isBaked, addr 0x275c630, size 0xc, virtual false, abstract: false, final false
  inline void set_isBaked(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColliderBatch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColliderBatch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColliderBatch(ColliderBatch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColliderBatch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColliderBatch(ColliderBatch const&) = delete;

  /// @brief Field <data>k__BackingField, offset: 0x10, size: 0x30, def value: None
  ::GlobalNamespace::__ColliderBatcher__ColliderBatchData ____data_k__BackingField;

  /// @brief Field <isBaked>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____isBaked_k__BackingField;

  /// @brief Field mapObjects, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>* ___mapObjects;

  /// @brief Field <isBakeQueued>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____isBakeQueued_k__BackingField;

  /// @brief Field bakeTimer, offset: 0x54, size: 0x4, def value: None
  float_t ___bakeTimer;

  /// @brief Field bakedObject, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___bakedObject;

  /// @brief Field bakeDimensions, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___bakeDimensions;

  /// @brief Field bakeThread, offset: 0x70, size: 0x8, def value: None
  ::System::Threading::Thread* ___bakeThread;

  /// @brief Field desiresBakeOutput, offset: 0x78, size: 0x1, def value: None
  bool ___desiresBakeOutput;

  /// @brief Field isBakeThreadOutputReady, offset: 0x79, size: 0x1, def value: None
  bool ___isBakeThreadOutputReady;

  /// @brief Field bakeThreadOutput, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>>* ___bakeThreadOutput;

  /// @brief Field bakeQueueDelay offset 0xffffffff size 0x4
  static constexpr float_t bakeQueueDelay{ 3.0 };

  /// @brief Field bakedObjectLayer offset 0xffffffff size 0x4
  static constexpr int32_t bakedObjectLayer{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColliderBatch, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ____data_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ____isBaked_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ___mapObjects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ____isBakeQueued_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ___bakeTimer) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ___bakedObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ___bakeDimensions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ___bakeThread) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ___desiresBakeOutput) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ___isBakeThreadOutputReady) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderBatch, ___bakeThreadOutput) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColliderBatch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColliderBatch*, "", "ColliderBatch");
NEED_NO_BOX(::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ColliderBatch____c__DisplayClass29_0*, "", "ColliderBatch/<>c__DisplayClass29_0");
