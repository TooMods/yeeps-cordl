#pragma once
#include "GlobalNamespace/zzzz__Player_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MasterPlayer_def.hpp"
#include "GlobalNamespace/zzzz__EndlessItemSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlatScreenPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__MasterPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "GlobalNamespace/zzzz__SpectatorCameraController_def.hpp"
#include "GlobalNamespace/zzzz__WindZone_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRDirectInteractor_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicMaterial_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MasterPlayer__OnPickupItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MasterPlayer__OnPickupItem::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__MasterPlayer__OnPickupItem::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1069eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MasterPlayer__OnPickupItem.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MasterPlayer__OnPickupItem::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::__MasterPlayer__OnPickupItem::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1069fdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MasterPlayer__OnPickupItem.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__MasterPlayer__OnPickupItem::*)(::GlobalNamespace::Item*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__MasterPlayer__OnPickupItem::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1069ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MasterPlayer__OnPickupItem.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MasterPlayer__OnPickupItem::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__MasterPlayer__OnPickupItem::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x106a010;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MasterPlayer__OnPickupItem* GlobalNamespace::__MasterPlayer__OnPickupItem::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MasterPlayer__OnPickupItem*>(object, method));
}
inline void GlobalNamespace::__MasterPlayer__OnPickupItem::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__MasterPlayer__OnPickupItem::Invoke(::GlobalNamespace::Item* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline ::System::IAsyncResult* GlobalNamespace::__MasterPlayer__OnPickupItem::BeginInvoke(::GlobalNamespace::Item* item, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, item, callback, object);
}
inline void GlobalNamespace::__MasterPlayer__OnPickupItem::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnPickupItem*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MasterPlayer__OnPickupItem::__MasterPlayer__OnPickupItem() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MasterPlayer__CollisionBodyPart::__MasterPlayer__CollisionBodyPart(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MasterPlayer__CollisionBodyPart::__MasterPlayer__CollisionBodyPart() {}
constexpr ::GlobalNamespace::__MasterPlayer__CollisionBodyPart GlobalNamespace::__MasterPlayer__CollisionBodyPart::body{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MasterPlayer__CollisionBodyPart GlobalNamespace::__MasterPlayer__CollisionBodyPart::head{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MasterPlayer__CollisionBodyPart GlobalNamespace::__MasterPlayer__CollisionBodyPart::rightHand{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__MasterPlayer__CollisionBodyPart GlobalNamespace::__MasterPlayer__CollisionBodyPart::leftHand{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x106a01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::*)(float_t)>(
    &::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x106a0e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::*)(float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x106a0f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x106a178;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack* GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>(object, method));
}
inline void GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::Invoke(float_t intensityRatio) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, intensityRatio);
}
inline ::System::IAsyncResult* GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::BeginInvoke(float_t intensityRatio, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, intensityRatio, callback, object);
}
inline void GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack::__MasterPlayer__OnMasterPlayerKnockedBack() {}
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.get_spectatorCameraController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SpectatorCameraController> (::GlobalNamespace::MasterPlayer::*)()>(
    &::GlobalNamespace::MasterPlayer::get_spectatorCameraController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10623b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "get_spectatorCameraController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.set_spectatorCameraController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::SpectatorCameraController*)>(
    &::GlobalNamespace::MasterPlayer::set_spectatorCameraController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10623b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "set_spectatorCameraController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpectatorCameraController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::MasterPlayer::Initialize)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x10623c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::DestroySelf)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x10632a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ExpressPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::__Player__Pose)>(
    &::GlobalNamespace::MasterPlayer::ExpressPose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x10632e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnReceivedPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::__Player__Pose)>(
    &::GlobalNamespace::MasterPlayer::OnReceivedPose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1063320;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.InitializeLocomotionValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::InitializeLocomotionValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1062d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "InitializeLocomotionValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.CurrentLeftHandPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MasterPlayer::*)()>(
    &::GlobalNamespace::MasterPlayer::CurrentLeftHandPosition)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x1063360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "CurrentLeftHandPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.CurrentRightHandPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MasterPlayer::*)()>(
    &::GlobalNamespace::MasterPlayer::CurrentRightHandPosition)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x1063608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "CurrentRightHandPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.PositionWithOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::MasterPlayer::PositionWithOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1063588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "PositionWithOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::OnUpdate)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x1063830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.DoLocomotionUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(float_t)>(&::GlobalNamespace::MasterPlayer::DoLocomotionUpdate)> {
  constexpr static std::size_t size = 0xf50;
  constexpr static std::size_t addrs = 0x1064114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoLocomotionUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnLateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::OnLateUpdate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1066144;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.IterativeCollisionSphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MasterPlayer::*)(
    ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, ::UnityEngine::LayerMask, ::GlobalNamespace::__MasterPlayer__CollisionBodyPart, ByRef<::UnityEngine::Vector3>, bool)>(
    &::GlobalNamespace::MasterPlayer::IterativeCollisionSphereCast)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x1065734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "IterativeCollisionSphereCast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MasterPlayer__CollisionBodyPart>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.CollisionsSphereCast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MasterPlayer::*)(
    ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, ::UnityEngine::LayerMask, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::RaycastHit>)>(
    &::GlobalNamespace::MasterPlayer::CollisionsSphereCast)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x10661ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "CollisionsSphereCast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.IsHandTouching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MasterPlayer::*)(bool)>(&::GlobalNamespace::MasterPlayer::IsHandTouching)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1066ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "IsHandTouching",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.Turn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(float_t)>(&::GlobalNamespace::MasterPlayer::Turn)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x1066bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "Turn", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.StoreVelocities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(float_t)>(&::GlobalNamespace::MasterPlayer::StoreVelocities)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1065d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "StoreVelocities", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.TeleportTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::MasterPlayer::TeleportTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1066e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "TeleportTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.TeleportByOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MasterPlayer::TeleportByOffset)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1067140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "TeleportByOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ResetLocomotion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::ResetLocomotion)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x1066f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ResetLocomotion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnIsHandCollidingUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::__MasterPlayer__CollisionBodyPart, bool)>(
    &::GlobalNamespace::MasterPlayer::OnIsHandCollidingUpdated)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x1065e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnIsHandCollidingUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MasterPlayer__CollisionBodyPart>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.UpdateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::__Player__Type)>(
    &::GlobalNamespace::MasterPlayer::UpdateType)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x10672cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.SetIsSpectatorMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(bool)>(&::GlobalNamespace::MasterPlayer::SetIsSpectatorMode)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1067568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "SetIsSpectatorMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.UpdateStatusEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::__Player__StatusEffect, float_t)>(
    &::GlobalNamespace::MasterPlayer::UpdateStatusEffect)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x1067738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnStatusEffectRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::__Player__StatusEffect)>(
    &::GlobalNamespace::MasterPlayer::OnStatusEffectRemoved)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1067e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnStatusEffectRemoved", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.RefreshDisableMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::RefreshDisableMovement)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1067540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "RefreshDisableMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.SetIsHidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(bool)>(&::GlobalNamespace::MasterPlayer::SetIsHidden)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1067f24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ProcessTurnInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(float_t)>(&::GlobalNamespace::MasterPlayer::ProcessTurnInput)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1063b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ProcessTurnInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.DoManualRoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(float_t)>(&::GlobalNamespace::MasterPlayer::DoManualRoll)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1063c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoManualRoll", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.DoRoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(float_t)>(&::GlobalNamespace::MasterPlayer::DoRoll)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1067fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoRoll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.BeginRollReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::BeginRollReset)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1063f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "BeginRollReset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.DoRollResetUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::DoRollResetUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1063e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoRollResetUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.GetCurrentRollSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::GetCurrentRollSpeed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1067f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetCurrentRollSpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnCollisionEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Collision*)>(
    &::GlobalNamespace::MasterPlayer::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1068070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnCollisionEnter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnCollisionExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Collision*)>(
    &::GlobalNamespace::MasterPlayer::OnCollisionExit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1068270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnCollisionExit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnTriggerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Collider*)>(
    &::GlobalNamespace::MasterPlayer::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x10682c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnTriggerEnter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnHandOrBodyCollided
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(
    ::GlobalNamespace::__MasterPlayer__CollisionBodyPart, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::MapObject*)>(
    &::GlobalNamespace::MasterPlayer::OnHandOrBodyCollided)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x10666ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnHandOrBodyCollided", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MasterPlayer__CollisionBodyPart>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ResetCollisionClock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::ResetCollisionClock)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1068280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ResetCollisionClock",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.IsAirborne
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::IsAirborne)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1068394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "IsAirborne",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnTriggerStay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Collider*)>(
    &::GlobalNamespace::MasterPlayer::OnTriggerStay)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x10683c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnTriggerStay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.get_hasKnockbackImmunity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::MasterPlayer::get_hasKnockbackImmunity)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1068500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "get_hasKnockbackImmunity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.set_hasKnockbackImmunity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::MasterPlayer::set_hasKnockbackImmunity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1068558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "set_hasKnockbackImmunity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.InitializeKnockbackImmunity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::MasterPlayer::InitializeKnockbackImmunity)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x1062e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "InitializeKnockbackImmunity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnCosmeticsModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::MasterPlayer::OnCosmeticsModeUpdated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10685b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnCosmeticsModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnTechWebModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::MasterPlayer::OnTechWebModeUpdated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x106860c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnTechWebModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnDressingRoomModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::MasterPlayer::OnDressingRoomModeUpdated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1068664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnDressingRoomModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnIsOutsideMapOnLobbySideUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::MasterPlayer::OnIsOutsideMapOnLobbySideUpdated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1068884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnIsOutsideMapOnLobbySideUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnIsOutsideMapOnHallwaySideUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::MasterPlayer::OnIsOutsideMapOnHallwaySideUpdated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10688dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnIsOutsideMapOnHallwaySideUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnGriefProtectionUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::MasterPlayer::OnGriefProtectionUpdated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1068934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnGriefProtectionUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.SetKnockbackImmunity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, int32_t)>(&::GlobalNamespace::MasterPlayer::SetKnockbackImmunity)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x10686bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "SetKnockbackImmunity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnReceiveApplyKnockback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Vector3, ::GlobalNamespace::__Player__KnockbackSource)>(
    &::GlobalNamespace::MasterPlayer::OnReceiveApplyKnockback)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x106898c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ApplyAccelerationForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MasterPlayer::ApplyAccelerationForce)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1068d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ApplyAccelerationForce", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.MaximizeVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MasterPlayer::MaximizeVelocity)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1068d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "MaximizeVelocity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.MaximizeVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(float_t)>(&::GlobalNamespace::MasterPlayer::MaximizeVelocity)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1068f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "MaximizeVelocity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ApplyDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(float_t, float_t)>(&::GlobalNamespace::MasterPlayer::ApplyDrag)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x10690c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ApplyDrag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ApplySetVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MasterPlayer::ApplySetVelocity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x106916c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ApplySetVelocity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ApplySetVelocityNoHaptic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MasterPlayer::ApplySetVelocityNoHaptic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x10691bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ApplySetVelocityNoHaptic", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnFixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::OnFixedUpdate)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x10691ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnEnteredFirstWindZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::OnEnteredFirstWindZone)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1069758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "OnEnteredFirstWindZone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnExitedLastWindZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::OnExitedLastWindZone)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1069788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnExitedLastWindZone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.GetWindZones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> (
    ::GlobalNamespace::MasterPlayer::*)(ByRef<int32_t>)>(&::GlobalNamespace::MasterPlayer::GetWindZones)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10697b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetWindZones", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.DoMeetPlayerUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::DoMeetPlayerUpdate)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x1065308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoMeetPlayerUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnIsLeftHandedUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(bool)>(&::GlobalNamespace::MasterPlayer::OnIsLeftHandedUpdated)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1063118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnIsLeftHandedUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.DoAboveBuildHeightLimitUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::DoAboveBuildHeightLimitUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x106560c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "DoAboveBuildHeightLimitUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.NotifyItemPickedUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::MasterPlayer::NotifyItemPickedUp)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1069884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "NotifyItemPickedUp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnInteractionLockUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(bool)>(&::GlobalNamespace::MasterPlayer::OnInteractionLockUpdated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1062a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnInteractionLockUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.SubmitKnockbackForGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::SubmitKnockbackForGriefProtection)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1068c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "SubmitKnockbackForGriefProtection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.PromptGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::PromptGriefProtection)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1069944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "PromptGriefProtection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.EnableGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::EnableGriefProtection)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1069a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "EnableGriefProtection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.DisableGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::DisableGriefProtection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1069acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "DisableGriefProtection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.ProcessGriefProtection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::ProcessGriefProtection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x10640a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                               "ProcessGriefProtection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.OnAllowGreifProtectionSettingUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(bool)>(
    &::GlobalNamespace::MasterPlayer::OnAllowGreifProtectionSettingUpdated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1069b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnAllowGreifProtectionSettingUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.GetInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* (::GlobalNamespace::MasterPlayer::*)(bool)>(
    &::GlobalNamespace::MasterPlayer::GetInteractor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1069b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetInteractor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.GetCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::GlobalNamespace::MasterPlayer::*)()>(
    &::GlobalNamespace::MasterPlayer::GetCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1069b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.GetCameraPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::GetCameraPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1069b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetCameraPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.GetBellyPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::GetBellyPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1069bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetBellyPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.GetVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::GetVelocity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1066690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetVelocity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer.GetHandVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MasterPlayer::*)(bool)>(
    &::GlobalNamespace::MasterPlayer::GetHandVelocity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1069be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetHandVelocity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)()>(&::GlobalNamespace::MasterPlayer::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1069c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MasterPlayer._PromptGriefProtection_b__227_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MasterPlayer::*)(::GlobalNamespace::__ImaginationPrompt__ActionType)>(
    &::GlobalNamespace::MasterPlayer::_PromptGriefProtection_b__227_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1069e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "<PromptGriefProtection>b__227_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MasterPlayer::__cordl_internal_get_mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCamera;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_bellyAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bellyAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_bellyAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bellyAnchor;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_bellyAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bellyAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::MasterPlayer::__cordl_internal_get_headCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_headCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headCollider;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_headCollider(::UnityW<::UnityEngine::SphereCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headTransform;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::MasterPlayer::__cordl_internal_get_bodyCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_bodyCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyCollider;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::CapsuleCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bodyCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_bodyTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_bodyTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyTransform;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_bodyTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bodyTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_leftHandFollower() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandFollower;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_leftHandFollower() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandFollower;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_leftHandFollower(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandFollower)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_rightHandFollower() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandFollower;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rightHandFollower() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandFollower;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rightHandFollower(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandFollower)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_rightHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rightHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandTransform;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_leftHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_leftHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandTransform;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor>& GlobalNamespace::MasterPlayer::__cordl_internal_get_rightHandInteractor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandInteractor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rightHandInteractor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandInteractor;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rightHandInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHandInteractor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor>& GlobalNamespace::MasterPlayer::__cordl_internal_get_leftHandInteractor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandInteractor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_leftHandInteractor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandInteractor;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_leftHandInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHandInteractor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastLeftHandPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastLeftHandPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastLeftHandPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastLeftHandPosition;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_lastLeftHandPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastLeftHandPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastRightHandPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRightHandPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastRightHandPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRightHandPosition;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_lastRightHandPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastRightHandPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastHeadPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastHeadPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastHeadPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastHeadPosition;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_lastHeadPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastHeadPosition = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::MasterPlayer::__cordl_internal_get_rb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rb;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_velocityHistorySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityHistorySize;
}
constexpr int32_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_velocityHistorySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityHistorySize;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_velocityHistorySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___velocityHistorySize = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_maxArmLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxArmLength;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_maxArmLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxArmLength;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_maxArmLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxArmLength = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_unStickDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unStickDistance;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_unStickDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unStickDistance;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_unStickDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unStickDistance = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_velocityLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityLimit;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_velocityLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityLimit;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_velocityLimit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___velocityLimit = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_maxJumpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxJumpSpeed;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_maxJumpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxJumpSpeed;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_maxJumpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxJumpSpeed = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_jumpMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpMultiplier;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_jumpMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpMultiplier;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_jumpMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpMultiplier = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_minimumRaycastDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimumRaycastDistance;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_minimumRaycastDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimumRaycastDistance;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_minimumRaycastDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minimumRaycastDistance = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_defaultSlideFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSlideFactor;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_defaultSlideFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSlideFactor;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_defaultSlideFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultSlideFactor = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_defaultPrecision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultPrecision;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_defaultPrecision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultPrecision;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_defaultPrecision(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultPrecision = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::MasterPlayer::__cordl_internal_get_velocityHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_velocityHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityHistory;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_velocityHistory(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___velocityHistory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_velocityIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityIndex;
}
constexpr int32_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_velocityIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___velocityIndex;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_velocityIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___velocityIndex = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_currentVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_currentVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentVelocity;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_currentVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_denormalizedVelocityAverage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___denormalizedVelocityAverage;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_denormalizedVelocityAverage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___denormalizedVelocityAverage;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_denormalizedVelocityAverage(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___denormalizedVelocityAverage = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPosition;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_lastPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_rightHandOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rightHandOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandOffset;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rightHandOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightHandOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_leftHandOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_leftHandOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandOffset;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_leftHandOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHandOffset = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::MasterPlayer::__cordl_internal_get_locomotionEnabledLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locomotionEnabledLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::MasterPlayer::__cordl_internal_get_locomotionEnabledLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___locomotionEnabledLayers;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_locomotionEnabledLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___locomotionEnabledLayers = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::MasterPlayer::__cordl_internal_get_collisionEnabledLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collisionEnabledLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::MasterPlayer::__cordl_internal_get_collisionEnabledLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collisionEnabledLayers;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_collisionEnabledLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collisionEnabledLayers = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasLeftHandTouching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasLeftHandTouching;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasLeftHandTouching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasLeftHandTouching;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_wasLeftHandTouching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasLeftHandTouching = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasRightHandTouching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasRightHandTouching;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasRightHandTouching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasRightHandTouching;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_wasRightHandTouching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasRightHandTouching = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_disableMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableMovement;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_disableMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableMovement;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_disableMovement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableMovement = value;
}
constexpr ::UnityW<::GlobalNamespace::SpectatorCameraController>& GlobalNamespace::MasterPlayer::__cordl_internal_get__spectatorCameraController_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatorCameraController_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::SpectatorCameraController> const& GlobalNamespace::MasterPlayer::__cordl_internal_get__spectatorCameraController_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatorCameraController_k__BackingField;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set__spectatorCameraController_k__BackingField(::UnityW<::GlobalNamespace::SpectatorCameraController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectatorCameraController_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FlatScreenPlayerController>& GlobalNamespace::MasterPlayer::__cordl_internal_get_gorillaFlatScreenController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gorillaFlatScreenController;
}
constexpr ::UnityW<::GlobalNamespace::FlatScreenPlayerController> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_gorillaFlatScreenController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gorillaFlatScreenController;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_gorillaFlatScreenController(::UnityW<::GlobalNamespace::FlatScreenPlayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gorillaFlatScreenController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_isSpectatorMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSpectatorMode;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_isSpectatorMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSpectatorMode;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_isSpectatorMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSpectatorMode = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_enterSpectatorModePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enterSpectatorModePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_enterSpectatorModePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enterSpectatorModePosition;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_enterSpectatorModePosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enterSpectatorModePosition = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MasterPlayer::__cordl_internal_get_anchoredCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchoredCanvas;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_anchoredCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchoredCanvas;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_anchoredCanvas(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchoredCanvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::PhysicMaterial>& GlobalNamespace::MasterPlayer::__cordl_internal_get_mobilePhysicsMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobilePhysicsMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicMaterial> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_mobilePhysicsMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobilePhysicsMaterial;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_mobilePhysicsMaterial(::UnityW<::UnityEngine::PhysicMaterial> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mobilePhysicsMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EndlessItemSpawner>& GlobalNamespace::MasterPlayer::__cordl_internal_get_seekerWeaponSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seekerWeaponSpawner;
}
constexpr ::UnityW<::GlobalNamespace::EndlessItemSpawner> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_seekerWeaponSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seekerWeaponSpawner;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_seekerWeaponSpawner(::UnityW<::GlobalNamespace::EndlessItemSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seekerWeaponSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_defaultSeekerWeaponSpawnerLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSeekerWeaponSpawnerLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_defaultSeekerWeaponSpawnerLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSeekerWeaponSpawnerLocalPosition;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_defaultSeekerWeaponSpawnerLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultSeekerWeaponSpawnerLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_defaultSeekerWeaponSpawnerLocalEulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSeekerWeaponSpawnerLocalEulerAngles;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_defaultSeekerWeaponSpawnerLocalEulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSeekerWeaponSpawnerLocalEulerAngles;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_defaultSeekerWeaponSpawnerLocalEulerAngles(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultSeekerWeaponSpawnerLocalEulerAngles = value;
}
constexpr ::StringW& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeStartSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeStartSoundKey;
}
constexpr ::StringW const& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeStartSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeStartSoundKey;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_freezeStartSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___freezeStartSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeStartAudioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeStartAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeStartAudioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeStartAudioSource;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_freezeStartAudioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___freezeStartAudioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeActiveCrackleSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeActiveCrackleSoundKey;
}
constexpr ::StringW const& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeActiveCrackleSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeActiveCrackleSoundKey;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_freezeActiveCrackleSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___freezeActiveCrackleSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeActiveCrackleAudioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeActiveCrackleAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeActiveCrackleAudioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeActiveCrackleAudioSource;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_freezeActiveCrackleAudioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___freezeActiveCrackleAudioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeActiveChatterSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeActiveChatterSoundKey;
}
constexpr ::StringW const& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeActiveChatterSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeActiveChatterSoundKey;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_freezeActiveChatterSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___freezeActiveChatterSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeActiveChatterAudioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeActiveChatterAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeActiveChatterAudioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeActiveChatterAudioSource;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_freezeActiveChatterAudioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___freezeActiveChatterAudioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeThawSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeThawSoundKey;
}
constexpr ::StringW const& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeThawSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeThawSoundKey;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_freezeThawSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___freezeThawSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeThawPuppetSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeThawPuppetSoundKey;
}
constexpr ::StringW const& GlobalNamespace::MasterPlayer::__cordl_internal_get_freezeThawPuppetSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___freezeThawPuppetSoundKey;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_freezeThawPuppetSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___freezeThawPuppetSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MasterPlayer__OnPickupItem*& GlobalNamespace::MasterPlayer::__cordl_internal_get_onPickupItemCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPickupItemCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MasterPlayer__OnPickupItem*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_onPickupItemCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPickupItemCallbacks;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_onPickupItemCallbacks(::GlobalNamespace::__MasterPlayer__OnPickupItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPickupItemCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextAllowedHandFeedbackTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAllowedHandFeedbackTimes;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextAllowedHandFeedbackTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAllowedHandFeedbackTimes;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_nextAllowedHandFeedbackTimes(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextAllowedHandFeedbackTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::MasterPlayer::__cordl_internal_get_handCollideStartTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handCollideStartTimes;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_handCollideStartTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handCollideStartTimes;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_handCollideStartTimes(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handCollideStartTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_killedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___killedTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_killedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___killedTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_killedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___killedTime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_statusEffectOverlayAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectOverlayAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_statusEffectOverlayAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectOverlayAnchor;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_statusEffectOverlayAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___statusEffectOverlayAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_curStatusEffectOverlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curStatusEffectOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_curStatusEffectOverlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curStatusEffectOverlay;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_curStatusEffectOverlay(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curStatusEffectOverlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasInDeadzoneLastInputUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasInDeadzoneLastInputUpdate;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasInDeadzoneLastInputUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasInDeadzoneLastInputUpdate;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_wasInDeadzoneLastInputUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasInDeadzoneLastInputUpdate = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextValidSnapTurnTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextValidSnapTurnTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextValidSnapTurnTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextValidSnapTurnTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_nextValidSnapTurnTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextValidSnapTurnTime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollContainer;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rollContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rollContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollSpeed;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollSpeed;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rollSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rollSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollSpeedByRatioToVertical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollSpeedByRatioToVertical;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollSpeedByRatioToVertical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollSpeedByRatioToVertical;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rollSpeedByRatioToVertical(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rollSpeedByRatioToVertical)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_verticalRollSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalRollSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_verticalRollSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalRollSpeedMultiplier;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_verticalRollSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verticalRollSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollResetSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollResetSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollResetSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollResetSpeedMultiplier;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rollResetSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rollResetSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_timeUntilRollReset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeUntilRollReset;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_timeUntilRollReset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeUntilRollReset;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_timeUntilRollReset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeUntilRollReset = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_hasCurRollData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasCurRollData;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_hasCurRollData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasCurRollData;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_hasCurRollData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasCurRollData = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MasterPlayer::__cordl_internal_get_curRollStartRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRollStartRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MasterPlayer::__cordl_internal_get_curRollStartRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRollStartRotation;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_curRollStartRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curRollStartRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_curRollAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRollAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_curRollAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRollAxis;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_curRollAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curRollAxis = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_curRollAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRollAngle;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_curRollAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRollAngle;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_curRollAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curRollAngle = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_shouldResetRoll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldResetRoll;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_shouldResetRoll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldResetRoll;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_shouldResetRoll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldResetRoll = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollResetTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollResetTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_rollResetTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rollResetTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_rollResetTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rollResetTime = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_isDoingRollReset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDoingRollReset;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_isDoingRollReset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDoingRollReset;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_isDoingRollReset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDoingRollReset = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_targetRollResetAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetRollResetAngle;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_targetRollResetAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetRollResetAngle;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_targetRollResetAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetRollResetAngle = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_manualRollInputInertia() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manualRollInputInertia;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_manualRollInputInertia() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manualRollInputInertia;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_manualRollInputInertia(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___manualRollInputInertia = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastInAirBodyPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastInAirBodyPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastInAirBodyPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastInAirBodyPosition;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_lastInAirBodyPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastInAirBodyPosition = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_distanceTraveledInAir() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceTraveledInAir;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_distanceTraveledInAir() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceTraveledInAir;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_distanceTraveledInAir(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distanceTraveledInAir = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_distanceFallenInAir() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceFallenInAir;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_distanceFallenInAir() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceFallenInAir;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_distanceFallenInAir(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distanceFallenInAir = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastCollidedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollidedTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastCollidedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollidedTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_lastCollidedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastCollidedTime = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasAppliedKnockbackFromExplosionSinceLastCollided() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasAppliedKnockbackFromExplosionSinceLastCollided;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasAppliedKnockbackFromExplosionSinceLastCollided() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasAppliedKnockbackFromExplosionSinceLastCollided;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_wasAppliedKnockbackFromExplosionSinceLastCollided(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasAppliedKnockbackFromExplosionSinceLastCollided = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextValidHitDetectionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextValidHitDetectionTime;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextValidHitDetectionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextValidHitDetectionTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_nextValidHitDetectionTime(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextValidHitDetectionTime)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MapObject>, ::Array<::UnityW<::GlobalNamespace::MapObject>>*>& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastCollidedMapObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollidedMapObject;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MapObject>, ::Array<::UnityW<::GlobalNamespace::MapObject>>*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastCollidedMapObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollidedMapObject;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_lastCollidedMapObject(::ArrayW<::UnityW<::GlobalNamespace::MapObject>, ::Array<::UnityW<::GlobalNamespace::MapObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastCollidedMapObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastCollidedCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollidedCollider;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_lastCollidedCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCollidedCollider;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_lastCollidedCollider(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastCollidedCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_cosmeticsOverrideZoneExpireTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsOverrideZoneExpireTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_cosmeticsOverrideZoneExpireTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticsOverrideZoneExpireTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_cosmeticsOverrideZoneExpireTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cosmeticsOverrideZoneExpireTime = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_dressingRoomOverrideZoneExpireTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dressingRoomOverrideZoneExpireTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_dressingRoomOverrideZoneExpireTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dressingRoomOverrideZoneExpireTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_dressingRoomOverrideZoneExpireTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dressingRoomOverrideZoneExpireTime = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_techWebOverrideZoneExpireTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebOverrideZoneExpireTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_techWebOverrideZoneExpireTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebOverrideZoneExpireTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_techWebOverrideZoneExpireTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___techWebOverrideZoneExpireTime = value;
}
constexpr ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*& GlobalNamespace::MasterPlayer::__cordl_internal_get_onMasterPlayerKnockedBackCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMasterPlayerKnockedBackCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*> const&
GlobalNamespace::MasterPlayer::__cordl_internal_get_onMasterPlayerKnockedBackCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMasterPlayerKnockedBackCallbacks;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_onMasterPlayerKnockedBackCallbacks(::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onMasterPlayerKnockedBackCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*>& GlobalNamespace::MasterPlayer::__cordl_internal_get_windZones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windZones;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_windZones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windZones;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_windZones(::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___windZones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_curWindZoneCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curWindZoneCount;
}
constexpr int32_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_curWindZoneCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curWindZoneCount;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_curWindZoneCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curWindZoneCount = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_isInWindZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInWindZone;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_isInWindZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInWindZone;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_isInWindZone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInWindZone = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextWindZoneUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextWindZoneUpdateTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextWindZoneUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextWindZoneUpdateTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_nextWindZoneUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextWindZoneUpdateTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MasterPlayer::__cordl_internal_get_curWindSound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curWindSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MasterPlayer::__cordl_internal_get_curWindSound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curWindSound;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_curWindSound(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curWindSound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_windSoundVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windSoundVolume;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_windSoundVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windSoundVolume;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_windSoundVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windSoundVolume = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextMeetPlayerUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextMeetPlayerUpdateTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextMeetPlayerUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextMeetPlayerUpdateTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_nextMeetPlayerUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextMeetPlayerUpdateTime = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextAboveBuildHeightLimitUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAboveBuildHeightLimitUpdateTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextAboveBuildHeightLimitUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAboveBuildHeightLimitUpdateTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_nextAboveBuildHeightLimitUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextAboveBuildHeightLimitUpdateTime = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasAboveBuildHeightLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasAboveBuildHeightLimit;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_wasAboveBuildHeightLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasAboveBuildHeightLimit;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_wasAboveBuildHeightLimit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasAboveBuildHeightLimit = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_curKnockbackEnergy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curKnockbackEnergy;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_curKnockbackEnergy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curKnockbackEnergy;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_curKnockbackEnergy(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curKnockbackEnergy = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextAllowedGriefProtectionPromptTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAllowedGriefProtectionPromptTime;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_nextAllowedGriefProtectionPromptTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAllowedGriefProtectionPromptTime;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_nextAllowedGriefProtectionPromptTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextAllowedGriefProtectionPromptTime = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_isPromptingGriefProtection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPromptingGriefProtection;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_isPromptingGriefProtection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPromptingGriefProtection;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_isPromptingGriefProtection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPromptingGriefProtection = value;
}
constexpr bool& GlobalNamespace::MasterPlayer::__cordl_internal_get_isGriefProtectionActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGriefProtectionActive;
}
constexpr bool const& GlobalNamespace::MasterPlayer::__cordl_internal_get_isGriefProtectionActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGriefProtectionActive;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_isGriefProtectionActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isGriefProtectionActive = value;
}
constexpr float_t& GlobalNamespace::MasterPlayer::__cordl_internal_get_griefProtectionTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___griefProtectionTimer;
}
constexpr float_t const& GlobalNamespace::MasterPlayer::__cordl_internal_get_griefProtectionTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___griefProtectionTimer;
}
constexpr void GlobalNamespace::MasterPlayer::__cordl_internal_set_griefProtectionTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___griefProtectionTimer = value;
}
inline void GlobalNamespace::MasterPlayer::setStaticF_bodyRotationOffset(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "bodyRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>(
      std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::MasterPlayer::getStaticF_bodyRotationOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "bodyRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>();
}
inline void GlobalNamespace::MasterPlayer::setStaticF_footprintRadii(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "footprintRadii", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::MasterPlayer::getStaticF_footprintRadii() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "footprintRadii", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>();
}
inline void GlobalNamespace::MasterPlayer::setStaticF_hasInitializedKnockbackImmunity(bool value) {
  ::cordl_internals::setStaticField<bool, "hasInitializedKnockbackImmunity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::MasterPlayer::getStaticF_hasInitializedKnockbackImmunity() {
  return ::cordl_internals::getStaticField<bool, "hasInitializedKnockbackImmunity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>();
}
inline void GlobalNamespace::MasterPlayer::setStaticF__hasKnockbackImmunity_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<hasKnockbackImmunity>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::MasterPlayer::getStaticF__hasKnockbackImmunity_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<hasKnockbackImmunity>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>();
}
inline void GlobalNamespace::MasterPlayer::setStaticF_knockbackImmunityChannels(::ArrayW<bool, ::Array<bool>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool, ::Array<bool>*>, "knockbackImmunityChannels", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>(
      std::forward<::ArrayW<bool, ::Array<bool>*>>(value));
}
inline ::ArrayW<bool, ::Array<bool>*> GlobalNamespace::MasterPlayer::getStaticF_knockbackImmunityChannels() {
  return ::cordl_internals::getStaticField<::ArrayW<bool, ::Array<bool>*>, "knockbackImmunityChannels",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get>();
}
inline ::UnityW<::GlobalNamespace::SpectatorCameraController> GlobalNamespace::MasterPlayer::get_spectatorCameraController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                             "get_spectatorCameraController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SpectatorCameraController>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::set_spectatorCameraController(::GlobalNamespace::SpectatorCameraController* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "set_spectatorCameraController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpectatorCameraController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MasterPlayer::Initialize(::GlobalNamespace::PlayerData playerData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::MasterPlayer::DestroySelf() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::ExpressPose(::GlobalNamespace::__Player__Pose pose) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose);
}
inline void GlobalNamespace::MasterPlayer::OnReceivedPose(::GlobalNamespace::__Player__Pose pose) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose);
}
inline void GlobalNamespace::MasterPlayer::InitializeLocomotionValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                             "InitializeLocomotionValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MasterPlayer::CurrentLeftHandPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "CurrentLeftHandPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MasterPlayer::CurrentRightHandPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                             "CurrentRightHandPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MasterPlayer::PositionWithOffset(::UnityEngine::Transform* transformToModify, ::UnityEngine::Vector3 offsetVector) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "PositionWithOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, transformToModify, offsetVector);
}
inline void GlobalNamespace::MasterPlayer::OnUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::DoLocomotionUpdate(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoLocomotionUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::MasterPlayer::OnLateUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MasterPlayer::IterativeCollisionSphereCast(::UnityEngine::Vector3 startPosition, float_t sphereRadius, ::UnityEngine::Vector3 movementVector, float_t precision,
                                                                        ::UnityEngine::LayerMask layerMask, ::GlobalNamespace::__MasterPlayer__CollisionBodyPart collisionBodyPart,
                                                                        ByRef<::UnityEngine::Vector3> endPosition, bool singleHand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "IterativeCollisionSphereCast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MasterPlayer__CollisionBodyPart>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startPosition, sphereRadius, movementVector, precision, layerMask, collisionBodyPart, endPosition, singleHand);
}
inline bool GlobalNamespace::MasterPlayer::CollisionsSphereCast(::UnityEngine::Vector3 startPosition, float_t sphereRadius, ::UnityEngine::Vector3 movementVector, float_t precision,
                                                                ::UnityEngine::LayerMask layerMask, ByRef<::UnityEngine::Vector3> finalPosition, ByRef<::UnityEngine::RaycastHit> hitInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "CollisionsSphereCast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startPosition, sphereRadius, movementVector, precision, layerMask, finalPosition, hitInfo);
}
inline bool GlobalNamespace::MasterPlayer::IsHandTouching(bool right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "IsHandTouching",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, right);
}
inline void GlobalNamespace::MasterPlayer::Turn(float_t degrees) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "Turn", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, degrees);
}
inline void GlobalNamespace::MasterPlayer::StoreVelocities(float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "StoreVelocities",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::MasterPlayer::TeleportTo(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "TeleportTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void GlobalNamespace::MasterPlayer::TeleportByOffset(::UnityEngine::Vector3 offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "TeleportByOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
inline void GlobalNamespace::MasterPlayer::ResetLocomotion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ResetLocomotion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::OnIsHandCollidingUpdated(::GlobalNamespace::__MasterPlayer__CollisionBodyPart collisionBodyPart, bool isColliding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnIsHandCollidingUpdated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MasterPlayer__CollisionBodyPart>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collisionBodyPart, isColliding);
}
inline void GlobalNamespace::MasterPlayer::UpdateType(::GlobalNamespace::__Player__Type type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void GlobalNamespace::MasterPlayer::SetIsSpectatorMode(bool newIsSpectatorMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "SetIsSpectatorMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsSpectatorMode);
}
inline void GlobalNamespace::MasterPlayer::UpdateStatusEffect(::GlobalNamespace::__Player__StatusEffect statusEffect, float_t expireTime) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusEffect, expireTime);
}
inline void GlobalNamespace::MasterPlayer::OnStatusEffectRemoved(::GlobalNamespace::__Player__StatusEffect statusEffect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnStatusEffectRemoved", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusEffect);
}
inline void GlobalNamespace::MasterPlayer::RefreshDisableMovement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "RefreshDisableMovement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::SetIsHidden(bool isHidden) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isHidden);
}
inline void GlobalNamespace::MasterPlayer::ProcessTurnInput(float_t input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ProcessTurnInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void GlobalNamespace::MasterPlayer::DoManualRoll(float_t input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoManualRoll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void GlobalNamespace::MasterPlayer::DoRoll(float_t degreesAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoRoll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, degreesAmount);
}
inline void GlobalNamespace::MasterPlayer::BeginRollReset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "BeginRollReset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::DoRollResetUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoRollResetUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::MasterPlayer::GetCurrentRollSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetCurrentRollSpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::OnCollisionEnter(::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnCollisionEnter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collision);
}
inline void GlobalNamespace::MasterPlayer::OnCollisionExit(::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnCollisionExit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collision);
}
inline void GlobalNamespace::MasterPlayer::OnTriggerEnter(::UnityEngine::Collider* collider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnTriggerEnter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collider);
}
/// @param hitMapObject: ::GlobalNamespace::MapObject* (default: nullptr)
inline void GlobalNamespace::MasterPlayer::OnHandOrBodyCollided(::GlobalNamespace::__MasterPlayer__CollisionBodyPart collisionBodyPart, ::UnityEngine::Collider* hitCollider,
                                                                ::UnityEngine::Vector3 collisionPoint, ::UnityEngine::Vector3 collisionNormal, ::UnityEngine::Vector3 bodyVelocity,
                                                                ::GlobalNamespace::MapObject* hitMapObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnHandOrBodyCollided", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MasterPlayer__CollisionBodyPart>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collisionBodyPart, hitCollider, collisionPoint, collisionNormal, bodyVelocity, hitMapObject);
}
inline void GlobalNamespace::MasterPlayer::ResetCollisionClock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ResetCollisionClock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MasterPlayer::IsAirborne() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "IsAirborne",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::OnTriggerStay(::UnityEngine::Collider* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnTriggerStay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::MasterPlayer::get_hasKnockbackImmunity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                             "get_hasKnockbackImmunity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::set_hasKnockbackImmunity(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "set_hasKnockbackImmunity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MasterPlayer::InitializeKnockbackImmunity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                             "InitializeKnockbackImmunity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::OnCosmeticsModeUpdated(bool newCosmeticsMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnCosmeticsModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newCosmeticsMode);
}
inline void GlobalNamespace::MasterPlayer::OnTechWebModeUpdated(bool newTechWebMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnTechWebModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newTechWebMode);
}
inline void GlobalNamespace::MasterPlayer::OnDressingRoomModeUpdated(bool newDressingRoomMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnDressingRoomModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newDressingRoomMode);
}
inline void GlobalNamespace::MasterPlayer::OnIsOutsideMapOnLobbySideUpdated(bool newIsOutsideMap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnIsOutsideMapOnLobbySideUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newIsOutsideMap);
}
inline void GlobalNamespace::MasterPlayer::OnIsOutsideMapOnHallwaySideUpdated(bool newIsOutsideMap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnIsOutsideMapOnHallwaySideUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newIsOutsideMap);
}
inline void GlobalNamespace::MasterPlayer::OnGriefProtectionUpdated(bool newGriefProtection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnGriefProtectionUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newGriefProtection);
}
inline void GlobalNamespace::MasterPlayer::SetKnockbackImmunity(bool isImmune, int32_t channel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "SetKnockbackImmunity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isImmune, channel);
}
inline void GlobalNamespace::MasterPlayer::OnReceiveApplyKnockback(::UnityEngine::Vector3 force, ::GlobalNamespace::__Player__KnockbackSource source) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force, source);
}
inline void GlobalNamespace::MasterPlayer::ApplyAccelerationForce(::UnityEngine::Vector3 force) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ApplyAccelerationForce", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, force);
}
inline void GlobalNamespace::MasterPlayer::MaximizeVelocity(::UnityEngine::Vector3 target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "MaximizeVelocity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void GlobalNamespace::MasterPlayer::MaximizeVelocity(float_t speed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "MaximizeVelocity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, speed);
}
inline void GlobalNamespace::MasterPlayer::ApplyDrag(float_t verticalDrag, float_t lateralDrag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ApplyDrag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, verticalDrag, lateralDrag);
}
inline void GlobalNamespace::MasterPlayer::ApplySetVelocity(::UnityEngine::Vector3 velocity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ApplySetVelocity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, velocity);
}
inline void GlobalNamespace::MasterPlayer::ApplySetVelocityNoHaptic(::UnityEngine::Vector3 velocity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ApplySetVelocityNoHaptic", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, velocity);
}
inline void GlobalNamespace::MasterPlayer::OnFixedUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::OnEnteredFirstWindZone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnEnteredFirstWindZone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::OnExitedLastWindZone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnExitedLastWindZone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> GlobalNamespace::MasterPlayer::GetWindZones(ByRef<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetWindZones", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*>, false>(this, ___internal_method, count);
}
inline void GlobalNamespace::MasterPlayer::DoMeetPlayerUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DoMeetPlayerUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::OnIsLeftHandedUpdated(bool newIsLeftHanded) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnIsLeftHandedUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsLeftHanded);
}
inline void GlobalNamespace::MasterPlayer::DoAboveBuildHeightLimitUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(),
                                                                             "DoAboveBuildHeightLimitUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::NotifyItemPickedUp(::GlobalNamespace::Item* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "NotifyItemPickedUp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::MasterPlayer::OnInteractionLockUpdated(bool newLock) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnInteractionLockUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLock);
}
inline void GlobalNamespace::MasterPlayer::SubmitKnockbackForGriefProtection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "SubmitKnockbackForGriefProtection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::PromptGriefProtection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "PromptGriefProtection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::EnableGriefProtection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "EnableGriefProtection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::DisableGriefProtection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "DisableGriefProtection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::ProcessGriefProtection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "ProcessGriefProtection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::OnAllowGreifProtectionSettingUpdated(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "OnAllowGreifProtectionSettingUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* GlobalNamespace::MasterPlayer::GetInteractor(bool right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetInteractor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*, false>(this, ___internal_method, right);
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::MasterPlayer::GetCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MasterPlayer::GetCameraPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetCameraPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MasterPlayer::GetBellyPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetBellyPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MasterPlayer::GetVelocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetVelocity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MasterPlayer::GetHandVelocity(bool right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "GetHandVelocity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, right);
}
inline ::GlobalNamespace::MasterPlayer* GlobalNamespace::MasterPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MasterPlayer*>());
}
inline void GlobalNamespace::MasterPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MasterPlayer::_PromptGriefProtection_b__227_0(::GlobalNamespace::__ImaginationPrompt__ActionType action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MasterPlayer*>::get(), "<PromptGriefProtection>b__227_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ImaginationPrompt__ActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MasterPlayer::MasterPlayer() {}
