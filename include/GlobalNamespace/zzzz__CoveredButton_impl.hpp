#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoveredButton_def.hpp"
#include "GlobalNamespace/zzzz__SimpleButtonController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoveredButton.SetIsCovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoveredButton::*)(bool, bool)>(&::GlobalNamespace::CoveredButton::SetIsCovered)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29d655c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoveredButton*>::get(), "SetIsCovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoveredButton.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoveredButton::*)()>(&::GlobalNamespace::CoveredButton::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29d65f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoveredButton*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoveredButton.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoveredButton::*)()>(&::GlobalNamespace::CoveredButton::OnDisable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x29d66a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoveredButton*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoveredButton._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CoveredButton::*)()>(&::GlobalNamespace::CoveredButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d66f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoveredButton*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CoveredButton::__cordl_internal_get_buttonCover() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonCover;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CoveredButton::__cordl_internal_get_buttonCover() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonCover;
}
constexpr void GlobalNamespace::CoveredButton::__cordl_internal_set_buttonCover(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonCover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::CoveredButton::__cordl_internal_get_openCoverAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openCoverAngle;
}
constexpr float_t const& GlobalNamespace::CoveredButton::__cordl_internal_get_openCoverAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openCoverAngle;
}
constexpr void GlobalNamespace::CoveredButton::__cordl_internal_set_openCoverAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___openCoverAngle = value;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& GlobalNamespace::CoveredButton::__cordl_internal_get_button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& GlobalNamespace::CoveredButton::__cordl_internal_get_button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr void GlobalNamespace::CoveredButton::__cordl_internal_set_button(::UnityW<::GlobalNamespace::SimpleButtonController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CoveredButton::__cordl_internal_get_isCovered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCovered;
}
constexpr bool const& GlobalNamespace::CoveredButton::__cordl_internal_get_isCovered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCovered;
}
constexpr void GlobalNamespace::CoveredButton::__cordl_internal_set_isCovered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCovered = value;
}
constexpr float_t& GlobalNamespace::CoveredButton::__cordl_internal_get_coverP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coverP;
}
constexpr float_t const& GlobalNamespace::CoveredButton::__cordl_internal_get_coverP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coverP;
}
constexpr void GlobalNamespace::CoveredButton::__cordl_internal_set_coverP(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coverP = value;
}
constexpr bool& GlobalNamespace::CoveredButton::__cordl_internal_get_isAnimating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAnimating;
}
constexpr bool const& GlobalNamespace::CoveredButton::__cordl_internal_get_isAnimating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAnimating;
}
constexpr void GlobalNamespace::CoveredButton::__cordl_internal_set_isAnimating(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAnimating = value;
}
constexpr float_t& GlobalNamespace::CoveredButton::__cordl_internal_get_initialCoverAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialCoverAngle;
}
constexpr float_t const& GlobalNamespace::CoveredButton::__cordl_internal_get_initialCoverAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialCoverAngle;
}
constexpr void GlobalNamespace::CoveredButton::__cordl_internal_set_initialCoverAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialCoverAngle = value;
}
/// @param instant: bool (default: false)
inline void GlobalNamespace::CoveredButton::SetIsCovered(bool newIsCovered, bool instant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoveredButton*>::get(), "SetIsCovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCovered, instant);
}
inline void GlobalNamespace::CoveredButton::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoveredButton*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CoveredButton::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoveredButton*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CoveredButton* GlobalNamespace::CoveredButton::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CoveredButton*>());
}
inline void GlobalNamespace::CoveredButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CoveredButton*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoveredButton::CoveredButton() {}
