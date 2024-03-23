#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MapObjectPreview)
namespace GlobalNamespace {
class MapObjectPickupData;
}
namespace GlobalNamespace {
struct __MapManager__MapObjectData;
}
namespace GlobalNamespace {
class __MapObjectPreview___DoPreviewRoutine_d__56;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
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
class Material;
}
namespace UnityEngine {
struct Quaternion;
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
class MapObjectPreview;
}
namespace GlobalNamespace {
class __MapObjectPreview___DoPreviewRoutine_d__56;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectPreview);
MARK_REF_PTR_T(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56);
// Type: ::<DoPreviewRoutine>d__56
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectPreview::<DoPreviewRoutine>d__56*
class CORDL_TYPE __MapObjectPreview___DoPreviewRoutine_d__56 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapObjectPreview> __4__this;

  /// @brief Field <duration>5__3, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__duration_5__3, put = __cordl_internal_set__duration_5__3)) float_t _duration_5__3;

  /// @brief Field <r>5__2, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__r_5__2, put = __cordl_internal_set__r_5__2)) float_t _r_5__2;

  /// @brief Field <startItemBaseWorldPosition>5__6, offset 0x8c, size 0xc
  __declspec(property(get = __cordl_internal_get__startItemBaseWorldPosition_5__6, put = __cordl_internal_set__startItemBaseWorldPosition_5__6))::UnityEngine::Vector3 _startItemBaseWorldPosition_5__6;

  /// @brief Field <startNegativeFilter>5__8, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get__startNegativeFilter_5__8, put = __cordl_internal_set__startNegativeFilter_5__8))::UnityEngine::Vector3 _startNegativeFilter_5__8;

  /// @brief Field <startPosition>5__4, offset 0x70, size 0xc
  __declspec(property(get = __cordl_internal_get__startPosition_5__4, put = __cordl_internal_set__startPosition_5__4))::UnityEngine::Vector3 _startPosition_5__4;

  /// @brief Field <startPositiveFilter>5__7, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get__startPositiveFilter_5__7, put = __cordl_internal_set__startPositiveFilter_5__7))::UnityEngine::Vector3 _startPositiveFilter_5__7;

  /// @brief Field <startRotation>5__5, offset 0x7c, size 0x10
  __declspec(property(get = __cordl_internal_get__startRotation_5__5, put = __cordl_internal_set__startRotation_5__5))::UnityEngine::Quaternion _startRotation_5__5;

  /// @brief Field newItemBaseWorldPosition, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_newItemBaseWorldPosition, put = __cordl_internal_set_newItemBaseWorldPosition))::UnityEngine::Vector3 newItemBaseWorldPosition;

  /// @brief Field newNegativeFilter, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get_newNegativeFilter, put = __cordl_internal_set_newNegativeFilter))::UnityEngine::Vector3 newNegativeFilter;

  /// @brief Field newPositiveFilter, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_newPositiveFilter, put = __cordl_internal_set_newPositiveFilter))::UnityEngine::Vector3 newPositiveFilter;

  /// @brief Field worldPosition, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_worldPosition, put = __cordl_internal_set_worldPosition))::UnityEngine::Vector3 worldPosition;

  /// @brief Field worldRotation, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_worldRotation, put = __cordl_internal_set_worldRotation))::UnityEngine::Quaternion worldRotation;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x307fb6c, size 0x2a0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x307fe0c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x307fe14, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x307fe54, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x307fb68, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MapObjectPreview> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapObjectPreview>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__duration_5__3() const;

  constexpr float_t& __cordl_internal_get__duration_5__3();

  constexpr float_t const& __cordl_internal_get__r_5__2() const;

  constexpr float_t& __cordl_internal_get__r_5__2();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startItemBaseWorldPosition_5__6() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startItemBaseWorldPosition_5__6();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startNegativeFilter_5__8() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startNegativeFilter_5__8();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition_5__4() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition_5__4();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPositiveFilter_5__7() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPositiveFilter_5__7();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation_5__5() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation_5__5();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_newItemBaseWorldPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_newItemBaseWorldPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_newNegativeFilter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_newNegativeFilter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_newPositiveFilter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_newPositiveFilter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_worldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_worldRotation();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapObjectPreview> value);

  constexpr void __cordl_internal_set__duration_5__3(float_t value);

  constexpr void __cordl_internal_set__r_5__2(float_t value);

  constexpr void __cordl_internal_set__startItemBaseWorldPosition_5__6(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startNegativeFilter_5__8(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startPosition_5__4(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startPositiveFilter_5__7(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startRotation_5__5(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_newItemBaseWorldPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_newNegativeFilter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_newPositiveFilter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_worldPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_worldRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x307fa4c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MapObjectPreview___DoPreviewRoutine_d__56();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapObjectPreview___DoPreviewRoutine_d__56", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapObjectPreview___DoPreviewRoutine_d__56(__MapObjectPreview___DoPreviewRoutine_d__56&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapObjectPreview___DoPreviewRoutine_d__56", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapObjectPreview___DoPreviewRoutine_d__56(__MapObjectPreview___DoPreviewRoutine_d__56 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapObjectPreview> _____4__this;

  /// @brief Field worldPosition, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___worldPosition;

  /// @brief Field worldRotation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___worldRotation;

  /// @brief Field newItemBaseWorldPosition, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___newItemBaseWorldPosition;

  /// @brief Field newPositiveFilter, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___newPositiveFilter;

  /// @brief Field newNegativeFilter, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___newNegativeFilter;

  /// @brief Field <r>5__2, offset: 0x68, size: 0x4, def value: None
  float_t ____r_5__2;

  /// @brief Field <duration>5__3, offset: 0x6c, size: 0x4, def value: None
  float_t ____duration_5__3;

  /// @brief Field <startPosition>5__4, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPosition_5__4;

  /// @brief Field <startRotation>5__5, offset: 0x7c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____startRotation_5__5;

  /// @brief Field <startItemBaseWorldPosition>5__6, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startItemBaseWorldPosition_5__6;

  /// @brief Field <startPositiveFilter>5__7, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPositiveFilter_5__7;

  /// @brief Field <startNegativeFilter>5__8, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startNegativeFilter_5__8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ___worldPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ___worldRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ___newItemBaseWorldPosition) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ___newPositiveFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ___newNegativeFilter) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ____r_5__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ____duration_5__3) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ____startPosition_5__4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ____startRotation_5__5) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ____startItemBaseWorldPosition_5__6) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ____startPositiveFilter_5__7) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56, ____startNegativeFilter_5__8) == 0xa4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapObjectPreview
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectPreview*
class CORDL_TYPE MapObjectPreview : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DoPreviewRoutine_d__56 = ::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56;

  /// @brief Field <isMaster>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isMaster_k__BackingField, put = __cordl_internal_set__isMaster_k__BackingField)) bool _isMaster_k__BackingField;

  /// @brief Field <isVisible>k__BackingField, offset 0x7d, size 0x1
  __declspec(property(get = __cordl_internal_get__isVisible_k__BackingField, put = __cordl_internal_set__isVisible_k__BackingField)) bool _isVisible_k__BackingField;

  /// @brief Field <previewID>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__previewID_k__BackingField, put = __cordl_internal_set__previewID_k__BackingField))::StringW _previewID_k__BackingField;

  /// @brief Field <previewedCollisionPlacementDirection>k__BackingField, offset 0x94, size 0xc
  __declspec(property(get = __cordl_internal_get__previewedCollisionPlacementDirection_k__BackingField,
                      put = __cordl_internal_set__previewedCollisionPlacementDirection_k__BackingField))::UnityEngine::Vector3 _previewedCollisionPlacementDirection_k__BackingField;

  /// @brief Field <previewedForwardFacing>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__previewedForwardFacing_k__BackingField,
                      put = __cordl_internal_set__previewedForwardFacing_k__BackingField))::GlobalNamespace::__MapObject__Facing _previewedForwardFacing_k__BackingField;

  /// @brief Field <previewedPosition>k__BackingField, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get__previewedPosition_k__BackingField,
                      put = __cordl_internal_set__previewedPosition_k__BackingField))::UnityEngine::Vector3Int _previewedPosition_k__BackingField;

  /// @brief Field <previewedUpFacing>k__BackingField, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__previewedUpFacing_k__BackingField,
                      put = __cordl_internal_set__previewedUpFacing_k__BackingField))::GlobalNamespace::__MapObject__Facing _previewedUpFacing_k__BackingField;

  /// @brief Field <userID>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__userID_k__BackingField, put = __cordl_internal_set__userID_k__BackingField))::StringW _userID_k__BackingField;

  /// @brief Field curPreviewRoutine, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_curPreviewRoutine, put = __cordl_internal_set_curPreviewRoutine))::UnityEngine::Coroutine* curPreviewRoutine;

  /// @brief Field currentCenter, offset 0xb8, size 0xc
  __declspec(property(get = __cordl_internal_get_currentCenter, put = __cordl_internal_set_currentCenter))::UnityEngine::Vector3 currentCenter;

  /// @brief Field invalidColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_invalidColor, put = __cordl_internal_set_invalidColor))::UnityEngine::Color invalidColor;

  __declspec(property(get = get_isMaster, put = set_isMaster)) bool isMaster;

  __declspec(property(get = get_isVisible, put = set_isVisible)) bool isVisible;

  /// @brief Field itemBaseWorldPosition, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get_itemBaseWorldPosition, put = __cordl_internal_set_itemBaseWorldPosition))::UnityEngine::Vector3 itemBaseWorldPosition;

  /// @brief Field itemWorldPosition, offset 0xac, size 0xc
  __declspec(property(get = __cordl_internal_get_itemWorldPosition, put = __cordl_internal_set_itemWorldPosition))::UnityEngine::Vector3 itemWorldPosition;

  /// @brief Field maintainUp, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_maintainUp, put = __cordl_internal_set_maintainUp)) bool maintainUp;

  /// @brief Field mapObjectSize, offset 0x70, size 0xc
  __declspec(property(get = __cordl_internal_get_mapObjectSize, put = __cordl_internal_set_mapObjectSize))::UnityEngine::Vector3Int mapObjectSize;

  /// @brief Field negativeFilter, offset 0xd0, size 0xc
  __declspec(property(get = __cordl_internal_get_negativeFilter, put = __cordl_internal_set_negativeFilter))::UnityEngine::Vector3 negativeFilter;

  /// @brief Field postiveFilter, offset 0xc4, size 0xc
  __declspec(property(get = __cordl_internal_get_postiveFilter, put = __cordl_internal_set_postiveFilter))::UnityEngine::Vector3 postiveFilter;

  __declspec(property(get = get_previewID, put = set_previewID))::StringW previewID;

  /// @brief Field previewLatticeMaterial, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_previewLatticeMaterial, put = __cordl_internal_set_previewLatticeMaterial))::UnityW<::UnityEngine::Material> previewLatticeMaterial;

  /// @brief Field previewLatticeTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_previewLatticeTransform, put = __cordl_internal_set_previewLatticeTransform))::UnityW<::UnityEngine::Transform> previewLatticeTransform;

  /// @brief Field previewSwitchCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_previewSwitchCurve, put = __cordl_internal_set_previewSwitchCurve))::UnityEngine::AnimationCurve* previewSwitchCurve;

  /// @brief Field previewSwitchDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_previewSwitchDuration, put = __cordl_internal_set_previewSwitchDuration)) float_t previewSwitchDuration;

  __declspec(property(get = get_previewedCollisionPlacementDirection, put = set_previewedCollisionPlacementDirection))::UnityEngine::Vector3 previewedCollisionPlacementDirection;

  __declspec(property(get = get_previewedForwardFacing, put = set_previewedForwardFacing))::GlobalNamespace::__MapObject__Facing previewedForwardFacing;

  __declspec(property(get = get_previewedPosition, put = set_previewedPosition))::UnityEngine::Vector3Int previewedPosition;

  __declspec(property(get = get_previewedUpFacing, put = set_previewedUpFacing))::GlobalNamespace::__MapObject__Facing previewedUpFacing;

  __declspec(property(get = get_userID, put = set_userID))::StringW userID;

  /// @brief Field validColor, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_validColor, put = __cordl_internal_set_validColor))::UnityEngine::Color validColor;

  /// @brief Method DestroySelf, addr 0x307eeb4, size 0x134, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Display, addr 0x307efe8, size 0x664, virtual false, abstract: false, final false
  inline void Display(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Vector3 placementCollisionDirection,
                      ::GlobalNamespace::MapObjectPickupData* pickupData, bool instant);

  /// @brief Method DoPreview, addr 0x307f6a8, size 0x15c, virtual false, abstract: false, final false
  inline void DoPreview(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Vector3 newItemBaseWorldPosition, ::UnityEngine::Vector3 newPositiveFilter,
                        ::UnityEngine::Vector3 newNegativeFilter, bool instant);

  /// @brief Method DoPreviewRoutine, addr 0x307f944, size 0x108, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoPreviewRoutine(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Vector3 newItemBaseWorldPosition,
                                                              ::UnityEngine::Vector3 newPositiveFilter, ::UnityEngine::Vector3 newNegativeFilter);

  /// @brief Method Hide, addr 0x307ed80, size 0x12c, virtual false, abstract: false, final false
  inline void Hide(bool instant);

  /// @brief Method Initialize, addr 0x307ea74, size 0x30c, virtual false, abstract: false, final false
  inline void Initialize(bool isMaster, ::StringW userID, ::StringW previewID, ::GlobalNamespace::__MapManager__MapObjectData mapObjectData, ::StringW colorKey);

  static inline ::GlobalNamespace::MapObjectPreview* New_ctor();

  /// @brief Method OnReceiveDoPreview, addr 0x307f804, size 0x140, virtual false, abstract: false, final false
  inline void OnReceiveDoPreview(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Quaternion worldRotation, bool isValid);

  /// @brief Method OnUserIDUpdated, addr 0x307eeac, size 0x8, virtual false, abstract: false, final false
  inline void OnUserIDUpdated(::StringW newUserID);

  /// @brief Method SetPlacementValid, addr 0x307f64c, size 0x5c, virtual false, abstract: false, final false
  inline void SetPlacementValid(bool isValid);

  /// @brief Method Update, addr 0x307fa74, size 0xd8, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__isMaster_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMaster_k__BackingField();

  constexpr bool const& __cordl_internal_get__isVisible_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isVisible_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__previewID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__previewID_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__previewedCollisionPlacementDirection_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__previewedCollisionPlacementDirection_k__BackingField();

  constexpr ::GlobalNamespace::__MapObject__Facing const& __cordl_internal_get__previewedForwardFacing_k__BackingField() const;

  constexpr ::GlobalNamespace::__MapObject__Facing& __cordl_internal_get__previewedForwardFacing_k__BackingField();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get__previewedPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get__previewedPosition_k__BackingField();

  constexpr ::GlobalNamespace::__MapObject__Facing const& __cordl_internal_get__previewedUpFacing_k__BackingField() const;

  constexpr ::GlobalNamespace::__MapObject__Facing& __cordl_internal_get__previewedUpFacing_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__userID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userID_k__BackingField();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curPreviewRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curPreviewRoutine() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentCenter();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_invalidColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_invalidColor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_itemBaseWorldPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_itemBaseWorldPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_itemWorldPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_itemWorldPosition();

  constexpr bool const& __cordl_internal_get_maintainUp() const;

  constexpr bool& __cordl_internal_get_maintainUp();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_mapObjectSize() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_mapObjectSize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_negativeFilter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_negativeFilter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_postiveFilter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_postiveFilter();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_previewLatticeMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_previewLatticeMaterial();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_previewLatticeTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_previewLatticeTransform();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_previewSwitchCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_previewSwitchCurve() const;

  constexpr float_t const& __cordl_internal_get_previewSwitchDuration() const;

  constexpr float_t& __cordl_internal_get_previewSwitchDuration();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_validColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_validColor();

  constexpr void __cordl_internal_set__isMaster_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isVisible_k__BackingField(bool value);

  constexpr void __cordl_internal_set__previewID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__previewedCollisionPlacementDirection_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__previewedForwardFacing_k__BackingField(::GlobalNamespace::__MapObject__Facing value);

  constexpr void __cordl_internal_set__previewedPosition_k__BackingField(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set__previewedUpFacing_k__BackingField(::GlobalNamespace::__MapObject__Facing value);

  constexpr void __cordl_internal_set__userID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_curPreviewRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_currentCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_invalidColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_itemBaseWorldPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_itemWorldPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_maintainUp(bool value);

  constexpr void __cordl_internal_set_mapObjectSize(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_negativeFilter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_postiveFilter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_previewLatticeMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_previewLatticeTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_previewSwitchCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_previewSwitchDuration(float_t value);

  constexpr void __cordl_internal_set_validColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x307fb4c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isMaster, addr 0x307e9d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMaster();

  /// @brief Method get_isVisible, addr 0x307ea0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isVisible();

  /// @brief Method get_previewID, addr 0x307e9fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_previewID();

  /// @brief Method get_previewedCollisionPlacementDirection, addr 0x307ea5c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_previewedCollisionPlacementDirection();

  /// @brief Method get_previewedForwardFacing, addr 0x307ea3c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MapObject__Facing get_previewedForwardFacing();

  /// @brief Method get_previewedPosition, addr 0x307ea20, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_previewedPosition();

  /// @brief Method get_previewedUpFacing, addr 0x307ea4c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MapObject__Facing get_previewedUpFacing();

  /// @brief Method get_userID, addr 0x307e9ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userID();

  /// @brief Method set_isMaster, addr 0x307e9e0, size 0xc, virtual false, abstract: false, final false
  inline void set_isMaster(bool value);

  /// @brief Method set_isVisible, addr 0x307ea14, size 0xc, virtual false, abstract: false, final false
  inline void set_isVisible(bool value);

  /// @brief Method set_previewID, addr 0x307ea04, size 0x8, virtual false, abstract: false, final false
  inline void set_previewID(::StringW value);

  /// @brief Method set_previewedCollisionPlacementDirection, addr 0x307ea68, size 0xc, virtual false, abstract: false, final false
  inline void set_previewedCollisionPlacementDirection(::UnityEngine::Vector3 value);

  /// @brief Method set_previewedForwardFacing, addr 0x307ea44, size 0x8, virtual false, abstract: false, final false
  inline void set_previewedForwardFacing(::GlobalNamespace::__MapObject__Facing value);

  /// @brief Method set_previewedPosition, addr 0x307ea30, size 0xc, virtual false, abstract: false, final false
  inline void set_previewedPosition(::UnityEngine::Vector3Int value);

  /// @brief Method set_previewedUpFacing, addr 0x307ea54, size 0x8, virtual false, abstract: false, final false
  inline void set_previewedUpFacing(::GlobalNamespace::__MapObject__Facing value);

  /// @brief Method set_userID, addr 0x307e9f4, size 0x8, virtual false, abstract: false, final false
  inline void set_userID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectPreview();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectPreview", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectPreview(MapObjectPreview&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectPreview", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectPreview(MapObjectPreview const&) = delete;

  /// @brief Field validColor, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ___validColor;

  /// @brief Field invalidColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___invalidColor;

  /// @brief Field previewSwitchCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___previewSwitchCurve;

  /// @brief Field previewSwitchDuration, offset: 0x40, size: 0x4, def value: None
  float_t ___previewSwitchDuration;

  /// @brief Field previewLatticeTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___previewLatticeTransform;

  /// @brief Field previewLatticeMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___previewLatticeMaterial;

  /// @brief Field <isMaster>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____isMaster_k__BackingField;

  /// @brief Field <userID>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____userID_k__BackingField;

  /// @brief Field <previewID>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::StringW ____previewID_k__BackingField;

  /// @brief Field mapObjectSize, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___mapObjectSize;

  /// @brief Field maintainUp, offset: 0x7c, size: 0x1, def value: None
  bool ___maintainUp;

  /// @brief Field <isVisible>k__BackingField, offset: 0x7d, size: 0x1, def value: None
  bool ____isVisible_k__BackingField;

  /// @brief Field <previewedPosition>k__BackingField, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ____previewedPosition_k__BackingField;

  /// @brief Field <previewedForwardFacing>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::__MapObject__Facing ____previewedForwardFacing_k__BackingField;

  /// @brief Field <previewedUpFacing>k__BackingField, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::__MapObject__Facing ____previewedUpFacing_k__BackingField;

  /// @brief Field <previewedCollisionPlacementDirection>k__BackingField, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____previewedCollisionPlacementDirection_k__BackingField;

  /// @brief Field itemBaseWorldPosition, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___itemBaseWorldPosition;

  /// @brief Field itemWorldPosition, offset: 0xac, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___itemWorldPosition;

  /// @brief Field currentCenter, offset: 0xb8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___currentCenter;

  /// @brief Field postiveFilter, offset: 0xc4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___postiveFilter;

  /// @brief Field negativeFilter, offset: 0xd0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___negativeFilter;

  /// @brief Field curPreviewRoutine, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curPreviewRoutine;

  /// @brief Field latticeMatDimensionsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString latticeMatDimensionsPropertyName{ u"_Dimensions" };

  /// @brief Field latticeMatOffsetPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString latticeMatOffsetPropertyName{ u"_Offset" };

  /// @brief Field rubberbandRatioToItemPosition offset 0xffffffff size 0x4
  static constexpr float_t rubberbandRatioToItemPosition{ 0.4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectPreview, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___validColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___invalidColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___previewSwitchCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___previewSwitchDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___previewLatticeTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___previewLatticeMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ____isMaster_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ____userID_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ____previewID_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___mapObjectSize) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___maintainUp) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ____isVisible_k__BackingField) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ____previewedPosition_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ____previewedForwardFacing_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ____previewedUpFacing_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ____previewedCollisionPlacementDirection_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___itemBaseWorldPosition) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___itemWorldPosition) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___currentCenter) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___postiveFilter) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___negativeFilter) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectPreview, ___curPreviewRoutine) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectPreview);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectPreview*, "", "MapObjectPreview");
NEED_NO_BOX(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObjectPreview___DoPreviewRoutine_d__56*, "", "MapObjectPreview/<DoPreviewRoutine>d__56");
