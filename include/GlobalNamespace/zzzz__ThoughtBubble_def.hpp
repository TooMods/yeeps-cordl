#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AvatarHand_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThoughtBubble)
namespace GlobalNamespace {
class Curve;
}
namespace GlobalNamespace {
class ScrollingPatternLayout;
}
namespace GlobalNamespace {
class XRThoughtBubbleInteractable;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnHovered;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnItemPulledFromBubble;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnTapped;
}
namespace GlobalNamespace {
class __ThoughtBubble___PopRoutine_d__122;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ThoughtBubble;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnHovered;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnItemPulledFromBubble;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnTapped;
}
namespace GlobalNamespace {
class __ThoughtBubble___PopRoutine_d__122;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThoughtBubble);
MARK_REF_PTR_T(::GlobalNamespace::__ThoughtBubble__OnHovered);
MARK_REF_PTR_T(::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble);
MARK_REF_PTR_T(::GlobalNamespace::__ThoughtBubble__OnTapped);
MARK_REF_PTR_T(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122);
// Type: ::OnItemPulledFromBubble
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThoughtBubble::OnItemPulledFromBubble*
class CORDL_TYPE __ThoughtBubble__OnItemPulledFromBubble : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x105fef8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::ThoughtBubble* thoughtBubble, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x105ff18, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x105fee4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  static inline ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x105fdb8, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThoughtBubble__OnItemPulledFromBubble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThoughtBubble__OnItemPulledFromBubble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThoughtBubble__OnItemPulledFromBubble(__ThoughtBubble__OnItemPulledFromBubble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThoughtBubble__OnItemPulledFromBubble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThoughtBubble__OnItemPulledFromBubble(__ThoughtBubble__OnItemPulledFromBubble const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnTapped
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThoughtBubble::OnTapped*
class CORDL_TYPE __ThoughtBubble__OnTapped : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1060064, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::ThoughtBubble* thoughtBubble, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1060084, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1060050, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  static inline ::GlobalNamespace::__ThoughtBubble__OnTapped* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x105ff24, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThoughtBubble__OnTapped();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThoughtBubble__OnTapped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThoughtBubble__OnTapped(__ThoughtBubble__OnTapped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThoughtBubble__OnTapped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThoughtBubble__OnTapped(__ThoughtBubble__OnTapped const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ThoughtBubble__OnTapped, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnHovered
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThoughtBubble::OnHovered*
class CORDL_TYPE __ThoughtBubble__OnHovered : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x10601d0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::ThoughtBubble* thoughtBubble, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x10601f0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x10601bc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  static inline ::GlobalNamespace::__ThoughtBubble__OnHovered* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1060090, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThoughtBubble__OnHovered();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThoughtBubble__OnHovered", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThoughtBubble__OnHovered(__ThoughtBubble__OnHovered&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThoughtBubble__OnHovered", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThoughtBubble__OnHovered(__ThoughtBubble__OnHovered const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ThoughtBubble__OnHovered, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<PopRoutine>d__122
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThoughtBubble::<PopRoutine>d__122*
class CORDL_TYPE __ThoughtBubble___PopRoutine_d__122 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ThoughtBubble> __4__this;

  /// @brief Field <bubbleBackgroundColor>5__3, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__bubbleBackgroundColor_5__3, put = __cordl_internal_set__bubbleBackgroundColor_5__3))::UnityEngine::Color _bubbleBackgroundColor_5__3;

  /// @brief Field <bubbleColor>5__2, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__bubbleColor_5__2, put = __cordl_internal_set__bubbleColor_5__2))::UnityEngine::Color _bubbleColor_5__2;

  /// @brief Field <initialBubbleScale>5__4, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__initialBubbleScale_5__4, put = __cordl_internal_set__initialBubbleScale_5__4)) float_t _initialBubbleScale_5__4;

  /// @brief Field <p>5__6, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__6, put = __cordl_internal_set__p_5__6)) float_t _p_5__6;

  /// @brief Field <targetBubbleScale>5__5, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__targetBubbleScale_5__5, put = __cordl_internal_set__targetBubbleScale_5__5)) float_t _targetBubbleScale_5__5;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1060200, size 0x68c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x106088c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1060894, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x10608d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x10601fc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ThoughtBubble> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ThoughtBubble>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__bubbleBackgroundColor_5__3() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__bubbleBackgroundColor_5__3();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__bubbleColor_5__2() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__bubbleColor_5__2();

  constexpr float_t const& __cordl_internal_get__initialBubbleScale_5__4() const;

  constexpr float_t& __cordl_internal_get__initialBubbleScale_5__4();

  constexpr float_t const& __cordl_internal_get__p_5__6() const;

  constexpr float_t& __cordl_internal_get__p_5__6();

  constexpr float_t const& __cordl_internal_get__targetBubbleScale_5__5() const;

  constexpr float_t& __cordl_internal_get__targetBubbleScale_5__5();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ThoughtBubble> value);

  constexpr void __cordl_internal_set__bubbleBackgroundColor_5__3(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__bubbleColor_5__2(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__initialBubbleScale_5__4(float_t value);

  constexpr void __cordl_internal_set__p_5__6(float_t value);

  constexpr void __cordl_internal_set__targetBubbleScale_5__5(float_t value);

  /// @brief Method .ctor, addr 0x105f470, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ThoughtBubble___PopRoutine_d__122();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThoughtBubble___PopRoutine_d__122", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThoughtBubble___PopRoutine_d__122(__ThoughtBubble___PopRoutine_d__122&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThoughtBubble___PopRoutine_d__122", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThoughtBubble___PopRoutine_d__122(__ThoughtBubble___PopRoutine_d__122 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ThoughtBubble> _____4__this;

  /// @brief Field <bubbleColor>5__2, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____bubbleColor_5__2;

  /// @brief Field <bubbleBackgroundColor>5__3, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____bubbleBackgroundColor_5__3;

  /// @brief Field <initialBubbleScale>5__4, offset: 0x48, size: 0x4, def value: None
  float_t ____initialBubbleScale_5__4;

  /// @brief Field <targetBubbleScale>5__5, offset: 0x4c, size: 0x4, def value: None
  float_t ____targetBubbleScale_5__5;

  /// @brief Field <p>5__6, offset: 0x50, size: 0x4, def value: None
  float_t ____p_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, ____bubbleColor_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, ____bubbleBackgroundColor_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, ____initialBubbleScale_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, ____targetBubbleScale_5__5) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122, ____p_5__6) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ThoughtBubble
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 429, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThoughtBubble*
class CORDL_TYPE ThoughtBubble : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnHovered = ::GlobalNamespace::__ThoughtBubble__OnHovered;

  using OnItemPulledFromBubble = ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble;

  using OnTapped = ::GlobalNamespace::__ThoughtBubble__OnTapped;

  using _PopRoutine_d__122 = ::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122;

  /// @brief Field <anchorLocalPosition>k__BackingField, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get__anchorLocalPosition_k__BackingField,
                      put = __cordl_internal_set__anchorLocalPosition_k__BackingField))::UnityEngine::Vector3 _anchorLocalPosition_k__BackingField;

  /// @brief Field <disableBubble>k__BackingField, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get__disableBubble_k__BackingField, put = __cordl_internal_set__disableBubble_k__BackingField)) bool _disableBubble_k__BackingField;

  /// @brief Field <isGrabbedByRightHand>k__BackingField, offset 0x1a9, size 0x1
  __declspec(property(get = __cordl_internal_get__isGrabbedByRightHand_k__BackingField, put = __cordl_internal_set__isGrabbedByRightHand_k__BackingField)) bool _isGrabbedByRightHand_k__BackingField;

  /// @brief Field <isHovered>k__BackingField, offset 0xf9, size 0x1
  __declspec(property(get = __cordl_internal_get__isHovered_k__BackingField, put = __cordl_internal_set__isHovered_k__BackingField)) bool _isHovered_k__BackingField;

  /// @brief Field <isSelected>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__isSelected_k__BackingField, put = __cordl_internal_set__isSelected_k__BackingField)) bool _isSelected_k__BackingField;

  /// @brief Field <targetActiveState>k__BackingField, offset 0x140, size 0x1
  __declspec(property(get = __cordl_internal_get__targetActiveState_k__BackingField, put = __cordl_internal_set__targetActiveState_k__BackingField)) bool _targetActiveState_k__BackingField;

  __declspec(property(get = get_anchorLocalPosition, put = set_anchorLocalPosition))::UnityEngine::Vector3 anchorLocalPosition;

  /// @brief Field bobAmplitudes, offset 0xac, size 0xc
  __declspec(property(get = __cordl_internal_get_bobAmplitudes, put = __cordl_internal_set_bobAmplitudes))::UnityEngine::Vector3 bobAmplitudes;

  /// @brief Field bobOffset, offset 0xb8, size 0xc
  __declspec(property(get = __cordl_internal_get_bobOffset, put = __cordl_internal_set_bobOffset))::UnityEngine::Vector3 bobOffset;

  /// @brief Field bobSpeeds, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get_bobSpeeds, put = __cordl_internal_set_bobSpeeds))::UnityEngine::Vector3 bobSpeeds;

  /// @brief Field bubbleAnchor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_bubbleAnchor, put = __cordl_internal_set_bubbleAnchor))::UnityW<::UnityEngine::Transform> bubbleAnchor;

  /// @brief Field bubbleAnchorMaxMoveDistance, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_bubbleAnchorMaxMoveDistance, put = __cordl_internal_set_bubbleAnchorMaxMoveDistance)) float_t bubbleAnchorMaxMoveDistance;

  /// @brief Field bubbleBackgroudMat, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_bubbleBackgroudMat, put = __cordl_internal_set_bubbleBackgroudMat))::UnityW<::UnityEngine::Material> bubbleBackgroudMat;

  /// @brief Field bubbleBackgroundAlpha, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_bubbleBackgroundAlpha, put = __cordl_internal_set_bubbleBackgroundAlpha)) float_t bubbleBackgroundAlpha;

  /// @brief Field bubbleMat, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_bubbleMat, put = __cordl_internal_set_bubbleMat))::UnityW<::UnityEngine::Material> bubbleMat;

  /// @brief Field bubblePopCurve, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_bubblePopCurve, put = __cordl_internal_set_bubblePopCurve))::UnityEngine::AnimationCurve* bubblePopCurve;

  /// @brief Field bubbleReformCurve, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_bubbleReformCurve, put = __cordl_internal_set_bubbleReformCurve))::UnityEngine::AnimationCurve* bubbleReformCurve;

  /// @brief Field bubbleTransform, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_bubbleTransform, put = __cordl_internal_set_bubbleTransform))::UnityW<::UnityEngine::Transform> bubbleTransform;

  /// @brief Field craftDistanceThreshold, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_craftDistanceThreshold, put = __cordl_internal_set_craftDistanceThreshold)) float_t craftDistanceThreshold;

  /// @brief Field curPopRoutine, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_curPopRoutine, put = __cordl_internal_set_curPopRoutine))::UnityEngine::Coroutine* curPopRoutine;

  /// @brief Field defaultBubbleMats, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultBubbleMats,
                      put = __cordl_internal_set_defaultBubbleMats))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> defaultBubbleMats;

  /// @brief Field defaultBubbleScale, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultBubbleScale, put = __cordl_internal_set_defaultBubbleScale)) float_t defaultBubbleScale;

  /// @brief Field defaultPreviewContainerScale, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultPreviewContainerScale, put = __cordl_internal_set_defaultPreviewContainerScale)) float_t defaultPreviewContainerScale;

  /// @brief Field disableBobbing, offset 0xc4, size 0x1
  __declspec(property(get = __cordl_internal_get_disableBobbing, put = __cordl_internal_set_disableBobbing)) bool disableBobbing;

  __declspec(property(get = get_disableBubble, put = set_disableBubble)) bool disableBubble;

  /// @brief Field grabSoundKey, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_grabSoundKey, put = __cordl_internal_set_grabSoundKey))::StringW grabSoundKey;

  /// @brief Field hasGripSession, offset 0x1aa, size 0x1
  __declspec(property(get = __cordl_internal_get_hasGripSession, put = __cordl_internal_set_hasGripSession)) bool hasGripSession;

  /// @brief Field hasHoverLock, offset 0x1ac, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHoverLock, put = __cordl_internal_set_hasHoverLock)) bool hasHoverLock;

  /// @brief Field hasNaturalHover, offset 0x1ab, size 0x1
  __declspec(property(get = __cordl_internal_get_hasNaturalHover, put = __cordl_internal_set_hasNaturalHover)) bool hasNaturalHover;

  /// @brief Field hasPlayedPopSound, offset 0x199, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPlayedPopSound, put = __cordl_internal_set_hasPlayedPopSound)) bool hasPlayedPopSound;

  /// @brief Field hideOnMoveComplete, offset 0x168, size 0x1
  __declspec(property(get = __cordl_internal_get_hideOnMoveComplete, put = __cordl_internal_set_hideOnMoveComplete)) bool hideOnMoveComplete;

  /// @brief Field hoverSoundKey, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_hoverSoundKey, put = __cordl_internal_set_hoverSoundKey))::StringW hoverSoundKey;

  /// @brief Field hoverTargetScale, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_hoverTargetScale, put = __cordl_internal_set_hoverTargetScale)) float_t hoverTargetScale;

  /// @brief Field initialScale, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_initialScale, put = __cordl_internal_set_initialScale)) float_t initialScale;

  /// @brief Field interactable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_interactable, put = __cordl_internal_set_interactable))::UnityW<::GlobalNamespace::XRThoughtBubbleInteractable> interactable;

  /// @brief Field interactableTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_interactableTransform, put = __cordl_internal_set_interactableTransform))::UnityW<::UnityEngine::Transform> interactableTransform;

  __declspec(property(get = get_isGrabbedByRightHand, put = set_isGrabbedByRightHand)) bool isGrabbedByRightHand;

  __declspec(property(get = get_isHovered, put = set_isHovered)) bool isHovered;

  /// @brief Field isLerpingScale, offset 0x150, size 0x1
  __declspec(property(get = __cordl_internal_get_isLerpingScale, put = __cordl_internal_set_isLerpingScale)) bool isLerpingScale;

  /// @brief Field isPopped, offset 0x198, size 0x1
  __declspec(property(get = __cordl_internal_get_isPopped, put = __cordl_internal_set_isPopped)) bool isPopped;

  __declspec(property(get = get_isSelected, put = set_isSelected)) bool isSelected;

  /// @brief Field lastInteractableTransformPosition, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_lastInteractableTransformPosition,
                      put = __cordl_internal_set_lastInteractableTransformPosition))::UnityEngine::Vector3 lastInteractableTransformPosition;

  /// @brief Field layout, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_layout, put = __cordl_internal_set_layout))::UnityW<::GlobalNamespace::ScrollingPatternLayout> layout;

  /// @brief Field localRotation, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_localRotation, put = __cordl_internal_set_localRotation))::UnityEngine::Quaternion localRotation;

  /// @brief Field maxPreviewRadius, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPreviewRadius, put = __cordl_internal_set_maxPreviewRadius)) float_t maxPreviewRadius;

  /// @brief Field moveAnimationCurve, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_moveAnimationCurve, put = __cordl_internal_set_moveAnimationCurve))::UnityEngine::AnimationCurve* moveAnimationCurve;

  /// @brief Field moveCurve, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_moveCurve, put = __cordl_internal_set_moveCurve))::GlobalNamespace::Curve* moveCurve;

  /// @brief Field moveDuration, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get_moveDuration, put = __cordl_internal_set_moveDuration)) float_t moveDuration;

  /// @brief Field moveP, offset 0x16c, size 0x4
  __declspec(property(get = __cordl_internal_get_moveP, put = __cordl_internal_set_moveP)) float_t moveP;

  /// @brief Field moveStartLocalRotation, offset 0x174, size 0x10
  __declspec(property(get = __cordl_internal_get_moveStartLocalRotation, put = __cordl_internal_set_moveStartLocalRotation))::UnityEngine::Quaternion moveStartLocalRotation;

  /// @brief Field onHoveredCallback, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_onHoveredCallback, put = __cordl_internal_set_onHoveredCallback))::GlobalNamespace::__ThoughtBubble__OnHovered* onHoveredCallback;

  /// @brief Field onItemPulledFromBubbleCallback, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemPulledFromBubbleCallback,
                      put = __cordl_internal_set_onItemPulledFromBubbleCallback))::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemPulledFromBubbleCallback;

  /// @brief Field onTappedCallback, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_onTappedCallback, put = __cordl_internal_set_onTappedCallback))::GlobalNamespace::__ThoughtBubble__OnTapped* onTappedCallback;

  /// @brief Field overrideBubbleMats, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideBubbleMats,
                      put = __cordl_internal_set_overrideBubbleMats))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> overrideBubbleMats;

  /// @brief Field playPopSoundOnTap, offset 0x130, size 0x1
  __declspec(property(get = __cordl_internal_get_playPopSoundOnTap, put = __cordl_internal_set_playPopSoundOnTap)) bool playPopSoundOnTap;

  /// @brief Field popSoundKey, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_popSoundKey, put = __cordl_internal_set_popSoundKey))::StringW popSoundKey;

  /// @brief Field previewContainer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_previewContainer, put = __cordl_internal_set_previewContainer))::UnityW<::UnityEngine::Transform> previewContainer;

  /// @brief Field previewObject, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_previewObject, put = __cordl_internal_set_previewObject))::UnityW<::UnityEngine::Transform> previewObject;

  /// @brief Field resetInteractableRotationOnRelease, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_resetInteractableRotationOnRelease, put = __cordl_internal_set_resetInteractableRotationOnRelease)) bool resetInteractableRotationOnRelease;

  /// @brief Field scaleLerpP, offset 0x14c, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleLerpP, put = __cordl_internal_set_scaleLerpP)) float_t scaleLerpP;

  /// @brief Field scrollRampDuration, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_scrollRampDuration, put = __cordl_internal_set_scrollRampDuration)) float_t scrollRampDuration;

  /// @brief Field scrollRampTimer, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_scrollRampTimer, put = __cordl_internal_set_scrollRampTimer)) float_t scrollRampTimer;

  /// @brief Field selectStartTime, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_selectStartTime, put = __cordl_internal_set_selectStartTime)) float_t selectStartTime;

  __declspec(property(get = get_targetActiveState, put = set_targetActiveState)) bool targetActiveState;

  /// @brief Field targetScale, offset 0x144, size 0x4
  __declspec(property(get = __cordl_internal_get_targetScale, put = __cordl_internal_set_targetScale)) float_t targetScale;

  /// @brief Field totalScrollDeltaSinceGrab, offset 0x8c, size 0xc
  __declspec(property(get = __cordl_internal_get_totalScrollDeltaSinceGrab, put = __cordl_internal_set_totalScrollDeltaSinceGrab))::UnityEngine::Vector3 totalScrollDeltaSinceGrab;

  /// @brief Field usingBubbleOverrideMats, offset 0x1a8, size 0x1
  __declspec(property(get = __cordl_internal_get_usingBubbleOverrideMats, put = __cordl_internal_set_usingBubbleOverrideMats)) bool usingBubbleOverrideMats;

  /// @brief Method CanDeactivate, addr 0x105e5f4, size 0x20, virtual false, abstract: false, final false
  inline bool CanDeactivate();

  /// @brief Method DestroySelf, addr 0x105dee0, size 0xf0, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DoBobUpdate, addr 0x105e078, size 0x120, virtual false, abstract: false, final false
  inline void DoBobUpdate();

  /// @brief Method DoPop, addr 0x105f2cc, size 0x54, virtual false, abstract: false, final false
  inline void DoPop();

  /// @brief Method ForceCompleteMove, addr 0x105e550, size 0x90, virtual false, abstract: false, final false
  inline void ForceCompleteMove();

  /// @brief Method ForceDeactivate, addr 0x105e9e4, size 0xc, virtual false, abstract: false, final false
  inline void ForceDeactivate(bool instant);

  /// @brief Method Initialize, addr 0x105d5d4, size 0x39c, virtual true, abstract: false, final false
  inline void Initialize(::UnityEngine::Vector3 initialLocalPosition, ::UnityEngine::Quaternion localRotation, bool startActive, bool isQuickCraft,
                         ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemCrafted, ::GlobalNamespace::__ThoughtBubble__OnTapped* onTapped,
                         ::GlobalNamespace::__ThoughtBubble__OnHovered* onHovered);

  /// @brief Method LateUpdate, addr 0x105e9f0, size 0x804, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LerpScale, addr 0x105e8a4, size 0x140, virtual false, abstract: false, final false
  inline void LerpScale(float_t newTargetScale, bool instant);

  /// @brief Method MoveInstant, addr 0x105d9bc, size 0x44, virtual false, abstract: false, final false
  inline void MoveInstant(::UnityEngine::Vector3 localPosition);

  /// @brief Method MoveLinear, addr 0x105e480, size 0xd0, virtual false, abstract: false, final false
  inline void MoveLinear(::UnityEngine::Vector3 localPosition, ::UnityEngine::AnimationCurve* animationCurve, float_t duration, bool hideOnComplete);

  /// @brief Method MoveOnCurve, addr 0x105e314, size 0x16c, virtual false, abstract: false, final false
  inline void MoveOnCurve(::GlobalNamespace::Curve* curve, ::UnityEngine::AnimationCurve* animationCurve, float_t duration, bool hideOnComplete);

  /// @brief Method MoveOnCurve, addr 0x105e22c, size 0xe8, virtual false, abstract: false, final false
  inline void MoveOnCurve(::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localStartingDirection, ::UnityEngine::AnimationCurve* animationCurve, float_t duration, bool hideOnComplete);

  static inline ::GlobalNamespace::ThoughtBubble* New_ctor();

  /// @brief Method OnBubbleInCenterUpdate, addr 0x105fa9c, size 0x4, virtual true, abstract: false, final false
  inline void OnBubbleInCenterUpdate();

  /// @brief Method OnDisable, addr 0x105dfe0, size 0xc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDisableAdditions, addr 0x105dfec, size 0x4, virtual true, abstract: false, final false
  inline void OnDisableAdditions();

  /// @brief Method OnEnable, addr 0x105dfd0, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEnableAdditions, addr 0x105dfdc, size 0x4, virtual true, abstract: false, final false
  inline void OnEnableAdditions();

  /// @brief Method OnFirstHoverEnter, addr 0x105faa0, size 0x228, virtual false, abstract: false, final false
  inline void OnFirstHoverEnter();

  /// @brief Method OnIsHoveredUpdated, addr 0x105fd80, size 0x4, virtual true, abstract: false, final false
  inline void OnIsHoveredUpdated(bool newHovered);

  /// @brief Method OnLastHoverExit, addr 0x105fcc8, size 0x40, virtual false, abstract: false, final false
  inline void OnLastHoverExit();

  /// @brief Method OnLateUpdate, addr 0x105f1f4, size 0x4, virtual true, abstract: false, final false
  inline void OnLateUpdate();

  /// @brief Method OnNoLongerSelected, addr 0x105fa94, size 0x4, virtual true, abstract: false, final false
  inline void OnNoLongerSelected();

  /// @brief Method OnPopReform, addr 0x105f498, size 0x4, virtual true, abstract: false, final false
  inline void OnPopReform();

  /// @brief Method OnSelectEntered, addr 0x105f558, size 0x380, virtual false, abstract: false, final false
  inline void OnSelectEntered();

  /// @brief Method OnSelectExited, addr 0x105f8d8, size 0x1bc, virtual false, abstract: false, final false
  inline void OnSelectExited();

  /// @brief Method PlayPopSound, addr 0x105f320, size 0xe8, virtual false, abstract: false, final false
  inline void PlayPopSound();

  /// @brief Method PopRoutine, addr 0x105f408, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* PopRoutine();

  /// @brief Method RandomizeBobParameters, addr 0x105daa8, size 0x100, virtual false, abstract: false, final false
  inline void RandomizeBobParameters();

  /// @brief Method RefreshIsInteractable, addr 0x105dff0, size 0x24, virtual false, abstract: false, final false
  inline void RefreshIsInteractable();

  /// @brief Method ResetPopState, addr 0x105e614, size 0x290, virtual false, abstract: false, final false
  inline void ResetPopState();

  /// @brief Method SetActive, addr 0x105da00, size 0xa8, virtual false, abstract: false, final false
  inline void SetActive(bool newActive, bool instant);

  /// @brief Method SetAnchorPosition, addr 0x105e064, size 0x14, virtual false, abstract: false, final false
  inline void SetAnchorPosition(::UnityEngine::Vector3 newAnchorPosition, bool doInstantUpdate);

  /// @brief Method SetBubbleMaterials, addr 0x105f248, size 0x84, virtual false, abstract: false, final false
  inline void SetBubbleMaterials(bool useOverride);

  /// @brief Method SetCanBob, addr 0x105f1f8, size 0x10, virtual false, abstract: false, final false
  inline void SetCanBob(bool newCanBob);

  /// @brief Method SetDefaultBubbleMaterials, addr 0x105f49c, size 0x10, virtual false, abstract: false, final false
  inline void SetDefaultBubbleMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newDefaultBubbleMats);

  /// @brief Method SetHasBubble, addr 0x105f208, size 0x40, virtual false, abstract: false, final false
  inline void SetHasBubble(bool newHasBubble);

  /// @brief Method SetHasNaturalHover, addr 0x105d970, size 0x4c, virtual false, abstract: false, final false
  inline void SetHasNaturalHover(bool newHovered, bool forceSet);

  /// @brief Method SetHoverLock, addr 0x105fd08, size 0x34, virtual false, abstract: false, final false
  inline void SetHoverLock(bool newHoverLock);

  /// @brief Method SetHovered, addr 0x105fd3c, size 0x44, virtual false, abstract: false, final false
  inline void SetHovered(bool newHovered);

  /// @brief Method SetIsInteractable, addr 0x105e014, size 0x28, virtual false, abstract: false, final false
  inline void SetIsInteractable(bool newIsInteractable);

  /// @brief Method SetLayout, addr 0x105dba8, size 0x8, virtual false, abstract: false, final false
  inline void SetLayout(::GlobalNamespace::ScrollingPatternLayout* newLayout);

  /// @brief Method SetParent, addr 0x105e198, size 0x94, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::Transform* newParent);

  /// @brief Method ShouldBeInteractable, addr 0x105e03c, size 0x28, virtual true, abstract: false, final false
  inline bool ShouldBeInteractable();

  /// @brief Method TriggerCraft, addr 0x105fa98, size 0x4, virtual true, abstract: false, final false
  inline void TriggerCraft();

  /// @brief Method TryDeselect, addr 0x105dbb0, size 0x330, virtual false, abstract: false, final false
  inline void TryDeselect();

  /// @brief Method TryEndGripSession, addr 0x105f4c0, size 0x8c, virtual false, abstract: false, final false
  inline void TryEndGripSession();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__anchorLocalPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__anchorLocalPosition_k__BackingField();

  constexpr bool const& __cordl_internal_get__disableBubble_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disableBubble_k__BackingField();

  constexpr bool const& __cordl_internal_get__isGrabbedByRightHand_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isGrabbedByRightHand_k__BackingField();

  constexpr bool const& __cordl_internal_get__isHovered_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isHovered_k__BackingField();

  constexpr bool const& __cordl_internal_get__isSelected_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isSelected_k__BackingField();

  constexpr bool const& __cordl_internal_get__targetActiveState_k__BackingField() const;

  constexpr bool& __cordl_internal_get__targetActiveState_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bobAmplitudes() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bobAmplitudes();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bobOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bobOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bobSpeeds() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bobSpeeds();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bubbleAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bubbleAnchor();

  constexpr float_t const& __cordl_internal_get_bubbleAnchorMaxMoveDistance() const;

  constexpr float_t& __cordl_internal_get_bubbleAnchorMaxMoveDistance();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bubbleBackgroudMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bubbleBackgroudMat();

  constexpr float_t const& __cordl_internal_get_bubbleBackgroundAlpha() const;

  constexpr float_t& __cordl_internal_get_bubbleBackgroundAlpha();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bubbleMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bubbleMat();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bubblePopCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_bubblePopCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bubbleReformCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_bubbleReformCurve() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bubbleTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bubbleTransform();

  constexpr float_t const& __cordl_internal_get_craftDistanceThreshold() const;

  constexpr float_t& __cordl_internal_get_craftDistanceThreshold();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curPopRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curPopRoutine() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_defaultBubbleMats() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_defaultBubbleMats();

  constexpr float_t const& __cordl_internal_get_defaultBubbleScale() const;

  constexpr float_t& __cordl_internal_get_defaultBubbleScale();

  constexpr float_t const& __cordl_internal_get_defaultPreviewContainerScale() const;

  constexpr float_t& __cordl_internal_get_defaultPreviewContainerScale();

  constexpr bool const& __cordl_internal_get_disableBobbing() const;

  constexpr bool& __cordl_internal_get_disableBobbing();

  constexpr ::StringW const& __cordl_internal_get_grabSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_grabSoundKey();

  constexpr bool const& __cordl_internal_get_hasGripSession() const;

  constexpr bool& __cordl_internal_get_hasGripSession();

  constexpr bool const& __cordl_internal_get_hasHoverLock() const;

  constexpr bool& __cordl_internal_get_hasHoverLock();

  constexpr bool const& __cordl_internal_get_hasNaturalHover() const;

  constexpr bool& __cordl_internal_get_hasNaturalHover();

  constexpr bool const& __cordl_internal_get_hasPlayedPopSound() const;

  constexpr bool& __cordl_internal_get_hasPlayedPopSound();

  constexpr bool const& __cordl_internal_get_hideOnMoveComplete() const;

  constexpr bool& __cordl_internal_get_hideOnMoveComplete();

  constexpr ::StringW const& __cordl_internal_get_hoverSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_hoverSoundKey();

  constexpr float_t const& __cordl_internal_get_hoverTargetScale() const;

  constexpr float_t& __cordl_internal_get_hoverTargetScale();

  constexpr float_t const& __cordl_internal_get_initialScale() const;

  constexpr float_t& __cordl_internal_get_initialScale();

  constexpr ::UnityW<::GlobalNamespace::XRThoughtBubbleInteractable> const& __cordl_internal_get_interactable() const;

  constexpr ::UnityW<::GlobalNamespace::XRThoughtBubbleInteractable>& __cordl_internal_get_interactable();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_interactableTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_interactableTransform();

  constexpr bool const& __cordl_internal_get_isLerpingScale() const;

  constexpr bool& __cordl_internal_get_isLerpingScale();

  constexpr bool const& __cordl_internal_get_isPopped() const;

  constexpr bool& __cordl_internal_get_isPopped();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastInteractableTransformPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastInteractableTransformPosition();

  constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout> const& __cordl_internal_get_layout() const;

  constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout>& __cordl_internal_get_layout();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localRotation();

  constexpr float_t const& __cordl_internal_get_maxPreviewRadius() const;

  constexpr float_t& __cordl_internal_get_maxPreviewRadius();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_moveAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_moveAnimationCurve() const;

  constexpr ::GlobalNamespace::Curve*& __cordl_internal_get_moveCurve();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Curve*> const& __cordl_internal_get_moveCurve() const;

  constexpr float_t const& __cordl_internal_get_moveDuration() const;

  constexpr float_t& __cordl_internal_get_moveDuration();

  constexpr float_t const& __cordl_internal_get_moveP() const;

  constexpr float_t& __cordl_internal_get_moveP();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_moveStartLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_moveStartLocalRotation();

  constexpr ::GlobalNamespace::__ThoughtBubble__OnHovered*& __cordl_internal_get_onHoveredCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThoughtBubble__OnHovered*> const& __cordl_internal_get_onHoveredCallback() const;

  constexpr ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble*& __cordl_internal_get_onItemPulledFromBubbleCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble*> const& __cordl_internal_get_onItemPulledFromBubbleCallback() const;

  constexpr ::GlobalNamespace::__ThoughtBubble__OnTapped*& __cordl_internal_get_onTappedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThoughtBubble__OnTapped*> const& __cordl_internal_get_onTappedCallback() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_overrideBubbleMats() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_overrideBubbleMats();

  constexpr bool const& __cordl_internal_get_playPopSoundOnTap() const;

  constexpr bool& __cordl_internal_get_playPopSoundOnTap();

  constexpr ::StringW const& __cordl_internal_get_popSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_popSoundKey();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_previewContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_previewContainer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_previewObject() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_previewObject();

  constexpr bool const& __cordl_internal_get_resetInteractableRotationOnRelease() const;

  constexpr bool& __cordl_internal_get_resetInteractableRotationOnRelease();

  constexpr float_t const& __cordl_internal_get_scaleLerpP() const;

  constexpr float_t& __cordl_internal_get_scaleLerpP();

  constexpr float_t const& __cordl_internal_get_scrollRampDuration() const;

  constexpr float_t& __cordl_internal_get_scrollRampDuration();

  constexpr float_t const& __cordl_internal_get_scrollRampTimer() const;

  constexpr float_t& __cordl_internal_get_scrollRampTimer();

  constexpr float_t const& __cordl_internal_get_selectStartTime() const;

  constexpr float_t& __cordl_internal_get_selectStartTime();

  constexpr float_t const& __cordl_internal_get_targetScale() const;

  constexpr float_t& __cordl_internal_get_targetScale();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_totalScrollDeltaSinceGrab() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_totalScrollDeltaSinceGrab();

  constexpr bool const& __cordl_internal_get_usingBubbleOverrideMats() const;

  constexpr bool& __cordl_internal_get_usingBubbleOverrideMats();

  constexpr void __cordl_internal_set__anchorLocalPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__disableBubble_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isGrabbedByRightHand_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isHovered_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isSelected_k__BackingField(bool value);

  constexpr void __cordl_internal_set__targetActiveState_k__BackingField(bool value);

  constexpr void __cordl_internal_set_bobAmplitudes(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bobOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bobSpeeds(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bubbleAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bubbleAnchorMaxMoveDistance(float_t value);

  constexpr void __cordl_internal_set_bubbleBackgroudMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_bubbleBackgroundAlpha(float_t value);

  constexpr void __cordl_internal_set_bubbleMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_bubblePopCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_bubbleReformCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_bubbleTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_craftDistanceThreshold(float_t value);

  constexpr void __cordl_internal_set_curPopRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_defaultBubbleMats(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_defaultBubbleScale(float_t value);

  constexpr void __cordl_internal_set_defaultPreviewContainerScale(float_t value);

  constexpr void __cordl_internal_set_disableBobbing(bool value);

  constexpr void __cordl_internal_set_grabSoundKey(::StringW value);

  constexpr void __cordl_internal_set_hasGripSession(bool value);

  constexpr void __cordl_internal_set_hasHoverLock(bool value);

  constexpr void __cordl_internal_set_hasNaturalHover(bool value);

  constexpr void __cordl_internal_set_hasPlayedPopSound(bool value);

  constexpr void __cordl_internal_set_hideOnMoveComplete(bool value);

  constexpr void __cordl_internal_set_hoverSoundKey(::StringW value);

  constexpr void __cordl_internal_set_hoverTargetScale(float_t value);

  constexpr void __cordl_internal_set_initialScale(float_t value);

  constexpr void __cordl_internal_set_interactable(::UnityW<::GlobalNamespace::XRThoughtBubbleInteractable> value);

  constexpr void __cordl_internal_set_interactableTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isLerpingScale(bool value);

  constexpr void __cordl_internal_set_isPopped(bool value);

  constexpr void __cordl_internal_set_lastInteractableTransformPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_layout(::UnityW<::GlobalNamespace::ScrollingPatternLayout> value);

  constexpr void __cordl_internal_set_localRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_maxPreviewRadius(float_t value);

  constexpr void __cordl_internal_set_moveAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_moveCurve(::GlobalNamespace::Curve* value);

  constexpr void __cordl_internal_set_moveDuration(float_t value);

  constexpr void __cordl_internal_set_moveP(float_t value);

  constexpr void __cordl_internal_set_moveStartLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_onHoveredCallback(::GlobalNamespace::__ThoughtBubble__OnHovered* value);

  constexpr void __cordl_internal_set_onItemPulledFromBubbleCallback(::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* value);

  constexpr void __cordl_internal_set_onTappedCallback(::GlobalNamespace::__ThoughtBubble__OnTapped* value);

  constexpr void __cordl_internal_set_overrideBubbleMats(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_playPopSoundOnTap(bool value);

  constexpr void __cordl_internal_set_popSoundKey(::StringW value);

  constexpr void __cordl_internal_set_previewContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_previewObject(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_resetInteractableRotationOnRelease(bool value);

  constexpr void __cordl_internal_set_scaleLerpP(float_t value);

  constexpr void __cordl_internal_set_scrollRampDuration(float_t value);

  constexpr void __cordl_internal_set_scrollRampTimer(float_t value);

  constexpr void __cordl_internal_set_selectStartTime(float_t value);

  constexpr void __cordl_internal_set_targetScale(float_t value);

  constexpr void __cordl_internal_set_totalScrollDeltaSinceGrab(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_usingBubbleOverrideMats(bool value);

  /// @brief Method .ctor, addr 0x105fd84, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorLocalPosition, addr 0x105d580, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchorLocalPosition();

  /// @brief Method get_disableBubble, addr 0x105d5ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableBubble();

  /// @brief Method get_isGrabbedByRightHand, addr 0x105f4ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_isGrabbedByRightHand();

  /// @brief Method get_isHovered, addr 0x105d5c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isHovered();

  /// @brief Method get_isSelected, addr 0x105d598, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSelected();

  /// @brief Method get_targetActiveState, addr 0x105e5e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_targetActiveState();

  /// @brief Method set_anchorLocalPosition, addr 0x105d58c, size 0xc, virtual false, abstract: false, final false
  inline void set_anchorLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_disableBubble, addr 0x105d5b4, size 0xc, virtual false, abstract: false, final false
  inline void set_disableBubble(bool value);

  /// @brief Method set_isGrabbedByRightHand, addr 0x105f4b4, size 0xc, virtual false, abstract: false, final false
  inline void set_isGrabbedByRightHand(bool value);

  /// @brief Method set_isHovered, addr 0x105d5c8, size 0xc, virtual false, abstract: false, final false
  inline void set_isHovered(bool value);

  /// @brief Method set_isSelected, addr 0x105d5a0, size 0xc, virtual false, abstract: false, final false
  inline void set_isSelected(bool value);

  /// @brief Method set_targetActiveState, addr 0x105e5e8, size 0xc, virtual false, abstract: false, final false
  inline void set_targetActiveState(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThoughtBubble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThoughtBubble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThoughtBubble(ThoughtBubble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThoughtBubble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThoughtBubble(ThoughtBubble const&) = delete;

  /// @brief Field maxPreviewRadius, offset: 0x18, size: 0x4, def value: None
  float_t ___maxPreviewRadius;

  /// @brief Field interactable, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::XRThoughtBubbleInteractable> ___interactable;

  /// @brief Field interactableTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___interactableTransform;

  /// @brief Field previewContainer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___previewContainer;

  /// @brief Field bubbleAnchor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bubbleAnchor;

  /// @brief Field bubbleAnchorMaxMoveDistance, offset: 0x40, size: 0x4, def value: None
  float_t ___bubbleAnchorMaxMoveDistance;

  /// @brief Field defaultPreviewContainerScale, offset: 0x44, size: 0x4, def value: None
  float_t ___defaultPreviewContainerScale;

  /// @brief Field previewObject, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___previewObject;

  /// @brief Field resetInteractableRotationOnRelease, offset: 0x50, size: 0x1, def value: None
  bool ___resetInteractableRotationOnRelease;

  /// @brief Field <anchorLocalPosition>k__BackingField, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____anchorLocalPosition_k__BackingField;

  /// @brief Field localRotation, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___localRotation;

  /// @brief Field <isSelected>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____isSelected_k__BackingField;

  /// @brief Field craftDistanceThreshold, offset: 0x74, size: 0x4, def value: None
  float_t ___craftDistanceThreshold;

  /// @brief Field layout, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScrollingPatternLayout> ___layout;

  /// @brief Field lastInteractableTransformPosition, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastInteractableTransformPosition;

  /// @brief Field totalScrollDeltaSinceGrab, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___totalScrollDeltaSinceGrab;

  /// @brief Field scrollRampDuration, offset: 0x98, size: 0x4, def value: None
  float_t ___scrollRampDuration;

  /// @brief Field scrollRampTimer, offset: 0x9c, size: 0x4, def value: None
  float_t ___scrollRampTimer;

  /// @brief Field bobSpeeds, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bobSpeeds;

  /// @brief Field bobAmplitudes, offset: 0xac, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bobAmplitudes;

  /// @brief Field bobOffset, offset: 0xb8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bobOffset;

  /// @brief Field disableBobbing, offset: 0xc4, size: 0x1, def value: None
  bool ___disableBobbing;

  /// @brief Field bubbleTransform, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bubbleTransform;

  /// @brief Field defaultBubbleMats, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___defaultBubbleMats;

  /// @brief Field overrideBubbleMats, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___overrideBubbleMats;

  /// @brief Field bubbleMat, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bubbleMat;

  /// @brief Field bubbleBackgroudMat, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bubbleBackgroudMat;

  /// @brief Field bubbleBackgroundAlpha, offset: 0xf0, size: 0x4, def value: None
  float_t ___bubbleBackgroundAlpha;

  /// @brief Field defaultBubbleScale, offset: 0xf4, size: 0x4, def value: None
  float_t ___defaultBubbleScale;

  /// @brief Field <disableBubble>k__BackingField, offset: 0xf8, size: 0x1, def value: None
  bool ____disableBubble_k__BackingField;

  /// @brief Field <isHovered>k__BackingField, offset: 0xf9, size: 0x1, def value: None
  bool ____isHovered_k__BackingField;

  /// @brief Field hoverTargetScale, offset: 0xfc, size: 0x4, def value: None
  float_t ___hoverTargetScale;

  /// @brief Field hoverSoundKey, offset: 0x100, size: 0x8, def value: None
  ::StringW ___hoverSoundKey;

  /// @brief Field grabSoundKey, offset: 0x108, size: 0x8, def value: None
  ::StringW ___grabSoundKey;

  /// @brief Field popSoundKey, offset: 0x110, size: 0x8, def value: None
  ::StringW ___popSoundKey;

  /// @brief Field onItemPulledFromBubbleCallback, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* ___onItemPulledFromBubbleCallback;

  /// @brief Field selectStartTime, offset: 0x120, size: 0x4, def value: None
  float_t ___selectStartTime;

  /// @brief Field onTappedCallback, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::__ThoughtBubble__OnTapped* ___onTappedCallback;

  /// @brief Field playPopSoundOnTap, offset: 0x130, size: 0x1, def value: None
  bool ___playPopSoundOnTap;

  /// @brief Field onHoveredCallback, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::__ThoughtBubble__OnHovered* ___onHoveredCallback;

  /// @brief Field <targetActiveState>k__BackingField, offset: 0x140, size: 0x1, def value: None
  bool ____targetActiveState_k__BackingField;

  /// @brief Field targetScale, offset: 0x144, size: 0x4, def value: None
  float_t ___targetScale;

  /// @brief Field initialScale, offset: 0x148, size: 0x4, def value: None
  float_t ___initialScale;

  /// @brief Field scaleLerpP, offset: 0x14c, size: 0x4, def value: None
  float_t ___scaleLerpP;

  /// @brief Field isLerpingScale, offset: 0x150, size: 0x1, def value: None
  bool ___isLerpingScale;

  /// @brief Field moveCurve, offset: 0x158, size: 0x8, def value: None
  ::GlobalNamespace::Curve* ___moveCurve;

  /// @brief Field moveAnimationCurve, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___moveAnimationCurve;

  /// @brief Field hideOnMoveComplete, offset: 0x168, size: 0x1, def value: None
  bool ___hideOnMoveComplete;

  /// @brief Field moveP, offset: 0x16c, size: 0x4, def value: None
  float_t ___moveP;

  /// @brief Field moveDuration, offset: 0x170, size: 0x4, def value: None
  float_t ___moveDuration;

  /// @brief Field moveStartLocalRotation, offset: 0x174, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___moveStartLocalRotation;

  /// @brief Field bubblePopCurve, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___bubblePopCurve;

  /// @brief Field bubbleReformCurve, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___bubbleReformCurve;

  /// @brief Field isPopped, offset: 0x198, size: 0x1, def value: None
  bool ___isPopped;

  /// @brief Field hasPlayedPopSound, offset: 0x199, size: 0x1, def value: None
  bool ___hasPlayedPopSound;

  /// @brief Field curPopRoutine, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curPopRoutine;

  /// @brief Field usingBubbleOverrideMats, offset: 0x1a8, size: 0x1, def value: None
  bool ___usingBubbleOverrideMats;

  /// @brief Field <isGrabbedByRightHand>k__BackingField, offset: 0x1a9, size: 0x1, def value: None
  bool ____isGrabbedByRightHand_k__BackingField;

  /// @brief Field hasGripSession, offset: 0x1aa, size: 0x1, def value: None
  bool ___hasGripSession;

  /// @brief Field hasNaturalHover, offset: 0x1ab, size: 0x1, def value: None
  bool ___hasNaturalHover;

  /// @brief Field hasHoverLock, offset: 0x1ac, size: 0x1, def value: None
  bool ___hasHoverLock;

  /// @brief Field bubbleLerpBackSpeed offset 0xffffffff size 0x4
  static constexpr float_t bubbleLerpBackSpeed{ 0.15 };

  /// @brief Field bubblePopDuration offset 0xffffffff size 0x4
  static constexpr float_t bubblePopDuration{ 0.2 };

  /// @brief Field bubblePopScaleMultiplier offset 0xffffffff size 0x4
  static constexpr float_t bubblePopScaleMultiplier{ 2.0 };

  /// @brief Field bubbleReformDelay offset 0xffffffff size 0x4
  static constexpr float_t bubbleReformDelay{ 0.3 };

  /// @brief Field bubbleReformDuration offset 0xffffffff size 0x4
  static constexpr float_t bubbleReformDuration{ 0.6 };

  /// @brief Field defaultCraftDistanceThreshold offset 0xffffffff size 0x4
  static constexpr float_t defaultCraftDistanceThreshold{ 0.35 };

  /// @brief Field gripType value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AvatarHand__GripType const gripType;

  /// @brief Field hoverScaleLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t hoverScaleLerpSpeed{ 4.0 };

  /// @brief Field hoveredScale offset 0xffffffff size 0x4
  static constexpr float_t hoveredScale{ 1.35 };

  /// @brief Field maxBobAmplitude offset 0xffffffff size 0x4
  static constexpr float_t maxBobAmplitude{ 0.02 };

  /// @brief Field maxBobSpeed offset 0xffffffff size 0x4
  static constexpr float_t maxBobSpeed{ 1.25 };

  /// @brief Field maxTapDuration offset 0xffffffff size 0x4
  static constexpr float_t maxTapDuration{ 0.25 };

  /// @brief Field minBobAmplitude offset 0xffffffff size 0x4
  static constexpr float_t minBobAmplitude{ 0.01 };

  /// @brief Field minBobSpeed offset 0xffffffff size 0x4
  static constexpr float_t minBobSpeed{ 0.625 };

  /// @brief Field quickCraftDistanceThreshold offset 0xffffffff size 0x4
  static constexpr float_t quickCraftDistanceThreshold{ 0.2 };

  /// @brief Field scaleLerpDuration offset 0xffffffff size 0x4
  static constexpr float_t scaleLerpDuration{ 0.25 };

  /// @brief Field totalScrollDeltaThresholdForTapInvalidation offset 0xffffffff size 0x4
  static constexpr float_t totalScrollDeltaThresholdForTapInvalidation{ 0.15 };

  /// @brief Field unhoveredScale offset 0xffffffff size 0x4
  static constexpr float_t unhoveredScale{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThoughtBubble, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___maxPreviewRadius) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___interactable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___interactableTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___previewContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bubbleAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bubbleAnchorMaxMoveDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___defaultPreviewContainerScale) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___previewObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___resetInteractableRotationOnRelease) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ____anchorLocalPosition_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___localRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ____isSelected_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___craftDistanceThreshold) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___layout) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___lastInteractableTransformPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___totalScrollDeltaSinceGrab) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___scrollRampDuration) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___scrollRampTimer) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bobSpeeds) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bobAmplitudes) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bobOffset) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___disableBobbing) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bubbleTransform) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___defaultBubbleMats) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___overrideBubbleMats) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bubbleMat) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bubbleBackgroudMat) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bubbleBackgroundAlpha) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___defaultBubbleScale) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ____disableBubble_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ____isHovered_k__BackingField) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___hoverTargetScale) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___hoverSoundKey) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___grabSoundKey) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___popSoundKey) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___onItemPulledFromBubbleCallback) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___selectStartTime) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___onTappedCallback) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___playPopSoundOnTap) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___onHoveredCallback) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ____targetActiveState_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___targetScale) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___initialScale) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___scaleLerpP) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___isLerpingScale) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___moveCurve) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___moveAnimationCurve) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___hideOnMoveComplete) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___moveP) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___moveDuration) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___moveStartLocalRotation) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bubblePopCurve) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___bubbleReformCurve) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___isPopped) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___hasPlayedPopSound) == 0x199, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___curPopRoutine) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___usingBubbleOverrideMats) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ____isGrabbedByRightHand_k__BackingField) == 0x1a9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___hasGripSession) == 0x1aa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___hasNaturalHover) == 0x1ab, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThoughtBubble, ___hasHoverLock) == 0x1ac, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThoughtBubble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThoughtBubble*, "", "ThoughtBubble");
NEED_NO_BOX(::GlobalNamespace::__ThoughtBubble__OnHovered);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ThoughtBubble__OnHovered*, "", "ThoughtBubble/OnHovered");
NEED_NO_BOX(::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble*, "", "ThoughtBubble/OnItemPulledFromBubble");
NEED_NO_BOX(::GlobalNamespace::__ThoughtBubble__OnTapped);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ThoughtBubble__OnTapped*, "", "ThoughtBubble/OnTapped");
NEED_NO_BOX(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ThoughtBubble___PopRoutine_d__122*, "", "ThoughtBubble/<PopRoutine>d__122");
