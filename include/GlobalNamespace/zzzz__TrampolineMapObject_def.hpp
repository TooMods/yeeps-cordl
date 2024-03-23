#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiRenderMapObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrampolineMapObject)
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
class __TrampolineMapObject___BounceRoutine_d__16;
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
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TrampolineMapObject;
}
namespace GlobalNamespace {
class __TrampolineMapObject___BounceRoutine_d__16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrampolineMapObject);
MARK_REF_PTR_T(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16);
// Type: ::<BounceRoutine>d__16
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TrampolineMapObject::<BounceRoutine>d__16*
class CORDL_TYPE __TrampolineMapObject___BounceRoutine_d__16 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::TrampolineMapObject> __4__this;

  /// @brief Field <deformPosition>5__4, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__deformPosition_5__4, put = __cordl_internal_set__deformPosition_5__4))::UnityEngine::Vector3 _deformPosition_5__4;

  /// @brief Field <deformScale>5__5, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get__deformScale_5__5, put = __cordl_internal_set__deformScale_5__5))::UnityEngine::Vector3 _deformScale_5__5;

  /// @brief Field <p>5__6, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__6, put = __cordl_internal_set__p_5__6)) float_t _p_5__6;

  /// @brief Field <startPosition>5__2, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__startPosition_5__2, put = __cordl_internal_set__startPosition_5__2))::UnityEngine::Vector3 _startPosition_5__2;

  /// @brief Field <startScale>5__3, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get__startScale_5__3, put = __cordl_internal_set__startScale_5__3))::UnityEngine::Vector3 _startScale_5__3;

  /// @brief Field bounceDirection, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_bounceDirection, put = __cordl_internal_set_bounceDirection))::UnityEngine::Vector3 bounceDirection;

  /// @brief Field bounceSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_bounceSize, put = __cordl_internal_set_bounceSize)) float_t bounceSize;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3085550, size 0x37c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x30858cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x30858d4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3085914, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x308554c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::TrampolineMapObject> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::TrampolineMapObject>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__deformPosition_5__4() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__deformPosition_5__4();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__deformScale_5__5() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__deformScale_5__5();

  constexpr float_t const& __cordl_internal_get__p_5__6() const;

  constexpr float_t& __cordl_internal_get__p_5__6();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition_5__2() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition_5__2();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale_5__3() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale_5__3();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bounceDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bounceDirection();

  constexpr float_t const& __cordl_internal_get_bounceSize() const;

  constexpr float_t& __cordl_internal_get_bounceSize();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TrampolineMapObject> value);

  constexpr void __cordl_internal_set__deformPosition_5__4(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__deformScale_5__5(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__p_5__6(float_t value);

  constexpr void __cordl_internal_set__startPosition_5__2(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startScale_5__3(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bounceDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bounceSize(float_t value);

  /// @brief Method .ctor, addr 0x3085514, size 0x28, virtual false, abstract: false, final false
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
  constexpr __TrampolineMapObject___BounceRoutine_d__16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrampolineMapObject___BounceRoutine_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrampolineMapObject___BounceRoutine_d__16(__TrampolineMapObject___BounceRoutine_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrampolineMapObject___BounceRoutine_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrampolineMapObject___BounceRoutine_d__16(__TrampolineMapObject___BounceRoutine_d__16 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TrampolineMapObject> _____4__this;

  /// @brief Field bounceDirection, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bounceDirection;

  /// @brief Field bounceSize, offset: 0x34, size: 0x4, def value: None
  float_t ___bounceSize;

  /// @brief Field <startPosition>5__2, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPosition_5__2;

  /// @brief Field <startScale>5__3, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startScale_5__3;

  /// @brief Field <deformPosition>5__4, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____deformPosition_5__4;

  /// @brief Field <deformScale>5__5, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____deformScale_5__5;

  /// @brief Field <p>5__6, offset: 0x68, size: 0x4, def value: None
  float_t ____p_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, ___bounceDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, ___bounceSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, ____startPosition_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, ____startScale_5__3) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, ____deformPosition_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, ____deformScale_5__5) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16, ____p_5__6) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrampolineMapObject
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TrampolineMapObject*
class CORDL_TYPE TrampolineMapObject : public ::GlobalNamespace::MultiRenderMapObject {
public:
  // Declarations
  using _BounceRoutine_d__16 = ::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16;

  /// @brief Field allowedBounceSoundTime, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_allowedBounceSoundTime, put = __cordl_internal_set_allowedBounceSoundTime)) float_t allowedBounceSoundTime;

  /// @brief Field anchorPosition, offset 0x100, size 0xc
  __declspec(property(get = __cordl_internal_get_anchorPosition, put = __cordl_internal_set_anchorPosition))::UnityEngine::Vector3 anchorPosition;

  /// @brief Field bounceCurve, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_bounceCurve, put = __cordl_internal_set_bounceCurve))::UnityEngine::AnimationCurve* bounceCurve;

  /// @brief Field bounceDuration, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_bounceDuration, put = __cordl_internal_set_bounceDuration)) float_t bounceDuration;

  /// @brief Field bounceSoundEffectKey, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_bounceSoundEffectKey, put = __cordl_internal_set_bounceSoundEffectKey))::StringW bounceSoundEffectKey;

  /// @brief Field curBounceRoutine, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_curBounceRoutine, put = __cordl_internal_set_curBounceRoutine))::UnityEngine::Coroutine* curBounceRoutine;

  /// @brief Field curBounceSize, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_curBounceSize, put = __cordl_internal_set_curBounceSize)) float_t curBounceSize;

  /// @brief Field maxBounceSize, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBounceSize, put = __cordl_internal_set_maxBounceSize)) float_t maxBounceSize;

  /// @brief Field onlyAllowUpwardBounces, offset 0xf4, size 0x1
  __declspec(property(get = __cordl_internal_get_onlyAllowUpwardBounces, put = __cordl_internal_set_onlyAllowUpwardBounces)) bool onlyAllowUpwardBounces;

  /// @brief Field velocityToBounceSizeRatio, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_velocityToBounceSizeRatio, put = __cordl_internal_set_velocityToBounceSizeRatio)) float_t velocityToBounceSizeRatio;

  /// @brief Method BounceRoutine, addr 0x3085484, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* BounceRoutine(float_t bounceSize, ::UnityEngine::Vector3 bounceDirection);

  /// @brief Method DoCollisionMessaging, addr 0x3085088, size 0x8, virtual true, abstract: false, final false
  inline bool DoCollisionMessaging();

  /// @brief Method Initialize, addr 0x3085028, size 0x60, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerUserID, bool placementPending, bool instant);

  static inline ::GlobalNamespace::TrampolineMapObject* New_ctor();

  /// @brief Method OnMasterPlayerCollided, addr 0x3085090, size 0x54, virtual true, abstract: false, final false
  inline void OnMasterPlayerCollided(::UnityEngine::Vector3 playerPosition, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method OnReceivePlayerCollided, addr 0x30850e4, size 0x3a0, virtual true, abstract: false, final false
  inline void OnReceivePlayerCollided(::StringW userID, ::UnityEngine::Vector3 relativeVelocity);

  constexpr float_t const& __cordl_internal_get_allowedBounceSoundTime() const;

  constexpr float_t& __cordl_internal_get_allowedBounceSoundTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_anchorPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_anchorPosition();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_bounceCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_bounceCurve() const;

  constexpr float_t const& __cordl_internal_get_bounceDuration() const;

  constexpr float_t& __cordl_internal_get_bounceDuration();

  constexpr ::StringW const& __cordl_internal_get_bounceSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_bounceSoundEffectKey();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curBounceRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curBounceRoutine() const;

  constexpr float_t const& __cordl_internal_get_curBounceSize() const;

  constexpr float_t& __cordl_internal_get_curBounceSize();

  constexpr float_t const& __cordl_internal_get_maxBounceSize() const;

  constexpr float_t& __cordl_internal_get_maxBounceSize();

  constexpr bool const& __cordl_internal_get_onlyAllowUpwardBounces() const;

  constexpr bool& __cordl_internal_get_onlyAllowUpwardBounces();

  constexpr float_t const& __cordl_internal_get_velocityToBounceSizeRatio() const;

  constexpr float_t& __cordl_internal_get_velocityToBounceSizeRatio();

  constexpr void __cordl_internal_set_allowedBounceSoundTime(float_t value);

  constexpr void __cordl_internal_set_anchorPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bounceCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_bounceDuration(float_t value);

  constexpr void __cordl_internal_set_bounceSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_curBounceRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curBounceSize(float_t value);

  constexpr void __cordl_internal_set_maxBounceSize(float_t value);

  constexpr void __cordl_internal_set_onlyAllowUpwardBounces(bool value);

  constexpr void __cordl_internal_set_velocityToBounceSizeRatio(float_t value);

  /// @brief Method .ctor, addr 0x308553c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrampolineMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrampolineMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrampolineMapObject(TrampolineMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrampolineMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrampolineMapObject(TrampolineMapObject const&) = delete;

  /// @brief Field velocityToBounceSizeRatio, offset: 0xe0, size: 0x4, def value: None
  float_t ___velocityToBounceSizeRatio;

  /// @brief Field maxBounceSize, offset: 0xe4, size: 0x4, def value: None
  float_t ___maxBounceSize;

  /// @brief Field bounceCurve, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___bounceCurve;

  /// @brief Field bounceDuration, offset: 0xf0, size: 0x4, def value: None
  float_t ___bounceDuration;

  /// @brief Field onlyAllowUpwardBounces, offset: 0xf4, size: 0x1, def value: None
  bool ___onlyAllowUpwardBounces;

  /// @brief Field bounceSoundEffectKey, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___bounceSoundEffectKey;

  /// @brief Field anchorPosition, offset: 0x100, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___anchorPosition;

  /// @brief Field curBounceSize, offset: 0x10c, size: 0x4, def value: None
  float_t ___curBounceSize;

  /// @brief Field curBounceRoutine, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curBounceRoutine;

  /// @brief Field allowedBounceSoundTime, offset: 0x118, size: 0x4, def value: None
  float_t ___allowedBounceSoundTime;

  /// @brief Field bounceSoundCooldown offset 0xffffffff size 0x4
  static constexpr float_t bounceSoundCooldown{ 0.1 };

  /// @brief Field minBounceVelocity offset 0xffffffff size 0x4
  static constexpr float_t minBounceVelocity{ 8.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrampolineMapObject, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___velocityToBounceSizeRatio) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___maxBounceSize) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___bounceCurve) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___bounceDuration) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___onlyAllowUpwardBounces) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___bounceSoundEffectKey) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___anchorPosition) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___curBounceSize) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___curBounceRoutine) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrampolineMapObject, ___allowedBounceSoundTime) == 0x118, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrampolineMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrampolineMapObject*, "", "TrampolineMapObject");
NEED_NO_BOX(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TrampolineMapObject___BounceRoutine_d__16*, "", "TrampolineMapObject/<BounceRoutine>d__16");
