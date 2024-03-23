#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DespawningItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GliderItem)
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class WindZone;
}
namespace GlobalNamespace {
class __GliderItem___TransitionTopOpennessCoroutine_d__43;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
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
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GliderItem;
}
namespace GlobalNamespace {
class __GliderItem___TransitionTopOpennessCoroutine_d__43;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GliderItem);
MARK_REF_PTR_T(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43);
// Type: ::<TransitionTopOpennessCoroutine>d__43
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GliderItem::<TransitionTopOpennessCoroutine>d__43*
class CORDL_TYPE __GliderItem___TransitionTopOpennessCoroutine_d__43 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GliderItem> __4__this;

  /// @brief Field <initialTopOpeness>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__initialTopOpeness_5__2, put = __cordl_internal_set__initialTopOpeness_5__2)) float_t _initialTopOpeness_5__2;

  /// @brief Field <p>5__3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field target, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) float_t target;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2aa1c84, size 0xd8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2aa1d5c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2aa1d64, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2aa1da4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2aa1c80, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::GliderItem> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GliderItem>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__initialTopOpeness_5__2() const;

  constexpr float_t& __cordl_internal_get__initialTopOpeness_5__2();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get_target() const;

  constexpr float_t& __cordl_internal_get_target();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GliderItem> value);

  constexpr void __cordl_internal_set__initialTopOpeness_5__2(float_t value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set_target(float_t value);

  /// @brief Method .ctor, addr 0x2aa1c20, size 0x28, virtual false, abstract: false, final false
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
  constexpr __GliderItem___TransitionTopOpennessCoroutine_d__43();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GliderItem___TransitionTopOpennessCoroutine_d__43", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GliderItem___TransitionTopOpennessCoroutine_d__43(__GliderItem___TransitionTopOpennessCoroutine_d__43&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GliderItem___TransitionTopOpennessCoroutine_d__43", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GliderItem___TransitionTopOpennessCoroutine_d__43(__GliderItem___TransitionTopOpennessCoroutine_d__43 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GliderItem> _____4__this;

  /// @brief Field target, offset: 0x28, size: 0x4, def value: None
  float_t ___target;

  /// @brief Field <initialTopOpeness>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____initialTopOpeness_5__2;

  /// @brief Field <p>5__3, offset: 0x30, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43, ____initialTopOpeness_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43, ____p_5__3) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GliderItem
// SizeInfo { instance_size: 456, native_size: -1, calculated_instance_size: 456, calculated_native_size: 456, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GliderItem*
class CORDL_TYPE GliderItem : public ::GlobalNamespace::DespawningItem {
public:
  // Declarations
  using _TransitionTopOpennessCoroutine_d__43 = ::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43;

  /// @brief Field activeLateralDrag, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_activeLateralDrag, put = __cordl_internal_set_activeLateralDrag)) float_t activeLateralDrag;

  /// @brief Field activeVerticalDrag, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_activeVerticalDrag, put = __cordl_internal_set_activeVerticalDrag)) float_t activeVerticalDrag;

  /// @brief Field ambientSoundKey, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_ambientSoundKey, put = __cordl_internal_set_ambientSoundKey))::StringW ambientSoundKey;

  /// @brief Field ambientSoundSource, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_ambientSoundSource, put = __cordl_internal_set_ambientSoundSource))::UnityW<::UnityEngine::AudioSource> ambientSoundSource;

  /// @brief Field boundingCenter, offset 0x1a0, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x1ac, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field catchWindPuppetSoundKey, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_catchWindPuppetSoundKey, put = __cordl_internal_set_catchWindPuppetSoundKey))::StringW catchWindPuppetSoundKey;

  /// @brief Field catchWindSoundKey, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_catchWindSoundKey, put = __cordl_internal_set_catchWindSoundKey))::StringW catchWindSoundKey;

  /// @brief Field closeSoundKey, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_closeSoundKey, put = __cordl_internal_set_closeSoundKey))::StringW closeSoundKey;

  /// @brief Field closeSoundSource, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_closeSoundSource, put = __cordl_internal_set_closeSoundSource))::UnityW<::UnityEngine::AudioSource> closeSoundSource;

  /// @brief Field curTopOpenness, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_curTopOpenness, put = __cordl_internal_set_curTopOpenness)) float_t curTopOpenness;

  /// @brief Field curTransitionTopOpennessCoroutine, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_curTransitionTopOpennessCoroutine,
                      put = __cordl_internal_set_curTransitionTopOpennessCoroutine))::UnityEngine::Coroutine* curTransitionTopOpennessCoroutine;

  /// @brief Field fallingVelocityActivateThreshold, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_fallingVelocityActivateThreshold, put = __cordl_internal_set_fallingVelocityActivateThreshold)) float_t fallingVelocityActivateThreshold;

  /// @brief Field fallingVelocityDeactivateThreshold, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_fallingVelocityDeactivateThreshold, put = __cordl_internal_set_fallingVelocityDeactivateThreshold)) float_t fallingVelocityDeactivateThreshold;

  /// @brief Field isActive, offset 0xf4, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field lastPositionWhileOpen, offset 0x13c, size 0xc
  __declspec(property(get = __cordl_internal_get_lastPositionWhileOpen, put = __cordl_internal_set_lastPositionWhileOpen))::UnityEngine::Vector3 lastPositionWhileOpen;

  /// @brief Field lastWindSoundPlayedTime, offset 0x1b8, size 0x4
  __declspec(property(get = __cordl_internal_get_lastWindSoundPlayedTime, put = __cordl_internal_set_lastWindSoundPlayedTime)) float_t lastWindSoundPlayedTime;

  /// @brief Field lastWindZone, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_lastWindZone, put = __cordl_internal_set_lastWindZone))::UnityW<::GlobalNamespace::WindZone> lastWindZone;

  /// @brief Field localPlayerWind, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_localPlayerWind, put = __cordl_internal_set_localPlayerWind))::UnityW<::UnityEngine::AudioSource> localPlayerWind;

  /// @brief Field localPlayerWindSoundKey, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_localPlayerWindSoundKey, put = __cordl_internal_set_localPlayerWindSoundKey))::StringW localPlayerWindSoundKey;

  /// @brief Field maxGlideForce, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_maxGlideForce, put = __cordl_internal_set_maxGlideForce)) float_t maxGlideForce;

  /// @brief Field maxTiltAngle, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_maxTiltAngle, put = __cordl_internal_set_maxTiltAngle)) float_t maxTiltAngle;

  /// @brief Field openSoundKey, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_openSoundKey, put = __cordl_internal_set_openSoundKey))::StringW openSoundKey;

  /// @brief Field openSoundSource, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_openSoundSource, put = __cordl_internal_set_openSoundSource))::UnityW<::UnityEngine::AudioSource> openSoundSource;

  /// @brief Field soundAnchor, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_soundAnchor, put = __cordl_internal_set_soundAnchor))::UnityW<::UnityEngine::Transform> soundAnchor;

  /// @brief Field topClosedScale, offset 0x12c, size 0xc
  __declspec(property(get = __cordl_internal_get_topClosedScale, put = __cordl_internal_set_topClosedScale))::UnityEngine::Vector3 topClosedScale;

  /// @brief Field topOpenScale, offset 0x120, size 0xc
  __declspec(property(get = __cordl_internal_get_topOpenScale, put = __cordl_internal_set_topOpenScale))::UnityEngine::Vector3 topOpenScale;

  /// @brief Field topTransform, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_topTransform, put = __cordl_internal_set_topTransform))::UnityW<::UnityEngine::Transform> topTransform;

  /// @brief Field totalDistanceTraveledWhileOpen, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_totalDistanceTraveledWhileOpen, put = __cordl_internal_set_totalDistanceTraveledWhileOpen)) float_t totalDistanceTraveledWhileOpen;

  /// @brief Field windSpeedToForceRatio, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_windSpeedToForceRatio, put = __cordl_internal_set_windSpeedToForceRatio)) float_t windSpeedToForceRatio;

  /// @brief Method DestroySelf, addr 0x2aa1380, size 0xd8, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method GetBounds, addr 0x2aa0d34, size 0x1c, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2aa0d50, size 0xd0, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::GliderItem* New_ctor();

  /// @brief Method OnDespawned, addr 0x2aa134c, size 0x30, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnFixedUpdate, addr 0x2aa1458, size 0x750, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2aa11fc, size 0xac, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW message);

  /// @brief Method SetActive, addr 0x2aa0e20, size 0x3dc, virtual false, abstract: false, final false
  inline void SetActive(bool newIsActive, bool instant);

  /// @brief Method SetTopOpenness, addr 0x2aa12a8, size 0x54, virtual false, abstract: false, final false
  inline void SetTopOpenness(float_t newTopOpenness);

  /// @brief Method TransitionTopOpenness, addr 0x2aa12fc, size 0x50, virtual false, abstract: false, final false
  inline void TransitionTopOpenness(float_t target);

  /// @brief Method TransitionTopOpennessCoroutine, addr 0x2aa1ba8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TransitionTopOpennessCoroutine(float_t target);

  constexpr float_t const& __cordl_internal_get_activeLateralDrag() const;

  constexpr float_t& __cordl_internal_get_activeLateralDrag();

  constexpr float_t const& __cordl_internal_get_activeVerticalDrag() const;

  constexpr float_t& __cordl_internal_get_activeVerticalDrag();

  constexpr ::StringW const& __cordl_internal_get_ambientSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_ambientSoundKey();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_ambientSoundSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_ambientSoundSource();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr ::StringW const& __cordl_internal_get_catchWindPuppetSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_catchWindPuppetSoundKey();

  constexpr ::StringW const& __cordl_internal_get_catchWindSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_catchWindSoundKey();

  constexpr ::StringW const& __cordl_internal_get_closeSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_closeSoundKey();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_closeSoundSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_closeSoundSource();

  constexpr float_t const& __cordl_internal_get_curTopOpenness() const;

  constexpr float_t& __cordl_internal_get_curTopOpenness();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curTransitionTopOpennessCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curTransitionTopOpennessCoroutine() const;

  constexpr float_t const& __cordl_internal_get_fallingVelocityActivateThreshold() const;

  constexpr float_t& __cordl_internal_get_fallingVelocityActivateThreshold();

  constexpr float_t const& __cordl_internal_get_fallingVelocityDeactivateThreshold() const;

  constexpr float_t& __cordl_internal_get_fallingVelocityDeactivateThreshold();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPositionWhileOpen() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPositionWhileOpen();

  constexpr float_t const& __cordl_internal_get_lastWindSoundPlayedTime() const;

  constexpr float_t& __cordl_internal_get_lastWindSoundPlayedTime();

  constexpr ::UnityW<::GlobalNamespace::WindZone> const& __cordl_internal_get_lastWindZone() const;

  constexpr ::UnityW<::GlobalNamespace::WindZone>& __cordl_internal_get_lastWindZone();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_localPlayerWind() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_localPlayerWind();

  constexpr ::StringW const& __cordl_internal_get_localPlayerWindSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_localPlayerWindSoundKey();

  constexpr float_t const& __cordl_internal_get_maxGlideForce() const;

  constexpr float_t& __cordl_internal_get_maxGlideForce();

  constexpr float_t const& __cordl_internal_get_maxTiltAngle() const;

  constexpr float_t& __cordl_internal_get_maxTiltAngle();

  constexpr ::StringW const& __cordl_internal_get_openSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_openSoundKey();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_openSoundSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_openSoundSource();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_soundAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_soundAnchor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_topClosedScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_topClosedScale();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_topOpenScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_topOpenScale();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_topTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_topTransform();

  constexpr float_t const& __cordl_internal_get_totalDistanceTraveledWhileOpen() const;

  constexpr float_t& __cordl_internal_get_totalDistanceTraveledWhileOpen();

  constexpr float_t const& __cordl_internal_get_windSpeedToForceRatio() const;

  constexpr float_t& __cordl_internal_get_windSpeedToForceRatio();

  constexpr void __cordl_internal_set_activeLateralDrag(float_t value);

  constexpr void __cordl_internal_set_activeVerticalDrag(float_t value);

  constexpr void __cordl_internal_set_ambientSoundKey(::StringW value);

  constexpr void __cordl_internal_set_ambientSoundSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_catchWindPuppetSoundKey(::StringW value);

  constexpr void __cordl_internal_set_catchWindSoundKey(::StringW value);

  constexpr void __cordl_internal_set_closeSoundKey(::StringW value);

  constexpr void __cordl_internal_set_closeSoundSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_curTopOpenness(float_t value);

  constexpr void __cordl_internal_set_curTransitionTopOpennessCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_fallingVelocityActivateThreshold(float_t value);

  constexpr void __cordl_internal_set_fallingVelocityDeactivateThreshold(float_t value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_lastPositionWhileOpen(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastWindSoundPlayedTime(float_t value);

  constexpr void __cordl_internal_set_lastWindZone(::UnityW<::GlobalNamespace::WindZone> value);

  constexpr void __cordl_internal_set_localPlayerWind(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_localPlayerWindSoundKey(::StringW value);

  constexpr void __cordl_internal_set_maxGlideForce(float_t value);

  constexpr void __cordl_internal_set_maxTiltAngle(float_t value);

  constexpr void __cordl_internal_set_openSoundKey(::StringW value);

  constexpr void __cordl_internal_set_openSoundSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_soundAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_topClosedScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_topOpenScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_topTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_totalDistanceTraveledWhileOpen(float_t value);

  constexpr void __cordl_internal_set_windSpeedToForceRatio(float_t value);

  /// @brief Method .ctor, addr 0x2aa1c48, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GliderItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GliderItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GliderItem(GliderItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GliderItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GliderItem(GliderItem const&) = delete;

  /// @brief Field maxTiltAngle, offset: 0xf0, size: 0x4, def value: None
  float_t ___maxTiltAngle;

  /// @brief Field isActive, offset: 0xf4, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field maxGlideForce, offset: 0xf8, size: 0x4, def value: None
  float_t ___maxGlideForce;

  /// @brief Field windSpeedToForceRatio, offset: 0xfc, size: 0x4, def value: None
  float_t ___windSpeedToForceRatio;

  /// @brief Field activeVerticalDrag, offset: 0x100, size: 0x4, def value: None
  float_t ___activeVerticalDrag;

  /// @brief Field activeLateralDrag, offset: 0x104, size: 0x4, def value: None
  float_t ___activeLateralDrag;

  /// @brief Field fallingVelocityActivateThreshold, offset: 0x108, size: 0x4, def value: None
  float_t ___fallingVelocityActivateThreshold;

  /// @brief Field fallingVelocityDeactivateThreshold, offset: 0x10c, size: 0x4, def value: None
  float_t ___fallingVelocityDeactivateThreshold;

  /// @brief Field curTopOpenness, offset: 0x110, size: 0x4, def value: None
  float_t ___curTopOpenness;

  /// @brief Field topTransform, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___topTransform;

  /// @brief Field topOpenScale, offset: 0x120, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___topOpenScale;

  /// @brief Field topClosedScale, offset: 0x12c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___topClosedScale;

  /// @brief Field totalDistanceTraveledWhileOpen, offset: 0x138, size: 0x4, def value: None
  float_t ___totalDistanceTraveledWhileOpen;

  /// @brief Field lastPositionWhileOpen, offset: 0x13c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPositionWhileOpen;

  /// @brief Field openSoundKey, offset: 0x148, size: 0x8, def value: None
  ::StringW ___openSoundKey;

  /// @brief Field openSoundSource, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___openSoundSource;

  /// @brief Field closeSoundKey, offset: 0x158, size: 0x8, def value: None
  ::StringW ___closeSoundKey;

  /// @brief Field closeSoundSource, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___closeSoundSource;

  /// @brief Field ambientSoundKey, offset: 0x168, size: 0x8, def value: None
  ::StringW ___ambientSoundKey;

  /// @brief Field ambientSoundSource, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___ambientSoundSource;

  /// @brief Field localPlayerWindSoundKey, offset: 0x178, size: 0x8, def value: None
  ::StringW ___localPlayerWindSoundKey;

  /// @brief Field localPlayerWind, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___localPlayerWind;

  /// @brief Field soundAnchor, offset: 0x188, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___soundAnchor;

  /// @brief Field catchWindSoundKey, offset: 0x190, size: 0x8, def value: None
  ::StringW ___catchWindSoundKey;

  /// @brief Field catchWindPuppetSoundKey, offset: 0x198, size: 0x8, def value: None
  ::StringW ___catchWindPuppetSoundKey;

  /// @brief Field boundingCenter, offset: 0x1a0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x1ac, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field lastWindZone, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::WindZone> ___lastWindZone;

  /// @brief Field lastWindSoundPlayedTime, offset: 0x1b8, size: 0x4, def value: None
  float_t ___lastWindSoundPlayedTime;

  /// @brief Field curTransitionTopOpennessCoroutine, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curTransitionTopOpennessCoroutine;

  /// @brief Field WIND_SOUND_PLAY_INTERVAL offset 0xffffffff size 0x4
  static constexpr float_t WIND_SOUND_PLAY_INTERVAL{ 0.3 };

  /// @brief Field activateMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString activateMessage{ u"activate" };

  /// @brief Field deactivateMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString deactivateMessage{ u"deactivate" };

  /// @brief Field transitionDuration offset 0xffffffff size 0x4
  static constexpr float_t transitionDuration{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GliderItem, 0x1c8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___maxTiltAngle) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___isActive) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___maxGlideForce) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___windSpeedToForceRatio) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___activeVerticalDrag) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___activeLateralDrag) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___fallingVelocityActivateThreshold) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___fallingVelocityDeactivateThreshold) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___curTopOpenness) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___topTransform) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___topOpenScale) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___topClosedScale) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___totalDistanceTraveledWhileOpen) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___lastPositionWhileOpen) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___openSoundKey) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___openSoundSource) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___closeSoundKey) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___closeSoundSource) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___ambientSoundKey) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___ambientSoundSource) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___localPlayerWindSoundKey) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___localPlayerWind) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___soundAnchor) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___catchWindSoundKey) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___catchWindPuppetSoundKey) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___boundingCenter) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___boundingRadius) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___lastWindZone) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___lastWindSoundPlayedTime) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderItem, ___curTransitionTopOpennessCoroutine) == 0x1c0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GliderItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GliderItem*, "", "GliderItem");
NEED_NO_BOX(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GliderItem___TransitionTopOpennessCoroutine_d__43*, "", "GliderItem/<TransitionTopOpennessCoroutine>d__43");
