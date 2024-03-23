#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SelfMuteButtonController_def.hpp"
#include "GlobalNamespace/zzzz__ButtonController_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelfMuteButtonController.OnToggleButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfMuteButtonController::*)()>(
    &::GlobalNamespace::SelfMuteButtonController::OnToggleButtonPressed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf24370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(),
                                                                               "OnToggleButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfMuteButtonController.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfMuteButtonController::*)()>(&::GlobalNamespace::SelfMuteButtonController::OnEnable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xf2448c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfMuteButtonController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfMuteButtonController::*)()>(&::GlobalNamespace::SelfMuteButtonController::OnDisable)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xf248e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfMuteButtonController.OnSelfMutedUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfMuteButtonController::*)(bool)>(
    &::GlobalNamespace::SelfMuteButtonController::OnSelfMutedUpdated)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xf246f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), "OnSelfMutedUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfMuteButtonController.OnSpeakingVolumeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfMuteButtonController::*)(float_t)>(
    &::GlobalNamespace::SelfMuteButtonController::OnSpeakingVolumeUpdated)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xf24b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), "OnSpeakingVolumeUpdated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfMuteButtonController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfMuteButtonController::*)()>(&::GlobalNamespace::SelfMuteButtonController::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf24c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ButtonController>& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_buttonController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonController;
}
constexpr ::UnityW<::GlobalNamespace::ButtonController> const& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_buttonController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonController;
}
constexpr void GlobalNamespace::SelfMuteButtonController::__cordl_internal_set_buttonController(::UnityW<::GlobalNamespace::ButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_selfMutedContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selfMutedContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_selfMutedContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selfMutedContainer;
}
constexpr void GlobalNamespace::SelfMuteButtonController::__cordl_internal_set_selfMutedContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selfMutedContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_selfUnmutedContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selfUnmutedContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_selfUnmutedContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selfUnmutedContainer;
}
constexpr void GlobalNamespace::SelfMuteButtonController::__cordl_internal_set_selfUnmutedContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selfUnmutedContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_volumeLevelImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeLevelImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_volumeLevelImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeLevelImage;
}
constexpr void GlobalNamespace::SelfMuteButtonController::__cordl_internal_set_volumeLevelImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___volumeLevelImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_audioEnergyToScaleIncreaseRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioEnergyToScaleIncreaseRatio;
}
constexpr float_t const& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_audioEnergyToScaleIncreaseRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioEnergyToScaleIncreaseRatio;
}
constexpr void GlobalNamespace::SelfMuteButtonController::__cordl_internal_set_audioEnergyToScaleIncreaseRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioEnergyToScaleIncreaseRatio = value;
}
constexpr float_t& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_curFillRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curFillRatio;
}
constexpr float_t const& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_curFillRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curFillRatio;
}
constexpr void GlobalNamespace::SelfMuteButtonController::__cordl_internal_set_curFillRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curFillRatio = value;
}
constexpr float_t& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_maxAudioEnergy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAudioEnergy;
}
constexpr float_t const& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_maxAudioEnergy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAudioEnergy;
}
constexpr void GlobalNamespace::SelfMuteButtonController::__cordl_internal_set_maxAudioEnergy(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAudioEnergy = value;
}
constexpr bool& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_isRegisteredForSpeakingVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegisteredForSpeakingVolume;
}
constexpr bool const& GlobalNamespace::SelfMuteButtonController::__cordl_internal_get_isRegisteredForSpeakingVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegisteredForSpeakingVolume;
}
constexpr void GlobalNamespace::SelfMuteButtonController::__cordl_internal_set_isRegisteredForSpeakingVolume(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRegisteredForSpeakingVolume = value;
}
inline void GlobalNamespace::SelfMuteButtonController::OnToggleButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(),
                                                                             "OnToggleButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelfMuteButtonController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelfMuteButtonController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelfMuteButtonController::OnSelfMutedUpdated(bool newSelfMuted) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), "OnSelfMutedUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSelfMuted);
}
inline void GlobalNamespace::SelfMuteButtonController::OnSpeakingVolumeUpdated(float_t volume) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), "OnSpeakingVolumeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline ::GlobalNamespace::SelfMuteButtonController* GlobalNamespace::SelfMuteButtonController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelfMuteButtonController*>());
}
inline void GlobalNamespace::SelfMuteButtonController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfMuteButtonController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelfMuteButtonController::SelfMuteButtonController() {}
