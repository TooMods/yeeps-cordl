#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PanZone2D)
namespace GlobalNamespace {
class __PanZone2D__OnPanDeltaUpdated;
}
namespace GlobalNamespace {
class __PanZone2D__OnTapped;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class PanZone2D;
}
namespace GlobalNamespace {
class __PanZone2D__OnPanDeltaUpdated;
}
namespace GlobalNamespace {
class __PanZone2D__OnTapped;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PanZone2D);
MARK_REF_PTR_T(::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PanZone2D__OnTapped);
// Type: ::OnPanDeltaUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PanZone2D::OnPanDeltaUpdated*
class CORDL_TYPE __PanZone2D__OnPanDeltaUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e04700, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 newJoystickValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e04784, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e046ec, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Vector2 newJoystickValue);

  static inline ::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e04628, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PanZone2D__OnPanDeltaUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PanZone2D__OnPanDeltaUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PanZone2D__OnPanDeltaUpdated(__PanZone2D__OnPanDeltaUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PanZone2D__OnPanDeltaUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PanZone2D__OnPanDeltaUpdated(__PanZone2D__OnPanDeltaUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnTapped
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PanZone2D::OnTapped*
class CORDL_TYPE __PanZone2D__OnTapped : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e04868, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 screenPosition, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e048ec, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e04854, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Vector2 screenPosition);

  static inline ::GlobalNamespace::__PanZone2D__OnTapped* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e04790, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PanZone2D__OnTapped();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PanZone2D__OnTapped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PanZone2D__OnTapped(__PanZone2D__OnTapped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PanZone2D__OnTapped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PanZone2D__OnTapped(__PanZone2D__OnTapped const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PanZone2D__OnTapped, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PanZone2D
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PanZone2D*
class CORDL_TYPE PanZone2D : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnPanDeltaUpdated = ::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated;

  using OnTapped = ::GlobalNamespace::__PanZone2D__OnTapped;

  /// @brief Field <panDelta>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__panDelta_k__BackingField, put = __cordl_internal_set__panDelta_k__BackingField))::UnityEngine::Vector2 _panDelta_k__BackingField;

  /// @brief Field onPanDeltaUpdatedCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onPanDeltaUpdatedCallbacks,
                      put = __cordl_internal_set_onPanDeltaUpdatedCallbacks))::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated* onPanDeltaUpdatedCallbacks;

  /// @brief Field onTappedCallbacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onTappedCallbacks, put = __cordl_internal_set_onTappedCallbacks))::GlobalNamespace::__PanZone2D__OnTapped* onTappedCallbacks;

  __declspec(property(get = get_panDelta, put = set_panDelta))::UnityEngine::Vector2 panDelta;

  /// @brief Field tapIndicatorPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_tapIndicatorPrefab, put = __cordl_internal_set_tapIndicatorPrefab))::UnityW<::UnityEngine::GameObject> tapIndicatorPrefab;

  /// @brief Field touchStartPosition, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_touchStartPosition, put = __cordl_internal_set_touchStartPosition))::System::Nullable_1<::UnityEngine::Vector2> touchStartPosition;

  static inline ::GlobalNamespace::PanZone2D* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x2e03fc4, size 0x4, virtual false, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method OnDrag, addr 0x2e03fc8, size 0x1c, virtual false, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method OnEndDrag, addr 0x2e03fe4, size 0x50, virtual false, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method OnPointerDown, addr 0x2e04034, size 0x80, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method OnPointerUp, addr 0x2e040b4, size 0x2e8, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method SetPanDelta, addr 0x2e03ec8, size 0xfc, virtual false, abstract: false, final false
  inline void SetPanDelta(::UnityEngine::Vector2 value);

  /// @brief Method Start, addr 0x2e039b0, size 0x518, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <Start>b__11_0, addr 0x2e043a4, size 0x78, virtual false, abstract: false, final false
  inline void _Start_b__11_0(::UnityEngine::EventSystems::BaseEventData* data);

  /// @brief Method <Start>b__11_1, addr 0x2e0441c, size 0x84, virtual false, abstract: false, final false
  inline void _Start_b__11_1(::UnityEngine::EventSystems::BaseEventData* data);

  /// @brief Method <Start>b__11_2, addr 0x2e044a0, size 0x80, virtual false, abstract: false, final false
  inline void _Start_b__11_2(::UnityEngine::EventSystems::BaseEventData* data);

  /// @brief Method <Start>b__11_3, addr 0x2e04520, size 0x84, virtual false, abstract: false, final false
  inline void _Start_b__11_3(::UnityEngine::EventSystems::BaseEventData* data);

  /// @brief Method <Start>b__11_4, addr 0x2e045a4, size 0x84, virtual false, abstract: false, final false
  inline void _Start_b__11_4(::UnityEngine::EventSystems::BaseEventData* data);

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__panDelta_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__panDelta_k__BackingField();

  constexpr ::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated*& __cordl_internal_get_onPanDeltaUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated*> const& __cordl_internal_get_onPanDeltaUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PanZone2D__OnTapped*& __cordl_internal_get_onTappedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PanZone2D__OnTapped*> const& __cordl_internal_get_onTappedCallbacks() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_tapIndicatorPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_tapIndicatorPrefab();

  constexpr ::System::Nullable_1<::UnityEngine::Vector2> const& __cordl_internal_get_touchStartPosition() const;

  constexpr ::System::Nullable_1<::UnityEngine::Vector2>& __cordl_internal_get_touchStartPosition();

  constexpr void __cordl_internal_set__panDelta_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_onPanDeltaUpdatedCallbacks(::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated* value);

  constexpr void __cordl_internal_set_onTappedCallbacks(::GlobalNamespace::__PanZone2D__OnTapped* value);

  constexpr void __cordl_internal_set_tapIndicatorPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_touchStartPosition(::System::Nullable_1<::UnityEngine::Vector2> value);

  /// @brief Method .ctor, addr 0x2e0439c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_panDelta, addr 0x2e039a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_panDelta();

  /// @brief Method set_panDelta, addr 0x2e039a8, size 0x8, virtual false, abstract: false, final false
  inline void set_panDelta(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanZone2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanZone2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanZone2D(PanZone2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanZone2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanZone2D(PanZone2D const&) = delete;

  /// @brief Field <panDelta>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____panDelta_k__BackingField;

  /// @brief Field onPanDeltaUpdatedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated* ___onPanDeltaUpdatedCallbacks;

  /// @brief Field onTappedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PanZone2D__OnTapped* ___onTappedCallbacks;

  /// @brief Field tapIndicatorPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___tapIndicatorPrefab;

  /// @brief Field touchStartPosition, offset: 0x38, size: 0xc, def value: None
  ::System::Nullable_1<::UnityEngine::Vector2> ___touchStartPosition;

  /// @brief Field maxTouchMovementForTap offset 0xffffffff size 0x4
  static constexpr float_t maxTouchMovementForTap{ 10.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PanZone2D, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PanZone2D, ____panDelta_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanZone2D, ___onPanDeltaUpdatedCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanZone2D, ___onTappedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanZone2D, ___tapIndicatorPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanZone2D, ___touchStartPosition) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PanZone2D);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PanZone2D*, "", "PanZone2D");
NEED_NO_BOX(::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PanZone2D__OnPanDeltaUpdated*, "", "PanZone2D/OnPanDeltaUpdated");
NEED_NO_BOX(::GlobalNamespace::__PanZone2D__OnTapped);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PanZone2D__OnTapped*, "", "PanZone2D/OnTapped");
