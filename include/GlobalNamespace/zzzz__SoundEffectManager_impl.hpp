#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SoundEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "GlobalNamespace/zzzz__SoundEffectManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager__SoundEffectData.ApplyClipTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager__SoundEffectData::*)(::UnityEngine::AudioSource*, int32_t)>(
    &::GlobalNamespace::__SoundEffectManager__SoundEffectData::ApplyClipTo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x143d304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>::get(), "ApplyClipTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager__SoundEffectData.ApplyProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager__SoundEffectData::*)(::UnityEngine::AudioSource*)>(
    &::GlobalNamespace::__SoundEffectManager__SoundEffectData::ApplyProperties)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x143d40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>::get(), "ApplyProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager__SoundEffectData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager__SoundEffectData::*)()>(
    &::GlobalNamespace::__SoundEffectManager__SoundEffectData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x143f0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::StringW const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_clip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_clip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clip;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_alternateClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternateClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const&
GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_alternateClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternateClips;
}
constexpr void
GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_alternateClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alternateClips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_refSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refSoundKey;
}
constexpr ::StringW const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_refSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refSoundKey;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_refSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___refSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_customPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_customPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPrefab;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_customPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volume = value;
}
constexpr float_t& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_pitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitch;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_pitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pitch;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_pitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pitch = value;
}
constexpr float_t& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_spatialBlend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spatialBlend;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_spatialBlend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spatialBlend;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_spatialBlend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spatialBlend = value;
}
constexpr float_t& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_fallOffMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallOffMultiplier;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_fallOffMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallOffMultiplier;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_fallOffMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallOffMultiplier = value;
}
constexpr float_t& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_spread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spread;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_get_spread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spread;
}
constexpr void GlobalNamespace::__SoundEffectManager__SoundEffectData::__cordl_internal_set_spread(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spread = value;
}
inline void GlobalNamespace::__SoundEffectManager__SoundEffectData::ApplyClipTo(::UnityEngine::AudioSource* audioSource, int32_t randomSeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>::get(), "ApplyClipTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioSource, randomSeed);
}
inline void GlobalNamespace::__SoundEffectManager__SoundEffectData::ApplyProperties(::UnityEngine::AudioSource* audioSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>::get(), "ApplyProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioSource);
}
inline ::GlobalNamespace::__SoundEffectManager__SoundEffectData* GlobalNamespace::__SoundEffectManager__SoundEffectData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>());
}
inline void GlobalNamespace::__SoundEffectManager__SoundEffectData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SoundEffectManager__SoundEffectData::__SoundEffectManager__SoundEffectData() {}
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x143f0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::*)()>(
    &::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x143f1b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x143f1cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x143f1ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>(object, method));
}
inline void GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed::__SoundEffectManager__OnSourceDestroyed() {}
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData::*)(
    ::UnityEngine::AudioSource*, float_t, float_t, ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*)>(&::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x143e95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get() })));
    return ___internal_method;
  }
};
/// @param onSourceDestroyed: ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* (default: nullptr)
inline void GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData::_ctor(::UnityEngine::AudioSource* source, float_t destroyTime, float_t fadeTime,
                                                                                 ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* onSourceDestroyed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destroyTime, fadeTime, onSourceDestroyed);
}
// Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "destroyTime", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fadeTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSourceDestroyed", ty:
// "::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData::__SoundEffectManager__SoundEffectDestroyData(
    ::UnityW<::UnityEngine::AudioSource> source, float_t destroyTime, float_t fadeTime, ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* onSourceDestroyed) noexcept {
  this->source = source;
  this->destroyTime = destroyTime;
  this->fadeTime = fadeTime;
  this->onSourceDestroyed = onSourceDestroyed;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData::__SoundEffectManager__SoundEffectDestroyData() {}
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::*)(int32_t)>(
    &::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x143dae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::*)()>(
    &::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x143f1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::*)()>(
    &::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x143f1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::*)()>(
    &::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143f380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::*)()>(
    &::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x143f388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::*)()>(
    &::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x143f3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get_audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get_audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get_startVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startVolume;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get_startVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startVolume;
}
constexpr void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_set_startVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startVolume = value;
}
constexpr float_t& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr float_t& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get_targetVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetVolume;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get_targetVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetVolume;
}
constexpr void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_set_targetVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetVolume = value;
}
constexpr float_t& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get__p_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__2;
}
constexpr float_t const& GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_get__p_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__2;
}
constexpr void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__cordl_internal_set__p_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p_5__2 = value;
}
inline ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16* GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>(__1__state));
}
inline void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SoundEffectManager___FadeSoundSequence_d__16::__SoundEffectManager___FadeSoundSequence_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.get_hasInitializedSoundEffects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::SoundEffectManager::get_hasInitializedSoundEffects)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x143cc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(),
                                                                               "get_hasInitializedSoundEffects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.InitializeSoundEffects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)()>(&::GlobalNamespace::SoundEffectManager::InitializeSoundEffects)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x143cc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(),
                                                                               "InitializeSoundEffects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)()>(&::GlobalNamespace::SoundEffectManager::Start)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x143cd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.GenerateRandomSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SoundEffectManager::*)()>(&::GlobalNamespace::SoundEffectManager::GenerateRandomSeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x143cee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(),
                                                                               "GenerateRandomSeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.CreateAudioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Transform*, bool, float_t, float_t, int32_t)>(&::GlobalNamespace::SoundEffectManager::CreateAudioSource)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x143cef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "CreateAudioSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlaySoundHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Transform*, bool, float_t, float_t, bool, int32_t, bool)>(&::GlobalNamespace::SoundEffectManager::PlaySoundHelper)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x143d4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundHelper", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 9>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlaySound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Transform*, bool)>(&::GlobalNamespace::SoundEffectManager::PlaySound)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x143d69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySound", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlayPersistentSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(::StringW, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::SoundEffectManager::PlayPersistentSound)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x143d740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayPersistentSound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlayLoopingSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::GlobalNamespace::SoundEffectManager::PlayLoopingSound)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x143d858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayLoopingSound", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.FadeInSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, float_t, ::UnityEngine::Vector3, ::UnityEngine::Transform*, bool)>(&::GlobalNamespace::SoundEffectManager::FadeInSound)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x143d8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "FadeInSound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.FadeSoundSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::SoundEffectManager::*)(::UnityEngine::AudioSource*, float_t, float_t, float_t)>(&::GlobalNamespace::SoundEffectManager::FadeSoundSequence)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x143da54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "FadeSoundSequence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.FadeOutSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)(::UnityEngine::AudioSource*, float_t)>(
    &::GlobalNamespace::SoundEffectManager::FadeOutSound)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x143db08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "FadeOutSound", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlaySoundOnDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, float_t, ::UnityEngine::Vector3, ::UnityEngine::Transform*, bool)>(&::GlobalNamespace::SoundEffectManager::PlaySoundOnDelay)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x143dc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundOnDelay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlaySoundWithRandomPitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Transform*, float_t, float_t, float_t, bool)>(&::GlobalNamespace::SoundEffectManager::PlaySoundWithRandomPitch)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x143dd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundWithRandomPitch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlaySoundWithRandomPitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::Vector3, float_t, float_t, float_t, bool)>(&::GlobalNamespace::SoundEffectManager::PlaySoundWithRandomPitch)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x143de2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundWithRandomPitch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlaySoundWithVolumeMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::SoundEffectManager::PlaySoundWithVolumeMultiplier)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x143dee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundWithVolumeMultiplier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlaySoundAtTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, float_t, ::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::GlobalNamespace::SoundEffectManager::PlaySoundAtTimeOffset)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x143df80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundAtTimeOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlayLinkedSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::AudioSource*, bool, float_t, float_t)>(&::GlobalNamespace::SoundEffectManager::PlayLinkedSound)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x143e200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayLinkedSound", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlayRemoteOnlySound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)(::StringW, ::UnityEngine::Vector3, float_t, float_t)>(
    &::GlobalNamespace::SoundEffectManager::PlayRemoteOnlySound)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x143e44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayRemoteOnlySound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.OnReceivePlaySoundEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::SoundEffectManager::*)(
    ::StringW, ::UnityEngine::Vector3, float_t, float_t, int32_t)>(&::GlobalNamespace::SoundEffectManager::OnReceivePlaySoundEffect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x143e500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "OnReceivePlaySoundEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.OnRoomLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)(::GlobalNamespace::Room*)>(
    &::GlobalNamespace::SoundEffectManager::OnRoomLoaded)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x143e518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.PlayFootstepSound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)(
    ::UnityEngine::Vector3, ::GlobalNamespace::MapObject*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::SoundEffectManager::PlayFootstepSound)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x143e5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayFootstepSound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.QueueDestroySound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SoundEffectManager::*)(
    ::UnityEngine::AudioSource*, float_t, ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*, float_t)>(&::GlobalNamespace::SoundEffectManager::QueueDestroySound)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x143e860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "QueueDestroySound", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.CancelDestroySound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)(int32_t)>(
    &::GlobalNamespace::SoundEffectManager::CancelDestroySound)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x143e96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "CancelDestroySound",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)()>(&::GlobalNamespace::SoundEffectManager::Update)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x143e9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager.GetSoundVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SoundEffectManager::*)(::StringW)>(
    &::GlobalNamespace::SoundEffectManager::GetSoundVolume)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x143ee80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "GetSoundVolume", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SoundEffectManager::*)()>(&::GlobalNamespace::SoundEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x143f050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SoundEffectManager::__cordl_internal_get_soundEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soundEffectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SoundEffectManager::__cordl_internal_get_soundEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soundEffectPrefab;
}
constexpr void GlobalNamespace::SoundEffectManager::__cordl_internal_set_soundEffectPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___soundEffectPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SoundEffectManager__SoundEffectData*, ::Array<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*>&
GlobalNamespace::SoundEffectManager::__cordl_internal_get_soundEffectDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soundEffectDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__SoundEffectManager__SoundEffectData*, ::Array<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*> const&
GlobalNamespace::SoundEffectManager::__cordl_internal_get_soundEffectDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soundEffectDatas;
}
constexpr void GlobalNamespace::SoundEffectManager::__cordl_internal_set_soundEffectDatas(
    ::ArrayW<::GlobalNamespace::__SoundEffectManager__SoundEffectData*, ::Array<::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___soundEffectDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>*&
GlobalNamespace::SoundEffectManager::__cordl_internal_get_queuedDestroyAudioSources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedDestroyAudioSources;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>*> const&
GlobalNamespace::SoundEffectManager::__cordl_internal_get_queuedDestroyAudioSources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queuedDestroyAudioSources;
}
constexpr void GlobalNamespace::SoundEffectManager::__cordl_internal_set_queuedDestroyAudioSources(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SoundEffectManager__SoundEffectDestroyData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___queuedDestroyAudioSources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SoundEffectManager::setStaticF_soundEffects(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SoundEffectManager__SoundEffectData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*, "soundEffects",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SoundEffectManager__SoundEffectData*>* GlobalNamespace::SoundEffectManager::getStaticF_soundEffects() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SoundEffectManager__SoundEffectData*>*, "soundEffects",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get>();
}
inline void GlobalNamespace::SoundEffectManager::setStaticF_curGroundFootstepKey(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "curGroundFootstepKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SoundEffectManager::getStaticF_curGroundFootstepKey() {
  return ::cordl_internals::getStaticField<::StringW, "curGroundFootstepKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get>();
}
inline bool GlobalNamespace::SoundEffectManager::get_hasInitializedSoundEffects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(),
                                                                             "get_hasInitializedSoundEffects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SoundEffectManager::InitializeSoundEffects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(),
                                                                             "InitializeSoundEffects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SoundEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SoundEffectManager::GenerateRandomSeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(),
                                                                             "GenerateRandomSeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::CreateAudioSource(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, bool loop,
                                                                                                   float_t volumeMultiplier, float_t pitchMultiplier, int32_t randomSeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "CreateAudioSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, position, anchor, loop, volumeMultiplier, pitchMultiplier, randomSeed);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlaySoundHelper(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, bool loop,
                                                                                                 float_t volumeMultiplier, float_t pitchMultiplier, bool playOnCreate, int32_t randomSeed,
                                                                                                 bool shouldNetwork) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, position, anchor, loop, volumeMultiplier, pitchMultiplier, playOnCreate,
                                                                                          randomSeed, shouldNetwork);
}
/// @param anchor: ::UnityEngine::Transform* (default: nullptr)
/// @param shouldNetwork: bool (default: false)
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlaySound(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor, bool shouldNetwork) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySound", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, position, anchor, shouldNetwork);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlayPersistentSound(::StringW soundKey, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayPersistentSound", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, soundKey, position);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlayLoopingSound(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayLoopingSound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, position, anchor);
}
/// @param anchor: ::UnityEngine::Transform* (default: nullptr)
/// @param loop: bool (default: false)
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::FadeInSound(::StringW key, float_t duration, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor,
                                                                                             bool loop) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "FadeInSound", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, duration, position, anchor, loop);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SoundEffectManager::FadeSoundSequence(::UnityEngine::AudioSource* audioSource, float_t duration, float_t startVolume,
                                                                                                  float_t targetVolume) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "FadeSoundSequence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, audioSource, duration, startVolume, targetVolume);
}
inline void GlobalNamespace::SoundEffectManager::FadeOutSound(::UnityEngine::AudioSource* source, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "FadeOutSound", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, duration);
}
/// @param anchor: ::UnityEngine::Transform* (default: nullptr)
/// @param loop: bool (default: false)
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlaySoundOnDelay(::StringW key, float_t delay, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor,
                                                                                                  bool loop) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundOnDelay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, delay, position, anchor, loop);
}
/// @param volumeMultiplier: float_t (default: 1.0)
/// @param shouldNetwork: bool (default: false)
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlaySoundWithRandomPitch(::StringW key, ::UnityEngine::Vector3 position, ::UnityEngine::Transform* anchor,
                                                                                                          float_t minPitch, float_t maxPitch, float_t volumeMultiplier, bool shouldNetwork) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundWithRandomPitch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, position, anchor, minPitch, maxPitch, volumeMultiplier, shouldNetwork);
}
/// @param volumeMultiplier: float_t (default: 1.0)
/// @param shouldNetwork: bool (default: false)
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlaySoundWithRandomPitch(::StringW key, ::UnityEngine::Vector3 position, float_t minPitch, float_t maxPitch,
                                                                                                          float_t volumeMultiplier, bool shouldNetwork) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundWithRandomPitch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, position, minPitch, maxPitch, volumeMultiplier, shouldNetwork);
}
/// @param shouldNetwork: bool (default: false)
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlaySoundWithVolumeMultiplier(::StringW key, ::UnityEngine::Vector3 position, float_t volumeMultiplier,
                                                                                                               bool shouldNetwork) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundWithVolumeMultiplier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, position, volumeMultiplier, shouldNetwork);
}
/// @param anchor: ::UnityEngine::Transform* (default: nullptr)
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlaySoundAtTimeOffset(::StringW key, float_t timeOffset, ::UnityEngine::Vector3 position,
                                                                                                       ::UnityEngine::Transform* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlaySoundAtTimeOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, timeOffset, position, anchor);
}
/// @param volumeMultiplier: float_t (default: 1.0)
/// @param pitchMultiplier: float_t (default: 1.0)
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::PlayLinkedSound(::StringW key, ::UnityEngine::AudioSource* linkedSound, bool loop, float_t volumeMultiplier,
                                                                                                 float_t pitchMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayLinkedSound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, linkedSound, loop, volumeMultiplier, pitchMultiplier);
}
/// @param volumeMultiplier: float_t (default: 1.0)
/// @param pitchMultiplier: float_t (default: 1.0)
inline void GlobalNamespace::SoundEffectManager::PlayRemoteOnlySound(::StringW key, ::UnityEngine::Vector3 position, float_t volumeMultiplier, float_t pitchMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayRemoteOnlySound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, position, volumeMultiplier, pitchMultiplier);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::SoundEffectManager::OnReceivePlaySoundEffect(::StringW key, ::UnityEngine::Vector3 position, float_t volumeMultiplier,
                                                                                                          float_t pitchMultiplier, int32_t randomSeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "OnReceivePlaySoundEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, key, position, volumeMultiplier, pitchMultiplier, randomSeed);
}
inline void GlobalNamespace::SoundEffectManager::OnRoomLoaded(::GlobalNamespace::Room* newRoom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newRoom);
}
inline void GlobalNamespace::SoundEffectManager::PlayFootstepSound(::UnityEngine::Vector3 position, ::GlobalNamespace::MapObject* hitMapObject, ::UnityEngine::Collider* hitCollider,
                                                                   ::UnityEngine::Vector3 velocity, float_t pitchMultiplier, bool shouldNetwork) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "PlayFootstepSound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, hitMapObject, hitCollider, velocity, pitchMultiplier, shouldNetwork);
}
/// @param fadeTime: float_t (default: 0.0)
inline int32_t GlobalNamespace::SoundEffectManager::QueueDestroySound(::UnityEngine::AudioSource* source, float_t delay, ::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed* onSourceDestroyed,
                                                                      float_t fadeTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "QueueDestroySound", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SoundEffectManager__OnSourceDestroyed*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, source, delay, onSourceDestroyed, fadeTime);
}
inline void GlobalNamespace::SoundEffectManager::CancelDestroySound(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "CancelDestroySound",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void GlobalNamespace::SoundEffectManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundEffectManager::GetSoundVolume(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), "GetSoundVolume", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, key);
}
inline ::GlobalNamespace::SoundEffectManager* GlobalNamespace::SoundEffectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SoundEffectManager*>());
}
inline void GlobalNamespace::SoundEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SoundEffectManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundEffectManager::SoundEffectManager() {}
