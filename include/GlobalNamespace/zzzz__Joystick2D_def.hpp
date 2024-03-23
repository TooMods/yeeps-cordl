#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Joystick2D)
namespace GlobalNamespace {
class __Joystick2D__OnJoystickValueUpdated;
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
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class Joystick2D;
}
namespace GlobalNamespace {
class __Joystick2D__OnJoystickValueUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Joystick2D);
MARK_REF_PTR_T(::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated);
// Type: ::OnJoystickValueUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Joystick2D::OnJoystickValueUpdated*
class CORDL_TYPE __Joystick2D__OnJoystickValueUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3087118, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 newJoystickValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x308719c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3087104, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Vector2 newJoystickValue);

  static inline ::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x3087040, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Joystick2D__OnJoystickValueUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Joystick2D__OnJoystickValueUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Joystick2D__OnJoystickValueUpdated(__Joystick2D__OnJoystickValueUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Joystick2D__OnJoystickValueUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Joystick2D__OnJoystickValueUpdated(__Joystick2D__OnJoystickValueUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Joystick2D
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Joystick2D*
class CORDL_TYPE Joystick2D : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnJoystickValueUpdated = ::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated;

  /// @brief Field <joystickValue>k__BackingField, offset 0x44, size 0x8
  __declspec(property(get = __cordl_internal_get__joystickValue_k__BackingField, put = __cordl_internal_set__joystickValue_k__BackingField))::UnityEngine::Vector2 _joystickValue_k__BackingField;

  /// @brief Field backgroundRect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundRect, put = __cordl_internal_set_backgroundRect))::UnityW<::UnityEngine::RectTransform> backgroundRect;

  /// @brief Field bounceAmount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bounceAmount, put = __cordl_internal_set_bounceAmount)) float_t bounceAmount;

  /// @brief Field bounceLerpSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_bounceLerpSpeed, put = __cordl_internal_set_bounceLerpSpeed)) float_t bounceLerpSpeed;

  /// @brief Field bounceRect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bounceRect, put = __cordl_internal_set_bounceRect))::UnityW<::UnityEngine::RectTransform> bounceRect;

  __declspec(property(get = get_joystickValue, put = set_joystickValue))::UnityEngine::Vector2 joystickValue;

  /// @brief Field maxStickMoveRatio, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxStickMoveRatio, put = __cordl_internal_set_maxStickMoveRatio)) float_t maxStickMoveRatio;

  /// @brief Field onJoystickValueUpdatedCallbacks, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_onJoystickValueUpdatedCallbacks,
                      put = __cordl_internal_set_onJoystickValueUpdatedCallbacks))::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated* onJoystickValueUpdatedCallbacks;

  /// @brief Field stickRect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stickRect, put = __cordl_internal_set_stickRect))::UnityW<::UnityEngine::RectTransform> stickRect;

  /// @brief Field stickRectLerpSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_stickRectLerpSpeed, put = __cordl_internal_set_stickRectLerpSpeed)) float_t stickRectLerpSpeed;

  /// @brief Field targetBounceRectScale, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_targetBounceRectScale, put = __cordl_internal_set_targetBounceRectScale)) float_t targetBounceRectScale;

  static inline ::GlobalNamespace::Joystick2D* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x3086c84, size 0x14, virtual false, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method OnDrag, addr 0x3086c98, size 0x194, virtual false, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method OnEndDrag, addr 0x3086e2c, size 0x5c, virtual false, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method SetJoystickValue, addr 0x3086a08, size 0xfc, virtual false, abstract: false, final false
  inline void SetJoystickValue(::UnityEngine::Vector2 value);

  /// @brief Method Start, addr 0x308666c, size 0x39c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3086b04, size 0x180, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <Start>b__14_0, addr 0x3086eb0, size 0x8c, virtual false, abstract: false, final false
  inline void _Start_b__14_0(::UnityEngine::EventSystems::BaseEventData* data);

  /// @brief Method <Start>b__14_1, addr 0x3086f3c, size 0x84, virtual false, abstract: false, final false
  inline void _Start_b__14_1(::UnityEngine::EventSystems::BaseEventData* data);

  /// @brief Method <Start>b__14_2, addr 0x3086fc0, size 0x80, virtual false, abstract: false, final false
  inline void _Start_b__14_2(::UnityEngine::EventSystems::BaseEventData* data);

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__joystickValue_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__joystickValue_k__BackingField();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_backgroundRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_backgroundRect();

  constexpr float_t const& __cordl_internal_get_bounceAmount() const;

  constexpr float_t& __cordl_internal_get_bounceAmount();

  constexpr float_t const& __cordl_internal_get_bounceLerpSpeed() const;

  constexpr float_t& __cordl_internal_get_bounceLerpSpeed();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_bounceRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_bounceRect();

  constexpr float_t const& __cordl_internal_get_maxStickMoveRatio() const;

  constexpr float_t& __cordl_internal_get_maxStickMoveRatio();

  constexpr ::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated*& __cordl_internal_get_onJoystickValueUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated*> const& __cordl_internal_get_onJoystickValueUpdatedCallbacks() const;

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_stickRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_stickRect();

  constexpr float_t const& __cordl_internal_get_stickRectLerpSpeed() const;

  constexpr float_t& __cordl_internal_get_stickRectLerpSpeed();

  constexpr float_t const& __cordl_internal_get_targetBounceRectScale() const;

  constexpr float_t& __cordl_internal_get_targetBounceRectScale();

  constexpr void __cordl_internal_set__joystickValue_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_backgroundRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_bounceAmount(float_t value);

  constexpr void __cordl_internal_set_bounceLerpSpeed(float_t value);

  constexpr void __cordl_internal_set_bounceRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_maxStickMoveRatio(float_t value);

  constexpr void __cordl_internal_set_onJoystickValueUpdatedCallbacks(::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated* value);

  constexpr void __cordl_internal_set_stickRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_stickRectLerpSpeed(float_t value);

  constexpr void __cordl_internal_set_targetBounceRectScale(float_t value);

  /// @brief Method .ctor, addr 0x3086e88, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_joystickValue, addr 0x308665c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_joystickValue();

  /// @brief Method set_joystickValue, addr 0x3086664, size 0x8, virtual false, abstract: false, final false
  inline void set_joystickValue(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Joystick2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Joystick2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Joystick2D(Joystick2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Joystick2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Joystick2D(Joystick2D const&) = delete;

  /// @brief Field backgroundRect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___backgroundRect;

  /// @brief Field stickRect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___stickRect;

  /// @brief Field stickRectLerpSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ___stickRectLerpSpeed;

  /// @brief Field maxStickMoveRatio, offset: 0x2c, size: 0x4, def value: None
  float_t ___maxStickMoveRatio;

  /// @brief Field bounceRect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___bounceRect;

  /// @brief Field bounceAmount, offset: 0x38, size: 0x4, def value: None
  float_t ___bounceAmount;

  /// @brief Field bounceLerpSpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ___bounceLerpSpeed;

  /// @brief Field targetBounceRectScale, offset: 0x40, size: 0x4, def value: None
  float_t ___targetBounceRectScale;

  /// @brief Field <joystickValue>k__BackingField, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____joystickValue_k__BackingField;

  /// @brief Field onJoystickValueUpdatedCallbacks, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated* ___onJoystickValueUpdatedCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Joystick2D, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___backgroundRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___stickRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___stickRectLerpSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___maxStickMoveRatio) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___bounceRect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___bounceAmount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___bounceLerpSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___targetBounceRectScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ____joystickValue_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Joystick2D, ___onJoystickValueUpdatedCallbacks) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Joystick2D);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Joystick2D*, "", "Joystick2D");
NEED_NO_BOX(::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Joystick2D__OnJoystickValueUpdated*, "", "Joystick2D/OnJoystickValueUpdated");
