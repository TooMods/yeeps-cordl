#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlatScreenPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__MasterPlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlatScreenPlayerController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlatScreenPlayerController::*)()>(&::GlobalNamespace::FlatScreenPlayerController::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1062050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatScreenPlayerController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlatScreenPlayerController.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlatScreenPlayerController::*)()>(
    &::GlobalNamespace::FlatScreenPlayerController::Activate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1062054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatScreenPlayerController*>::get(),
                                                                               "Activate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlatScreenPlayerController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlatScreenPlayerController::*)()>(&::GlobalNamespace::FlatScreenPlayerController::Update)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x106207c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatScreenPlayerController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlatScreenPlayerController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlatScreenPlayerController::*)()>(&::GlobalNamespace::FlatScreenPlayerController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10623a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatScreenPlayerController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr void GlobalNamespace::FlatScreenPlayerController::__cordl_internal_set_player(::UnityW<::GlobalNamespace::MasterPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_playerRB() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerRB;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_playerRB() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerRB;
}
constexpr void GlobalNamespace::FlatScreenPlayerController::__cordl_internal_set_playerRB(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerRB)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr void GlobalNamespace::FlatScreenPlayerController::__cordl_internal_set_head(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_rightHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_rightHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr void GlobalNamespace::FlatScreenPlayerController::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_leftHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_leftHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr void GlobalNamespace::FlatScreenPlayerController::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_objectsToDisableForFreeCam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectsToDisableForFreeCam;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_objectsToDisableForFreeCam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectsToDisableForFreeCam;
}
constexpr void
GlobalNamespace::FlatScreenPlayerController::__cordl_internal_set_objectsToDisableForFreeCam(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectsToDisableForFreeCam)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr bool const& GlobalNamespace::FlatScreenPlayerController::__cordl_internal_get_isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr void GlobalNamespace::FlatScreenPlayerController::__cordl_internal_set_isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActive = value;
}
inline void GlobalNamespace::FlatScreenPlayerController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatScreenPlayerController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FlatScreenPlayerController::Activate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatScreenPlayerController*>::get(), "Activate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FlatScreenPlayerController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatScreenPlayerController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FlatScreenPlayerController* GlobalNamespace::FlatScreenPlayerController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlatScreenPlayerController*>());
}
inline void GlobalNamespace::FlatScreenPlayerController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatScreenPlayerController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlatScreenPlayerController::FlatScreenPlayerController() {}
