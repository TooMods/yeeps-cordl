#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SoundEffectManager)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class __SoundEffectManager__OnSourceDestroyed;
}
namespace GlobalNamespace {
class __SoundEffectManager__SoundEffectData;
}
namespace GlobalNamespace {
struct __SoundEffectManager__SoundEffectDestroyData;
}
namespace GlobalNamespace {
class __SoundEffectManager___FadeSoundSequence_d__16;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SoundEffectManager;
}
namespace GlobalNamespace {
class __SoundEffectManager__OnSourceDestroyed;
}
namespace GlobalNamespace {
class __SoundEffectManager__SoundEffectData;
}
namespace GlobalNamespace {
class __SoundEffectManager___FadeSoundSequence_d__16;
}
namespace GlobalNamespace {
struct __SoundEffectManager__SoundEffectDestroyData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SoundEffectManager);
MARK_REF_PTR_T(::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed);
MARK_REF_PTR_T(::GlobalNamespace::__SoundEffectManager__SoundEffectData);
MARK_REF_PTR_T(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16);
MARK_VAL_T(::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData);
// Type: ::SoundEffectData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SoundEffectManager::SoundEffectData*
class CORDL_TYPE __SoundEffectManager__SoundEffectData : public ::System::Object {
public:
  // Declarations
  /// @brief Field alternateClips, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_alternateClips,
                      put = __cordl_internal_set_alternateClips))::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> alternateClips;

  /// @brief Field clip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_clip, put = __cordl_internal_set_clip))::UnityW<::UnityEngine::AudioClip> clip;

  /// @brief Field customPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_customPrefab, put = __cordl_internal_set_customPrefab))::UnityW<::UnityEngine::GameObject> customPrefab;

  /// @brief Field fallOffMultiplier, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_fallOffMultiplier, put = __cordl_internal_set_fallOffMultiplier)) float_t fallOffMultiplier;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::StringW key;

  /// @brief Field pitch, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_pitch, put = __cordl_internal_set_pitch)) float_t pitch;

  /// @brief Field refSoundKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_refSoundKey, put = __cordl_internal_set_refSoundKey))::StringW refSoundKey;

  /// @brief Field spatialBlend, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialBlend, put = __cordl_internal_set_spatialBlend)) float_t spatialBlend;

  /// @brief Field spread, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_spread, put = __cordl_internal_set_spread)) float_t spread;

  /// @brief Field volume, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_volume, put = __cordl_internal_set_volume)) float_t volume;

  /// @brief Method ApplyClipTo, addr 0x143d304, size 0x108, virtual false, abstract: false, final false
  inline void ApplyClipTo(::UnityEngine::AudioSource* audioSource, int32_t randomSeed);

  /// @brief Method ApplyProperties, addr 0x143d40c, size 0xa8, virtual false, abstract: false, final false
  inline void ApplyProperties(::UnityEngine::AudioSource* audioSource);

  static inline ::GlobalNamespace::__SoundEffectManager__SoundEffectData* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get_alternateClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get_alternateClips();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_clip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_clip();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_customPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_customPrefab();

  constexpr float_t const& __cordl_internal_get_fallOffMultiplier() const;

  constexpr float_t& __cordl_internal_get_fallOffMultiplier();

  constexpr ::StringW const& __cordl_internal_get_key() const;

  constexpr ::StringW& __cordl_internal_get_key();

  constexpr float_t const& __cordl_internal_get_pitch() const;

  constexpr float_t& __cordl_internal_get_pitch();

  constexpr ::StringW const& __cordl_internal_get_refSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_refSoundKey();

  constexpr float_t const& __cordl_internal_get_spatialBlend() const;

  constexpr float_t& __cordl_internal_get_spatialBlend();

  constexpr float_t const& __cordl_internal_get_spread() const;

  constexpr float_t& __cordl_internal_get_spread();

  constexpr float_t const& __cordl_internal_get_volume() const;

  constexpr float_t& __cordl_internal_get_volume();

  constexpr void __cordl_internal_set_alternateClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_customPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_fallOffMultiplier(float_t value);

  constexpr void __cordl_internal_set_key(::StringW value);

  constexpr void __cordl_internal_set_pitch(float_t value);

  constexpr void __cordl_internal_set_refSoundKey(::StringW value);

  constexpr void __cordl_internal_set_spatialBlend(float_t value);

  constexpr void __cordl_internal_set_spread(float_t value);

  constexpr void __cordl_internal_set_volume(float_t value);

  /// @brief Method .ctor, addr 0x143f0e0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SoundEffectManager__SoundEffectData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SoundEffectManager__SoundEffectData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SoundEffectManager__SoundEffectData(__SoundEffectManager__SoundEffectData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SoundEffectManager__SoundEffectData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SoundEffectManager__SoundEffectData(__SoundEffectManager__SoundEffectData const&) = delete;

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::StringW ___key;

  /// @brief Field clip, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___clip;

  /// @brief Field alternateClips, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ___alternateClips;

  /// @brief Field refSoundKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___refSoundKey;

  /// @brief Field customPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___customPrefab;

  /// @brief Field volume, offset: 0x38, size: 0x4, def value: None
  float_t ___volume;

  /// @brief Field pitch, offset: 0x3c, size: 0x4, def value: None
  float_t ___pitch;

  /// @brief Field spatialBlend, offset: 0x40, size: 0x4, def value: None
  float_t ___spatialBlend;

  /// @brief Field fallOffMultiplier, offset: 0x44, size: 0x4, def value: None
  float_t ___fallOffMultiplier;

  /// @brief Field spread, offset: 0x48, size: 0x4, def value: None
  float_t ___spread;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SoundEffectManager__SoundEffectData, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___clip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___alternateClips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___refSoundKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___customPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___volume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___pitch) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___spatialBlend) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___fallOffMultiplier) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectData, ___spread) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSourceDestroyed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SoundEffectManager::OnSourceDestroyed*
