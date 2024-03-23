#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousTurnProviderBase_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedContinuousTurnProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedContinuousTurnProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedContinuousTurnProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes::__DeviceBasedContinuousTurnProvider__InputAxes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes::__DeviceBasedContinuousTurnProvider__InputAxes() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes::Primary2DAxis{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes
    UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes::Secondary2DAxis{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.get_inputBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes (
    ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_inputBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3016390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                                 "get_inputBinding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.set_inputBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes)>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_inputBinding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3016398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "set_inputBinding",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.get_controllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* (
    ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30163a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                                 "get_controllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.set_controllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30163a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "set_controllers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.get_deadzoneMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_deadzoneMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30163b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                                 "get_deadzoneMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.set_deadzoneMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_deadzoneMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30163b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "set_deadzoneMin",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.get_deadzoneMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_deadzoneMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30163c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                                 "get_deadzoneMax", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.set_deadzoneMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_deadzoneMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30163c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "set_deadzoneMax",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.ReadInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::ReadInput)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x30163d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.GetDeadzoneAdjustedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(
    ::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::GetDeadzoneAdjustedValue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x30165e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "GetDeadzoneAdjustedValue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider.GetDeadzoneAdjustedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::GetDeadzoneAdjustedValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3016744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "GetDeadzoneAdjustedValue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x301678c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes&
UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_get_m_InputBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputBinding;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes const&
UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_get_m_InputBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputBinding;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_set_m_InputBinding(
    ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputBinding = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*&
UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_get_m_Controllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controllers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*> const&
UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_get_m_Controllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controllers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_set_m_Controllers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Controllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_get_m_DeadzoneMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeadzoneMin;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_get_m_DeadzoneMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeadzoneMin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_set_m_DeadzoneMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeadzoneMin = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_get_m_DeadzoneMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeadzoneMax;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_get_m_DeadzoneMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeadzoneMax;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::__cordl_internal_set_m_DeadzoneMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeadzoneMax = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::setStaticF_k_Vec2UsageList(
    ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*>,
                                    "k_Vec2UsageList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get>(
      std::forward<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*>>(value));
}
inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*>
UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::getStaticF_k_Vec2UsageList() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*>,
                                           "k_Vec2UsageList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_inputBinding() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                               "get_inputBinding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_inputBinding(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "set_inputBinding",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousTurnProvider__InputAxes>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*
UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_controllers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                               "get_controllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_controllers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "set_controllers",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_deadzoneMin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                               "get_deadzoneMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_deadzoneMin(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "set_deadzoneMin",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_deadzoneMax() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(),
                                               "get_deadzoneMax", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_deadzoneMax(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "set_deadzoneMax",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::ReadInput() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::GetDeadzoneAdjustedValue(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "GetDeadzoneAdjustedValue",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::GetDeadzoneAdjustedValue(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), "GetDeadzoneAdjustedValue",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider* UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::DeviceBasedContinuousTurnProvider() {}
