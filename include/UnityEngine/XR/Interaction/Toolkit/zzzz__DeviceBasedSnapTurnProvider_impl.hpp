#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedSnapTurnProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SnapTurnProviderBase_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedSnapTurnProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedSnapTurnProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes::__DeviceBasedSnapTurnProvider__InputAxes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes::__DeviceBasedSnapTurnProvider__InputAxes() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes::Primary2DAxis{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes::Secondary2DAxis{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.get_turnUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes (
    ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_turnUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301836c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "get_turnUsage",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.set_turnUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes)>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_turnUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "set_turnUsage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.get_controllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* (
    ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301837c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(),
                                                 "get_controllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.set_controllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "set_controllers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.get_deadZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_deadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301838c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "get_deadZone",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.set_deadZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_deadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "set_deadZone",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.ReadInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::ReadInput)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x301839c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x30185c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_TurnUsage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TurnUsage;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes const&
UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_TurnUsage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TurnUsage;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_set_m_TurnUsage(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TurnUsage = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*&
UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_Controllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controllers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*> const&
UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_Controllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controllers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_set_m_Controllers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Controllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_DeadZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeadZone;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_DeadZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeadZone;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_set_m_DeadZone(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeadZone = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::setStaticF_k_Vec2UsageList(
    ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*>,
                                    "k_Vec2UsageList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get>(
      std::forward<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*>>(value));
}
inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*>
UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::getStaticF_k_Vec2UsageList() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*>,
                                           "k_Vec2UsageList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_turnUsage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "get_turnUsage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_turnUsage(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "set_turnUsage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*
UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_controllers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "get_controllers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_controllers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "set_controllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_deadZone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "get_deadZone",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_deadZone(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), "set_deadZone",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::ReadInput() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider* UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::DeviceBasedSnapTurnProvider() {}
