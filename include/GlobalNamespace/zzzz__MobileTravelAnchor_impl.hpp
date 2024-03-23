#pragma once
#include "GlobalNamespace/zzzz__MobileTravelAnchor_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MobileTravelAnchor_def.hpp"
#include "GlobalNamespace/zzzz__MobileTravelAnchor_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode::__MobileTravelAnchor__AnchorRotationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode::__MobileTravelAnchor__AnchorRotationMode() {}
constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode::dontChange{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode::matchCameraForward{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode::passThrough{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.SetOverrideDistanceHideCheckAndBeHidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(bool)>(
    &::GlobalNamespace::MobileTravelAnchor::SetOverrideDistanceHideCheckAndBeHidden)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e020b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "SetOverrideDistanceHideCheckAndBeHidden",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.AddAnchorToSetVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(::GlobalNamespace::MobileTravelAnchor*)>(
    &::GlobalNamespace::MobileTravelAnchor::AddAnchorToSetVisible)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2e020c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "AddAnchorToSetVisible", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.AddAnchorsToSetVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*)>(&::GlobalNamespace::MobileTravelAnchor::AddAnchorsToSetVisible)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2e02268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "AddAnchorsToSetVisible", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.RemoveAnchorToSetVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(::GlobalNamespace::MobileTravelAnchor*)>(
    &::GlobalNamespace::MobileTravelAnchor::RemoveAnchorToSetVisible)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2e0255c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RemoveAnchorToSetVisible", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.RemoveAnchorsToSetVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*)>(&::GlobalNamespace::MobileTravelAnchor::RemoveAnchorsToSetVisible)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2e02624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RemoveAnchorsToSetVisible", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.RefreshRegisterState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(bool, bool)>(
    &::GlobalNamespace::MobileTravelAnchor::RefreshRegisterState)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2e027f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RefreshRegisterState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)()>(&::GlobalNamespace::MobileTravelAnchor::OnEnable)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2e02d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)()>(&::GlobalNamespace::MobileTravelAnchor::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e03138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.SetInternalVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(bool)>(&::GlobalNamespace::MobileTravelAnchor::SetInternalVisible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e02258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "SetInternalVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.SetExternalVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(bool)>(&::GlobalNamespace::MobileTravelAnchor::SetExternalVisible)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e03224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "SetExternalVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.OnIsCameraLinkedUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(bool)>(
    &::GlobalNamespace::MobileTravelAnchor::OnIsCameraLinkedUpdated)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e03254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "OnIsCameraLinkedUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.RefreshIsVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(bool)>(&::GlobalNamespace::MobileTravelAnchor::RefreshIsVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e02f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RefreshIsVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.SetVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(bool, bool)>(&::GlobalNamespace::MobileTravelAnchor::SetVisible)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2e03288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "SetVisible", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.OnMasterPlayerCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::MobileTravelAnchor::OnMasterPlayerCreated)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2e02b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "OnMasterPlayerCreated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)()>(&::GlobalNamespace::MobileTravelAnchor::Update)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e033b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.RefreshDistanceBasedState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)(bool)>(
    &::GlobalNamespace::MobileTravelAnchor::RefreshDistanceBasedState)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2e02f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RefreshDistanceBasedState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.GetTargetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::MobileTravelAnchor::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MobileTravelAnchor::GetTargetRotation)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2e03434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "GetTargetRotation", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.GetTargetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MobileTravelAnchor::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MobileTravelAnchor::GetTargetPosition)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2e035c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "GetTargetPosition", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.RegisterAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::MobileTravelAnchor*)>(&::GlobalNamespace::MobileTravelAnchor::RegisterAnchor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2e02aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RegisterAnchor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.DeregisterAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::MobileTravelAnchor*)>(&::GlobalNamespace::MobileTravelAnchor::DeregisterAnchor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e02c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "DeregisterAnchor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor.GetMagnitizingAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MobileTravelAnchor> (*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MobileTravelAnchor::GetMagnitizingAnchor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2e036f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "GetMagnitizingAnchor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileTravelAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileTravelAnchor::*)()>(&::GlobalNamespace::MobileTravelAnchor::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2e038fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_rotationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationMode;
}
constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_rotationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationMode;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_rotationMode(::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationMode = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_passThroughLocalDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passThroughLocalDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_passThroughLocalDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passThroughLocalDirection;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_passThroughLocalDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passThroughLocalDirection = value;
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_appearsWhenFarOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appearsWhenFarOnly;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_appearsWhenFarOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appearsWhenFarOnly;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_appearsWhenFarOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appearsWhenFarOnly = value;
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_forceCurrencyFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceCurrencyFocus;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_forceCurrencyFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceCurrencyFocus;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_forceCurrencyFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceCurrencyFocus = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>&
GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_anchorsToSetVisibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorsToSetVisibility;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> const&
GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_anchorsToSetVisibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorsToSetVisibility;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_anchorsToSetVisibility(
    ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchorsToSetVisibility)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_overrideDistanceHideCheckAndBeHidden() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDistanceHideCheckAndBeHidden;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_overrideDistanceHideCheckAndBeHidden() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDistanceHideCheckAndBeHidden;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_overrideDistanceHideCheckAndBeHidden(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideDistanceHideCheckAndBeHidden = value;
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isInternalVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInternalVisible;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isInternalVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInternalVisible;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_isInternalVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInternalVisible = value;
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isExternalVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isExternalVisible;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isExternalVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isExternalVisible;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_isExternalVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isExternalVisible = value;
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isCameraLinked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCameraLinked;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isCameraLinked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCameraLinked;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_isCameraLinked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCameraLinked = value;
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isVisible;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isVisible;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_isVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isVisible = value;
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegistered;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegistered;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_isRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRegistered = value;
}
constexpr bool& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isRegisteredForPlayerCreated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegisteredForPlayerCreated;
}
constexpr bool const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_isRegisteredForPlayerCreated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegisteredForPlayerCreated;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_isRegisteredForPlayerCreated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRegisteredForPlayerCreated = value;
}
constexpr ::UnityW<::GlobalNamespace::Player>& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_masterPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr ::UnityW<::GlobalNamespace::Player> const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_masterPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::Player> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_scaleContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_scaleContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleContainer;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_scaleContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scaleContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_sphereCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sphereCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::MobileTravelAnchor::__cordl_internal_get_sphereCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sphereCollider;
}
constexpr void GlobalNamespace::MobileTravelAnchor::__cordl_internal_set_sphereCollider(::UnityW<::UnityEngine::SphereCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sphereCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MobileTravelAnchor::setStaticF_activeAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*, "activeAnchors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* GlobalNamespace::MobileTravelAnchor::getStaticF_activeAnchors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*, "activeAnchors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get>();
}
inline void GlobalNamespace::MobileTravelAnchor::SetOverrideDistanceHideCheckAndBeHidden(bool newOverrideDistanceHideCheckAndBeHidden) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "SetOverrideDistanceHideCheckAndBeHidden",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newOverrideDistanceHideCheckAndBeHidden);
}
inline void GlobalNamespace::MobileTravelAnchor::AddAnchorToSetVisible(::GlobalNamespace::MobileTravelAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "AddAnchorToSetVisible", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor);
}
inline void GlobalNamespace::MobileTravelAnchor::AddAnchorsToSetVisible(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "AddAnchorsToSetVisible", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchors);
}
inline void GlobalNamespace::MobileTravelAnchor::RemoveAnchorToSetVisible(::GlobalNamespace::MobileTravelAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RemoveAnchorToSetVisible", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor);
}
inline void GlobalNamespace::MobileTravelAnchor::RemoveAnchorsToSetVisible(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RemoveAnchorsToSetVisible", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchors);
}
inline void GlobalNamespace::MobileTravelAnchor::RefreshRegisterState(bool didStateChange, bool newState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RefreshRegisterState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, didStateChange, newState);
}
inline void GlobalNamespace::MobileTravelAnchor::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileTravelAnchor::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileTravelAnchor::SetInternalVisible(bool newInternalVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "SetInternalVisible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newInternalVisible);
}
inline void GlobalNamespace::MobileTravelAnchor::SetExternalVisible(bool newExternalVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "SetExternalVisible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newExternalVisible);
}
inline void GlobalNamespace::MobileTravelAnchor::OnIsCameraLinkedUpdated(bool newIsCameraLinked) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "OnIsCameraLinkedUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCameraLinked);
}
/// @param doRegisterUpdate: bool (default: true)
inline void GlobalNamespace::MobileTravelAnchor::RefreshIsVisible(bool doRegisterUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RefreshIsVisible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, doRegisterUpdate);
}
inline void GlobalNamespace::MobileTravelAnchor::SetVisible(bool newVisible, bool doRegisterUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "SetVisible", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newVisible, doRegisterUpdate);
}
inline void GlobalNamespace::MobileTravelAnchor::OnMasterPlayerCreated(::GlobalNamespace::Player* newMasterPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "OnMasterPlayerCreated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMasterPlayer);
}
inline void GlobalNamespace::MobileTravelAnchor::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MobileTravelAnchor::RefreshDistanceBasedState(bool forceUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RefreshDistanceBasedState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceUpdate);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MobileTravelAnchor::GetTargetRotation(::UnityEngine::Vector3 playerPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "GetTargetRotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, playerPosition);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MobileTravelAnchor::GetTargetPosition(::UnityEngine::Vector3 playerPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "GetTargetPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, playerPosition);
}
inline void GlobalNamespace::MobileTravelAnchor::RegisterAnchor(::GlobalNamespace::MobileTravelAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "RegisterAnchor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchor);
}
inline void GlobalNamespace::MobileTravelAnchor::DeregisterAnchor(::GlobalNamespace::MobileTravelAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "DeregisterAnchor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MobileTravelAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchor);
}
inline ::UnityW<::GlobalNamespace::MobileTravelAnchor> GlobalNamespace::MobileTravelAnchor::GetMagnitizingAnchor(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), "GetMagnitizingAnchor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MobileTravelAnchor>, false>(nullptr, ___internal_method, position);
}
inline ::GlobalNamespace::MobileTravelAnchor* GlobalNamespace::MobileTravelAnchor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobileTravelAnchor*>());
}
inline void GlobalNamespace::MobileTravelAnchor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileTravelAnchor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileTravelAnchor::MobileTravelAnchor() {}
