#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarMirror_def.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDisplay_def.hpp"
#include "GlobalNamespace/zzzz__ExpressionController_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AvatarMirror.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarMirror::*)()>(&::GlobalNamespace::AvatarMirror::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x154100c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarMirror.SetReferencePlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarMirror::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::AvatarMirror::SetReferencePlayer)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x1541098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), "SetReferencePlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarMirror.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarMirror::*)(bool)>(&::GlobalNamespace::AvatarMirror::SetActive)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x1541310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), "SetActive", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarMirror.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarMirror::*)()>(&::GlobalNamespace::AvatarMirror::Update)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x15415e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarMirror._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarMirror::*)()>(&::GlobalNamespace::AvatarMirror::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1541780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AvatarMirror::__cordl_internal_get_activeContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AvatarMirror::__cordl_internal_get_activeContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeContainer;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AvatarMirror::__cordl_internal_get_inactiveContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inactiveContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AvatarMirror::__cordl_internal_get_inactiveContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inactiveContainer;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_inactiveContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inactiveContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Avatar>& GlobalNamespace::AvatarMirror::__cordl_internal_get_mirrorAvatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorAvatar;
}
constexpr ::UnityW<::GlobalNamespace::Avatar> const& GlobalNamespace::AvatarMirror::__cordl_internal_get_mirrorAvatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorAvatar;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_mirrorAvatar(::UnityW<::GlobalNamespace::Avatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mirrorAvatar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ExpressionController>& GlobalNamespace::AvatarMirror::__cordl_internal_get_mirrorExpression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorExpression;
}
constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& GlobalNamespace::AvatarMirror::__cordl_internal_get_mirrorExpression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorExpression;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_mirrorExpression(::UnityW<::GlobalNamespace::ExpressionController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mirrorExpression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AvatarMirror::__cordl_internal_get_mirrorAvatarPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorAvatarPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AvatarMirror::__cordl_internal_get_mirrorAvatarPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorAvatarPosition;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_mirrorAvatarPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorAvatarPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::AvatarMirror::__cordl_internal_get_mirrorAvatarRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorAvatarRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::AvatarMirror::__cordl_internal_get_mirrorAvatarRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorAvatarRotation;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_mirrorAvatarRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorAvatarRotation = value;
}
constexpr ::UnityW<::GlobalNamespace::Player>& GlobalNamespace::AvatarMirror::__cordl_internal_get_referencePlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencePlayer;
}
constexpr ::UnityW<::GlobalNamespace::Player> const& GlobalNamespace::AvatarMirror::__cordl_internal_get_referencePlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencePlayer;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_referencePlayer(::UnityW<::GlobalNamespace::Player> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___referencePlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay>& GlobalNamespace::AvatarMirror::__cordl_internal_get_referenceCosmeticsDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceCosmeticsDisplay;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay> const& GlobalNamespace::AvatarMirror::__cordl_internal_get_referenceCosmeticsDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceCosmeticsDisplay;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_referenceCosmeticsDisplay(::UnityW<::GlobalNamespace::CosmeticsDisplay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___referenceCosmeticsDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AvatarMirror::__cordl_internal_get_isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr bool const& GlobalNamespace::AvatarMirror::__cordl_internal_get_isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr void GlobalNamespace::AvatarMirror::__cordl_internal_set_isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActive = value;
}
inline void GlobalNamespace::AvatarMirror::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarMirror::SetReferencePlayer(::GlobalNamespace::Player* newReferencePlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), "SetReferencePlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newReferencePlayer);
}
inline void GlobalNamespace::AvatarMirror::SetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), "SetActive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::AvatarMirror::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AvatarMirror* GlobalNamespace::AvatarMirror::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AvatarMirror*>());
}
inline void GlobalNamespace::AvatarMirror::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarMirror*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarMirror::AvatarMirror() {}