class CORDL_TYPE __SoundEffectManager__OnSourceDestroyed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x143f1cc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x143f1ec, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x143f1b8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x143f0fc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SoundEffectManager__OnSourceDestroyed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SoundEffectManager__OnSourceDestroyed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SoundEffectManager__OnSourceDestroyed(__SoundEffectManager__OnSourceDestroyed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SoundEffectManager__OnSourceDestroyed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SoundEffectManager__OnSourceDestroyed(__SoundEffectManager__OnSourceDestroyed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SoundEffectDestroyData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SoundEffectManager::SoundEffectDestroyData
struct CORDL_TYPE __SoundEffectManager__SoundEffectDestroyData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x143e95c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioSource* source, float_t destroyTime, float_t fadeTime, ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* onSourceDestroyed);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SoundEffectManager__SoundEffectDestroyData();

  // Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: None }, CppParam { name: "destroyTime", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "fadeTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "onSourceDestroyed", ty: "::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*",
  // modifiers: "", def_value: None }]
  constexpr __SoundEffectManager__SoundEffectDestroyData(::UnityW<::UnityEngine::AudioSource> source, float_t destroyTime, float_t fadeTime,
                                                         ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* onSourceDestroyed) noexcept;

  /// @brief Field source, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> source;

  /// @brief Field destroyTime, offset: 0x8, size: 0x4, def value: None
  float_t destroyTime;

  /// @brief Field fadeTime, offset: 0xc, size: 0x4, def value: None
  float_t fadeTime;

  /// @brief Field onSourceDestroyed, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* onSourceDestroyed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData, destroyTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData, fadeTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData, onSourceDestroyed) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FadeSoundSequence>d__16
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SoundEffectManager::<FadeSoundSequence>d__16*
class CORDL_TYPE __SoundEffectManager___FadeSoundSequence_d__16 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <p>5__2, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Field audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_audioSource, put = __cordl_internal_set_audioSource))::UnityW<::UnityEngine::AudioSource> audioSource;

  /// @brief Field duration, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field startVolume, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_startVolume, put = __cordl_internal_set_startVolume)) float_t startVolume;

  /// @brief Field targetVolume, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_targetVolume, put = __cordl_internal_set_targetVolume)) float_t targetVolume;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x143f1fc, size 0x184, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x143f380, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x143f388, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x143f3c8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x143f1f8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr float_t const& __cordl_internal_get_startVolume() const;

  constexpr float_t& __cordl_internal_get_startVolume();

  constexpr float_t const& __cordl_internal_get_targetVolume() const;

  constexpr float_t& __cordl_internal_get_targetVolume();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_startVolume(float_t value);

  constexpr void __cordl_internal_set_targetVolume(float_t value);

  /// @brief Method .ctor, addr 0x143dae0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __SoundEffectManager___FadeSoundSequence_d__16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SoundEffectManager___FadeSoundSequence_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SoundEffectManager___FadeSoundSequence_d__16(__SoundEffectManager___FadeSoundSequence_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SoundEffectManager___FadeSoundSequence_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SoundEffectManager___FadeSoundSequence_d__16(__SoundEffectManager___FadeSoundSequence_d__16 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___audioSource;

  /// @brief Field startVolume, offset: 0x28, size: 0x4, def value: None
  float_t ___startVolume;

  /// @brief Field duration, offset: 0x2c, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field targetVolume, offset: 0x30, size: 0x4, def value: None
  float_t ___targetVolume;

  /// @brief Field <p>5__2, offset: 0x34, size: 0x4, def value: None
  float_t ____p_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16, ___startVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16, ___duration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16, ___targetVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16, ____p_5__2) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SoundEffectManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SoundEffectManager*
