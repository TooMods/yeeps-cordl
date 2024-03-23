#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarHand_def.hpp"
#include "DitzelGames/FastIK/zzzz__FastIKFabric_def.hpp"
#include "GlobalNamespace/zzzz__AvatarHand_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AvatarHand__GripType::__AvatarHand__GripType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarHand__GripType::__AvatarHand__GripType() {}
constexpr ::GlobalNamespace::__AvatarHand__GripType GlobalNamespace::__AvatarHand__GripType::fist{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__AvatarHand__GripType GlobalNamespace::__AvatarHand__GripType::fistThumbUp{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__AvatarHand__GripType GlobalNamespace::__AvatarHand__GripType::ballSmall{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__AvatarHand__GripType GlobalNamespace::__AvatarHand__GripType::ballBig{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__AvatarHand__GripType GlobalNamespace::__AvatarHand__GripType::disc{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__AvatarHand__GripType GlobalNamespace::__AvatarHand__GripType::gun{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__AvatarHand__GripType GlobalNamespace::__AvatarHand__GripType::detonator{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::__AvatarHand__GripData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarHand__GripData::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::__AvatarHand__GripData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x158ac78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__GripData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarHand__GripData.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AvatarHand__GripData::*)(ByRef<::GlobalNamespace::__AvatarHand__Pose>)>(
    &::GlobalNamespace::__AvatarHand__GripData::Apply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x158acb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__GripData*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__AvatarHand__Pose>>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__AvatarHand__GripData::__cordl_internal_get_indexFingerRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexFingerRatio;
}
constexpr float_t const& GlobalNamespace::__AvatarHand__GripData::__cordl_internal_get_indexFingerRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexFingerRatio;
}
constexpr void GlobalNamespace::__AvatarHand__GripData::__cordl_internal_set_indexFingerRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexFingerRatio = value;
}
constexpr float_t& GlobalNamespace::__AvatarHand__GripData::__cordl_internal_get_middleFingerRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___middleFingerRatio;
}
constexpr float_t const& GlobalNamespace::__AvatarHand__GripData::__cordl_internal_get_middleFingerRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___middleFingerRatio;
}
constexpr void GlobalNamespace::__AvatarHand__GripData::__cordl_internal_set_middleFingerRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___middleFingerRatio = value;
}
constexpr float_t& GlobalNamespace::__AvatarHand__GripData::__cordl_internal_get_thumbFingerRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thumbFingerRatio;
}
constexpr float_t const& GlobalNamespace::__AvatarHand__GripData::__cordl_internal_get_thumbFingerRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thumbFingerRatio;
}
constexpr void GlobalNamespace::__AvatarHand__GripData::__cordl_internal_set_thumbFingerRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thumbFingerRatio = value;
}
inline ::GlobalNamespace::__AvatarHand__GripData* GlobalNamespace::__AvatarHand__GripData::New_ctor(float_t indexFingerRatio, float_t middleFingerRatio, float_t thumbFingerRatio) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AvatarHand__GripData*>(indexFingerRatio, middleFingerRatio, thumbFingerRatio));
}
inline void GlobalNamespace::__AvatarHand__GripData::_ctor(float_t indexFingerRatio, float_t middleFingerRatio, float_t thumbFingerRatio) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__GripData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFingerRatio, middleFingerRatio, thumbFingerRatio);
}
inline void GlobalNamespace::__AvatarHand__GripData::Apply(ByRef<::GlobalNamespace::__AvatarHand__Pose> pose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__GripData*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__AvatarHand__Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarHand__GripData::__AvatarHand__GripData() {}
//  Writing Method size for method: ::GlobalNamespace::__AvatarHand__Pose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__AvatarHand__Pose::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, float_t)>(&::GlobalNamespace::__AvatarHand__Pose::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x158acc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarHand__Pose.GetWristJointPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__AvatarHand__Pose::*)(bool)>(
    &::GlobalNamespace::__AvatarHand__Pose::GetWristJointPosition)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x158a6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get(), "GetWristJointPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AvatarHand__Pose.LerpUnclamped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AvatarHand__Pose (*)(
    ::GlobalNamespace::__AvatarHand__Pose, ::GlobalNamespace::__AvatarHand__Pose, float_t)>(&::GlobalNamespace::__AvatarHand__Pose::LerpUnclamped)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1589c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get(), "LerpUnclamped", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__AvatarHand__Pose::setStaticF_rightControllerToWristJoint(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "rightControllerToWristJoint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::__AvatarHand__Pose::getStaticF_rightControllerToWristJoint() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "rightControllerToWristJoint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get>();
}
inline void GlobalNamespace::__AvatarHand__Pose::setStaticF_leftControllerToWristJoint(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "leftControllerToWristJoint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::__AvatarHand__Pose::getStaticF_leftControllerToWristJoint() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "leftControllerToWristJoint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get>();
}
inline void GlobalNamespace::__AvatarHand__Pose::_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t indexFingerRatio, float_t middleFingerRatio,
                                                       float_t thumbFingerRatio) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation, indexFingerRatio, middleFingerRatio, thumbFingerRatio);
}
inline ::UnityEngine::Vector3 GlobalNamespace::__AvatarHand__Pose::GetWristJointPosition(bool right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get(), "GetWristJointPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, right);
}
inline ::GlobalNamespace::__AvatarHand__Pose GlobalNamespace::__AvatarHand__Pose::LerpUnclamped(::GlobalNamespace::__AvatarHand__Pose a, ::GlobalNamespace::__AvatarHand__Pose b, float_t p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AvatarHand__Pose>::get(), "LerpUnclamped", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AvatarHand__Pose, false>(nullptr, ___internal_method, a, b, p);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "indexFingerRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "middleFingerRatio", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "thumbFingerRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AvatarHand__Pose::__AvatarHand__Pose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t indexFingerRatio, float_t middleFingerRatio,
                                                                    float_t thumbFingerRatio) noexcept {
  this->position = position;
  this->rotation = rotation;
  this->indexFingerRatio = indexFingerRatio;
  this->middleFingerRatio = middleFingerRatio;
  this->thumbFingerRatio = thumbFingerRatio;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AvatarHand__Pose::__AvatarHand__Pose() {}
//  Writing Method size for method: ::GlobalNamespace::AvatarHand.get_velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AvatarHand::*)()>(&::GlobalNamespace::AvatarHand::get_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x158a688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), "get_velocity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarHand.set_velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarHand::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AvatarHand::set_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x158a694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), "set_velocity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarHand.ExpressPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::AvatarHand::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::__AvatarHand__Pose, bool)>(&::GlobalNamespace::AvatarHand::ExpressPose)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x1588398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), "ExpressPose", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarHand.GetGripData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AvatarHand__GripData* (*)(::GlobalNamespace::__AvatarHand__GripType)>(
    &::GlobalNamespace::AvatarHand::GetGripData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x158a788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), "GetGripData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__GripType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarHand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarHand::*)()>(&::GlobalNamespace::AvatarHand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x158a804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AvatarHand::__cordl_internal_get_right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr bool const& GlobalNamespace::AvatarHand::__cordl_internal_get_right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_right(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___right = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::AvatarHand::__cordl_internal_get_animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::AvatarHand::__cordl_internal_get_animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animator;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AvatarHand::__cordl_internal_get_IKTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AvatarHand::__cordl_internal_get_IKTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKTarget;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_IKTarget(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___IKTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AvatarHand::__cordl_internal_get_grabbedItemContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___grabbedItemContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AvatarHand::__cordl_internal_get_grabbedItemContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___grabbedItemContainer;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_grabbedItemContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___grabbedItemContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::DitzelGames::FastIK::FastIKFabric>& GlobalNamespace::AvatarHand::__cordl_internal_get_IKFabric() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKFabric;
}
constexpr ::UnityW<::DitzelGames::FastIK::FastIKFabric> const& GlobalNamespace::AvatarHand::__cordl_internal_get_IKFabric() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKFabric;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_IKFabric(::UnityW<::DitzelGames::FastIK::FastIKFabric> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___IKFabric)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AvatarHand::__cordl_internal_get_calculateVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calculateVelocity;
}
constexpr bool const& GlobalNamespace::AvatarHand::__cordl_internal_get_calculateVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calculateVelocity;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_calculateVelocity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calculateVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AvatarHand::__cordl_internal_get_lastPositionRelativeToReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPositionRelativeToReference;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AvatarHand::__cordl_internal_get_lastPositionRelativeToReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPositionRelativeToReference;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_lastPositionRelativeToReference(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastPositionRelativeToReference = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AvatarHand::__cordl_internal_get__velocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____velocity_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AvatarHand::__cordl_internal_get__velocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____velocity_k__BackingField;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set__velocity_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____velocity_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AvatarHand::__cordl_internal_get_lastIndexRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastIndexRatio;
}
constexpr float_t const& GlobalNamespace::AvatarHand::__cordl_internal_get_lastIndexRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastIndexRatio;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_lastIndexRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastIndexRatio = value;
}
constexpr float_t& GlobalNamespace::AvatarHand::__cordl_internal_get_lastMiddleRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastMiddleRatio;
}
constexpr float_t const& GlobalNamespace::AvatarHand::__cordl_internal_get_lastMiddleRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastMiddleRatio;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_lastMiddleRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastMiddleRatio = value;
}
constexpr float_t& GlobalNamespace::AvatarHand::__cordl_internal_get_lastThumbRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastThumbRatio;
}
constexpr float_t const& GlobalNamespace::AvatarHand::__cordl_internal_get_lastThumbRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastThumbRatio;
}
constexpr void GlobalNamespace::AvatarHand::__cordl_internal_set_lastThumbRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastThumbRatio = value;
}
inline void GlobalNamespace::AvatarHand::setStaticF_rightHandRotationOffset(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "rightHandRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get>(
      std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::AvatarHand::getStaticF_rightHandRotationOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "rightHandRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get>();
}
inline void GlobalNamespace::AvatarHand::setStaticF_leftHandRotationOffset(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "leftHandRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get>(
      std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::AvatarHand::getStaticF_leftHandRotationOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "leftHandRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get>();
}
inline void GlobalNamespace::AvatarHand::setStaticF_gripDatas(::ArrayW<::GlobalNamespace::__AvatarHand__GripData*, ::Array<::GlobalNamespace::__AvatarHand__GripData*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::__AvatarHand__GripData*, ::Array<::GlobalNamespace::__AvatarHand__GripData*>*>, "gripDatas",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::__AvatarHand__GripData*, ::Array<::GlobalNamespace::__AvatarHand__GripData*>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::__AvatarHand__GripData*, ::Array<::GlobalNamespace::__AvatarHand__GripData*>*> GlobalNamespace::AvatarHand::getStaticF_gripDatas() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::__AvatarHand__GripData*, ::Array<::GlobalNamespace::__AvatarHand__GripData*>*>, "gripDatas",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get>();
}
inline ::UnityEngine::Vector3 GlobalNamespace::AvatarHand::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), "get_velocity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::AvatarHand::set_velocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), "set_velocity", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AvatarHand::ExpressPose(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::GlobalNamespace::__AvatarHand__Pose pose, bool doLerp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), "ExpressPose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bodyPosition, bodyRotation, pose, doLerp);
}
inline ::GlobalNamespace::__AvatarHand__GripData* GlobalNamespace::AvatarHand::GetGripData(::GlobalNamespace::__AvatarHand__GripType gripType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), "GetGripData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__GripType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AvatarHand__GripData*, false>(nullptr, ___internal_method, gripType);
}
inline ::GlobalNamespace::AvatarHand* GlobalNamespace::AvatarHand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AvatarHand*>());
}
inline void GlobalNamespace::AvatarHand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarHand*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarHand::AvatarHand() {}
