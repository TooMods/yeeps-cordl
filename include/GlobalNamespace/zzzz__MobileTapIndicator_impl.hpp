#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MobileTapIndicator_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MobileTapIndicator.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTapIndicator::*)()>(&::GlobalNamespace::MobileTapIndicator::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e00d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTapIndicator*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTapIndicator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTapIndicator::*)()>(&::GlobalNamespace::MobileTapIndicator::Update)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2e00e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTapIndicator*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTapIndicator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTapIndicator::*)()>(&::GlobalNamespace::MobileTapIndicator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e00f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTapIndicator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_scaleCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_scaleCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleCurve;
}
constexpr void GlobalNamespace::MobileTapIndicator::__cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scaleCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_maxScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxScale;
}
constexpr float_t const& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_maxScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxScale;
}
constexpr void GlobalNamespace::MobileTapIndicator::__cordl_internal_set_maxScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxScale = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_opacityCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opacityCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_opacityCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opacityCurve;
}
constexpr void GlobalNamespace::MobileTapIndicator::__cordl_internal_set_opacityCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___opacityCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_maxOpacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxOpacity;
}
constexpr float_t const& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_maxOpacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxOpacity;
}
constexpr void GlobalNamespace::MobileTapIndicator::__cordl_internal_set_maxOpacity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxOpacity = value;
}
constexpr float_t& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::MobileTapIndicator::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr float_t& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr float_t const& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void GlobalNamespace::MobileTapIndicator::__cordl_internal_set_p(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage>& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___image;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___image;
}
constexpr void GlobalNamespace::MobileTapIndicator::__cordl_internal_set_image(::UnityW<::UnityEngine::UI::RawImage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___image)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MobileTapIndicator::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::MobileTapIndicator::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
inline void GlobalNamespace::MobileTapIndicator::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTapIndicator*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileTapIndicator::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTapIndicator*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MobileTapIndicator* GlobalNamespace::MobileTapIndicator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobileTapIndicator*>());
}
inline void GlobalNamespace::MobileTapIndicator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTapIndicator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileTapIndicator::MobileTapIndicator() {}
