#pragma once
#include "Photon/Pun/UtilityScripts/zzzz__OnJoinedInstantiate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnJoinedInstantiate_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnJoinedInstantiate_def.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence::__OnJoinedInstantiate__SpawnSequence(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence::__OnJoinedInstantiate__SpawnSequence() {}
constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence::Connection{ static_cast<int32_t>(0x0) };
constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence::Random{ static_cast<int32_t>(0x1) };
constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence::RoundRobin{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1ec94a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1ec94f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnJoinedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1ec9550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.SpawnObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::SpawnObjects)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x1ec95dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.DespawnObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(bool)>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::DespawnObjects)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1ec9868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnFriendListUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(
    ::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec9980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnCreatedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec9984;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnCreateRoomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(int16_t, ::StringW)>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec9988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnJoinRoomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(int16_t, ::StringW)>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec998c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnJoinRandomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(int16_t, ::StringW)>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec9990;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec9994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.GetSpawnPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(
    ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetSpawnPoint)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1ec9998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.GetSpawnPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetSpawnPoint)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1ec9ae8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.GetRandomOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetRandomOffset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1ec9c08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(
    &::Photon::Pun::UtilityScripts::OnJoinedInstantiate::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x1ec9d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr Photon::Pun::UtilityScripts::OnJoinedInstantiate::operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* Photon::Pun::UtilityScripts::OnJoinedInstantiate::i___Photon__Realtime__IMatchmakingCallbacks() noexcept {
  return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::Transform>& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SpawnPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SpawnPosition;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_SpawnPosition(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SpawnPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_Sequence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sequence;
}
constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_Sequence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sequence;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_Sequence(::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Sequence = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SpawnPoints;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*> const&
Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SpawnPoints;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_SpawnPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SpawnPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_UseRandomOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseRandomOffset;
}
constexpr bool const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_UseRandomOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseRandomOffset;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_UseRandomOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseRandomOffset = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_RandomOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RandomOffset;
}
constexpr float_t const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_RandomOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RandomOffset;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_RandomOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RandomOffset = value;
}
constexpr bool& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_ClampY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClampY;
}
constexpr bool const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_ClampY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClampY;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_ClampY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ClampY = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_PrefabsToInstantiate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrefabsToInstantiate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const&
Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_PrefabsToInstantiate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrefabsToInstantiate;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_PrefabsToInstantiate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PrefabsToInstantiate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_AutoSpawnObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AutoSpawnObjects;
}
constexpr bool const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_AutoSpawnObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AutoSpawnObjects;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_AutoSpawnObjects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AutoSpawnObjects = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnedObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SpawnedObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*> const&
Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnedObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SpawnedObjects;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_SpawnedObjects(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SpawnedObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_spawnedAsActorId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnedAsActorId;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_spawnedAsActorId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnedAsActorId;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_spawnedAsActorId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnedAsActorId = value;
}
constexpr int32_t& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_lastUsedSpawnPointIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastUsedSpawnPointIndex;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_lastUsedSpawnPointIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastUsedSpawnPointIndex;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_lastUsedSpawnPointIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastUsedSpawnPointIndex = value;
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinedRoom() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::SpawnObjects() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::DespawnObjects(bool localOnly) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localOnly);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, friendList);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnCreatedRoom() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnCreateRoomFailed(int16_t returnCode, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinRoomFailed(int16_t returnCode, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinRandomFailed(int16_t returnCode, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnLeftRoom() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetSpawnPoint(ByRef<::UnityEngine::Vector3> spawnPos, ByRef<::UnityEngine::Quaternion> spawnRot) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spawnPos, spawnRot);
}
inline ::UnityW<::UnityEngine::Transform> Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetSpawnPoint() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetRandomOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::OnJoinedInstantiate* Photon::Pun::UtilityScripts::OnJoinedInstantiate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>());
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinedInstantiate() {}
