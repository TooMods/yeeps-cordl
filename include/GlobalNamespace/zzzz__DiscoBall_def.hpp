#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscoBall)
namespace GlobalNamespace {
class __DiscoBall___TransitionScaleRoutine_d__12;
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
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class DiscoBall;
}
namespace GlobalNamespace {
class __DiscoBall___TransitionScaleRoutine_d__12;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DiscoBall);
MARK_REF_PTR_T(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12);
// Type: ::<TransitionScaleRoutine>d__12
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DiscoBall::<TransitionScaleRoutine>d__12*
class CORDL_TYPE __DiscoBall___TransitionScaleRoutine_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::DiscoBall> __4__this;

  /// @brief Field <p>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Field <startScale>5__3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__startScale_5__3, put = __cordl_internal_set__startScale_5__3)) float_t _startScale_5__3;

  /// @brief Field curve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::UnityEngine::AnimationCurve* curve;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field targetScale, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_targetScale, put = __cordl_internal_set_targetScale)) float_t targetScale;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xf3b5d4, size 0x1cc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xf3b7a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xf3b7a8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xf3b7e8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xf3b5d0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::DiscoBall> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::DiscoBall>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr float_t const& __cordl_internal_get__startScale_5__3() const;

  constexpr float_t& __cordl_internal_get__startScale_5__3();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_curve() const;

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr float_t const& __cordl_internal_get_targetScale() const;

  constexpr float_t& __cordl_internal_get_targetScale();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DiscoBall> value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  constexpr void __cordl_internal_set__startScale_5__3(float_t value);

  constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_targetScale(float_t value);

  /// @brief Method .ctor, addr 0xf3b598, size 0x28, virtual false, abstract: false, final false
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
  constexpr __DiscoBall___TransitionScaleRoutine_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiscoBall___TransitionScaleRoutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiscoBall___TransitionScaleRoutine_d__12(__DiscoBall___TransitionScaleRoutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiscoBall___TransitionScaleRoutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiscoBall___TransitionScaleRoutine_d__12(__DiscoBall___TransitionScaleRoutine_d__12 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DiscoBall> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field targetScale, offset: 0x2c, size: 0x4, def value: None
  float_t ___targetScale;

  /// @brief Field curve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___curve;

  /// @brief Field <p>5__2, offset: 0x38, size: 0x4, def value: None
  float_t ____p_5__2;

  /// @brief Field <startScale>5__3, offset: 0x3c, size: 0x4, def value: None
  float_t ____startScale_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, ___targetScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, ___curve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, ____p_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12, ____startScale_5__3) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DiscoBall
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DiscoBall*
class CORDL_TYPE DiscoBall : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _TransitionScaleRoutine_d__12 = ::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12;

  /// @brief Field discoBallMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_discoBallMaterial, put = __cordl_internal_set_discoBallMaterial))::UnityW<::UnityEngine::Material> discoBallMaterial;

  /// @brief Field spinSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_spinSpeed, put = __cordl_internal_set_spinSpeed)) float_t spinSpeed;

  /// @brief Field targetScale, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_targetScale, put = __cordl_internal_set_targetScale)) float_t targetScale;

  /// @brief Field transitionInCurve, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionInCurve, put = __cordl_internal_set_transitionInCurve))::UnityEngine::AnimationCurve* transitionInCurve;

  /// @brief Field transitionOutCurve, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionOutCurve, put = __cordl_internal_set_transitionOutCurve))::UnityEngine::AnimationCurve* transitionOutCurve;

  /// @brief Method DestroySelf, addr 0xf3b38c, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Initialize, addr 0xf3b220, size 0x150, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Color startColor);

  static inline ::GlobalNamespace::DiscoBall* New_ctor();

  /// @brief Method SetColor, addr 0xf3b370, size 0x1c, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method TransitionIn, addr 0xf3b444, size 0x9c, virtual false, abstract: false, final false
  inline void TransitionIn(float_t duration);

  /// @brief Method TransitionOut, addr 0xf3b56c, size 0x2c, virtual false, abstract: false, final false
  inline void TransitionOut(float_t duration);

  /// @brief Method TransitionScaleRoutine, addr 0xf3b4e0, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionScaleRoutine(float_t targetScale, ::UnityEngine::AnimationCurve* curve, float_t duration);

  /// @brief Method Update, addr 0xf3b3f8, size 0x4c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_discoBallMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_discoBallMaterial();

  constexpr float_t const& __cordl_internal_get_spinSpeed() const;

  constexpr float_t& __cordl_internal_get_spinSpeed();

  constexpr float_t const& __cordl_internal_get_targetScale() const;

  constexpr float_t& __cordl_internal_get_targetScale();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_transitionInCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_transitionInCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_transitionOutCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_transitionOutCurve() const;

  constexpr void __cordl_internal_set_discoBallMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_spinSpeed(float_t value);

  constexpr void __cordl_internal_set_targetScale(float_t value);

  constexpr void __cordl_internal_set_transitionInCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_transitionOutCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0xf3b5c0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscoBall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiscoBall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiscoBall(DiscoBall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiscoBall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiscoBall(DiscoBall const&) = delete;

  /// @brief Field transitionInCurve, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___transitionInCurve;

  /// @brief Field transitionOutCurve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___transitionOutCurve;

  /// @brief Field spinSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ___spinSpeed;

  /// @brief Field discoBallMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___discoBallMaterial;

  /// @brief Field targetScale, offset: 0x38, size: 0x4, def value: None
  float_t ___targetScale;

  /// @brief Field discoBallMaterialIndex offset 0xffffffff size 0x4
  static constexpr int32_t discoBallMaterialIndex{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiscoBall, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoBall, ___transitionInCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoBall, ___transitionOutCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoBall, ___spinSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoBall, ___discoBallMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DiscoBall, ___targetScale) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DiscoBall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiscoBall*, "", "DiscoBall");
NEED_NO_BOX(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DiscoBall___TransitionScaleRoutine_d__12*, "", "DiscoBall/<TransitionScaleRoutine>d__12");