class CORDL_TYPE SoundEffectManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::SoundEffectManager>> {
public:
  // Declarations
  using OnSourceDestroyed = ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed;

  using SoundEffectData = ::GlobalNamespace::__SoundEffectManager__SoundEffectData;

  using SoundEffectDestroyData = ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData;

  using _FadeSoundSequence_d__16 = ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16;

  /// @brief Field curGroundFootstepKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_curGroundFootstepKey, put = setStaticF_curGroundFootstepKey))::StringW curGroundFootstepKey;

  /// @brief Field queuedDestroyAudioSources, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_queuedDestroyAudioSources, put = __cordl_internal_set_queuedDestroyAudioSources))::System::Collections::Generic::Dictionary_2<
      int32_t, ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>* queuedDestroyAudioSources;

  /// @brief Field soundEffectDatas, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_soundEffectDatas,
                      put = __cordl_internal_set_soundEffectDatas))::ArrayW<::GlobalNamespace::__SoundEffectManager__SoundEffectData*,
                                                                            ::Array<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*> soundEffectDatas;

  /// @brief Field soundEffectPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_soundEffectPrefab, put = __cordl_internal_set_soundEffectPrefab))::UnityW<::UnityEngine::GameObject> soundEffectPrefab;

  /// @brief Field soundEffects, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_soundEffects,
                             put = setStaticF_soundEffects))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SoundEffectManager__SoundEffectData*>* soundEffects;

  /// @brief Method CancelDestroySound, addr 0x143e96c, size 0x58, virtual false, abstract: false, final false
  inline void CancelDestroySound(int32_t id);

  /// @brief Method CreateAudioSource, addr 0x143cef8, size 0x40c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> CreateAudioSource(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, bool loop, float_t volumeMultiplier,
                                                                float_t pitchMultiplier, int32_t randomSeed);

  /// @brief Method FadeInSound, addr 0x143d8ec, size 0x168, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> FadeInSound(::StringW key, float_t duration, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, bool loop);

  /// @brief Method FadeOutSound, addr 0x143db08, size 0xf8, virtual false, abstract: false, final false
  inline void FadeOutSound(::UnityEngine::AudioSource* source, float_t duration);

  /// @brief Method FadeSoundSequence, addr 0x143da54, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeSoundSequence(::UnityEngine::AudioSource* audioSource, float_t duration, float_t startVolume, float_t targetVolume);

  /// @brief Method GenerateRandomSeed, addr 0x143cee8, size 0x10, virtual false, abstract: false, final false
  inline int32_t GenerateRandomSeed();

  /// @brief Method GetSoundVolume, addr 0x143ee80, size 0x1d0, virtual false, abstract: false, final false
  inline float_t GetSoundVolume(::StringW key);

  /// @brief Method InitializeSoundEffects, addr 0x143cc64, size 0x118, virtual false, abstract: false, final false
  inline void InitializeSoundEffects();

  static inline ::GlobalNamespace::SoundEffectManager* New_ctor();

  /// @brief Method OnReceivePlaySoundEffect, addr 0x143e500, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> OnReceivePlaySoundEffect(::StringW key, ::UnityEngine::Vector3 position, float_t volumeMultiplier, float_t pitchMultiplier, int32_t randomSeed);

  /// @brief Method OnRoomLoaded, addr 0x143e518, size 0xc4, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* newRoom);

  /// @brief Method PlayFootstepSound, addr 0x143e5dc, size 0x284, virtual false, abstract: false, final false
  inline void PlayFootstepSound(::UnityEngine::Vector3 position, ::GlobalNamespace::MapObject* hitMapObject, ::UnityEngine::Collider* hitCollider, ::UnityEngine::Vector3 velocity,
                                float_t pitchMultiplier, bool shouldNetwork);

  /// @brief Method PlayLinkedSound, addr 0x143e200, size 0x24c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlayLinkedSound(::StringW key, ::UnityEngine::AudioSource* linkedSound, bool loop, float_t volumeMultiplier, float_t pitchMultiplier);

  /// @brief Method PlayLoopingSound, addr 0x143d858, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlayLoopingSound(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor);

  /// @brief Method PlayPersistentSound, addr 0x143d740, size 0x118, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlayPersistentSound(::StringW soundKey, ::UnityEngine::Vector3 position);

  /// @brief Method PlayRemoteOnlySound, addr 0x143e44c, size 0xb4, virtual false, abstract: false, final false
  inline void PlayRemoteOnlySound(::StringW key, ::UnityEngine::Vector3 position, float_t volumeMultiplier, float_t pitchMultiplier);

  /// @brief Method PlaySound, addr 0x143d69c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlaySound(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, bool shouldNetwork);

  /// @brief Method PlaySoundAtTimeOffset, addr 0x143df80, size 0x280, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlaySoundAtTimeOffset(::StringW key, float_t timeOffset, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor);

  /// @brief Method PlaySoundHelper, addr 0x143d4b4, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlaySoundHelper(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, bool loop, float_t volumeMultiplier,
                                                              float_t pitchMultiplier, bool playOnCreate, int32_t randomSeed, bool shouldNetwork);

  /// @brief Method PlaySoundOnDelay, addr 0x143dc00, size 0x160, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlaySoundOnDelay(::StringW key, float_t delay, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, bool loop);

  /// @brief Method PlaySoundWithRandomPitch, addr 0x143dd60, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlaySoundWithRandomPitch(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, float_t minPitch, float_t maxPitch,
                                                                       float_t volumeMultiplier, bool shouldNetwork);

  /// @brief Method PlaySoundWithRandomPitch, addr 0x143de2c, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlaySoundWithRandomPitch(::StringW key, ::UnityEngine::Vector3 position, float_t minPitch, float_t maxPitch, float_t volumeMultiplier,
                                                                       bool shouldNetwork);

  /// @brief Method PlaySoundWithVolumeMultiplier, addr 0x143dee8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> PlaySoundWithVolumeMultiplier(::StringW key, ::UnityEngine::Vector3 position, float_t volumeMultiplier, bool shouldNetwork);

  /// @brief Method QueueDestroySound, addr 0x143e860, size 0xfc, virtual false, abstract: false, final false
  inline int32_t QueueDestroySound(::UnityEngine::AudioSource* source, float_t delay, ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* onSourceDestroyed, float_t fadeTime);

  /// @brief Method Start, addr 0x143cd7c, size 0x16c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x143e9c4, size 0x4bc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>*& __cordl_internal_get_queuedDestroyAudioSources();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>*> const&
  __cordl_internal_get_queuedDestroyAudioSources() const;

  constexpr ::ArrayW<::GlobalNamespace::__SoundEffectManager__SoundEffectData*, ::Array<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*> const&
  __cordl_internal_get_soundEffectDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__SoundEffectManager__SoundEffectData*, ::Array<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*>& __cordl_internal_get_soundEffectDatas();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_soundEffectPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_soundEffectPrefab();

  constexpr void __cordl_internal_set_queuedDestroyAudioSources(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>* value);

  constexpr void __cordl_internal_set_soundEffectDatas(::ArrayW<::GlobalNamespace::__SoundEffectManager__SoundEffectData*, ::Array<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*> value);

  constexpr void __cordl_internal_set_soundEffectPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x143f050, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_curGroundFootstepKey();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SoundEffectManager__SoundEffectData*>* getStaticF_soundEffects();

  /// @brief Method get_hasInitializedSoundEffects, addr 0x143cc14, size 0x50, virtual false, abstract: false, final false
  static inline bool get_hasInitializedSoundEffects();

  static inline void setStaticF_curGroundFootstepKey(::StringW value);

  static inline void setStaticF_soundEffects(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SoundEffectManager__SoundEffectData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoundEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoundEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoundEffectManager(SoundEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoundEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoundEffectManager(SoundEffectManager const&) = delete;

  /// @brief Field soundEffectPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___soundEffectPrefab;

  /// @brief Field soundEffectDatas, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SoundEffectManager__SoundEffectData*, ::Array<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*> ___soundEffectDatas;

  /// @brief Field queuedDestroyAudioSources, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>* ___queuedDestroyAudioSources;

  /// @brief Field DEFAULT_MAP_OBJECT_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_MAP_OBJECT_SOUND_KEY{ u"footstepDefault" };

  /// @brief Field QUIET_FOOTSTEP_MULTIPLIER offset 0xffffffff size 0x4
  static constexpr float_t QUIET_FOOTSTEP_MULTIPLIER{ 0.1 };

  /// @brief Field VELOCITY_FOR_MAX_SOUND offset 0xffffffff size 0x4
  static constexpr float_t VELOCITY_FOR_MAX_SOUND{ 4.0 };

  /// @brief Field VELOCITY_RATIO_FOR_NO_SOUND offset 0xffffffff size 0x4
  static constexpr float_t VELOCITY_RATIO_FOR_NO_SOUND{ 0.2 };

  /// @brief Field soundEffectVolume offset 0xffffffff size 0x4
  static constexpr float_t soundEffectVolume{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoundEffectManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffectManager, ___soundEffectPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffectManager, ___soundEffectDatas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffectManager, ___queuedDestroyAudioSources) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SoundEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoundEffectManager*, "", "SoundEffectManager");
NEED_NO_BOX(::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*, "", "SoundEffectManager/OnSourceDestroyed");
NEED_NO_BOX(::GlobalNamespace::__SoundEffectManager__SoundEffectData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SoundEffectManager__SoundEffectData*, "", "SoundEffectManager/SoundEffectData");
NEED_NO_BOX(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*, "", "SoundEffectManager/<FadeSoundSequence>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData, "", "SoundEffectManager/SoundEffectDestroyData");
