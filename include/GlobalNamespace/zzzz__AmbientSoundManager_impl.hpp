#pragma once
#include "GlobalNamespace/zzzz__AmbientSoundManager_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__AmbientSoundManager_def.hpp"
#include "GlobalNamespace/zzzz__AmbientSoundManager_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerSnapshot_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet.None
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet (*)()>(
    &::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet::None)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x143b6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>::get(),
                                                                               "None", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet GlobalNamespace::__AmbientSoundManager__AmbientSoundSet::None() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>::get(),
                                                                             "None", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "backgroundSounds", ty:
// "::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData,::Array<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "triggeredSounds", ty:
// "::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData,::Array<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>*>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet::__AmbientSoundManager__AmbientSoundSet(
    ::StringW key, ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData>*> backgroundSounds,
    ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>*> triggeredSounds) noexcept {
  this->key = key;
  this->backgroundSounds = backgroundSounds;
  this->triggeredSounds = triggeredSounds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet::__AmbientSoundManager__AmbientSoundSet() {}
// Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "volumeMultiplier", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData::__AmbientSoundManager__AmbientBackgroundSoundData(::UnityW<::UnityEngine::AudioClip> clip,
                                                                                                                                  float_t volumeMultiplier) noexcept {
  this->clip = clip;
  this->volumeMultiplier = volumeMultiplier;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientBackgroundSoundData::__AmbientSoundManager__AmbientBackgroundSoundData() {}
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData.GetRandomInitialDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::*)()>(
    &::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::GetRandomInitialDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x143bb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>::get(),
                                                 "GetRandomInitialDelay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData.GetRandomDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::*)()>(
    &::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::GetRandomDelay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x143c0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>::get(), "GetRandomDelay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData.GetRandomLoopLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::*)()>(
    &::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::GetRandomLoopLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x143c1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>::get(),
                                                 "GetRandomLoopLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::GetRandomInitialDelay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>::get(),
                                               "GetRandomInitialDelay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::GetRandomDelay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>::get(), "GetRandomDelay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::GetRandomLoopLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>::get(),
                                               "GetRandomLoopLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "clips", ty: "::ArrayW<::UnityW<::UnityEngine::AudioClip>,::Array<::UnityW<::UnityEngine::AudioClip>>*>", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "volumeMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minInitialDelay", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "minDelay", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDelay", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isLooping", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "minLoopLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLoopLength", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::__AmbientSoundManager__AmbientTriggeredSoundData(
    ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> clips, float_t volumeMultiplier, float_t minInitialDelay, float_t minDelay, float_t maxDelay,
    bool isLooping, float_t minLoopLength, float_t maxLoopLength) noexcept {
  this->clips = clips;
  this->volumeMultiplier = volumeMultiplier;
  this->minInitialDelay = minInitialDelay;
  this->minDelay = minDelay;
  this->maxDelay = maxDelay;
  this->isLooping = isLooping;
  this->minLoopLength = minLoopLength;
  this->maxLoopLength = maxLoopLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData::__AmbientSoundManager__AmbientTriggeredSoundData() {}
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::*)(int32_t)>(
    &::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x143c0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x143c3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x143c3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143c598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x143c5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143c5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get_sound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get_sound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sound;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_set_sound(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get_targetVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetVolume;
}
constexpr float_t const& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get_targetVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetVolume;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_set_targetVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetVolume = value;
}
constexpr float_t& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get__p_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__2;
}
constexpr float_t const& GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_get__p_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__2;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__cordl_internal_set__p_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p_5__2 = value;
}
inline ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33* GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>(__1__state));
}
inline void GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AmbientSoundManager___FadeInSound_d__33::__AmbientSoundManager___FadeInSound_d__33() {}
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::*)(int32_t)>(
    &::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x143c0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x143c5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x143c5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143c790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x143c798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143c7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get_sound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get_sound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sound;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_set_sound(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
constexpr float_t& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get__startVolume_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startVolume_5__2;
}
constexpr float_t const& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get__startVolume_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startVolume_5__2;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_set__startVolume_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startVolume_5__2 = value;
}
constexpr float_t& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get__p_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__3;
}
constexpr float_t const& GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_get__p_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__3;
}
constexpr void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__cordl_internal_set__p_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p_5__3 = value;
}
inline ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34* GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>(__1__state));
}
inline void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AmbientSoundManager___FadeOutSound_d__34::__AmbientSoundManager___FadeOutSound_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::*)(int32_t)>(
    &::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x143c278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x143c7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x143c7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143c980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x143c988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::*)()>(
    &::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143c9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get_audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get_audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr void GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AmbientSoundManager>& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AmbientSoundManager> const& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AmbientSoundManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
inline ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39* GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>(__1__state));
}
inline void GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39::__AmbientSoundManager___HandleLoopedTriggeredSound_d__39() {}
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)()>(&::GlobalNamespace::AmbientSoundManager::Start)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x143ad1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.OnRoomLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)(::GlobalNamespace::Room*)>(
    &::GlobalNamespace::AmbientSoundManager::OnRoomLoaded)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x143aeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.OnMasterPlayerCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::AmbientSoundManager::OnMasterPlayerCreated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143b794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "OnMasterPlayerCreated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.GetAmbientSoundSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet (::GlobalNamespace::AmbientSoundManager::*)(::StringW)>(
    &::GlobalNamespace::AmbientSoundManager::GetAmbientSoundSet)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x143b2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "GetAmbientSoundSet",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.InitializeSoundSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet)>(
    &::GlobalNamespace::AmbientSoundManager::InitializeSoundSet)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x143b428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "InitializeSoundSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.ClearTriggeredSounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)()>(&::GlobalNamespace::AmbientSoundManager::ClearTriggeredSounds)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x143b79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(),
                                                                               "ClearTriggeredSounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)()>(&::GlobalNamespace::AmbientSoundManager::Update)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x143bb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.CreateAudioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::AmbientSoundManager::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Vector3)>(&::GlobalNamespace::AmbientSoundManager::CreateAudioSource)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x143b9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "CreateAudioSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.FadeInSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AmbientSoundManager::*)(::UnityEngine::AudioSource*, float_t)>(&::GlobalNamespace::AmbientSoundManager::FadeInSound)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x143bb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "FadeInSound", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.FadeOutSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AmbientSoundManager::*)(::UnityEngine::AudioSource*, float_t)>(&::GlobalNamespace::AmbientSoundManager::FadeOutSound)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x143b960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "FadeOutSound", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.GetRandomTriggeredSoundPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AmbientSoundManager::*)()>(
    &::GlobalNamespace::AmbientSoundManager::GetRandomTriggeredSoundPos)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x143c124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(),
                                                                               "GetRandomTriggeredSoundPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.PlayTriggeredSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)(
    int32_t, ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData, ByRef<float_t>)>(&::GlobalNamespace::AmbientSoundManager::PlayTriggeredSound)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x143bde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "PlayTriggeredSound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.HandleLoopedTriggeredSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::AmbientSoundManager::*)(::UnityEngine::AudioSource*, float_t)>(&::GlobalNamespace::AmbientSoundManager::HandleLoopedTriggeredSound)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x143c1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "HandleLoopedTriggeredSound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.OnIsOutsideMapUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)(bool)>(
    &::GlobalNamespace::AmbientSoundManager::OnIsOutsideMapUpdated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x143c0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "OnIsOutsideMapUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager.TransitionToSnapshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)(::UnityEngine::Audio::AudioMixerSnapshot*)>(
    &::GlobalNamespace::AmbientSoundManager::TransitionToSnapshot)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x143c2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "TransitionToSnapshot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioMixerSnapshot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AmbientSoundManager::*)()>(&::GlobalNamespace::AmbientSoundManager::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x143c394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>*>&
