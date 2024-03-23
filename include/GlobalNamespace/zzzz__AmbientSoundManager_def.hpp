#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AmbientSoundManager_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbientSoundManager)
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
struct __AmbientSoundManager__AmbientBackgroundSoundData;
}
namespace GlobalNamespace {
struct __AmbientSoundManager__AmbientSoundSet;
}
namespace GlobalNamespace {
struct __AmbientSoundManager__AmbientTriggeredSoundData;
}
namespace GlobalNamespace {
class __AmbientSoundManager___FadeInSound_d__33;
}
namespace GlobalNamespace {
class __AmbientSoundManager___FadeOutSound_d__34;
}
namespace GlobalNamespace {
class __AmbientSoundManager___HandleLoopedTriggeredSound_d__39;
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
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AmbientSoundManager;
}
namespace GlobalNamespace {
class __AmbientSoundManager___FadeInSound_d__33;
}
namespace GlobalNamespace {
class __AmbientSoundManager___FadeOutSound_d__34;
}
namespace GlobalNamespace {
class __AmbientSoundManager___HandleLoopedTriggeredSound_d__39;
}
namespace GlobalNamespace {
struct __AmbientSoundManager__AmbientBackgroundSoundData;
}
namespace GlobalNamespace {
struct __AmbientSoundManager__AmbientSoundSet;
}
namespace GlobalNamespace {
struct __AmbientSoundManager__AmbientTriggeredSoundData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AmbientSoundManager);
MARK_REF_PTR_T(::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33);
MARK_REF_PTR_T(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34);
MARK_REF_PTR_T(::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39);
MARK_VAL_T(::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData);
MARK_VAL_T(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet);
MARK_VAL_T(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData);
// Type: ::AmbientSoundSet
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AmbientSoundManager::AmbientSoundSet
struct CORDL_TYPE __AmbientSoundManager__AmbientSoundSet {
public:
  // Declarations
  /// @brief Method None, addr 0x143b6f8, size 0x9c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet None();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AmbientSoundManager__AmbientSoundSet();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "backgroundSounds", ty:
  // "::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData,::Array<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData>*>", modifiers: "", def_value: None },
  // CppParam { name: "triggeredSounds", ty:
  // "::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData,::Array<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>*>", modifiers: "", def_value: None }]
  constexpr __AmbientSoundManager__AmbientSoundSet(
      ::StringW key, ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData>*> backgroundSounds,
      ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>*> triggeredSounds) noexcept;

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field backgroundSounds, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData>*> backgroundSounds;

  /// @brief Field triggeredSounds, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>*> triggeredSounds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, backgroundSounds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, triggeredSounds) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AmbientBackgroundSoundData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AmbientSoundManager::AmbientBackgroundSoundData
struct CORDL_TYPE __AmbientSoundManager__AmbientBackgroundSoundData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AmbientSoundManager__AmbientBackgroundSoundData();

  // Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None }, CppParam { name: "volumeMultiplier", ty: "float_t", modifiers: "", def_value:
  // None }]
  constexpr __AmbientSoundManager__AmbientBackgroundSoundData(::UnityW<::UnityEngine::AudioClip> clip, float_t volumeMultiplier) noexcept;

  /// @brief Field clip, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> clip;

  /// @brief Field volumeMultiplier, offset: 0x8, size: 0x4, def value: None
  float_t volumeMultiplier;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData, clip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData, volumeMultiplier) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AmbientTriggeredSoundData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AmbientSoundManager::AmbientTriggeredSoundData
struct CORDL_TYPE __AmbientSoundManager__AmbientTriggeredSoundData {
public:
  // Declarations
  /// @brief Method GetRandomDelay, addr 0x143c0b0, size 0xc, virtual false, abstract: false, final false
  inline float_t GetRandomDelay();

  /// @brief Method GetRandomInitialDelay, addr 0x143bb88, size 0x10, virtual false, abstract: false, final false
  inline float_t GetRandomInitialDelay();

  /// @brief Method GetRandomLoopLength, addr 0x143c1e8, size 0xc, virtual false, abstract: false, final false
  inline float_t GetRandomLoopLength();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AmbientSoundManager__AmbientTriggeredSoundData();

