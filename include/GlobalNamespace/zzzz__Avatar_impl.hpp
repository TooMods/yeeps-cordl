#pragma once
#include "GlobalNamespace/zzzz__AvatarHand_impl.hpp"
#include "GlobalNamespace/zzzz__Avatar_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__AvatarHand_def.hpp"
#include "GlobalNamespace/zzzz__AvatarIdentity_def.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticData_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDisplay_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__Avatar__AvatarPortion::__Avatar__AvatarPortion(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Avatar__AvatarPortion::__Avatar__AvatarPortion() {}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion GlobalNamespace::__Avatar__AvatarPortion::all{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__Avatar__AvatarPortion GlobalNamespace::__Avatar__AvatarPortion::headOnly{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__Avatar__AvatarPortion GlobalNamespace::__Avatar__AvatarPortion::bodyOnly{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__Avatar__AvatarPortion GlobalNamespace::__Avatar__AvatarPortion::bodyOnlyNoArms{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__Avatar__Pose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Avatar__Pose::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::__AvatarHand__Pose, ::GlobalNamespace::__AvatarHand__Pose)>(&::GlobalNamespace::__Avatar__Pose::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x158998c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar__Pose.GetRightPolePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__Avatar__Pose::*)()>(
    &::GlobalNamespace::__Avatar__Pose::GetRightPolePosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x15899c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get(), "GetRightPolePosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar__Pose.GetLeftPolePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__Avatar__Pose::*)()>(
    &::GlobalNamespace::__Avatar__Pose::GetLeftPolePosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1589a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get(), "GetLeftPolePosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar__Pose.LerpUnclamped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Avatar__Pose (*)(::GlobalNamespace::__Avatar__Pose, ::GlobalNamespace::__Avatar__Pose, float_t)>(
    &::GlobalNamespace::__Avatar__Pose::LerpUnclamped)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1589a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get(), "LerpUnclamped", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__Pose>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__Pose>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__Avatar__Pose::setStaticF_rightHandPoleOffset(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "rightHandPoleOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::__Avatar__Pose::getStaticF_rightHandPoleOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "rightHandPoleOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get>();
}
inline void GlobalNamespace::__Avatar__Pose::setStaticF_leftHandPoleOffset(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "leftHandPoleOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::__Avatar__Pose::getStaticF_leftHandPoleOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "leftHandPoleOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get>();
}
inline void GlobalNamespace::__Avatar__Pose::_ctor(::UnityEngine::Vector3 headPosition, ::UnityEngine::Quaternion headRotation, ::GlobalNamespace::__AvatarHand__Pose rightHandPose,
                                                   ::GlobalNamespace::__AvatarHand__Pose leftHandPose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarHand__Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headPosition, headRotation, rightHandPose, leftHandPose);
}
inline ::UnityEngine::Vector3 GlobalNamespace::__Avatar__Pose::GetRightPolePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get(), "GetRightPolePosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::__Avatar__Pose::GetLeftPolePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get(), "GetLeftPolePosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__Avatar__Pose GlobalNamespace::__Avatar__Pose::LerpUnclamped(::GlobalNamespace::__Avatar__Pose a, ::GlobalNamespace::__Avatar__Pose b, float_t p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__Pose>::get(), "LerpUnclamped", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__Pose>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__Pose>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Avatar__Pose, false>(nullptr, ___internal_method, a, b, p);
}
// Ctor Parameters [CppParam { name: "headPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "headRotation", ty: "::UnityEngine::Quaternion", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "rightHandPose", ty: "::GlobalNamespace::__AvatarHand__Pose", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftHandPose", ty:
// "::GlobalNamespace::__AvatarHand__Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__Avatar__Pose::__Avatar__Pose(::UnityEngine::Vector3 headPosition, ::UnityEngine::Quaternion headRotation, ::GlobalNamespace::__AvatarHand__Pose rightHandPose,
                                                            ::GlobalNamespace::__AvatarHand__Pose leftHandPose) noexcept {
  this->headPosition = headPosition;
  this->headRotation = headRotation;
  this->rightHandPose = rightHandPose;
  this->leftHandPose = leftHandPose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Avatar__Pose::__Avatar__Pose() {}
//  Writing Method size for method: ::GlobalNamespace::__Avatar__OnVisualLayerUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Avatar__OnVisualLayerUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__Avatar__OnVisualLayerUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1589d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar__OnVisualLayerUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Avatar__OnVisualLayerUpdated::*)(int32_t)>(
    &::GlobalNamespace::__Avatar__OnVisualLayerUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1589e48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar__OnVisualLayerUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__Avatar__OnVisualLayerUpdated::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__Avatar__OnVisualLayerUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1589e5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar__OnVisualLayerUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Avatar__OnVisualLayerUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__Avatar__OnVisualLayerUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1589ee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__Avatar__OnVisualLayerUpdated* GlobalNamespace::__Avatar__OnVisualLayerUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>(object, method));
}
inline void GlobalNamespace::__Avatar__OnVisualLayerUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__Avatar__OnVisualLayerUpdated::Invoke(int32_t newVisualLayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newVisualLayer);
}
inline ::System::IAsyncResult* GlobalNamespace::__Avatar__OnVisualLayerUpdated::BeginInvoke(int32_t newVisualLayer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newVisualLayer, callback, object);
}
inline void GlobalNamespace::__Avatar__OnVisualLayerUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Avatar__OnVisualLayerUpdated::__Avatar__OnVisualLayerUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::*)(int32_t)>(
    &::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x158981c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::*)()>(
    &::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1589eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::*)()>(
    &::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1589ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::*)()>(
    &::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x158a074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::*)()>(
    &::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x158a07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::*)()>(
    &::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x158a0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Avatar>& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::Avatar> const& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::Avatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get_targetOpenness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetOpenness;
}
constexpr float_t const& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get_targetOpenness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetOpenness;
}
constexpr void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_set_targetOpenness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetOpenness = value;
}
constexpr float_t& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get__startOpenness_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startOpenness_5__2;
}
constexpr float_t const& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get__startOpenness_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startOpenness_5__2;
}
constexpr void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_set__startOpenness_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startOpenness_5__2 = value;
}
constexpr float_t& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get__p_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__3;
}
constexpr float_t const& GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_get__p_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__3;
}
constexpr void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__cordl_internal_set__p_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p_5__3 = value;
}
inline ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87* GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>(__1__state));
}
inline void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87::__Avatar___ZipperOpenRoutine_d__87() {}
//  Writing Method size for method: ::GlobalNamespace::Avatar.get_visualLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::Avatar::*)()>(&::GlobalNamespace::Avatar::get_visualLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1587920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "get_visualLayer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.set_visualLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(int32_t)>(&::GlobalNamespace::Avatar::set_visualLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1587928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "set_visualLayer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)()>(&::GlobalNamespace::Avatar::Awake)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1587930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.ExpressPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::__Avatar__Pose, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::Avatar::ExpressPose)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x1587cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ExpressPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(::GlobalNamespace::AvatarIdentity*)>(&::GlobalNamespace::Avatar::SetIdentity)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1588844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetIdentity", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarIdentity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.ClearIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)()>(&::GlobalNamespace::Avatar::ClearIdentity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1588930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ClearIdentity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetOverrideBaseColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(::UnityEngine::Color)>(&::GlobalNamespace::Avatar::SetOverrideBaseColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1588b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetOverrideBaseColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.ClearOverrideBaseColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)()>(&::GlobalNamespace::Avatar::ClearOverrideBaseColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1588b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ClearOverrideBaseColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.RefreshColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)()>(&::GlobalNamespace::Avatar::RefreshColor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x15889a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "RefreshColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetSkinMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(::UnityEngine::Material*)>(&::GlobalNamespace::Avatar::SetSkinMaterial)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1588b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetSkinMaterial", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetStatusEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(::GlobalNamespace::__Player__StatusEffect)>(
    &::GlobalNamespace::Avatar::SetStatusEffect)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1588c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetStatusEffect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetAlwaysVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(bool)>(&::GlobalNamespace::Avatar::SetAlwaysVisible)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x1588cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetAlwaysVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*)>(
    &::GlobalNamespace::Avatar::SetCosmetics)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1589054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetBaseAvatarPortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(::GlobalNamespace::__Avatar__AvatarPortion)>(
    &::GlobalNamespace::Avatar::SetBaseAvatarPortion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15893f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetBaseAvatarPortion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__AvatarPortion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetOverrideAvatarPortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(::GlobalNamespace::__Avatar__AvatarPortion)>(
    &::GlobalNamespace::Avatar::SetOverrideAvatarPortion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1589428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetOverrideAvatarPortion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__AvatarPortion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.ClearOverrideAvatarPortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)()>(&::GlobalNamespace::Avatar::ClearOverrideAvatarPortion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1589438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ClearOverrideAvatarPortion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.RefreshAvatarPortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)()>(&::GlobalNamespace::Avatar::RefreshAvatarPortion)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x15893fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "RefreshAvatarPortion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetAvatarPortion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(::GlobalNamespace::__Avatar__AvatarPortion)>(
    &::GlobalNamespace::Avatar::SetAvatarPortion)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1589440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetAvatarPortion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__AvatarPortion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.SetZipperOpenness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)(float_t, bool)>(&::GlobalNamespace::Avatar::SetZipperOpenness)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1587bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetZipperOpenness", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.ZipperOpenRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::Avatar::*)(float_t)>(
    &::GlobalNamespace::Avatar::ZipperOpenRoutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x15897a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ZipperOpenRoutine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.GetHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::AvatarHand> (::GlobalNamespace::Avatar::*)(bool)>(&::GlobalNamespace::Avatar::GetHand)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1589844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "GetHand", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.GetItemAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::Avatar::*)(::GlobalNamespace::__Item__AnchorState)>(
    &::GlobalNamespace::Avatar::GetItemAnchor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x158985c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "GetItemAnchor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__AnchorState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar.GetStuffingTransferAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::Avatar::*)()>(
    &::GlobalNamespace::Avatar::GetStuffingTransferAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15898d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "GetStuffingTransferAnchor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Avatar._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Avatar::*)()>(&::GlobalNamespace::Avatar::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x15898dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_headBone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_headBone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headBone;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_headBone(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headBone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AvatarHand>& GlobalNamespace::Avatar::__cordl_internal_get_rightHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr ::UnityW<::GlobalNamespace::AvatarHand> const& GlobalNamespace::Avatar::__cordl_internal_get_rightHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_rightHand(::UnityW<::GlobalNamespace::AvatarHand> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AvatarHand>& GlobalNamespace::Avatar::__cordl_internal_get_leftHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr ::UnityW<::GlobalNamespace::AvatarHand> const& GlobalNamespace::Avatar::__cordl_internal_get_leftHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_leftHand(::UnityW<::GlobalNamespace::AvatarHand> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_rightHandIKPole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandIKPole;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_rightHandIKPole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandIKPole;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_rightHandIKPole(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandIKPole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_leftHandIKPole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandIKPole;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_leftHandIKPole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandIKPole;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_leftHandIKPole(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandIKPole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_bodyAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_bodyAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyAnchor;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_bodyAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bodyAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_headAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_headAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headAnchor;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_headAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_headTopAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headTopAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_headTopAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headTopAnchor;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_headTopAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headTopAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_handAnchorRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handAnchorRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_handAnchorRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handAnchorRight;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_handAnchorRight(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handAnchorRight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_handAnchorLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handAnchorLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_handAnchorLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handAnchorLeft;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_handAnchorLeft(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handAnchorLeft)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_upperArmAnchorRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upperArmAnchorRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_upperArmAnchorRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upperArmAnchorRight;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_upperArmAnchorRight(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upperArmAnchorRight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_upperArmAnchorLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upperArmAnchorLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_upperArmAnchorLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upperArmAnchorLeft;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_upperArmAnchorLeft(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upperArmAnchorLeft)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_lowerArmAnchorRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerArmAnchorRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_lowerArmAnchorRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerArmAnchorRight;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_lowerArmAnchorRight(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lowerArmAnchorRight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_lowerArmAnchorLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerArmAnchorLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_lowerArmAnchorLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerArmAnchorLeft;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_lowerArmAnchorLeft(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lowerArmAnchorLeft)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_stuffingTransferAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stuffingTransferAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_stuffingTransferAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stuffingTransferAnchor;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_stuffingTransferAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stuffingTransferAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_maxSideToSideVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSideToSideVelocity;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_maxSideToSideVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxSideToSideVelocity;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_maxSideToSideVelocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxSideToSideVelocity = value;
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_maxForwardBackwardsVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxForwardBackwardsVelocity;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_maxForwardBackwardsVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxForwardBackwardsVelocity;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_maxForwardBackwardsVelocity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxForwardBackwardsVelocity = value;
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_bodyAnimationIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyAnimationIntensity;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_bodyAnimationIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyAnimationIntensity;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_bodyAnimationIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bodyAnimationIntensity = value;
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_topTorsoAnimationIntensityMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topTorsoAnimationIntensityMul;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_topTorsoAnimationIntensityMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topTorsoAnimationIntensityMul;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_topTorsoAnimationIntensityMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topTorsoAnimationIntensityMul = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& GlobalNamespace::Avatar::__cordl_internal_get_hangingTorsoBones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangingTorsoBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& GlobalNamespace::Avatar::__cordl_internal_get_hangingTorsoBones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangingTorsoBones;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_hangingTorsoBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hangingTorsoBones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_hangDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangDistance;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_hangDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangDistance;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_hangDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hangDistance = value;
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_hangScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangScale;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_hangScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangScale;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_hangScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hangScale = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::Avatar::__cordl_internal_get_torsoBoneLengths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoBoneLengths;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::Avatar::__cordl_internal_get_torsoBoneLengths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___torsoBoneLengths;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_torsoBoneLengths(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___torsoBoneLengths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::Avatar::__cordl_internal_get_hangingTorsoBoneLengths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangingTorsoBoneLengths;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::Avatar::__cordl_internal_get_hangingTorsoBoneLengths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangingTorsoBoneLengths;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_hangingTorsoBoneLengths(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hangingTorsoBoneLengths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_debugDistanceToGround() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugDistanceToGround;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_debugDistanceToGround() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugDistanceToGround;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_debugDistanceToGround(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugDistanceToGround = value;
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_curHangRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curHangRatio;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_curHangRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curHangRatio;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_curHangRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curHangRatio = value;
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_hangRatioLerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangRatioLerpSpeed;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_hangRatioLerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hangRatioLerpSpeed;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_hangRatioLerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hangRatioLerpSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_zipperAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_zipperAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperAnchor;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_zipperAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zipperAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Avatar::__cordl_internal_get_zipperAnchorEulers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperAnchorEulers;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Avatar::__cordl_internal_get_zipperAnchorEulers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperAnchorEulers;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_zipperAnchorEulers(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zipperAnchorEulers = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::Avatar::__cordl_internal_get_mainRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::Avatar::__cordl_internal_get_mainRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainRenderer;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_mainRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>, ::Array<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*>& GlobalNamespace::Avatar::__cordl_internal_get_handRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>, ::Array<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*> const& GlobalNamespace::Avatar::__cordl_internal_get_handRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handRenderers;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_handRenderers(::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>, ::Array<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& GlobalNamespace::Avatar::__cordl_internal_get_eyeRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& GlobalNamespace::Avatar::__cordl_internal_get_eyeRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeRenderers;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_eyeRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eyeRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay>& GlobalNamespace::Avatar::__cordl_internal_get_cosmeticsDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsDisplay;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay> const& GlobalNamespace::Avatar::__cordl_internal_get_cosmeticsDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsDisplay;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_cosmeticsDisplay(::UnityW<::GlobalNamespace::CosmeticsDisplay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticsDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::Avatar::__cordl_internal_get__visualLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualLayer_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::Avatar::__cordl_internal_get__visualLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualLayer_k__BackingField;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set__visualLayer_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visualLayer_k__BackingField = value;
}
constexpr bool& GlobalNamespace::Avatar::__cordl_internal_get_hasBaseColorOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasBaseColorOverride;
}
constexpr bool const& GlobalNamespace::Avatar::__cordl_internal_get_hasBaseColorOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasBaseColorOverride;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_hasBaseColorOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasBaseColorOverride = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Avatar::__cordl_internal_get_baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Avatar::__cordl_internal_get_baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseColor;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_baseColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseColor = value;
}
constexpr bool& GlobalNamespace::Avatar::__cordl_internal_get_hasStatusEffectColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasStatusEffectColor;
}
constexpr bool const& GlobalNamespace::Avatar::__cordl_internal_get_hasStatusEffectColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasStatusEffectColor;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_hasStatusEffectColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasStatusEffectColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Avatar::__cordl_internal_get_statusEffectColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Avatar::__cordl_internal_get_statusEffectColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectColor;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_statusEffectColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusEffectColor = value;
}
constexpr ::GlobalNamespace::AvatarIdentity*& GlobalNamespace::Avatar::__cordl_internal_get_identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identity;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarIdentity*> const& GlobalNamespace::Avatar::__cordl_internal_get_identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identity;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_identity(::GlobalNamespace::AvatarIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::Avatar::__cordl_internal_get_overrideSkinMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideSkinMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::Avatar::__cordl_internal_get_overrideSkinMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideSkinMat;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_overrideSkinMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideSkinMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*& GlobalNamespace::Avatar::__cordl_internal_get_cosmetics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmetics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*> const& GlobalNamespace::Avatar::__cordl_internal_get_cosmetics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmetics;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_cosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmetics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion& GlobalNamespace::Avatar::__cordl_internal_get_avatarPortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarPortion;
}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion const& GlobalNamespace::Avatar::__cordl_internal_get_avatarPortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarPortion;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_avatarPortion(::GlobalNamespace::__Avatar__AvatarPortion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarPortion = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& GlobalNamespace::Avatar::__cordl_internal_get_avatarPortionMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarPortionMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& GlobalNamespace::Avatar::__cordl_internal_get_avatarPortionMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarPortionMeshes;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_avatarPortionMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___avatarPortionMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_tummyAnchorRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tummyAnchorRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_tummyAnchorRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tummyAnchorRight;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_tummyAnchorRight(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tummyAnchorRight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Avatar::__cordl_internal_get_tummyAnchorLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tummyAnchorLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Avatar::__cordl_internal_get_tummyAnchorLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tummyAnchorLeft;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_tummyAnchorLeft(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tummyAnchorLeft)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Avatar::__cordl_internal_get_tummyAnchorBasePositionRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tummyAnchorBasePositionRight;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Avatar::__cordl_internal_get_tummyAnchorBasePositionRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tummyAnchorBasePositionRight;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_tummyAnchorBasePositionRight(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tummyAnchorBasePositionRight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Avatar::__cordl_internal_get_tummyAnchorBasePositionLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tummyAnchorBasePositionLeft;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Avatar::__cordl_internal_get_tummyAnchorBasePositionLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tummyAnchorBasePositionLeft;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_tummyAnchorBasePositionLeft(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tummyAnchorBasePositionLeft = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::Avatar::__cordl_internal_get_curZipperOpenRoutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curZipperOpenRoutine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& GlobalNamespace::Avatar::__cordl_internal_get_curZipperOpenRoutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curZipperOpenRoutine;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_curZipperOpenRoutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curZipperOpenRoutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::Avatar::__cordl_internal_get_curZipperOpenness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curZipperOpenness;
}
constexpr float_t const& GlobalNamespace::Avatar::__cordl_internal_get_curZipperOpenness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curZipperOpenness;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_curZipperOpenness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curZipperOpenness = value;
}
constexpr ::GlobalNamespace::__Avatar__OnVisualLayerUpdated*& GlobalNamespace::Avatar::__cordl_internal_get_onVisualLayerUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onVisualLayerUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*> const& GlobalNamespace::Avatar::__cordl_internal_get_onVisualLayerUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onVisualLayerUpdatedCallbacks;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_onVisualLayerUpdatedCallbacks(::GlobalNamespace::__Avatar__OnVisualLayerUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onVisualLayerUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion& GlobalNamespace::Avatar::__cordl_internal_get_baseAvatarPortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseAvatarPortion;
}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion const& GlobalNamespace::Avatar::__cordl_internal_get_baseAvatarPortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseAvatarPortion;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_baseAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseAvatarPortion = value;
}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion& GlobalNamespace::Avatar::__cordl_internal_get_overrideAvatarPortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAvatarPortion;
}
constexpr ::GlobalNamespace::__Avatar__AvatarPortion const& GlobalNamespace::Avatar::__cordl_internal_get_overrideAvatarPortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAvatarPortion;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_overrideAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideAvatarPortion = value;
}
constexpr bool& GlobalNamespace::Avatar::__cordl_internal_get_hasOverrideAvatarPortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasOverrideAvatarPortion;
}
constexpr bool const& GlobalNamespace::Avatar::__cordl_internal_get_hasOverrideAvatarPortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasOverrideAvatarPortion;
}
constexpr void GlobalNamespace::Avatar::__cordl_internal_set_hasOverrideAvatarPortion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasOverrideAvatarPortion = value;
}
inline void GlobalNamespace::Avatar::setStaticF_topTorsoBoneRotationOffset(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "topTorsoBoneRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get>(
      std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::Avatar::getStaticF_topTorsoBoneRotationOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "topTorsoBoneRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get>();
}
inline int32_t GlobalNamespace::Avatar::get_visualLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "get_visualLayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::Avatar::set_visualLayer(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "set_visualLayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::Avatar::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Avatar::ExpressPose(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::GlobalNamespace::__Avatar__Pose pose, ::UnityEngine::Vector3 velocity,
                                                 float_t distanceToGround, bool doLerp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ExpressPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bodyPosition, bodyRotation, pose, velocity, distanceToGround, doLerp);
}
inline void GlobalNamespace::Avatar::SetIdentity(::GlobalNamespace::AvatarIdentity* identity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetIdentity", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarIdentity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identity);
}
inline void GlobalNamespace::Avatar::ClearIdentity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ClearIdentity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Avatar::SetOverrideBaseColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetOverrideBaseColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::Avatar::ClearOverrideBaseColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ClearOverrideBaseColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Avatar::RefreshColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "RefreshColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Avatar::SetSkinMaterial(::UnityEngine::Material* newMat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetSkinMaterial", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMat);
}
inline void GlobalNamespace::Avatar::SetStatusEffect(::GlobalNamespace::__Player__StatusEffect statusEffect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetStatusEffect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusEffect);
}
inline void GlobalNamespace::Avatar::SetAlwaysVisible(bool isAlwaysVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetAlwaysVisible", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isAlwaysVisible);
}
inline void GlobalNamespace::Avatar::SetCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cosmetics);
}
inline void GlobalNamespace::Avatar::SetBaseAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion newAvatarPortion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetBaseAvatarPortion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__AvatarPortion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAvatarPortion);
}
inline void GlobalNamespace::Avatar::SetOverrideAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion newAvatarPortion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetOverrideAvatarPortion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__AvatarPortion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAvatarPortion);
}
inline void GlobalNamespace::Avatar::ClearOverrideAvatarPortion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ClearOverrideAvatarPortion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Avatar::RefreshAvatarPortion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "RefreshAvatarPortion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Avatar::SetAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion newAvatarPortion) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetAvatarPortion", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Avatar__AvatarPortion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAvatarPortion);
}
/// @param instant: bool (default: false)
inline void GlobalNamespace::Avatar::SetZipperOpenness(float_t targetOpenness, bool instant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "SetZipperOpenness", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetOpenness, instant);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::Avatar::ZipperOpenRoutine(float_t targetOpenness) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "ZipperOpenRoutine", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, targetOpenness);
}
inline ::UnityW<::GlobalNamespace::AvatarHand> GlobalNamespace::Avatar::GetHand(bool right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "GetHand", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AvatarHand>, false>(this, ___internal_method, right);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::Avatar::GetItemAnchor(::GlobalNamespace::__Item__AnchorState anchor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "GetItemAnchor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__AnchorState>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, anchor);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::Avatar::GetStuffingTransferAnchor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), "GetStuffingTransferAnchor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Avatar* GlobalNamespace::Avatar::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Avatar*>());
}
inline void GlobalNamespace::Avatar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Avatar*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Avatar::Avatar() {}
