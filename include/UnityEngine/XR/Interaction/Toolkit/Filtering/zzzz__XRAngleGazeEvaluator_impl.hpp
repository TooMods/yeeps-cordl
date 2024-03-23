#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRAngleGazeEvaluator_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.GetXROriginCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::GetXROriginCamera)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ff1648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                                 "GetXROriginCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.get_gazeTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::get_gazeTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff173c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                                 "get_gazeTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.set_gazeTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::set_gazeTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff1744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), "set_gazeTransform",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.get_maxAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::get_maxAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff174c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                                 "get_maxAngle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.set_maxAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::set_maxAngle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ff1754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), "set_maxAngle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.InitializeGazeTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::InitializeGazeTransform)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2ff1774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                                 "InitializeGazeTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ff187c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ff18f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.CalculateNormalizedScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::CalculateNormalizedScore)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2ff1900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ff1c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_get_m_GazeTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_get_m_GazeTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GazeTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_set_m_GazeTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GazeTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_get_m_MaxAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_get_m_MaxAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_set_m_MaxAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxAngle = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::setStaticF_s_XROriginInstance(::UnityW<::Unity::XR::CoreUtils::XROrigin> value) {
  ::cordl_internals::setStaticField<::UnityW<::Unity::XR::CoreUtils::XROrigin>, "s_XROriginInstance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get>(
      std::forward<::UnityW<::Unity::XR::CoreUtils::XROrigin>>(value));
}
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::getStaticF_s_XROriginInstance() {
  return ::cordl_internals::getStaticField<::UnityW<::Unity::XR::CoreUtils::XROrigin>, "s_XROriginInstance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get>();
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::GetXROriginCamera() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                               "GetXROriginCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::get_gazeTransform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                               "get_gazeTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::set_gazeTransform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), "set_gazeTransform",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::get_maxAngle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), "get_maxAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::set_maxAngle(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), "set_maxAngle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::InitializeGazeTransform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(),
                                               "InitializeGazeTransform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                                                                                ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* target) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, interactor, target);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::XRAngleGazeEvaluator() {}