GlobalNamespace::AmbientSoundManager::__cordl_internal_get_ambientSoundSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientSoundSets;
}
constexpr ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>*> const&
GlobalNamespace::AmbientSoundManager::__cordl_internal_get_ambientSoundSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientSoundSets;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_ambientSoundSets(
    ::ArrayW<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, ::Array<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ambientSoundSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_backgroundSoundEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundSoundEffectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_backgroundSoundEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundSoundEffectPrefab;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_backgroundSoundEffectPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backgroundSoundEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_triggeredSoundEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggeredSoundEffectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_triggeredSoundEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggeredSoundEffectPrefab;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_triggeredSoundEffectPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___triggeredSoundEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_mixerGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixerGroup;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_mixerGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mixerGroup;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_mixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mixerGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_minTriggeredSoundDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minTriggeredSoundDistance;
}
constexpr float_t const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_minTriggeredSoundDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minTriggeredSoundDistance;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_minTriggeredSoundDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minTriggeredSoundDistance = value;
}
constexpr float_t& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_maxTriggeredSoundDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxTriggeredSoundDistance;
}
constexpr float_t const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_maxTriggeredSoundDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxTriggeredSoundDistance;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_maxTriggeredSoundDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxTriggeredSoundDistance = value;
}
constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curLoadedAmbientSoundSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLoadedAmbientSoundSet;
}
constexpr ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curLoadedAmbientSoundSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLoadedAmbientSoundSet;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_curLoadedAmbientSoundSet(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curLoadedAmbientSoundSet = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curTriggeredSoundPlayTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTriggeredSoundPlayTimes;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curTriggeredSoundPlayTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTriggeredSoundPlayTimes;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_curTriggeredSoundPlayTimes(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curTriggeredSoundPlayTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AudioSource>>*& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curTriggeredSounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTriggeredSounds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AudioSource>>*> const&
GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curTriggeredSounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curTriggeredSounds;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_curTriggeredSounds(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AudioSource>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curTriggeredSounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*>& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curBackgroundSounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curBackgroundSounds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curBackgroundSounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curBackgroundSounds;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_curBackgroundSounds(::ArrayW<::UnityW<::UnityEngine::AudioSource>, ::Array<::UnityW<::UnityEngine::AudioSource>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curBackgroundSounds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curRoomDimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRoomDimensions;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_curRoomDimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRoomDimensions;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_curRoomDimensions(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curRoomDimensions = value;
}
constexpr ::UnityW<::GlobalNamespace::Player>& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_masterPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr ::UnityW<::GlobalNamespace::Player> const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_masterPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::Player> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_defaultSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSnapshot;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_defaultSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSnapshot;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_defaultSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultSnapshot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_hallwaySnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallwaySnapshot;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_hallwaySnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallwaySnapshot;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_hallwaySnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hallwaySnapshot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_disableAmbientSoundsInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableAmbientSoundsInEditor;
}
constexpr bool const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_disableAmbientSoundsInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableAmbientSoundsInEditor;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_disableAmbientSoundsInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableAmbientSoundsInEditor = value;
}
constexpr float_t& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_nextPlayerPosCheckTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextPlayerPosCheckTime;
}
constexpr float_t const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_nextPlayerPosCheckTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextPlayerPosCheckTime;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_nextPlayerPosCheckTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextPlayerPosCheckTime = value;
}
constexpr int32_t& GlobalNamespace::AmbientSoundManager::__cordl_internal_get__timerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timerIndex;
}
constexpr int32_t const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get__timerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timerIndex;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set__timerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timerIndex = value;
}
constexpr float_t& GlobalNamespace::AmbientSoundManager::__cordl_internal_get__curDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curDelay;
}
constexpr float_t const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get__curDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curDelay;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set__curDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curDelay = value;
}
constexpr bool& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_isPlayerOutsideMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPlayerOutsideMap;
}
constexpr bool const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get_isPlayerOutsideMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPlayerOutsideMap;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set_isPlayerOutsideMap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPlayerOutsideMap = value;
}
constexpr bool& GlobalNamespace::AmbientSoundManager::__cordl_internal_get__newIsPlayerOutsideMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newIsPlayerOutsideMap;
}
constexpr bool const& GlobalNamespace::AmbientSoundManager::__cordl_internal_get__newIsPlayerOutsideMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newIsPlayerOutsideMap;
}
constexpr void GlobalNamespace::AmbientSoundManager::__cordl_internal_set__newIsPlayerOutsideMap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newIsPlayerOutsideMap = value;
}
inline void GlobalNamespace::AmbientSoundManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AmbientSoundManager::OnRoomLoaded(::GlobalNamespace::Room* newRoom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newRoom);
}
inline void GlobalNamespace::AmbientSoundManager::OnMasterPlayerCreated(::GlobalNamespace::Player* newMasterPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "OnMasterPlayerCreated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMasterPlayer);
}
inline ::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet GlobalNamespace::AmbientSoundManager::GetAmbientSoundSet(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "GetAmbientSoundSet",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet, false>(this, ___internal_method, key);
}
inline void GlobalNamespace::AmbientSoundManager::InitializeSoundSet(::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet soundSet) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "InitializeSoundSet", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AmbientSoundManager__AmbientSoundSet>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, soundSet);
}
inline void GlobalNamespace::AmbientSoundManager::ClearTriggeredSounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(),
                                                                             "ClearTriggeredSounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AmbientSoundManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::AmbientSoundManager::CreateAudioSource(::UnityEngine::GameObject* prefab, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "CreateAudioSource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, prefab, position);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AmbientSoundManager::FadeInSound(::UnityEngine::AudioSource* sound, float_t targetVolume) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "FadeInSound", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, sound, targetVolume);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AmbientSoundManager::FadeOutSound(::UnityEngine::AudioSource* sound, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "FadeOutSound", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, sound, time);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AmbientSoundManager::GetRandomTriggeredSoundPos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(),
                                                                             "GetRandomTriggeredSoundPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::AmbientSoundManager::PlayTriggeredSound(int32_t index, ::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData soundData, ByRef<float_t> delay) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "PlayTriggeredSound", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AmbientSoundManager__AmbientTriggeredSoundData>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, soundData, delay);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AmbientSoundManager::HandleLoopedTriggeredSound(::UnityEngine::AudioSource* audioSource, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "HandleLoopedTriggeredSound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, audioSource, time);
}
inline void GlobalNamespace::AmbientSoundManager::OnIsOutsideMapUpdated(bool isOutsideMap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "OnIsOutsideMapUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isOutsideMap);
}
inline void GlobalNamespace::AmbientSoundManager::TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* snapshot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), "TransitionToSnapshot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioMixerSnapshot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, snapshot);
}
inline ::GlobalNamespace::AmbientSoundManager* GlobalNamespace::AmbientSoundManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AmbientSoundManager*>());
}
inline void GlobalNamespace::AmbientSoundManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AmbientSoundManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbientSoundManager::AmbientSoundManager() {}
