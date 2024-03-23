#pragma once
#include "Photon/Pun/UtilityScripts/zzzz__OnClickInstantiate_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnClickInstantiate_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnClickInstantiate_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption::__OnClickInstantiate__InstantiateOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption::__OnClickInstantiate__InstantiateOption() {}
constexpr ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption::Mine{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption::Scene{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickInstantiate.UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickInstantiate::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::Photon::Pun::UtilityScripts::OnClickInstantiate::UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x1ec8d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnClickInstantiate*>::get(), "UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickInstantiate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnClickInstantiate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ec8f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnClickInstantiate*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr Photon::Pun::UtilityScripts::OnClickInstantiate::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* Photon::Pun::UtilityScripts::OnClickInstantiate::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr Photon::Pun::UtilityScripts::OnClickInstantiate::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Photon::Pun::UtilityScripts::OnClickInstantiate::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_Button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Button;
}
constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton const& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_Button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Button;
}
constexpr void Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_set_Button(::UnityEngine::EventSystems::__PointerEventData__InputButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Button = value;
}
constexpr ::UnityEngine::KeyCode& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_ModifierKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ModifierKey;
}
constexpr ::UnityEngine::KeyCode const& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_ModifierKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ModifierKey;
}
constexpr void Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_set_ModifierKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ModifierKey = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_Prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_Prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prefab;
}
constexpr void Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_set_Prefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Prefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_InstantiateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstantiateType;
}
constexpr ::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption const& Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_get_InstantiateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstantiateType;
}
constexpr void Photon::Pun::UtilityScripts::OnClickInstantiate::__cordl_internal_set_InstantiateType(::Photon::Pun::UtilityScripts::__OnClickInstantiate__InstantiateOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InstantiateType = value;
}
inline void Photon::Pun::UtilityScripts::OnClickInstantiate::UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnClickInstantiate*>::get(), "UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::Photon::Pun::UtilityScripts::OnClickInstantiate* Photon::Pun::UtilityScripts::OnClickInstantiate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::OnClickInstantiate*>());
}
inline void Photon::Pun::UtilityScripts::OnClickInstantiate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnClickInstantiate*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::OnClickInstantiate::OnClickInstantiate() {}
