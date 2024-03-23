#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfettiCannon)
namespace GlobalNamespace {
class __ConfettiCannon___DoScaleRoutine_d__5;
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
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ConfettiCannon;
}
namespace GlobalNamespace {
class __ConfettiCannon___DoScaleRoutine_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConfettiCannon);
MARK_REF_PTR_T(::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5);
// Type: ::<DoScaleRoutine>d__5
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConfettiCannon::<DoScaleRoutine>d__5*
class CORDL_TYPE __ConfettiCannon___DoScaleRoutine_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::ConfettiCannon> __4__this;

  /// @brief Field <p>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xf3b094, size 0x13c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xf3b1d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xf3b1d8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xf3b218, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0xf3b090, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ConfettiCannon> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ConfettiCannon>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ConfettiCannon> value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  /// @brief Method .ctor, addr 0xf3b060, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ConfettiCannon___DoScaleRoutine_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConfettiCannon___DoScaleRoutine_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConfettiCannon___DoScaleRoutine_d__5(__ConfettiCannon___DoScaleRoutine_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConfettiCannon___DoScaleRoutine_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConfettiCannon___DoScaleRoutine_d__5(__ConfettiCannon___DoScaleRoutine_d__5 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ConfettiCannon> _____4__this;

  /// @brief Field <p>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____p_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5, ____p_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConfettiCannon
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConfettiCannon*
class CORDL_TYPE ConfettiCannon : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DoScaleRoutine_d__5 = ::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5;

  /// @brief Field particles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_particles, put = __cordl_internal_set_particles))::UnityW<::UnityEngine::ParticleSystem> particles;

  /// @brief Field scaleAmount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleAmount, put = __cordl_internal_set_scaleAmount)) float_t scaleAmount;

  /// @brief Field scaleCurve, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleCurve, put = __cordl_internal_set_scaleCurve))::UnityEngine::AnimationCurve* scaleCurve;

  /// @brief Field scaleDuration, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleDuration, put = __cordl_internal_set_scaleDuration)) float_t scaleDuration;

  /// @brief Method DoScaleRoutine, addr 0xf3aff8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoScaleRoutine();

  /// @brief Method Fire, addr 0xf3afc0, size 0x38, virtual false, abstract: false, final false
  inline void Fire();

  static inline ::GlobalNamespace::ConfettiCannon* New_ctor();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles();

  constexpr float_t const& __cordl_internal_get_scaleAmount() const;

  constexpr float_t& __cordl_internal_get_scaleAmount();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_scaleCurve() const;

  constexpr float_t const& __cordl_internal_get_scaleDuration() const;

  constexpr float_t& __cordl_internal_get_scaleDuration();

  constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_scaleAmount(float_t value);

  constexpr void __cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_scaleDuration(float_t value);

  /// @brief Method .ctor, addr 0xf3b088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfettiCannon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfettiCannon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfettiCannon(ConfettiCannon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfettiCannon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfettiCannon(ConfettiCannon const&) = delete;

  /// @brief Field particles, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___particles;

  /// @brief Field scaleCurve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleCurve;

  /// @brief Field scaleAmount, offset: 0x28, size: 0x4, def value: None
  float_t ___scaleAmount;

  /// @brief Field scaleDuration, offset: 0x2c, size: 0x4, def value: None
  float_t ___scaleDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConfettiCannon, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfettiCannon, ___particles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfettiCannon, ___scaleCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfettiCannon, ___scaleAmount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfettiCannon, ___scaleDuration) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConfettiCannon);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConfettiCannon*, "", "ConfettiCannon");
NEED_NO_BOX(::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConfettiCannon___DoScaleRoutine_d__5*, "", "ConfettiCannon/<DoScaleRoutine>d__5");
