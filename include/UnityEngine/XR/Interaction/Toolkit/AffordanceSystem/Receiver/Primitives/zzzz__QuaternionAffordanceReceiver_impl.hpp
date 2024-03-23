#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__Vector4AffordanceReceiver_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__QuaternionAffordanceReceiver_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__QuaternionUnityEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver.get_quaternionValueUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::XR::CoreUtils::QuaternionUnityEvent* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::get_quaternionValueUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a31254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(),
        "get_quaternionValueUpdated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver.set_quaternionValueUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::*)(::Unity::XR::CoreUtils::QuaternionUnityEvent*)>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::set_quaternionValueUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3125c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(),
        "set_quaternionValueUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::QuaternionUnityEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver.OnAffordanceValueUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::*)(::Unity::Mathematics::float4)>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::OnAffordanceValueUpdated)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a31264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3130c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::XR::CoreUtils::QuaternionUnityEvent*&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::__cordl_internal_get_m_QuaternionValueUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_QuaternionValueUpdated;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::QuaternionUnityEvent*> const&
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::__cordl_internal_get_m_QuaternionValueUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_QuaternionValueUpdated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::__cordl_internal_set_m_QuaternionValueUpdated(
    ::Unity::XR::CoreUtils::QuaternionUnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_QuaternionValueUpdated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::XR::CoreUtils::QuaternionUnityEvent* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::get_quaternionValueUpdated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(),
      "get_quaternionValueUpdated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::QuaternionUnityEvent*, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::set_quaternionValueUpdated(::Unity::XR::CoreUtils::QuaternionUnityEvent* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(),
      "set_quaternionValueUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::QuaternionUnityEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::OnAffordanceValueUpdated(::Unity::Mathematics::float4 newValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::QuaternionAffordanceReceiver() {}
