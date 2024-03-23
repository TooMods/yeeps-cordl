#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DitzelGames/FastIK/zzzz__FastIKLook_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::DitzelGames::FastIK::FastIKLook.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DitzelGames::FastIK::FastIKLook::*)()>(&::DitzelGames::FastIK::FastIKLook::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1086d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::FastIKLook*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DitzelGames::FastIK::FastIKLook.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DitzelGames::FastIK::FastIKLook::*)()>(&::DitzelGames::FastIK::FastIKLook::Update)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1086e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::FastIKLook*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DitzelGames::FastIK::FastIKLook._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DitzelGames::FastIK::FastIKLook::*)()>(&::DitzelGames::FastIK::FastIKLook::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1086fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::FastIKLook*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& DitzelGames::FastIK::FastIKLook::__cordl_internal_get_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& DitzelGames::FastIK::FastIKLook::__cordl_internal_get_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr void DitzelGames::FastIK::FastIKLook::__cordl_internal_set_Target(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& DitzelGames::FastIK::FastIKLook::__cordl_internal_get_StartDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartDirection;
}
constexpr ::UnityEngine::Vector3 const& DitzelGames::FastIK::FastIKLook::__cordl_internal_get_StartDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartDirection;
}
constexpr void DitzelGames::FastIK::FastIKLook::__cordl_internal_set_StartDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartDirection = value;
}
constexpr ::UnityEngine::Quaternion& DitzelGames::FastIK::FastIKLook::__cordl_internal_get_StartRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartRotation;
}
constexpr ::UnityEngine::Quaternion const& DitzelGames::FastIK::FastIKLook::__cordl_internal_get_StartRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartRotation;
}
constexpr void DitzelGames::FastIK::FastIKLook::__cordl_internal_set_StartRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartRotation = value;
}
inline void DitzelGames::FastIK::FastIKLook::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::FastIKLook*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void DitzelGames::FastIK::FastIKLook::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::FastIKLook*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DitzelGames::FastIK::FastIKLook* DitzelGames::FastIK::FastIKLook::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DitzelGames::FastIK::FastIKLook*>());
}
inline void DitzelGames::FastIK::FastIKLook::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::FastIKLook*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::DitzelGames::FastIK::FastIKLook::FastIKLook() {}
