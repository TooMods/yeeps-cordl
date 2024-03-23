#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.get_isGlobal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::get_isGlobal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d218c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "get_isGlobal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.set_isGlobal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Volume::*)(bool)>(&::UnityEngine::Rendering::Volume::set_isGlobal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17d2194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "set_isGlobal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.get_profile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::Volume::*)()>(
    &::UnityEngine::Rendering::Volume::get_profile)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x17d21a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "get_profile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.set_profile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Volume::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::Volume::set_profile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d2464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "set_profile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.get_colliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* (::UnityEngine::Rendering::Volume::*)()>(
    &::UnityEngine::Rendering::Volume::get_colliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d246c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "get_colliders",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.get_profileRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::Volume::*)()>(
    &::UnityEngine::Rendering::Volume::get_profileRef)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17d2474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "get_profileRef",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.HasInstantiatedProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::HasInstantiatedProfile)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17d24ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(),
                                                                               "HasInstantiatedProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17d254c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::OnDisable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17d2908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::Update)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17d2b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume.UpdateLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::UpdateLayer)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x17d2bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "UpdateLayer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Volume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Volume::*)()>(&::UnityEngine::Rendering::Volume::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17d2e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::IVolume"
constexpr UnityEngine::Rendering::Volume::operator ::UnityEngine::Rendering::IVolume*() noexcept {
  return static_cast<::UnityEngine::Rendering::IVolume*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IVolume"
constexpr ::UnityEngine::Rendering::IVolume* UnityEngine::Rendering::Volume::i___UnityEngine__Rendering__IVolume() noexcept {
  return static_cast<::UnityEngine::Rendering::IVolume*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::Rendering::Volume::__cordl_internal_get_m_IsGlobal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsGlobal;
}
constexpr bool const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_IsGlobal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsGlobal;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_IsGlobal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsGlobal = value;
}
constexpr float_t& UnityEngine::Rendering::Volume::__cordl_internal_get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr float_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_priority(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
constexpr float_t& UnityEngine::Rendering::Volume::__cordl_internal_get_blendDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendDistance;
}
constexpr float_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_blendDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendDistance;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_blendDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendDistance = value;
}
constexpr float_t& UnityEngine::Rendering::Volume::__cordl_internal_get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::Volume::__cordl_internal_get_sharedProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& UnityEngine::Rendering::Volume::__cordl_internal_get_sharedProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedProfile;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_sharedProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sharedProfile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::Rendering::Volume::__cordl_internal_get_m_Colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colliders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*> const&
UnityEngine::Rendering::Volume::__cordl_internal_get_m_Colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colliders;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_Colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Colliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Volume::__cordl_internal_get_m_PreviousLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousLayer;
}
constexpr int32_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_PreviousLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousLayer;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_PreviousLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousLayer = value;
}
constexpr float_t& UnityEngine::Rendering::Volume::__cordl_internal_get_m_PreviousPriority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPriority;
}
constexpr float_t const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_PreviousPriority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPriority;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_PreviousPriority(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousPriority = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::Volume::__cordl_internal_get_m_InternalProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& UnityEngine::Rendering::Volume::__cordl_internal_get_m_InternalProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalProfile;
}
constexpr void UnityEngine::Rendering::Volume::__cordl_internal_set_m_InternalProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalProfile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Volume::get_isGlobal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "get_isGlobal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::set_isGlobal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "set_isGlobal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::Volume::get_profile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "get_profile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::set_profile(::UnityEngine::Rendering::VolumeProfile* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "set_profile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VolumeProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::Rendering::Volume::get_colliders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "get_colliders",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::Volume::get_profileRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "get_profileRef",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Volume::HasInstantiatedProfile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "HasInstantiatedProfile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Volume::UpdateLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), "UpdateLayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Volume* UnityEngine::Rendering::Volume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Volume*>());
}
inline void UnityEngine::Rendering::Volume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Volume*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Volume::Volume() {}
