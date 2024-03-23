#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RadioMapObject)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
class __RadioMapObject___StartPlayingOnDelay_d__14;
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
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RadioMapObject;
}
namespace GlobalNamespace {
class __RadioMapObject___StartPlayingOnDelay_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RadioMapObject);
MARK_REF_PTR_T(::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14);
// Type: ::<StartPlayingOnDelay>d__14
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RadioMapObject::<StartPlayingOnDelay>d__14*
class CORDL_TYPE __RadioMapObject___StartPlayingOnDelay_d__14 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::RadioMapObject> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3081834, size 0xdc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3081910, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3081918, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3081958, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3081830, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::RadioMapObject> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RadioMapObject>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RadioMapObject> value);

  /// @brief Method .ctor, addr 0x3081718, size 0x28, virtual false, abstract: false, final false
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
  constexpr __RadioMapObject___StartPlayingOnDelay_d__14();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RadioMapObject___StartPlayingOnDelay_d__14", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RadioMapObject___StartPlayingOnDelay_d__14(__RadioMapObject___StartPlayingOnDelay_d__14&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RadioMapObject___StartPlayingOnDelay_d__14", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RadioMapObject___StartPlayingOnDelay_d__14(__RadioMapObject___StartPlayingOnDelay_d__14 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RadioMapObject> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RadioMapObject
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 276, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RadioMapObject*
class CORDL_TYPE RadioMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  using _StartPlayingOnDelay_d__14 = ::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14;

  /// @brief Field audioSource, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_audioSource, put = __cordl_internal_set_audioSource))::UnityW<::UnityEngine::AudioSource> audioSource;

  /// @brief Field audioSourceMaxVolume, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_audioSourceMaxVolume, put = __cordl_internal_set_audioSourceMaxVolume)) float_t audioSourceMaxVolume;

  /// @brief Field hitSoundKey, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_hitSoundKey, put = __cordl_internal_set_hitSoundKey))::StringW hitSoundKey;

  /// @brief Field isRegistered, offset 0x104, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field lastHitTime, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_lastHitTime, put = __cordl_internal_set_lastHitTime)) float_t lastHitTime;

  /// @brief Field nextValidRequestTime, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_nextValidRequestTime, put = __cordl_internal_set_nextValidRequestTime)) float_t nextValidRequestTime;

  /// @brief Field playButton, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_playButton, put = __cordl_internal_set_playButton))::UnityW<::GlobalNamespace::SimpleButtonController> playButton;

  /// @brief Field startPlayingRoutine, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_startPlayingRoutine, put = __cordl_internal_set_startPlayingRoutine))::UnityEngine::Coroutine* startPlayingRoutine;

  /// @brief Field stopButton, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_stopButton, put = __cordl_internal_set_stopButton))::UnityW<::GlobalNamespace::SimpleButtonController> stopButton;

  /// @brief Method Initialize, addr 0x3080dd4, size 0x2e0, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerAccountID, bool placementPending, bool instant);

  /// @brief Method IsStuffed, addr 0x308181c, size 0x8, virtual true, abstract: false, final false
  inline bool IsStuffed();

  /// @brief Method IsTriggeredInsteadOfDestroyedOnHit, addr 0x3081824, size 0x8, virtual true, abstract: false, final false
  inline bool IsTriggeredInsteadOfDestroyedOnHit();

  static inline ::GlobalNamespace::RadioMapObject* New_ctor();

  /// @brief Method OnHit, addr 0x3081740, size 0xbc, virtual true, abstract: false, final false
  inline bool OnHit();

  /// @brief Method OnHit, addr 0x30817fc, size 0x10, virtual true, abstract: false, final false
  inline bool OnHit(::UnityEngine::Vector3 dropVelocity);

  /// @brief Method OnHitAndCollect, addr 0x308180c, size 0x10, virtual true, abstract: false, final false
  inline bool OnHitAndCollect();

  /// @brief Method OnIsRadioPlayingUpdated, addr 0x30810dc, size 0x1dc, virtual false, abstract: false, final false
  inline void OnIsRadioPlayingUpdated(bool newIsRadioPlaying);

  /// @brief Method OnPlayButtonPressed, addr 0x3081538, size 0x6c, virtual false, abstract: false, final false
  inline void OnPlayButtonPressed();

  /// @brief Method OnRadioVolumeUpdated, addr 0x30810b4, size 0x28, virtual false, abstract: false, final false
  inline void OnRadioVolumeUpdated(float_t newVolume);

  /// @brief Method OnStopButtonPressed, addr 0x3081494, size 0xa4, virtual false, abstract: false, final false
  inline void OnStopButtonPressed();

  /// @brief Method PrepareForDestroy, addr 0x30812b8, size 0x1dc, virtual true, abstract: false, final false
  inline void PrepareForDestroy();

  /// @brief Method StartPlayingOnDelay, addr 0x30815a4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* StartPlayingOnDelay();

  /// @brief Method TogglePlaying, addr 0x308160c, size 0x10c, virtual false, abstract: false, final false
  inline void TogglePlaying();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource();

  constexpr float_t const& __cordl_internal_get_audioSourceMaxVolume() const;

  constexpr float_t& __cordl_internal_get_audioSourceMaxVolume();

  constexpr ::StringW const& __cordl_internal_get_hitSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_hitSoundKey();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr float_t const& __cordl_internal_get_lastHitTime() const;

  constexpr float_t& __cordl_internal_get_lastHitTime();

  constexpr float_t const& __cordl_internal_get_nextValidRequestTime() const;

  constexpr float_t& __cordl_internal_get_nextValidRequestTime();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_playButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_playButton();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_startPlayingRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_startPlayingRoutine() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_stopButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_stopButton();

  constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_audioSourceMaxVolume(float_t value);

  constexpr void __cordl_internal_set_hitSoundKey(::StringW value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_lastHitTime(float_t value);

  constexpr void __cordl_internal_set_nextValidRequestTime(float_t value);

  constexpr void __cordl_internal_set_playButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_startPlayingRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_stopButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  /// @brief Method .ctor, addr 0x308182c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RadioMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RadioMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RadioMapObject(RadioMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RadioMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RadioMapObject(RadioMapObject const&) = delete;

  /// @brief Field stopButton, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___stopButton;

  /// @brief Field playButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___playButton;

  /// @brief Field audioSource, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___audioSource;

  /// @brief Field audioSourceMaxVolume, offset: 0xf0, size: 0x4, def value: None
  float_t ___audioSourceMaxVolume;

  /// @brief Field hitSoundKey, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___hitSoundKey;

  /// @brief Field nextValidRequestTime, offset: 0x100, size: 0x4, def value: None
  float_t ___nextValidRequestTime;

  /// @brief Field isRegistered, offset: 0x104, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field startPlayingRoutine, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___startPlayingRoutine;

  /// @brief Field lastHitTime, offset: 0x110, size: 0x4, def value: None
  float_t ___lastHitTime;

  /// @brief Field HIT_COOOLDOWN offset 0xffffffff size 0x4
  static constexpr float_t HIT_COOOLDOWN{ 0.5 };

  /// @brief Field minTimeBetweenRequests offset 0xffffffff size 0x4
  static constexpr float_t minTimeBetweenRequests{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RadioMapObject, 0x118>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___stopButton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___playButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___audioSource) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___audioSourceMaxVolume) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___hitSoundKey) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___nextValidRequestTime) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___isRegistered) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___startPlayingRoutine) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioMapObject, ___lastHitTime) == 0x110, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RadioMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RadioMapObject*, "", "RadioMapObject");
NEED_NO_BOX(::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RadioMapObject___StartPlayingOnDelay_d__14*, "", "RadioMapObject/<StartPlayingOnDelay>d__14");