  // Ctor Parameters [CppParam { name: "clips", ty: "::ArrayW<::UnityW<::UnityEngine::AudioClip>,::Array<::UnityW<::UnityEngine::AudioClip>>*>", modifiers: "", def_value: None }, CppParam { name:
  // "volumeMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minInitialDelay", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minDelay", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDelay", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isLooping", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "minLoopLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLoopLength", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __AmbientSoundManager__AmbientTriggeredSoundData(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> clips, float_t volumeMultiplier,
                                                             float_t minInitialDelay, float_t minDelay, float_t maxDelay, bool isLooping, float_t minLoopLength, float_t maxLoopLength) noexcept;

  /// @brief Field clips, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> clips;

  /// @brief Field volumeMultiplier, offset: 0x8, size: 0x4, def value: None
  float_t volumeMultiplier;

  /// @brief Field minInitialDelay, offset: 0xc, size: 0x4, def value: None
  float_t minInitialDelay;

  /// @brief Field minDelay, offset: 0x10, size: 0x4, def value: None
  float_t minDelay;

  /// @brief Field maxDelay, offset: 0x14, size: 0x4, def value: None
  float_t maxDelay;

  /// @brief Field isLooping, offset: 0x18, size: 0x1, def value: None
  bool isLooping;

  /// @brief Field minLoopLength, offset: 0x1c, size: 0x4, def value: None
  float_t minLoopLength;

  /// @brief Field maxLoopLength, offset: 0x20, size: 0x4, def value: None
  float_t maxLoopLength;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, clips) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, volumeMultiplier) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, minInitialDelay) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, minDelay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, maxDelay) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, isLooping) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, minLoopLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, maxLoopLength) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FadeInSound>d__33
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AmbientSoundManager::<FadeInSound>d__33*
class CORDL_TYPE __AmbientSoundManager___FadeInSound_d__33 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <p>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Field sound, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sound, put = __cordl_internal_set_sound))::UnityW<::UnityEngine::AudioSource> sound;

  /// @brief Field targetVolume, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_targetVolume, put = __cordl_internal_set_targetVolume)) float_t targetVolume;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x143c3e8, size 0x1b0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x143c598, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x143c5a0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x143c5e0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x143c3e4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_sound() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_sound();

  constexpr float_t const& __cordl_internal_get_targetVolume() const;

  constexpr float_t& __cordl_internal_get_targetVolume();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  constexpr void __cordl_internal_set_sound(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_targetVolume(float_t value);

  /// @brief Method .ctor, addr 0x143c0d4, size 0x28, virtual false, abstract: false, final false
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
  constexpr __AmbientSoundManager___FadeInSound_d__33();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AmbientSoundManager___FadeInSound_d__33", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AmbientSoundManager___FadeInSound_d__33(__AmbientSoundManager___FadeInSound_d__33&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AmbientSoundManager___FadeInSound_d__33", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AmbientSoundManager___FadeInSound_d__33(__AmbientSoundManager___FadeInSound_d__33 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field sound, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___sound;

  /// @brief Field targetVolume, offset: 0x28, size: 0x4, def value: None
  float_t ___targetVolume;

  /// @brief Field <p>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____p_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33, ___sound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33, ___targetVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33, ____p_5__2) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FadeOutSound>d__34
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AmbientSoundManager::<FadeOutSound>d__34*
class CORDL_TYPE __AmbientSoundManager___FadeOutSound_d__34 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <p>5__3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <startVolume>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startVolume_5__2, put = __cordl_internal_set__startVolume_5__2)) float_t _startVolume_5__2;

  /// @brief Field sound, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sound, put = __cordl_internal_set_sound))::UnityW<::UnityEngine::AudioSource> sound;

  /// @brief Field time, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x143c5ec, size 0x1a4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x143c790, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x143c798, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x143c7d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x143c5e8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get__startVolume_5__2() const;

  constexpr float_t& __cordl_internal_get__startVolume_5__2();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_sound() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_sound();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__startVolume_5__2(float_t value);

  constexpr void __cordl_internal_set_sound(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_time(float_t value);

  /// @brief Method .ctor, addr 0x143c0fc, size 0x28, virtual false, abstract: false, final false
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
  constexpr __AmbientSoundManager___FadeOutSound_d__34();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AmbientSoundManager___FadeOutSound_d__34", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AmbientSoundManager___FadeOutSound_d__34(__AmbientSoundManager___FadeOutSound_d__34&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AmbientSoundManager___FadeOutSound_d__34", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AmbientSoundManager___FadeOutSound_d__34(__AmbientSoundManager___FadeOutSound_d__34 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field sound, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___sound;

  /// @brief Field time, offset: 0x28, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field <startVolume>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____startVolume_5__2;

  /// @brief Field <p>5__3, offset: 0x30, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34, ___sound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34, ___time) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34, ____startVolume_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34, ____p_5__3) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleLoopedTriggeredSound>d__39
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AmbientSoundManager::<HandleLoopedTriggeredSound>d__39*
class CORDL_TYPE __AmbientSoundManager___HandleLoopedTriggeredSound_d__39 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::AmbientSoundManager> __4__this;

  /// @brief Field audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_audioSource, put = __cordl_internal_set_audioSource))::UnityW<::UnityEngine::AudioSource> audioSource;

  /// @brief Field time, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x143c7e4, size 0x19c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x143c980, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x143c988, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x143c9c8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x143c7e0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::AmbientSoundManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::AmbientSoundManager>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AmbientSoundManager> value);

  constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_time(float_t value);

  /// @brief Method .ctor, addr 0x143c278, size 0x28, virtual false, abstract: false, final false
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
  constexpr __AmbientSoundManager___HandleLoopedTriggeredSound_d__39();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AmbientSoundManager___HandleLoopedTriggeredSound_d__39", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AmbientSoundManager___HandleLoopedTriggeredSound_d__39(__AmbientSoundManager___HandleLoopedTriggeredSound_d__39&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AmbientSoundManager___HandleLoopedTriggeredSound_d__39", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AmbientSoundManager___HandleLoopedTriggeredSound_d__39(__AmbientSoundManager___HandleLoopedTriggeredSound_d__39 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___audioSource;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AmbientSoundManager> _____4__this;

  /// @brief Field time, offset: 0x30, size: 0x4, def value: None
  float_t ___time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39, ___time) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AmbientSoundManager
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 170, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AmbientSoundManager*
class CORDL_TYPE AmbientSoundManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::AmbientSoundManager>> {
public:
  // Declarations
  using AmbientBackgroundSoundData = ::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData;

  using AmbientSoundSet = ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet;

  using AmbientTriggeredSoundData = ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData;

  using _FadeInSound_d__33 = ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33;

  using _FadeOutSound_d__34 = ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34;

  using _HandleLoopedTriggeredSound_d__39 = ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39;

  /// @brief Field _curDelay, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__curDelay, put = __cordl_internal_set__curDelay)) float_t _curDelay;

  /// @brief Field _newIsPlayerOutsideMap, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get__newIsPlayerOutsideMap, put = __cordl_internal_set__newIsPlayerOutsideMap)) bool _newIsPlayerOutsideMap;

  /// @brief Field _timerIndex, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__timerIndex, put = __cordl_internal_set__timerIndex)) int32_t _timerIndex;

  /// @brief Field ambientSoundSets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ambientSoundSets,
                      put = __cordl_internal_set_ambientSoundSets))::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet,
                                                                            ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>*> ambientSoundSets;

  /// @brief Field backgroundSoundEffectPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundSoundEffectPrefab, put = __cordl_internal_set_backgroundSoundEffectPrefab))::UnityW<::UnityEngine::GameObject> backgroundSoundEffectPrefab;

  /// @brief Field curBackgroundSounds, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_curBackgroundSounds,
                      put = __cordl_internal_set_curBackgroundSounds))::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> curBackgroundSounds;

  /// @brief Field curLoadedAmbientSoundSet, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get_curLoadedAmbientSoundSet,
                      put = __cordl_internal_set_curLoadedAmbientSoundSet))::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet curLoadedAmbientSoundSet;

  /// @brief Field curRoomDimensions, offset 0x70, size 0xc
  __declspec(property(get = __cordl_internal_get_curRoomDimensions, put = __cordl_internal_set_curRoomDimensions))::UnityEngine::Vector3Int curRoomDimensions;

  /// @brief Field curTriggeredSoundPlayTimes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_curTriggeredSoundPlayTimes, put = __cordl_internal_set_curTriggeredSoundPlayTimes))::ArrayW<float_t, ::Array<float_t>*> curTriggeredSoundPlayTimes;

  /// @brief Field curTriggeredSounds, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_curTriggeredSounds,
                      put = __cordl_internal_set_curTriggeredSounds))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AudioSource>>* curTriggeredSounds;

  /// @brief Field defaultSnapshot, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultSnapshot, put = __cordl_internal_set_defaultSnapshot))::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> defaultSnapshot;

  /// @brief Field disableAmbientSoundsInEditor, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_disableAmbientSoundsInEditor, put = __cordl_internal_set_disableAmbientSoundsInEditor)) bool disableAmbientSoundsInEditor;

  /// @brief Field hallwaySnapshot, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_hallwaySnapshot, put = __cordl_internal_set_hallwaySnapshot))::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> hallwaySnapshot;

  /// @brief Field isPlayerOutsideMap, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_isPlayerOutsideMap, put = __cordl_internal_set_isPlayerOutsideMap)) bool isPlayerOutsideMap;

  /// @brief Field masterPlayer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::Player> masterPlayer;

  /// @brief Field maxTriggeredSoundDistance, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxTriggeredSoundDistance, put = __cordl_internal_set_maxTriggeredSoundDistance)) float_t maxTriggeredSoundDistance;

  /// @brief Field minTriggeredSoundDistance, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_minTriggeredSoundDistance, put = __cordl_internal_set_minTriggeredSoundDistance)) float_t minTriggeredSoundDistance;

  /// @brief Field mixerGroup, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mixerGroup, put = __cordl_internal_set_mixerGroup))::UnityW<::UnityEngine::Audio::AudioMixerGroup> mixerGroup;

  /// @brief Field nextPlayerPosCheckTime, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextPlayerPosCheckTime, put = __cordl_internal_set_nextPlayerPosCheckTime)) float_t nextPlayerPosCheckTime;

  /// @brief Field triggeredSoundEffectPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_triggeredSoundEffectPrefab, put = __cordl_internal_set_triggeredSoundEffectPrefab))::UnityW<::UnityEngine::GameObject> triggeredSoundEffectPrefab;

  /// @brief Method ClearTriggeredSounds, addr 0x143b79c, size 0x1c4, virtual false, abstract: false, final false
  inline void ClearTriggeredSounds();

  /// @brief Method CreateAudioSource, addr 0x143b9d8, size 0x138, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> CreateAudioSource(::UnityEngine::GameObject* prefab, ::UnityEngine::Vector3 position);

  /// @brief Method FadeInSound, addr 0x143bb10, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeInSound(::UnityEngine::AudioSource* sound, float_t targetVolume);

  /// @brief Method FadeOutSound, addr 0x143b960, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeOutSound(::UnityEngine::AudioSource* sound, float_t time);

  /// @brief Method GetAmbientSoundSet, addr 0x143b2e0, size 0x148, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet GetAmbientSoundSet(::StringW key);

  /// @brief Method GetRandomTriggeredSoundPos, addr 0x143c124, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRandomTriggeredSoundPos();

  /// @brief Method HandleLoopedTriggeredSound, addr 0x143c1f4, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HandleLoopedTriggeredSound(::UnityEngine::AudioSource* audioSource, float_t time);

  /// @brief Method InitializeSoundSet, addr 0x143b428, size 0x2d0, virtual false, abstract: false, final false
  inline void InitializeSoundSet(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet soundSet);

  static inline ::GlobalNamespace::AmbientSoundManager* New_ctor();

  /// @brief Method OnIsOutsideMapUpdated, addr 0x143c0bc, size 0x18, virtual false, abstract: false, final false
  inline void OnIsOutsideMapUpdated(bool isOutsideMap);

  /// @brief Method OnMasterPlayerCreated, addr 0x143b794, size 0x8, virtual false, abstract: false, final false
  inline void OnMasterPlayerCreated(::GlobalNamespace::Player* newMasterPlayer);

  /// @brief Method OnRoomLoaded, addr 0x143aeac, size 0xdc, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* newRoom);

  /// @brief Method PlayTriggeredSound, addr 0x143bde4, size 0x2cc, virtual false, abstract: false, final false
  inline void PlayTriggeredSound(int32_t index, ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData soundData, ByRef<float_t> delay);

  /// @brief Method Start, addr 0x143ad1c, size 0x190, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransitionToSnapshot, addr 0x143c2a0, size 0xf4, virtual false, abstract: false, final false
  inline void TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* snapshot);

  /// @brief Method Update, addr 0x143bb98, size 0x24c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__curDelay() const;

  constexpr float_t& __cordl_internal_get__curDelay();

  constexpr bool const& __cordl_internal_get__newIsPlayerOutsideMap() const;

  constexpr bool& __cordl_internal_get__newIsPlayerOutsideMap();

  constexpr int32_t const& __cordl_internal_get__timerIndex() const;

  constexpr int32_t& __cordl_internal_get__timerIndex();

  constexpr ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>*> const&
  __cordl_internal_get_ambientSoundSets() const;

  constexpr ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>*>& __cordl_internal_get_ambientSoundSets();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_backgroundSoundEffectPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_backgroundSoundEffectPrefab();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> const& __cordl_internal_get_curBackgroundSounds() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*>& __cordl_internal_get_curBackgroundSounds();

  constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet const& __cordl_internal_get_curLoadedAmbientSoundSet() const;

  constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet& __cordl_internal_get_curLoadedAmbientSoundSet();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_curRoomDimensions() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_curRoomDimensions();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_curTriggeredSoundPlayTimes() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_curTriggeredSoundPlayTimes();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AudioSource>>*& __cordl_internal_get_curTriggeredSounds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AudioSource>>*> const& __cordl_internal_get_curTriggeredSounds() const;

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& __cordl_internal_get_defaultSnapshot() const;

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& __cordl_internal_get_defaultSnapshot();

  constexpr bool const& __cordl_internal_get_disableAmbientSoundsInEditor() const;

  constexpr bool& __cordl_internal_get_disableAmbientSoundsInEditor();

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& __cordl_internal_get_hallwaySnapshot() const;

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& __cordl_internal_get_hallwaySnapshot();

  constexpr bool const& __cordl_internal_get_isPlayerOutsideMap() const;

  constexpr bool& __cordl_internal_get_isPlayerOutsideMap();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_maxTriggeredSoundDistance() const;

  constexpr float_t& __cordl_internal_get_maxTriggeredSoundDistance();

  constexpr float_t const& __cordl_internal_get_minTriggeredSoundDistance() const;

  constexpr float_t& __cordl_internal_get_minTriggeredSoundDistance();

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_mixerGroup() const;

  constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_mixerGroup();

  constexpr float_t const& __cordl_internal_get_nextPlayerPosCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextPlayerPosCheckTime();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_triggeredSoundEffectPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_triggeredSoundEffectPrefab();

  constexpr void __cordl_internal_set__curDelay(float_t value);

  constexpr void __cordl_internal_set__newIsPlayerOutsideMap(bool value);

  constexpr void __cordl_internal_set__timerIndex(int32_t value);

  constexpr void __cordl_internal_set_ambientSoundSets(::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>*> value);

  constexpr void __cordl_internal_set_backgroundSoundEffectPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_curBackgroundSounds(::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> value);

  constexpr void __cordl_internal_set_curLoadedAmbientSoundSet(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet value);

  constexpr void __cordl_internal_set_curRoomDimensions(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_curTriggeredSoundPlayTimes(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_curTriggeredSounds(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AudioSource>>* value);

  constexpr void __cordl_internal_set_defaultSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> value);

  constexpr void __cordl_internal_set_disableAmbientSoundsInEditor(bool value);

  constexpr void __cordl_internal_set_hallwaySnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> value);

  constexpr void __cordl_internal_set_isPlayerOutsideMap(bool value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_maxTriggeredSoundDistance(float_t value);

  constexpr void __cordl_internal_set_minTriggeredSoundDistance(float_t value);

  constexpr void __cordl_internal_set_mixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup> value);

  constexpr void __cordl_internal_set_nextPlayerPosCheckTime(float_t value);

  constexpr void __cordl_internal_set_triggeredSoundEffectPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x143c394, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbientSoundManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmbientSoundManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbientSoundManager(AmbientSoundManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbientSoundManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbientSoundManager(AmbientSoundManager const&) = delete;

  /// @brief Field ambientSoundSets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>*> ___ambientSoundSets;

  /// @brief Field backgroundSoundEffectPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___backgroundSoundEffectPrefab;

  /// @brief Field triggeredSoundEffectPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___triggeredSoundEffectPrefab;

  /// @brief Field mixerGroup, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Audio::AudioMixerGroup> ___mixerGroup;

  /// @brief Field minTriggeredSoundDistance, offset: 0x38, size: 0x4, def value: None
  float_t ___minTriggeredSoundDistance;

  /// @brief Field maxTriggeredSoundDistance, offset: 0x3c, size: 0x4, def value: None
  float_t ___maxTriggeredSoundDistance;

  /// @brief Field curLoadedAmbientSoundSet, offset: 0x40, size: 0x18, def value: None
  ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet ___curLoadedAmbientSoundSet;

  /// @brief Field curTriggeredSoundPlayTimes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___curTriggeredSoundPlayTimes;

  /// @brief Field curTriggeredSounds, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AudioSource>>* ___curTriggeredSounds;

  /// @brief Field curBackgroundSounds, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> ___curBackgroundSounds;

  /// @brief Field curRoomDimensions, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___curRoomDimensions;

  /// @brief Field masterPlayer, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___masterPlayer;

  /// @brief Field defaultSnapshot, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> ___defaultSnapshot;

  /// @brief Field hallwaySnapshot, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> ___hallwaySnapshot;

  /// @brief Field disableAmbientSoundsInEditor, offset: 0x98, size: 0x1, def value: None
  bool ___disableAmbientSoundsInEditor;

  /// @brief Field nextPlayerPosCheckTime, offset: 0x9c, size: 0x4, def value: None
  float_t ___nextPlayerPosCheckTime;

  /// @brief Field _timerIndex, offset: 0xa0, size: 0x4, def value: None
  int32_t ____timerIndex;

  /// @brief Field _curDelay, offset: 0xa4, size: 0x4, def value: None
  float_t ____curDelay;

  /// @brief Field isPlayerOutsideMap, offset: 0xa8, size: 0x1, def value: None
  bool ___isPlayerOutsideMap;

  /// @brief Field _newIsPlayerOutsideMap, offset: 0xa9, size: 0x1, def value: None
  bool ____newIsPlayerOutsideMap;

  /// @brief Field MIXER_TRANSITION_TIME offset 0xffffffff size 0x4
  static constexpr float_t MIXER_TRANSITION_TIME{ 0.5 };

  /// @brief Field PLAYER_CHECK_DELAY offset 0xffffffff size 0x4
  static constexpr float_t PLAYER_CHECK_DELAY{ 0.5 };

  /// @brief Field TRANSITION_FADE_TIME offset 0xffffffff size 0x4
  static constexpr float_t TRANSITION_FADE_TIME{ 1.5 };

  /// @brief Field TRIGGER_FADE_IN_SOUND_TIME offset 0xffffffff size 0x4
  static constexpr float_t TRIGGER_FADE_IN_SOUND_TIME{ 0.5 };

  /// @brief Field TRIGGER_FADE_OUT_SOUND_TIME offset 0xffffffff size 0x4
  static constexpr float_t TRIGGER_FADE_OUT_SOUND_TIME{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AmbientSoundManager, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___ambientSoundSets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___backgroundSoundEffectPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___triggeredSoundEffectPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___mixerGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___minTriggeredSoundDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___maxTriggeredSoundDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___curLoadedAmbientSoundSet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___curTriggeredSoundPlayTimes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___curTriggeredSounds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___curBackgroundSounds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___curRoomDimensions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___masterPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___defaultSnapshot) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___hallwaySnapshot) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___disableAmbientSoundsInEditor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___nextPlayerPosCheckTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ____timerIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ____curDelay) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ___isPlayerOutsideMap) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundManager, ____newIsPlayerOutsideMap) == 0xa9, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AmbientSoundManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AmbientSoundManager*, "", "AmbientSoundManager");
NEED_NO_BOX(::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*, "", "AmbientSoundManager/<FadeInSound>d__33");
NEED_NO_BOX(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*, "", "AmbientSoundManager/<FadeOutSound>d__34");
NEED_NO_BOX(::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*, "", "AmbientSoundManager/<HandleLoopedTriggeredSound>d__39");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData, "", "AmbientSoundManager/AmbientBackgroundSoundData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, "", "AmbientSoundManager/AmbientSoundSet");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, "", "AmbientSoundManager/AmbientTriggeredSoundData");
