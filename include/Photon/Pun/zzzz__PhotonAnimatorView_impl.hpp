#pragma once
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStreamQueue_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType::__PhotonAnimatorView__ParameterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType::__PhotonAnimatorView__ParameterType() {}
constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType Photon::Pun::__PhotonAnimatorView__ParameterType::Float{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType Photon::Pun::__PhotonAnimatorView__ParameterType::Int{ static_cast<int32_t>(0x3) };
constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType Photon::Pun::__PhotonAnimatorView__ParameterType::Bool{ static_cast<int32_t>(0x4) };
constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType Photon::Pun::__PhotonAnimatorView__ParameterType::Trigger{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType::__PhotonAnimatorView__SynchronizeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType::__PhotonAnimatorView__SynchronizeType() {}
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType Photon::Pun::__PhotonAnimatorView__SynchronizeType::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType Photon::Pun::__PhotonAnimatorView__SynchronizeType::Discrete{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType Photon::Pun::__PhotonAnimatorView__SynchronizeType::Continuous{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::*)()>(
    &::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2604770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType& Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::Photon::Pun::__PhotonAnimatorView__ParameterType const& Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_set_Type(::Photon::Pun::__PhotonAnimatorView__ParameterType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType& Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_get_SynchronizeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchronizeType;
}
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType const& Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_get_SynchronizeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchronizeType;
}
constexpr void Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_set_SynchronizeType(::Photon::Pun::__PhotonAnimatorView__SynchronizeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SynchronizeType = value;
}
constexpr ::StringW& Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter* Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>());
}
inline void Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter::__PhotonAnimatorView__SynchronizedParameter() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::*)()>(
    &::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2604568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType& Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::__cordl_internal_get_SynchronizeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchronizeType;
}
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizeType const& Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::__cordl_internal_get_SynchronizeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SynchronizeType;
}
constexpr void Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::__cordl_internal_set_SynchronizeType(::Photon::Pun::__PhotonAnimatorView__SynchronizeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SynchronizeType = value;
}
constexpr int32_t& Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::__cordl_internal_get_LayerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LayerIndex;
}
constexpr int32_t const& Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::__cordl_internal_get_LayerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LayerIndex;
}
constexpr void Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::__cordl_internal_set_LayerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LayerIndex = value;
}
inline ::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer* Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>());
}
inline void Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer::__PhotonAnimatorView__SynchronizedLayer() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::*)()>(
    &::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2604024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0._DoesLayerSynchronizeTypeExist_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::*)(
    ::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*)>(&::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::_DoesLayerSynchronizeTypeExist_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2605400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0*>::get(), "<DoesLayerSynchronizeTypeExist>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::__cordl_internal_get_layerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIndex;
}
constexpr int32_t const& Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::__cordl_internal_get_layerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIndex;
}
constexpr void Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::__cordl_internal_set_layerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerIndex = value;
}
inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0* Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0*>());
}
inline void Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::_DoesLayerSynchronizeTypeExist_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0*>::get(), "<DoesLayerSynchronizeTypeExist>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass18_0::__PhotonAnimatorView____c__DisplayClass18_0() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::*)()>(
    &::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2604114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0._DoesParameterSynchronizeTypeExist_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::*)(
    ::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*)>(&::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::_DoesParameterSynchronizeTypeExist_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2605424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0*>::get(),
                                    "<DoesParameterSynchronizeTypeExist>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0* Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0*>());
}
inline void Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::_DoesParameterSynchronizeTypeExist_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0*>::get(), "<DoesParameterSynchronizeTypeExist>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass19_0::__PhotonAnimatorView____c__DisplayClass19_0() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::*)()>(
    &::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260424c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0._GetLayerSynchronizeType_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::*)(
    ::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*)>(&::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::_GetLayerSynchronizeType_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2605448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0*>::get(), "<GetLayerSynchronizeType>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::__cordl_internal_get_layerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIndex;
}
constexpr int32_t const& Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::__cordl_internal_get_layerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIndex;
}
constexpr void Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::__cordl_internal_set_layerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerIndex = value;
}
inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0* Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0*>());
}
inline void Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::_GetLayerSynchronizeType_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0*>::get(), "<GetLayerSynchronizeType>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass22_0::__PhotonAnimatorView____c__DisplayClass22_0() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::*)()>(
    &::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2604374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0._GetParameterSynchronizeType_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::*)(
    ::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*)>(&::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::_GetParameterSynchronizeType_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x260546c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0*>::get(), "<GetParameterSynchronizeType>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0* Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0*>());
}
inline void Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::_GetParameterSynchronizeType_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0*>::get(), "<GetParameterSynchronizeType>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass23_0::__PhotonAnimatorView____c__DisplayClass23_0() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::*)()>(
    &::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2604560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0._SetLayerSynchronized_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::*)(
    ::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*)>(&::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::_SetLayerSynchronized_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2605490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0*>::get(), "<SetLayerSynchronized>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::__cordl_internal_get_layerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIndex;
}
constexpr int32_t const& Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::__cordl_internal_get_layerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerIndex;
}
constexpr void Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::__cordl_internal_set_layerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerIndex = value;
}
inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0* Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0*>());
}
inline void Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::_SetLayerSynchronized_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0*>::get(), "<SetLayerSynchronized>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass24_0::__PhotonAnimatorView____c__DisplayClass24_0() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::*)()>(
    &::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2604768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0._SetParameterSynchronized_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::*)(
    ::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*)>(&::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::_SetParameterSynchronized_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26054b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0*>::get(), "<SetParameterSynchronized>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0* Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0*>());
}
inline void Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::_SetParameterSynchronized_b__0(::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0*>::get(), "<SetParameterSynchronized>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonAnimatorView____c__DisplayClass25_0::__PhotonAnimatorView____c__DisplayClass25_0() {}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2603648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2603698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.CacheDiscreteTriggers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::CacheDiscreteTriggers)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2603afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(),
                                                                               "CacheDiscreteTriggers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DoesLayerSynchronizeTypeExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::PhotonAnimatorView::*)(int32_t)>(
    &::Photon::Pun::PhotonAnimatorView::DoesLayerSynchronizeTypeExist)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2603f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "DoesLayerSynchronizeTypeExist",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DoesParameterSynchronizeTypeExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::PhotonAnimatorView::*)(::StringW)>(
    &::Photon::Pun::PhotonAnimatorView::DoesParameterSynchronizeTypeExist)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x260402c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "DoesParameterSynchronizeTypeExist",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.GetSynchronizedLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>* (
    ::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::GetSynchronizedLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260411c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(),
                                                                               "GetSynchronizedLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.GetSynchronizedParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>* (
    ::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::GetSynchronizedParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2604124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(),
                                                                               "GetSynchronizedParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.GetLayerSynchronizeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Pun::__PhotonAnimatorView__SynchronizeType (::Photon::Pun::PhotonAnimatorView::*)(int32_t)>(
    &::Photon::Pun::PhotonAnimatorView::GetLayerSynchronizeType)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x260412c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "GetLayerSynchronizeType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.GetParameterSynchronizeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Pun::__PhotonAnimatorView__SynchronizeType (::Photon::Pun::PhotonAnimatorView::*)(::StringW)>(
    &::Photon::Pun::PhotonAnimatorView::GetParameterSynchronizeType)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2604254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "GetParameterSynchronizeType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SetLayerSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(int32_t, ::Photon::Pun::__PhotonAnimatorView__SynchronizeType)>(
    &::Photon::Pun::PhotonAnimatorView::SetLayerSynchronized)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x260437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "SetLayerSynchronized", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SetParameterSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(
    ::StringW, ::Photon::Pun::__PhotonAnimatorView__ParameterType, ::Photon::Pun::__PhotonAnimatorView__SynchronizeType)>(&::Photon::Pun::PhotonAnimatorView::SetParameterSynchronized)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2604570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "SetParameterSynchronized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__ParameterType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SerializeDataContinuously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::SerializeDataContinuously)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x26037d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(),
                                                                               "SerializeDataContinuously", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DeserializeDataContinuously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::DeserializeDataContinuously)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2603c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(),
                                                                               "DeserializeDataContinuously", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SerializeDataDiscretly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(
    &::Photon::Pun::PhotonAnimatorView::SerializeDataDiscretly)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2604778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "SerializeDataDiscretly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DeserializeDataDiscretly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(
    &::Photon::Pun::PhotonAnimatorView::DeserializeDataDiscretly)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2604aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "DeserializeDataDiscretly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SerializeSynchronizationTypeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(
    &::Photon::Pun::PhotonAnimatorView::SerializeSynchronizationTypeState)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2604e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "SerializeSynchronizationTypeState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DeserializeSynchronizationTypeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(
    &::Photon::Pun::PhotonAnimatorView::DeserializeSynchronizationTypeState)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2604ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "DeserializeSynchronizationTypeState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.OnPhotonSerializeView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(
    &::Photon::Pun::PhotonAnimatorView::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x260517c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x26052b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr Photon::Pun::PhotonAnimatorView::operator ::Photon::Pun::IPunObservable*() noexcept {
  return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* Photon::Pun::PhotonAnimatorView::i___Photon__Pun__IPunObservable() noexcept {
  return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
constexpr bool& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_TriggerUsageWarningDone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TriggerUsageWarningDone;
}
constexpr bool const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_TriggerUsageWarningDone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TriggerUsageWarningDone;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_TriggerUsageWarningDone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TriggerUsageWarningDone = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_Animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_Animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Animator;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_Animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Pun::PhotonStreamQueue*& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_StreamQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamQueue;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonStreamQueue*> const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_StreamQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreamQueue;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_StreamQueue(::Photon::Pun::PhotonStreamQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StreamQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_ShowLayerWeightsInspector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowLayerWeightsInspector;
}
constexpr bool const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_ShowLayerWeightsInspector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowLayerWeightsInspector;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_ShowLayerWeightsInspector(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShowLayerWeightsInspector = value;
}
constexpr bool& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_ShowParameterInspector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowParameterInspector;
}
constexpr bool const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_ShowParameterInspector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowParameterInspector;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_ShowParameterInspector(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShowParameterInspector = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>*& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_SynchronizeParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SynchronizeParameters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>*> const&
Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_SynchronizeParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SynchronizeParameters;
}
constexpr void
Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_SynchronizeParameters(::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SynchronizeParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>*& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_SynchronizeLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SynchronizeLayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>*> const&
Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_SynchronizeLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SynchronizeLayers;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_SynchronizeLayers(::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SynchronizeLayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_ReceiverPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReceiverPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_ReceiverPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReceiverPosition;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_ReceiverPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReceiverPosition = value;
}
constexpr float_t& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_LastDeserializeTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDeserializeTime;
}
constexpr float_t const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_LastDeserializeTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastDeserializeTime;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_LastDeserializeTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastDeserializeTime = value;
}
constexpr bool& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_WasSynchronizeTypeChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasSynchronizeTypeChanged;
}
constexpr bool const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_WasSynchronizeTypeChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WasSynchronizeTypeChanged;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_WasSynchronizeTypeChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WasSynchronizeTypeChanged = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_raisedDiscreteTriggersCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_raisedDiscreteTriggersCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_raisedDiscreteTriggersCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_raisedDiscreteTriggersCache;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_raisedDiscreteTriggersCache(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_raisedDiscreteTriggersCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Photon::Pun::PhotonAnimatorView::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonAnimatorView::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonAnimatorView::CacheDiscreteTriggers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "CacheDiscreteTriggers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonAnimatorView::DoesLayerSynchronizeTypeExist(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "DoesLayerSynchronizeTypeExist",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, layerIndex);
}
inline bool Photon::Pun::PhotonAnimatorView::DoesParameterSynchronizeTypeExist(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "DoesParameterSynchronizeTypeExist",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>* Photon::Pun::PhotonAnimatorView::GetSynchronizedLayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "GetSynchronizedLayers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedLayer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>* Photon::Pun::PhotonAnimatorView::GetSynchronizedParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(),
                                                                             "GetSynchronizedParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Photon::Pun::__PhotonAnimatorView__SynchronizedParameter*>*, false>(this, ___internal_method);
}
inline ::Photon::Pun::__PhotonAnimatorView__SynchronizeType Photon::Pun::PhotonAnimatorView::GetLayerSynchronizeType(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "GetLayerSynchronizeType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Photon::Pun::__PhotonAnimatorView__SynchronizeType, false>(this, ___internal_method, layerIndex);
}
inline ::Photon::Pun::__PhotonAnimatorView__SynchronizeType Photon::Pun::PhotonAnimatorView::GetParameterSynchronizeType(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "GetParameterSynchronizeType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Photon::Pun::__PhotonAnimatorView__SynchronizeType, false>(this, ___internal_method, name);
}
inline void Photon::Pun::PhotonAnimatorView::SetLayerSynchronized(int32_t layerIndex, ::Photon::Pun::__PhotonAnimatorView__SynchronizeType synchronizeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "SetLayerSynchronized", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layerIndex, synchronizeType);
}
inline void Photon::Pun::PhotonAnimatorView::SetParameterSynchronized(::StringW name, ::Photon::Pun::__PhotonAnimatorView__ParameterType type,
                                                                      ::Photon::Pun::__PhotonAnimatorView__SynchronizeType synchronizeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "SetParameterSynchronized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__ParameterType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonAnimatorView__SynchronizeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, type, synchronizeType);
}
inline void Photon::Pun::PhotonAnimatorView::SerializeDataContinuously() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(),
                                                                             "SerializeDataContinuously", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonAnimatorView::DeserializeDataContinuously() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(),
                                                                             "DeserializeDataContinuously", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::PhotonAnimatorView::SerializeDataDiscretly(::Photon::Pun::PhotonStream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "SerializeDataDiscretly", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonAnimatorView::DeserializeDataDiscretly(::Photon::Pun::PhotonStream* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "DeserializeDataDiscretly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonAnimatorView::SerializeSynchronizationTypeState(::Photon::Pun::PhotonStream* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "SerializeSynchronizationTypeState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonAnimatorView::DeserializeSynchronizationTypeState(::Photon::Pun::PhotonStream* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "DeserializeSynchronizationTypeState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonAnimatorView::OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), "OnPhotonSerializeView", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonMessageInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, info);
}
inline ::Photon::Pun::PhotonAnimatorView* Photon::Pun::PhotonAnimatorView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::PhotonAnimatorView*>());
}
inline void Photon::Pun::PhotonAnimatorView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonAnimatorView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView::PhotonAnimatorView() {}
