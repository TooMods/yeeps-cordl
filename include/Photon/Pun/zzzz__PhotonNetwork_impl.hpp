#pragma once
#include "Photon/Pun/zzzz__ConnectMethod_impl.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_impl.hpp"
#include "Photon/Pun/zzzz__PunLogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "Photon/Pun/zzzz__IPunPrefabPool_def.hpp"
#include "Photon/Pun/zzzz__InstantiateParameters_def.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "Photon/Pun/zzzz__ServerSettings_def.hpp"
#include "Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__MatchmakingMode_def.hpp"
#include "Photon/Realtime/zzzz__PhotonPortDefinition_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Photon/Realtime/zzzz__Room_def.hpp"
#include "Photon/Realtime/zzzz__ServerConnection_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__RaiseEventBatch.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::__PhotonNetwork__RaiseEventBatch::*)()>(
    &::Photon::Pun::__PhotonNetwork__RaiseEventBatch::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2752034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__RaiseEventBatch.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonNetwork__RaiseEventBatch::*)(::Photon::Pun::__PhotonNetwork__RaiseEventBatch)>(
    &::Photon::Pun::__PhotonNetwork__RaiseEventBatch::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2752048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>"
constexpr Photon::Pun::__PhotonNetwork__RaiseEventBatch::operator ::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>*() {
  return static_cast<::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>"
constexpr ::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>*
Photon::Pun::__PhotonNetwork__RaiseEventBatch::i___System__IEquatable_1___Photon__Pun____PhotonNetwork__RaiseEventBatch_() {
  return static_cast<::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline int32_t Photon::Pun::__PhotonNetwork__RaiseEventBatch::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Photon::Pun::__PhotonNetwork__RaiseEventBatch::Equals(::Photon::Pun::__PhotonNetwork__RaiseEventBatch other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "Group", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Reliable", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::__PhotonNetwork__RaiseEventBatch::__PhotonNetwork__RaiseEventBatch(uint8_t Group, bool Reliable) noexcept {
  this->Group = Group;
  this->Reliable = Reliable;
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonNetwork__RaiseEventBatch::__PhotonNetwork__RaiseEventBatch() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__SerializeViewBatch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::__PhotonNetwork__SerializeViewBatch::*)(::Photon::Pun::__PhotonNetwork__RaiseEventBatch, int32_t)>(&::Photon::Pun::__PhotonNetwork__SerializeViewBatch::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x274e5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__SerializeViewBatch.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::__PhotonNetwork__SerializeViewBatch::*)()>(
    &::Photon::Pun::__PhotonNetwork__SerializeViewBatch::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2752070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__SerializeViewBatch.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonNetwork__SerializeViewBatch::*)(::Photon::Pun::__PhotonNetwork__SerializeViewBatch*)>(
    &::Photon::Pun::__PhotonNetwork__SerializeViewBatch::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2752084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__SerializeViewBatch.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonNetwork__SerializeViewBatch::*)(::Photon::Pun::__PhotonNetwork__RaiseEventBatch)>(
    &::Photon::Pun::__PhotonNetwork__SerializeViewBatch::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27520c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__SerializeViewBatch.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonNetwork__SerializeViewBatch::*)(::System::Object*)>(
    &::Photon::Pun::__PhotonNetwork__SerializeViewBatch::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27520e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__SerializeViewBatch.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonNetwork__SerializeViewBatch::*)()>(
    &::Photon::Pun::__PhotonNetwork__SerializeViewBatch::Clear)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x274ea60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork__SerializeViewBatch.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Pun::__PhotonNetwork__SerializeViewBatch::*)(::System::Collections::Generic::List_1<::System::Object*>*)>(&::Photon::Pun::__PhotonNetwork__SerializeViewBatch::Add)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x274e714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>"
constexpr Photon::Pun::__PhotonNetwork__SerializeViewBatch::operator ::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>*() noexcept {
  return static_cast<::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>"
constexpr ::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>*
Photon::Pun::__PhotonNetwork__SerializeViewBatch::i___System__IEquatable_1___Photon__Pun____PhotonNetwork__SerializeViewBatch__() noexcept {
  return static_cast<::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>"
constexpr Photon::Pun::__PhotonNetwork__SerializeViewBatch::operator ::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>*() noexcept {
  return static_cast<::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>"
constexpr ::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>*
Photon::Pun::__PhotonNetwork__SerializeViewBatch::i___System__IEquatable_1___Photon__Pun____PhotonNetwork__RaiseEventBatch_() noexcept {
  return static_cast<::System::IEquatable_1<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>*>(static_cast<void*>(this));
}
constexpr ::Photon::Pun::__PhotonNetwork__RaiseEventBatch& Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_get_Batch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Batch;
}
constexpr ::Photon::Pun::__PhotonNetwork__RaiseEventBatch const& Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_get_Batch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Batch;
}
constexpr void Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_set_Batch(::Photon::Pun::__PhotonNetwork__RaiseEventBatch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Batch = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_get_ObjectUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ObjectUpdates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const&
Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_get_ObjectUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ObjectUpdates;
}
constexpr void Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_set_ObjectUpdates(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ObjectUpdates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_get_defaultSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSize;
}
constexpr int32_t const& Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_get_defaultSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSize;
}
constexpr void Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_set_defaultSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultSize = value;
}
constexpr int32_t& Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void Photon::Pun::__PhotonNetwork__SerializeViewBatch::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
inline ::Photon::Pun::__PhotonNetwork__SerializeViewBatch* Photon::Pun::__PhotonNetwork__SerializeViewBatch::New_ctor(::Photon::Pun::__PhotonNetwork__RaiseEventBatch batch, int32_t offset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>(batch, offset));
}
inline void Photon::Pun::__PhotonNetwork__SerializeViewBatch::_ctor(::Photon::Pun::__PhotonNetwork__RaiseEventBatch batch, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batch, offset);
}
inline int32_t Photon::Pun::__PhotonNetwork__SerializeViewBatch::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Photon::Pun::__PhotonNetwork__SerializeViewBatch::Equals(::Photon::Pun::__PhotonNetwork__SerializeViewBatch* other) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool Photon::Pun::__PhotonNetwork__SerializeViewBatch::Equals(::Photon::Pun::__PhotonNetwork__RaiseEventBatch other) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__RaiseEventBatch>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool Photon::Pun::__PhotonNetwork__SerializeViewBatch::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline void Photon::Pun::__PhotonNetwork__SerializeViewBatch::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::__PhotonNetwork__SerializeViewBatch::Add(::System::Collections::Generic::List_1<::System::Object*>* viewData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewData);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonNetwork__SerializeViewBatch::__PhotonNetwork__SerializeViewBatch() {}
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::__PhotonNetwork____c::*)()>(&::Photon::Pun::__PhotonNetwork____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27521f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork____c._get_PlayerList_b__47_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::__PhotonNetwork____c::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::__PhotonNetwork____c::_get_PlayerList_b__47_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27521fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), "<get_PlayerList>b__47_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork____c._get_PlayerListOthers_b__49_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::__PhotonNetwork____c::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::__PhotonNetwork____c::_get_PlayerListOthers_b__49_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2752214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), "<get_PlayerListOthers>b__49_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork____c._get_PlayerListOthers_b__49_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::__PhotonNetwork____c::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::__PhotonNetwork____c::_get_PlayerListOthers_b__49_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x275222c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), "<get_PlayerListOthers>b__49_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::__PhotonNetwork____c._CallbacksToString_b__217_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Pun::__PhotonNetwork____c::*)(::Photon::Realtime::IConnectionCallbacks*)>(
    &::Photon::Pun::__PhotonNetwork____c::_CallbacksToString_b__217_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x275224c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), "<CallbacksToString>b__217_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::IConnectionCallbacks*>::get() })));
    return ___internal_method;
  }
};
inline void Photon::Pun::__PhotonNetwork____c::setStaticF___9(::Photon::Pun::__PhotonNetwork____c* value) {
  ::cordl_internals::setStaticField<::Photon::Pun::__PhotonNetwork____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>(
      std::forward<::Photon::Pun::__PhotonNetwork____c*>(value));
}
inline ::Photon::Pun::__PhotonNetwork____c* Photon::Pun::__PhotonNetwork____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Photon::Pun::__PhotonNetwork____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>();
}
inline void Photon::Pun::__PhotonNetwork____c::setStaticF___9__47_0(::System::Func_2<::Photon::Realtime::Player*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*, int32_t>*, "<>9__47_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>(
      std::forward<::System::Func_2<::Photon::Realtime::Player*, int32_t>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*, int32_t>* Photon::Pun::__PhotonNetwork____c::getStaticF___9__47_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*, int32_t>*, "<>9__47_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>();
}
inline void Photon::Pun::__PhotonNetwork____c::setStaticF___9__49_0(::System::Func_2<::Photon::Realtime::Player*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*, int32_t>*, "<>9__49_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>(
      std::forward<::System::Func_2<::Photon::Realtime::Player*, int32_t>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*, int32_t>* Photon::Pun::__PhotonNetwork____c::getStaticF___9__49_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*, int32_t>*, "<>9__49_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>();
}
inline void Photon::Pun::__PhotonNetwork____c::setStaticF___9__49_1(::System::Func_2<::Photon::Realtime::Player*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::Player*, bool>*, "<>9__49_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>(
      std::forward<::System::Func_2<::Photon::Realtime::Player*, bool>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::Player*, bool>* Photon::Pun::__PhotonNetwork____c::getStaticF___9__49_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::Player*, bool>*, "<>9__49_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>();
}
inline void Photon::Pun::__PhotonNetwork____c::setStaticF___9__217_0(::System::Func_2<::Photon::Realtime::IConnectionCallbacks*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Photon::Realtime::IConnectionCallbacks*, ::StringW>*, "<>9__217_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>(
      std::forward<::System::Func_2<::Photon::Realtime::IConnectionCallbacks*, ::StringW>*>(value));
}
inline ::System::Func_2<::Photon::Realtime::IConnectionCallbacks*, ::StringW>* Photon::Pun::__PhotonNetwork____c::getStaticF___9__217_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Realtime::IConnectionCallbacks*, ::StringW>*, "<>9__217_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get>();
}
inline ::Photon::Pun::__PhotonNetwork____c* Photon::Pun::__PhotonNetwork____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::__PhotonNetwork____c*>());
}
inline void Photon::Pun::__PhotonNetwork____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Photon::Pun::__PhotonNetwork____c::_get_PlayerList_b__47_0(::Photon::Realtime::Player* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), "<get_PlayerList>b__47_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline int32_t Photon::Pun::__PhotonNetwork____c::_get_PlayerListOthers_b__49_0(::Photon::Realtime::Player* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), "<get_PlayerListOthers>b__49_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline bool Photon::Pun::__PhotonNetwork____c::_get_PlayerListOthers_b__49_1(::Photon::Realtime::Player* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), "<get_PlayerListOthers>b__49_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::StringW Photon::Pun::__PhotonNetwork____c::_CallbacksToString_b__217_0(::Photon::Realtime::IConnectionCallbacks* m) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::__PhotonNetwork____c*>::get(), "<CallbacksToString>b__217_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::IConnectionCallbacks*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, m);
}
// Ctor Parameters []
constexpr ::Photon::Pun::__PhotonNetwork____c::__PhotonNetwork____c() {}
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_GameVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_GameVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273da50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_GameVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_GameVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::set_GameVersion)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x273daa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_GameVersion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_AppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_AppVersion)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273db60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_AppVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PhotonServerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Photon::Pun::ServerSettings> (*)()>(&::Photon::Pun::PhotonNetwork::get_PhotonServerSettings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x273a1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PhotonServerSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_PhotonServerSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::ServerSettings*)>(&::Photon::Pun::PhotonNetwork::set_PhotonServerSettings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x273df40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_PhotonServerSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::ServerSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_ServerAddress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x273df9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ServerAddress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CloudRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_CloudRegion)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x273e044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CloudRegion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CurrentCluster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_CurrentCluster)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x273e2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CurrentCluster",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_BestRegionSummaryInPreferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_BestRegionSummaryInPreferences)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x273e368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_BestRegionSummaryInPreferences",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_BestRegionSummaryInPreferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::set_BestRegionSummaryInPreferences)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x273e3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_BestRegionSummaryInPreferences",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_IsConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_IsConnected)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x273e100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_IsConnected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_IsConnectedAndReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_IsConnectedAndReady)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x273e43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_IsConnectedAndReady",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_NetworkClientState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::ClientState (*)()>(&::Photon::Pun::PhotonNetwork::get_NetworkClientState)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x273e524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_NetworkClientState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_Server
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::ServerConnection (*)()>(&::Photon::Pun::PhotonNetwork::get_Server)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x273e1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_Server",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_AuthValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::AuthenticationValues* (*)()>(&::Photon::Pun::PhotonNetwork::get_AuthValues)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x273e624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_AuthValues",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_AuthValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::AuthenticationValues*)>(&::Photon::Pun::PhotonNetwork::set_AuthValues)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x273e6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_AuthValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::AuthenticationValues*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CurrentLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::TypedLobby* (*)()>(&::Photon::Pun::PhotonNetwork::get_CurrentLobby)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273e730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CurrentLobby",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CurrentRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Room* (*)()>(&::Photon::Pun::PhotonNetwork::get_CurrentRoom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2739af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CurrentRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_LocalPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (*)()>(&::Photon::Pun::PhotonNetwork::get_LocalPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x273e794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_LocalPlayer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_NickName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::get_NickName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273e81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_NickName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_NickName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::set_NickName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x273e880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_NickName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PlayerList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*> (*)()>(
    &::Photon::Pun::PhotonNetwork::get_PlayerList)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x273e8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PlayerList",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PlayerListOthers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*> (*)()>(
    &::Photon::Pun::PhotonNetwork::get_PlayerListOthers)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x273ea84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PlayerListOthers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_OfflineMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_OfflineMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273ecd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_OfflineMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_OfflineMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_OfflineMode)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x273ed30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_OfflineMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_AutomaticallySyncScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_AutomaticallySyncScene)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273f120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_AutomaticallySyncScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_AutomaticallySyncScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_AutomaticallySyncScene)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x273f178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_AutomaticallySyncScene",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_EnableLobbyStatistics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_EnableLobbyStatistics)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273f218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_EnableLobbyStatistics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_InLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_InLobby)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273f27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_InLobby",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_SendRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_SendRate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x273a2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_SendRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_SendRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::set_SendRate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x273f2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_SendRate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_SerializationRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_SerializationRate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x273a324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_SerializationRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_SerializationRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::set_SerializationRate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x273f3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_SerializationRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_IsMessageQueueRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_IsMessageQueueRunning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273f500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_IsMessageQueueRunning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_IsMessageQueueRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_IsMessageQueueRunning)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x273f558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_IsMessageQueueRunning",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_Time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::Photon::Pun::PhotonNetwork::get_Time)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x273f5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_Time",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ServerTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_ServerTimestamp)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x273f684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ServerTimestamp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_KeepAliveInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::Photon::Pun::PhotonNetwork::set_KeepAliveInBackground)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x273f7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_KeepAliveInBackground", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_KeepAliveInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::Photon::Pun::PhotonNetwork::get_KeepAliveInBackground)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x273f924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_KeepAliveInBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_IsMasterClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_IsMasterClient)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x273c66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_IsMasterClient",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_MasterClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (*)()>(&::Photon::Pun::PhotonNetwork::get_MasterClient)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x273d2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_MasterClient",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_InRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_InRoom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273fa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_InRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CountOfPlayersOnMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CountOfPlayersOnMaster)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273facc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_CountOfPlayersOnMaster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CountOfPlayersInRooms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CountOfPlayersInRooms)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273fb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_CountOfPlayersInRooms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CountOfPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CountOfPlayers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x273fb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CountOfPlayers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CountOfRooms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_CountOfRooms)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x273fc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CountOfRooms",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_NetworkStatisticsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_NetworkStatisticsEnabled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x273fc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_NetworkStatisticsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_NetworkStatisticsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_NetworkStatisticsEnabled)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x273fcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_NetworkStatisticsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ResentReliableCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_ResentReliableCommands)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x273fd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_ResentReliableCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_CrcCheckEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_CrcCheckEnabled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x273fdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CrcCheckEnabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_CrcCheckEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_CrcCheckEnabled)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x273fe1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_CrcCheckEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PacketLossByCrcCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_PacketLossByCrcCheck)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x273ff40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PacketLossByCrcCheck",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_MaxResendsBeforeDisconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_MaxResendsBeforeDisconnect)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x273ffac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_MaxResendsBeforeDisconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_MaxResendsBeforeDisconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::set_MaxResendsBeforeDisconnect)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2740018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_MaxResendsBeforeDisconnect",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_QuickResends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_QuickResends)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27400a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_QuickResends",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_QuickResends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::set_QuickResends)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2740114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_QuickResends", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_UseAlternativeUdpPorts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::get_UseAlternativeUdpPorts)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2740198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "get_UseAlternativeUdpPorts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_UseAlternativeUdpPorts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::set_UseAlternativeUdpPorts)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27401f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_UseAlternativeUdpPorts",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ServerPortOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::PhotonPortDefinition (*)()>(&::Photon::Pun::PhotonNetwork::get_ServerPortOverrides)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x274024c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ServerPortOverrides",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_ServerPortOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::PhotonPortDefinition)>(&::Photon::Pun::PhotonNetwork::set_ServerPortOverrides)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27402d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_ServerPortOverrides", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::PhotonPortDefinition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.StaticReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::StaticReset)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x2740b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "StaticReset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectUsingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2741144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectUsingSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectUsingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Realtime::AppSettings*, bool)>(&::Photon::Pun::PhotonNetwork::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x2741258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectUsingSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::AppSettings*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectToMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t, ::StringW)>(&::Photon::Pun::PhotonNetwork::ConnectToMaster)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x27418c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectToMaster", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectToBestCloudServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::ConnectToBestCloudServer)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2741c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectToBestCloudServer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ConnectToRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::ConnectToRegion)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2741e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectToRegion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::Disconnect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2742088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Disconnect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Reconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::Reconnect)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x27421d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Reconnect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NetworkStatisticsReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::NetworkStatisticsReset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2742508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NetworkStatisticsReset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NetworkStatisticsToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::NetworkStatisticsToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2742574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "NetworkStatisticsToString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.VerifyCanUseNetwork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::VerifyCanUseNetwork)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2742670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "VerifyCanUseNetwork",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.GetPing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::GetPing)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2742714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "GetPing",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.FetchServerTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2742780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "FetchServerTimestamp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendAllOutgoingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::SendAllOutgoingCommands)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2742818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendAllOutgoingCommands",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CloseConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::CloseConnection)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x27428a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CloseConnection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetMasterClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::SetMasterClient)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2742ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetMasterClient", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRandomRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::JoinRandomRoom)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2742c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRandomRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRandomRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ExitGames::Client::Photon::Hashtable*, uint8_t)>(&::Photon::Pun::PhotonNetwork::JoinRandomRoom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2743184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRandomRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRandomRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ExitGames::Client::Photon::Hashtable*, uint8_t, ::Photon::Realtime::MatchmakingMode, ::Photon::Realtime::TypedLobby*, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
        &::Photon::Pun::PhotonNetwork::JoinRandomRoom)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x2742c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRandomRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::MatchmakingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRandomOrCreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ExitGames::Client::Photon::Hashtable*, uint8_t, ::Photon::Realtime::MatchmakingMode, ::Photon::Realtime::TypedLobby*, ::StringW, ::StringW, ::Photon::Realtime::RoomOptions*,
                         ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Photon::Pun::PhotonNetwork::JoinRandomOrCreateRoom)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x2743360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRandomOrCreateRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::MatchmakingMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::Photon::Realtime::RoomOptions*, ::Photon::Realtime::TypedLobby*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Photon::Pun::PhotonNetwork::CreateRoom)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x27438b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CreateRoom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinOrCreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::StringW, ::Photon::Realtime::RoomOptions*, ::Photon::Realtime::TypedLobby*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Photon::Pun::PhotonNetwork::JoinOrCreateRoom)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x2743d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinOrCreateRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Photon::Pun::PhotonNetwork::JoinRoom)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x27442a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRoom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RejoinRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::RejoinRoom)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2744738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RejoinRoom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ReconnectAndRejoin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::ReconnectAndRejoin)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2744b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ReconnectAndRejoin",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LeaveRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Photon::Pun::PhotonNetwork::LeaveRoom)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2744e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LeaveRoom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.EnterOfflineRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Photon::Realtime::RoomOptions*, bool)>(&::Photon::Pun::PhotonNetwork::EnterOfflineRoom)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x27431f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "EnterOfflineRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::JoinLobby)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2745048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinLobby",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.JoinLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Realtime::TypedLobby*)>(&::Photon::Pun::PhotonNetwork::JoinLobby)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2745098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinLobby", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LeaveLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Photon::Pun::PhotonNetwork::LeaveLobby)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2745144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LeaveLobby",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.FindFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Photon::Pun::PhotonNetwork::FindFriends)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27451e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "FindFriends", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.GetCustomRoomList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Realtime::TypedLobby*, ::StringW)>(&::Photon::Pun::PhotonNetwork::GetCustomRoomList)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27452a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "GetCustomRoomList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetPlayerCustomProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::PhotonNetwork::SetPlayerCustomProperties)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x274531c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetPlayerCustomProperties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemovePlayerCustomProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Photon::Pun::PhotonNetwork::RemovePlayerCustomProperties)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2745560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemovePlayerCustomProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RaiseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(uint8_t, ::System::Object*, ::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&::Photon::Pun::PhotonNetwork::RaiseEvent)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x27456f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RaiseEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RaiseEventOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SendOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RaiseEventInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(uint8_t, ::System::Object*, ::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&::Photon::Pun::PhotonNetwork::RaiseEventInternal)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x274593c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RaiseEventInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RaiseEventOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SendOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateViewID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::AllocateViewID)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2745aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateViewID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateSceneViewID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::AllocateSceneViewID)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2745f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateSceneViewID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateRoomViewID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::AllocateRoomViewID)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2745fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateRoomViewID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateViewID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(bool)>(&::Photon::Pun::PhotonNetwork::AllocateViewID)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2746118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateViewID",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AllocateViewID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::AllocateViewID)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2745ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateViewID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, uint8_t, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonNetwork::Instantiate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2746208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.InstantiateSceneObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, uint8_t, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonNetwork::InstantiateSceneObject)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2746a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "InstantiateSceneObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.InstantiateRoomObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, uint8_t, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonNetwork::InstantiateRoomObject)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2746ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "InstantiateRoomObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NetworkInstantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::Player*)>(
    &::Photon::Pun::PhotonNetwork::NetworkInstantiate)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x2746c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NetworkInstantiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NetworkInstantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::Photon::Pun::InstantiateParameters, bool, bool)>(
    &::Photon::Pun::PhotonNetwork::NetworkInstantiate)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x27463cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NetworkInstantiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::InstantiateParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendInstantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Pun::InstantiateParameters, bool)>(&::Photon::Pun::PhotonNetwork::SendInstantiate)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2747298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendInstantiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::InstantiateParameters>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::Destroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2747798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Photon::Pun::PhotonNetwork::Destroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2747e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyPlayerObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::DestroyPlayerObjects)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2747e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyPlayerObjects", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyPlayerObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::DestroyPlayerObjects)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2747f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyPlayerObjects", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::DestroyAll)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2748598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveRPCs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::PhotonNetwork::RemoveRPCs)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x27486bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveRPCs", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveRPCs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::RemoveRPCs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27488b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveRPCs", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RPC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Photon::Pun::PhotonView*, ::StringW, ::Photon::Pun::RpcTarget, bool, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonNetwork::RPC)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2748ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::RpcTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RPC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Photon::Pun::PhotonView*, ::StringW, ::Photon::Realtime::Player*, bool, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonNetwork::RPC)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x27497ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.FindGameObjectsWithComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* (*)(::System::Type*)>(
    &::Photon::Pun::PhotonNetwork::FindGameObjectsWithComponent)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2749a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "FindGameObjectsWithComponent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetInterestGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t, bool)>(&::Photon::Pun::PhotonNetwork::SetInterestGroups)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2749b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetInterestGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LoadLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::LoadLevel)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2749fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LoadLevel", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LoadLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Photon::Pun::PhotonNetwork::LoadLevel)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x274a180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LoadLevel", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.WebRpc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Object*, bool)>(&::Photon::Pun::PhotonNetwork::WebRpc)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x274a2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "WebRpc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetupLogging
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::SetupLogging)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27417d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetupLogging",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LoadOrCreateSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::LoadOrCreateSettings)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x273dbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LoadOrCreateSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PhotonViews
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::Photon::Pun::PhotonView>, ::Array<::UnityW<::Photon::Pun::PhotonView>>*> (*)()>(
    &::Photon::Pun::PhotonNetwork::get_PhotonViews)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x274a360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PhotonViews",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PhotonViewCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<int32_t, ::UnityW<::Photon::Pun::PhotonView>> (*)()>(&::Photon::Pun::PhotonNetwork::get_PhotonViewCollection)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x273bdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PhotonViewCollection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_ViewCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Photon::Pun::PhotonNetwork::get_ViewCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x273c5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ViewCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.add_OnOwnershipRequestEv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*)>(
    &::Photon::Pun::PhotonNetwork::add_OnOwnershipRequestEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x274a5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "add_OnOwnershipRequestEv", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.remove_OnOwnershipRequestEv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*)>(
    &::Photon::Pun::PhotonNetwork::remove_OnOwnershipRequestEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x274a6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "remove_OnOwnershipRequestEv", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.add_OnOwnershipTransferedEv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*)>(
    &::Photon::Pun::PhotonNetwork::add_OnOwnershipTransferedEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x274a7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "add_OnOwnershipTransferedEv", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.remove_OnOwnershipTransferedEv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*)>(
    &::Photon::Pun::PhotonNetwork::remove_OnOwnershipTransferedEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x274a898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "remove_OnOwnershipTransferedEv", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.add_OnOwnershipTransferFailedEv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*)>(
    &::Photon::Pun::PhotonNetwork::add_OnOwnershipTransferFailedEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x274a98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "add_OnOwnershipTransferFailedEv", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.remove_OnOwnershipTransferFailedEv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*)>(
    &::Photon::Pun::PhotonNetwork::remove_OnOwnershipTransferFailedEv)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x274aa80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "remove_OnOwnershipTransferFailedEv", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AddCallbackTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::Photon::Pun::PhotonNetwork::AddCallbackTarget)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x273a384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AddCallbackTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveCallbackTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::Photon::Pun::PhotonNetwork::RemoveCallbackTarget)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x273a76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveCallbackTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CallbacksToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::PhotonNetwork::CallbacksToString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x274ab74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CallbacksToString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_PrefabPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Pun::IPunPrefabPool* (*)()>(&::Photon::Pun::PhotonNetwork::get_PrefabPool)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x274ace4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PrefabPool",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.set_PrefabPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::IPunPrefabPool*)>(&::Photon::Pun::PhotonNetwork::set_PrefabPool)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2741070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_PrefabPool", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPunPrefabPool*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.get_LevelLoadingProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::Photon::Pun::PhotonNetwork::get_LevelLoadingProgress)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x274ad3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_LevelLoadingProgress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LeftRoomCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::LeftRoomCleanup)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x273ef74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LeftRoomCleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LocalCleanupAnythingInstantiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::LocalCleanupAnythingInstantiated)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x273c938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LocalCleanupAnythingInstantiated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ResetPhotonViewsOnSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::ResetPhotonViewsOnSerialize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x274ae28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                               "ResetPhotonViewsOnSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ExecuteRpc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::Player*)>(
    &::Photon::Pun::PhotonNetwork::ExecuteRpc)> {
  constexpr static std::size_t size = 0x1940;
  constexpr static std::size_t addrs = 0x274afd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ExecuteRpc", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CheckTypeMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>,
                                                                                           ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::Photon::Pun::PhotonNetwork::CheckTypeMatch)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x274ca90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CheckTypeMatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyPlayerObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, bool)>(&::Photon::Pun::PhotonNetwork::DestroyPlayerObjects)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x274807c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyPlayerObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DestroyAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Photon::Pun::PhotonNetwork::DestroyAll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x274864c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveInstantiatedGO
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, bool)>(&::Photon::Pun::PhotonNetwork::RemoveInstantiatedGO)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x2747898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveInstantiatedGO", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.ServerCleanInstantiateAndDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::ServerCleanInstantiateAndDestroy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x274d02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ServerCleanInstantiateAndDestroy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendDestroyOfPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::SendDestroyOfPlayer)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x274cd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendDestroyOfPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendDestroyOfAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::SendDestroyOfAll)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x274cf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendDestroyOfAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpRemoveFromServerInstantiationsOfPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::OpRemoveFromServerInstantiationsOfPlayer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x274cc38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpRemoveFromServerInstantiationsOfPlayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RequestOwnership
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::Photon::Pun::PhotonNetwork::RequestOwnership)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x274d4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RequestOwnership", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.TransferOwnership
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::Photon::Pun::PhotonNetwork::TransferOwnership)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x274d5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "TransferOwnership", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OwnershipUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int32_t, ::Array<int32_t>*>, int32_t)>(&::Photon::Pun::PhotonNetwork::OwnershipUpdate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273c7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OwnershipUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LocalCleanPhotonView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::LocalCleanPhotonView)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x274d328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LocalCleanPhotonView", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.GetPhotonView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Photon::Pun::PhotonView> (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::GetPhotonView)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x274c918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "GetPhotonView", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RegisterPhotonView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::RegisterPhotonView)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x274d690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RegisterPhotonView", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpCleanActorRpcBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::OpCleanActorRpcBuffer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27487ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpCleanActorRpcBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpRemoveCompleteCacheOfPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::OpRemoveCompleteCacheOfPlayer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x274d9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpRemoveCompleteCacheOfPlayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpRemoveCompleteCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::OpRemoveCompleteCache)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x274ce50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpRemoveCompleteCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveCacheOfLeftPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::RemoveCacheOfLeftPlayers)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x274daa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveCacheOfLeftPlayers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.CleanRpcBufferIfMine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::CleanRpcBufferIfMine)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2748928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CleanRpcBufferIfMine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OpCleanRpcBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonNetwork::OpCleanRpcBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x274d3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpCleanRpcBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveRPCsInGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Photon::Pun::PhotonNetwork::RemoveRPCsInGroup)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x274dc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveRPCsInGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RemoveBufferedRPCs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::Photon::Pun::PhotonNetwork::RemoveBufferedRPCs)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x274ddec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveBufferedRPCs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetLevelPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t)>(&::Photon::Pun::PhotonNetwork::SetLevelPrefix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x274e03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetLevelPrefix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RPC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::PhotonView*, ::StringW, ::Photon::Pun::RpcTarget, ::Photon::Realtime::Player*, bool,
                                                                                           ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonNetwork::RPC)> {
  constexpr static std::size_t size = 0xb44;
  constexpr static std::size_t addrs = 0x2748ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::RpcTarget>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetInterestGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Photon::Pun::PhotonNetwork::SetInterestGroups)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2749c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetInterestGroups", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetSendingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t, bool)>(&::Photon::Pun::PhotonNetwork::SetSendingEnabled)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x274e098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetSendingEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetSendingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Photon::Pun::PhotonNetwork::SetSendingEnabled)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x274e154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetSendingEnabled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.NewSceneLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::NewSceneLoaded)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x273d598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NewSceneLoaded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.RunViewUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::RunViewUpdate)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x273aff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RunViewUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SendSerializeViewBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Pun::__PhotonNetwork__SerializeViewBatch*)>(
    &::Photon::Pun::PhotonNetwork::SendSerializeViewBatch)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x274e844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendSerializeViewBatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnSerializeWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (*)(::Photon::Pun::PhotonView*)>(
    &::Photon::Pun::PhotonNetwork::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x274e2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnSerializeWrite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnSerializeRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Photon::Realtime::Player*, int32_t, int16_t)>(
    &::Photon::Pun::PhotonNetwork::OnSerializeRead)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x274f468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnSerializeRead", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DeltaCompressionWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::Object*>* (*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*)>(
        &::Photon::Pun::PhotonNetwork::DeltaCompressionWrite)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x274f1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DeltaCompressionWrite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.DeltaCompressionRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Photon::Pun::PhotonNetwork::DeltaCompressionRead)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x274fac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DeltaCompressionRead", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AlmostEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IList_1<::System::Object*>*, ::System::Collections::Generic::IList_1<::System::Object*>*)>(&::Photon::Pun::PhotonNetwork::AlmostEquals)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x274eef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AlmostEquals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.AlmostEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::System::Object*)>(&::Photon::Pun::PhotonNetwork::AlmostEquals)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x274fd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AlmostEquals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.GetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::MonoBehaviour*, ::StringW, ByRef<::System::Reflection::MethodInfo*>)>(
    &::Photon::Pun::PhotonNetwork::GetMethod)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2750140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::MethodInfo*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.LoadLevelIfSynced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::PhotonNetwork::LoadLevelIfSynced)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x273b99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LoadLevelIfSynced",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.SetLevelInPropsIfSynced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::Photon::Pun::PhotonNetwork::SetLevelInPropsIfSynced)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x273b4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetLevelInPropsIfSynced", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ExitGames::Client::Photon::EventData*)>(&::Photon::Pun::PhotonNetwork::OnEvent)> {
  constexpr static std::size_t size = 0x18e0;
  constexpr static std::size_t addrs = 0x27502b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Photon::Pun::PhotonNetwork::OnOperation)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2751bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnOperation", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnClientStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState)>(
    &::Photon::Pun::PhotonNetwork::OnClientStateChanged)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2751e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnClientStateChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ClientState>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ClientState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonNetwork.OnRegionsPinged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::RegionHandler*)>(&::Photon::Pun::PhotonNetwork::OnRegionsPinged)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2751f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnRegionsPinged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
    return ___internal_method;
  }
};
inline void Photon::Pun::PhotonNetwork::setStaticF_gameVersion(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "gameVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Photon::Pun::PhotonNetwork::getStaticF_gameVersion() {
  return ::cordl_internals::getStaticField<::StringW, "gameVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_NetworkingClient(::Photon::Realtime::LoadBalancingClient* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::LoadBalancingClient*, "NetworkingClient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::LoadBalancingClient*>(value));
}
inline ::Photon::Realtime::LoadBalancingClient* Photon::Pun::PhotonNetwork::getStaticF_NetworkingClient() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::LoadBalancingClient*, "NetworkingClient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_MAX_VIEW_IDS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAX_VIEW_IDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_MAX_VIEW_IDS() {
  return ::cordl_internals::getStaticField<int32_t, "MAX_VIEW_IDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_photonServerSettings(::UnityW<::Photon::Pun::ServerSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::Photon::Pun::ServerSettings>, "photonServerSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::UnityW<::Photon::Pun::ServerSettings>>(value));
}
inline ::UnityW<::Photon::Pun::ServerSettings> Photon::Pun::PhotonNetwork::getStaticF_photonServerSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::Photon::Pun::ServerSettings>, "photonServerSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_ConnectMethod(::Photon::Pun::ConnectMethod value) {
  ::cordl_internals::setStaticField<::Photon::Pun::ConnectMethod, "ConnectMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Pun::ConnectMethod>(value));
}
inline ::Photon::Pun::ConnectMethod Photon::Pun::PhotonNetwork::getStaticF_ConnectMethod() {
  return ::cordl_internals::getStaticField<::Photon::Pun::ConnectMethod, "ConnectMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_LogLevel(::Photon::Pun::PunLogLevel value) {
  ::cordl_internals::setStaticField<::Photon::Pun::PunLogLevel, "LogLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Pun::PunLogLevel>(value));
}
inline ::Photon::Pun::PunLogLevel Photon::Pun::PhotonNetwork::getStaticF_LogLevel() {
  return ::cordl_internals::getStaticField<::Photon::Pun::PunLogLevel, "LogLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_EnableCloseConnection(bool value) {
  ::cordl_internals::setStaticField<bool, "EnableCloseConnection", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_EnableCloseConnection() {
  return ::cordl_internals::getStaticField<bool, "EnableCloseConnection", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_PrecisionForVectorSynchronization(float_t value) {
  ::cordl_internals::setStaticField<float_t, "PrecisionForVectorSynchronization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF_PrecisionForVectorSynchronization() {
  return ::cordl_internals::getStaticField<float_t, "PrecisionForVectorSynchronization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_PrecisionForQuaternionSynchronization(float_t value) {
  ::cordl_internals::setStaticField<float_t, "PrecisionForQuaternionSynchronization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF_PrecisionForQuaternionSynchronization() {
  return ::cordl_internals::getStaticField<float_t, "PrecisionForQuaternionSynchronization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_PrecisionForFloatSynchronization(float_t value) {
  ::cordl_internals::setStaticField<float_t, "PrecisionForFloatSynchronization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF_PrecisionForFloatSynchronization() {
  return ::cordl_internals::getStaticField<float_t, "PrecisionForFloatSynchronization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_offlineMode(bool value) {
  ::cordl_internals::setStaticField<bool, "offlineMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_offlineMode() {
  return ::cordl_internals::getStaticField<bool, "offlineMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_offlineModeRoom(::Photon::Realtime::Room* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::Room*, "offlineModeRoom", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::Room*>(value));
}
inline ::Photon::Realtime::Room* Photon::Pun::PhotonNetwork::getStaticF_offlineModeRoom() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::Room*, "offlineModeRoom", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_automaticallySyncScene(bool value) {
  ::cordl_internals::setStaticField<bool, "automaticallySyncScene", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_automaticallySyncScene() {
  return ::cordl_internals::getStaticField<bool, "automaticallySyncScene", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_sendFrequency(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "sendFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_sendFrequency() {
  return ::cordl_internals::getStaticField<int32_t, "sendFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializationFrequency(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "serializationFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_serializationFrequency() {
  return ::cordl_internals::getStaticField<int32_t, "serializationFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_isMessageQueueRunning(bool value) {
  ::cordl_internals::setStaticField<bool, "isMessageQueueRunning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_isMessageQueueRunning() {
  return ::cordl_internals::getStaticField<bool, "isMessageQueueRunning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_frametime(double_t value) {
  ::cordl_internals::setStaticField<double_t, "frametime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<double_t>(value));
}
inline double_t Photon::Pun::PhotonNetwork::getStaticF_frametime() {
  return ::cordl_internals::getStaticField<double_t, "frametime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_frame(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "frame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_frame() {
  return ::cordl_internals::getStaticField<int32_t, "frame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_StartupStopwatch(::System::Diagnostics::Stopwatch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::Stopwatch*, "StartupStopwatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Diagnostics::Stopwatch*>(value));
}
inline ::System::Diagnostics::Stopwatch* Photon::Pun::PhotonNetwork::getStaticF_StartupStopwatch() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::Stopwatch*, "StartupStopwatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_MinimalTimeScaleToDispatchInFixedUpdate(float_t value) {
  ::cordl_internals::setStaticField<float_t, "MinimalTimeScaleToDispatchInFixedUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF_MinimalTimeScaleToDispatchInFixedUpdate() {
  return ::cordl_internals::getStaticField<float_t, "MinimalTimeScaleToDispatchInFixedUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF__UseAlternativeUdpPorts_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<UseAlternativeUdpPorts>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF__UseAlternativeUdpPorts_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<UseAlternativeUdpPorts>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_lastUsedViewSubId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "lastUsedViewSubId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_lastUsedViewSubId() {
  return ::cordl_internals::getStaticField<int32_t, "lastUsedViewSubId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_lastUsedViewSubIdStatic(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "lastUsedViewSubIdStatic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_lastUsedViewSubIdStatic() {
  return ::cordl_internals::getStaticField<int32_t, "lastUsedViewSubIdStatic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_PrefabsWithoutMagicCallback(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "PrefabsWithoutMagicCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Photon::Pun::PhotonNetwork::getStaticF_PrefabsWithoutMagicCallback() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "PrefabsWithoutMagicCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendInstantiateEvHashtable(::ExitGames::Client::Photon::Hashtable* value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "SendInstantiateEvHashtable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_SendInstantiateEvHashtable() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "SendInstantiateEvHashtable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendInstantiateRaiseEventOptions(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "SendInstantiateRaiseEventOptions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_SendInstantiateRaiseEventOptions() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "SendInstantiateRaiseEventOptions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_allowedReceivingGroups(::System::Collections::Generic::HashSet_1<uint8_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<uint8_t>*, "allowedReceivingGroups",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<uint8_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<uint8_t>* Photon::Pun::PhotonNetwork::getStaticF_allowedReceivingGroups() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<uint8_t>*, "allowedReceivingGroups",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_blockedSendingGroups(::System::Collections::Generic::HashSet_1<uint8_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<uint8_t>*, "blockedSendingGroups",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<uint8_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<uint8_t>* Photon::Pun::PhotonNetwork::getStaticF_blockedSendingGroups() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<uint8_t>*, "blockedSendingGroups",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_reusablePVHashset(::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*, "reusablePVHashset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>* Photon::Pun::PhotonNetwork::getStaticF_reusablePVHashset() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*, "reusablePVHashset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_photonViewList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::UnityW<::Photon::Pun::PhotonView>>* value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::UnityW<::Photon::Pun::PhotonView>>*, "photonViewList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::UnityW<::Photon::Pun::PhotonView>>* Photon::Pun::PhotonNetwork::getStaticF_photonViewList() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t, ::UnityW<::Photon::Pun::PhotonView>>*, "photonViewList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*, "OnOwnershipRequestEv",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>(value));
}
inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* Photon::Pun::PhotonNetwork::getStaticF_OnOwnershipRequestEv() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*, "OnOwnershipRequestEv",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*, "OnOwnershipTransferedEv",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>(value));
}
inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* Photon::Pun::PhotonNetwork::getStaticF_OnOwnershipTransferedEv() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*, "OnOwnershipTransferedEv",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*, "OnOwnershipTransferFailedEv",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>(value));
}
inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* Photon::Pun::PhotonNetwork::getStaticF_OnOwnershipTransferFailedEv() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*, "OnOwnershipTransferFailedEv",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_currentLevelPrefix(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "currentLevelPrefix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<uint8_t>(value));
}
inline uint8_t Photon::Pun::PhotonNetwork::getStaticF_currentLevelPrefix() {
  return ::cordl_internals::getStaticField<uint8_t, "currentLevelPrefix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_loadingLevelAndPausedNetwork(bool value) {
  ::cordl_internals::setStaticField<bool, "loadingLevelAndPausedNetwork", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_loadingLevelAndPausedNetwork() {
  return ::cordl_internals::getStaticField<bool, "loadingLevelAndPausedNetwork", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_prefabPool(::Photon::Pun::IPunPrefabPool* value) {
  ::cordl_internals::setStaticField<::Photon::Pun::IPunPrefabPool*, "prefabPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Pun::IPunPrefabPool*>(value));
}
inline ::Photon::Pun::IPunPrefabPool* Photon::Pun::PhotonNetwork::getStaticF_prefabPool() {
  return ::cordl_internals::getStaticField<::Photon::Pun::IPunPrefabPool*, "prefabPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_UseRpcMonoBehaviourCache(bool value) {
  ::cordl_internals::setStaticField<bool, "UseRpcMonoBehaviourCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_UseRpcMonoBehaviourCache() {
  return ::cordl_internals::getStaticField<bool, "UseRpcMonoBehaviourCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_monoRPCMethodsCache(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*, "monoRPCMethodsCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*
Photon::Pun::PhotonNetwork::getStaticF_monoRPCMethodsCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*,
                                           "monoRPCMethodsCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_rpcShortcuts(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*, "rpcShortcuts",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* Photon::Pun::PhotonNetwork::getStaticF_rpcShortcuts() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*, "rpcShortcuts",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_RunRpcCoroutines(bool value) {
  ::cordl_internals::setStaticField<bool, "RunRpcCoroutines", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<bool>(value));
}
inline bool Photon::Pun::PhotonNetwork::getStaticF_RunRpcCoroutines() {
  return ::cordl_internals::getStaticField<bool, "RunRpcCoroutines", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF__AsyncLevelLoadingOperation(::UnityEngine::AsyncOperation* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AsyncOperation*, "_AsyncLevelLoadingOperation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::UnityEngine::AsyncOperation*>(value));
}
inline ::UnityEngine::AsyncOperation* Photon::Pun::PhotonNetwork::getStaticF__AsyncLevelLoadingOperation() {
  return ::cordl_internals::getStaticField<::UnityEngine::AsyncOperation*, "_AsyncLevelLoadingOperation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF__levelLoadingProgress(float_t value) {
  ::cordl_internals::setStaticField<float_t, "_levelLoadingProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<float_t>(value));
}
inline float_t Photon::Pun::PhotonNetwork::getStaticF__levelLoadingProgress() {
  return ::cordl_internals::getStaticField<float_t, "_levelLoadingProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_typePunRPC(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "typePunRPC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<::System::Type*>(value));
}
inline ::System::Type* Photon::Pun::PhotonNetwork::getStaticF_typePunRPC() {
  return ::cordl_internals::getStaticField<::System::Type*, "typePunRPC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_typePhotonMessageInfo(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "typePhotonMessageInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Photon::Pun::PhotonNetwork::getStaticF_typePhotonMessageInfo() {
  return ::cordl_internals::getStaticField<::System::Type*, "typePhotonMessageInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteZero(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteZero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteZero() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteZero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteOne(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteOne", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteOne() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteOne", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteTwo(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteTwo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteTwo() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteTwo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteThree(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteThree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteThree() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteThree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteFour(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteFour", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteFour() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteFour", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteFive(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteFive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteFive() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteFive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteSix(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteSix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteSix() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteSix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteSeven(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteSeven", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteSeven() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteSeven", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_keyByteEight(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "keyByteEight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Photon::Pun::PhotonNetwork::getStaticF_keyByteEight() {
  return ::cordl_internals::getStaticField<::System::Object*, "keyByteEight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_emptyObjectArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "emptyObjectArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>(value));
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Photon::Pun::PhotonNetwork::getStaticF_emptyObjectArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "emptyObjectArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_emptyTypeArray(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "emptyTypeArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>(value));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Photon::Pun::PhotonNetwork::getStaticF_emptyTypeArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "emptyTypeArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_foundPVs(::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*, "foundPVs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>* Photon::Pun::PhotonNetwork::getStaticF_foundPVs() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*, "foundPVs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_removeFilter(::ExitGames::Client::Photon::Hashtable* value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "removeFilter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_removeFilter() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "removeFilter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_ServerCleanDestroyEvent(::ExitGames::Client::Photon::Hashtable* value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "ServerCleanDestroyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_ServerCleanDestroyEvent() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "ServerCleanDestroyEvent",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_ServerCleanOptions(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "ServerCleanOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_ServerCleanOptions() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "ServerCleanOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendToAllOptions(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToAllOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_SendToAllOptions() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToAllOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendToOthersOptions(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToOthersOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_SendToOthersOptions() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToOthersOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_SendToSingleOptions(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToSingleOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_SendToSingleOptions() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "SendToSingleOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_rpcFilterByViewId(::ExitGames::Client::Photon::Hashtable* value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "rpcFilterByViewId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_rpcFilterByViewId() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "rpcFilterByViewId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_OpCleanRpcBufferOptions(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "OpCleanRpcBufferOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_OpCleanRpcBufferOptions() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "OpCleanRpcBufferOptions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_rpcEvent(::ExitGames::Client::Photon::Hashtable* value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::Hashtable*, "rpcEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::ExitGames::Client::Photon::Hashtable*>(value));
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Pun::PhotonNetwork::getStaticF_rpcEvent() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Hashtable*, "rpcEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_RpcOptionsToAll(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "RpcOptionsToAll", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_RpcOptionsToAll() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "RpcOptionsToAll", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_ObjectsInOneUpdate(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ObjectsInOneUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(std::forward<int32_t>(value));
}
inline int32_t Photon::Pun::PhotonNetwork::getStaticF_ObjectsInOneUpdate() {
  return ::cordl_internals::getStaticField<int32_t, "ObjectsInOneUpdate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializeStreamOut(::Photon::Pun::PhotonStream* value) {
  ::cordl_internals::setStaticField<::Photon::Pun::PhotonStream*, "serializeStreamOut", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Pun::PhotonStream*>(value));
}
inline ::Photon::Pun::PhotonStream* Photon::Pun::PhotonNetwork::getStaticF_serializeStreamOut() {
  return ::cordl_internals::getStaticField<::Photon::Pun::PhotonStream*, "serializeStreamOut", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializeStreamIn(::Photon::Pun::PhotonStream* value) {
  ::cordl_internals::setStaticField<::Photon::Pun::PhotonStream*, "serializeStreamIn", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Pun::PhotonStream*>(value));
}
inline ::Photon::Pun::PhotonStream* Photon::Pun::PhotonNetwork::getStaticF_serializeStreamIn() {
  return ::cordl_internals::getStaticField<::Photon::Pun::PhotonStream*, "serializeStreamIn", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializeRaiseEvOptions(::Photon::Realtime::RaiseEventOptions* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RaiseEventOptions*, "serializeRaiseEvOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::RaiseEventOptions*>(value));
}
inline ::Photon::Realtime::RaiseEventOptions* Photon::Pun::PhotonNetwork::getStaticF_serializeRaiseEvOptions() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RaiseEventOptions*, "serializeRaiseEvOptions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF_serializeViewBatches(
    ::System::Collections::Generic::Dictionary_2<::Photon::Pun::__PhotonNetwork__RaiseEventBatch, ::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Photon::Pun::__PhotonNetwork__RaiseEventBatch, ::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>*,
                                    "serializeViewBatches", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Photon::Pun::__PhotonNetwork__RaiseEventBatch, ::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Photon::Pun::__PhotonNetwork__RaiseEventBatch, ::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>*
Photon::Pun::PhotonNetwork::getStaticF_serializeViewBatches() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Photon::Pun::__PhotonNetwork__RaiseEventBatch, ::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>*,
                                           "serializeViewBatches", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline void Photon::Pun::PhotonNetwork::setStaticF__cachedRegionHandler(::Photon::Realtime::RegionHandler* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::RegionHandler*, "_cachedRegionHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>(
      std::forward<::Photon::Realtime::RegionHandler*>(value));
}
inline ::Photon::Realtime::RegionHandler* Photon::Pun::PhotonNetwork::getStaticF__cachedRegionHandler() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::RegionHandler*, "_cachedRegionHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get>();
}
inline ::StringW Photon::Pun::PhotonNetwork::get_GameVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_GameVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_GameVersion(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_GameVersion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_AppVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_AppVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::UnityW<::Photon::Pun::ServerSettings> Photon::Pun::PhotonNetwork::get_PhotonServerSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PhotonServerSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::ServerSettings>, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_PhotonServerSettings(::Photon::Pun::ServerSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_PhotonServerSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::ServerSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_ServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ServerAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_CloudRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CloudRegion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_CurrentCluster() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CurrentCluster",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_BestRegionSummaryInPreferences() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_BestRegionSummaryInPreferences",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_BestRegionSummaryInPreferences(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_BestRegionSummaryInPreferences",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_IsConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_IsConnected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_IsConnectedAndReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_IsConnectedAndReady",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::ClientState Photon::Pun::PhotonNetwork::get_NetworkClientState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_NetworkClientState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::ClientState, false>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::ServerConnection Photon::Pun::PhotonNetwork::get_Server() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_Server",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::ServerConnection, false>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::AuthenticationValues* Photon::Pun::PhotonNetwork::get_AuthValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_AuthValues",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::AuthenticationValues*, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_AuthValues(::Photon::Realtime::AuthenticationValues* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_AuthValues", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::AuthenticationValues*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Photon::Realtime::TypedLobby* Photon::Pun::PhotonNetwork::get_CurrentLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CurrentLobby",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::TypedLobby*, false>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::Room* Photon::Pun::PhotonNetwork::get_CurrentRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CurrentRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Room*, false>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::Player* Photon::Pun::PhotonNetwork::get_LocalPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_LocalPlayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*, false>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::get_NickName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_NickName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_NickName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_NickName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*> Photon::Pun::PhotonNetwork::get_PlayerList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PlayerList",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*> Photon::Pun::PhotonNetwork::get_PlayerListOthers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PlayerListOthers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_OfflineMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_OfflineMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_OfflineMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_OfflineMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_AutomaticallySyncScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_AutomaticallySyncScene",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_AutomaticallySyncScene(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_AutomaticallySyncScene",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_EnableLobbyStatistics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_EnableLobbyStatistics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_InLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_InLobby",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_SendRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_SendRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_SendRate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_SendRate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonNetwork::get_SerializationRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_SerializationRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_SerializationRate(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_SerializationRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_IsMessageQueueRunning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_IsMessageQueueRunning",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_IsMessageQueueRunning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_IsMessageQueueRunning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline double_t Photon::Pun::PhotonNetwork::get_Time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_Time",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_ServerTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ServerTimestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_KeepAliveInBackground(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_KeepAliveInBackground",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline float_t Photon::Pun::PhotonNetwork::get_KeepAliveInBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_KeepAliveInBackground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_IsMasterClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_IsMasterClient",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::Photon::Realtime::Player* Photon::Pun::PhotonNetwork::get_MasterClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_MasterClient",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_InRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_InRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_CountOfPlayersOnMaster() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CountOfPlayersOnMaster",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_CountOfPlayersInRooms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CountOfPlayersInRooms",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_CountOfPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CountOfPlayers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_CountOfRooms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CountOfRooms",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_NetworkStatisticsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                             "get_NetworkStatisticsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_NetworkStatisticsEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_NetworkStatisticsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonNetwork::get_ResentReliableCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ResentReliableCommands",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::get_CrcCheckEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_CrcCheckEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_CrcCheckEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_CrcCheckEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonNetwork::get_PacketLossByCrcCheck() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PacketLossByCrcCheck",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_MaxResendsBeforeDisconnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                             "get_MaxResendsBeforeDisconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_MaxResendsBeforeDisconnect(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_MaxResendsBeforeDisconnect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t Photon::Pun::PhotonNetwork::get_QuickResends() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_QuickResends",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_QuickResends(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_QuickResends",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Photon::Pun::PhotonNetwork::get_UseAlternativeUdpPorts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_UseAlternativeUdpPorts",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_UseAlternativeUdpPorts(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_UseAlternativeUdpPorts",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Photon::Realtime::PhotonPortDefinition Photon::Pun::PhotonNetwork::get_ServerPortOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ServerPortOverrides",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::PhotonPortDefinition, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_ServerPortOverrides(::Photon::Realtime::PhotonPortDefinition value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_ServerPortOverrides", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::PhotonPortDefinition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::StaticReset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "StaticReset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::ConnectUsingSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectUsingSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
/// @param startInOfflineMode: bool (default: false)
inline bool Photon::Pun::PhotonNetwork::ConnectUsingSettings(::Photon::Realtime::AppSettings* appSettings, bool startInOfflineMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectUsingSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::AppSettings*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, appSettings, startInOfflineMode);
}
inline bool Photon::Pun::PhotonNetwork::ConnectToMaster(::StringW masterServerAddress, int32_t port, ::StringW appID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectToMaster", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, masterServerAddress, port, appID);
}
inline bool Photon::Pun::PhotonNetwork::ConnectToBestCloudServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectToBestCloudServer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::ConnectToRegion(::StringW region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ConnectToRegion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, region);
}
inline void Photon::Pun::PhotonNetwork::Disconnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Disconnect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::Reconnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Reconnect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::NetworkStatisticsReset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NetworkStatisticsReset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonNetwork::NetworkStatisticsToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NetworkStatisticsToString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::VerifyCanUseNetwork() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "VerifyCanUseNetwork",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::GetPing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "GetPing",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::FetchServerTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "FetchServerTimestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::SendAllOutgoingCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendAllOutgoingCommands",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::CloseConnection(::Photon::Realtime::Player* kickPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CloseConnection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, kickPlayer);
}
inline bool Photon::Pun::PhotonNetwork::SetMasterClient(::Photon::Realtime::Player* masterClientPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetMasterClient", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, masterClientPlayer);
}
inline bool Photon::Pun::PhotonNetwork::JoinRandomRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRandomRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::JoinRandomRoom(::ExitGames::Client::Photon::Hashtable* expectedCustomRoomProperties, uint8_t expectedMaxPlayers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRandomRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expectedCustomRoomProperties, expectedMaxPlayers);
}
/// @param expectedUsers: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
inline bool Photon::Pun::PhotonNetwork::JoinRandomRoom(::ExitGames::Client::Photon::Hashtable* expectedCustomRoomProperties, uint8_t expectedMaxPlayers,
                                                       ::Photon::Realtime::MatchmakingMode matchingType, ::Photon::Realtime::TypedLobby* typedLobby, ::StringW sqlLobbyFilter,
                                                       ::ArrayW<::StringW, ::Array<::StringW>*> expectedUsers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRandomRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::MatchmakingMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expectedCustomRoomProperties, expectedMaxPlayers, matchingType, typedLobby, sqlLobbyFilter, expectedUsers);
}
/// @param expectedCustomRoomProperties: ::ExitGames::Client::Photon::Hashtable* (default: nullptr)
/// @param expectedMaxPlayers: uint8_t (default: static_cast<uint8_t>(0x0u))
/// @param matchingType: ::Photon::Realtime::MatchmakingMode (default: static_cast<uint8_t>(0x0u))
/// @param typedLobby: ::Photon::Realtime::TypedLobby* (default: nullptr)
/// @param sqlLobbyFilter: ::StringW (default: nullptr)
/// @param roomName: ::StringW (default: nullptr)
/// @param roomOptions: ::Photon::Realtime::RoomOptions* (default: nullptr)
/// @param expectedUsers: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
inline bool Photon::Pun::PhotonNetwork::JoinRandomOrCreateRoom(::ExitGames::Client::Photon::Hashtable* expectedCustomRoomProperties, uint8_t expectedMaxPlayers,
                                                               ::Photon::Realtime::MatchmakingMode matchingType, ::Photon::Realtime::TypedLobby* typedLobby, ::StringW sqlLobbyFilter,
                                                               ::StringW roomName, ::Photon::Realtime::RoomOptions* roomOptions, ::ArrayW<::StringW, ::Array<::StringW>*> expectedUsers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRandomOrCreateRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::MatchmakingMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expectedCustomRoomProperties, expectedMaxPlayers, matchingType, typedLobby, sqlLobbyFilter, roomName,
                                                          roomOptions, expectedUsers);
}
/// @param roomOptions: ::Photon::Realtime::RoomOptions* (default: nullptr)
/// @param typedLobby: ::Photon::Realtime::TypedLobby* (default: nullptr)
/// @param expectedUsers: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
inline bool Photon::Pun::PhotonNetwork::CreateRoom(::StringW roomName, ::Photon::Realtime::RoomOptions* roomOptions, ::Photon::Realtime::TypedLobby* typedLobby,
                                                   ::ArrayW<::StringW, ::Array<::StringW>*> expectedUsers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CreateRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, roomName, roomOptions, typedLobby, expectedUsers);
}
/// @param expectedUsers: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
inline bool Photon::Pun::PhotonNetwork::JoinOrCreateRoom(::StringW roomName, ::Photon::Realtime::RoomOptions* roomOptions, ::Photon::Realtime::TypedLobby* typedLobby,
                                                         ::ArrayW<::StringW, ::Array<::StringW>*> expectedUsers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinOrCreateRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, roomName, roomOptions, typedLobby, expectedUsers);
}
/// @param expectedUsers: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
inline bool Photon::Pun::PhotonNetwork::JoinRoom(::StringW roomName, ::ArrayW<::StringW, ::Array<::StringW>*> expectedUsers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, roomName, expectedUsers);
}
inline bool Photon::Pun::PhotonNetwork::RejoinRoom(::StringW roomName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RejoinRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, roomName);
}
inline bool Photon::Pun::PhotonNetwork::ReconnectAndRejoin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ReconnectAndRejoin",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
/// @param becomeInactive: bool (default: true)
inline bool Photon::Pun::PhotonNetwork::LeaveRoom(bool becomeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LeaveRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, becomeInactive);
}
inline void Photon::Pun::PhotonNetwork::EnterOfflineRoom(::StringW roomName, ::Photon::Realtime::RoomOptions* roomOptions, bool createdRoom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "EnterOfflineRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, roomName, roomOptions, createdRoom);
}
inline bool Photon::Pun::PhotonNetwork::JoinLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinLobby",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::JoinLobby(::Photon::Realtime::TypedLobby* typedLobby) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "JoinLobby", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, typedLobby);
}
inline bool Photon::Pun::PhotonNetwork::LeaveLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LeaveLobby",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Photon::Pun::PhotonNetwork::FindFriends(::ArrayW<::StringW, ::Array<::StringW>*> friendsToFind) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "FindFriends", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, friendsToFind);
}
inline bool Photon::Pun::PhotonNetwork::GetCustomRoomList(::Photon::Realtime::TypedLobby* typedLobby, ::StringW sqlLobbyFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "GetCustomRoomList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, typedLobby, sqlLobbyFilter);
}
inline bool Photon::Pun::PhotonNetwork::SetPlayerCustomProperties(::ExitGames::Client::Photon::Hashtable* customProperties) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetPlayerCustomProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, customProperties);
}
inline void Photon::Pun::PhotonNetwork::RemovePlayerCustomProperties(::ArrayW<::StringW, ::Array<::StringW>*> customPropertiesToDelete) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemovePlayerCustomProperties", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, customPropertiesToDelete);
}
inline bool Photon::Pun::PhotonNetwork::RaiseEvent(uint8_t eventCode, ::System::Object* eventContent, ::Photon::Realtime::RaiseEventOptions* raiseEventOptions,
                                                   ::ExitGames::Client::Photon::SendOptions sendOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RaiseEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RaiseEventOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SendOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventCode, eventContent, raiseEventOptions, sendOptions);
}
inline bool Photon::Pun::PhotonNetwork::RaiseEventInternal(uint8_t eventCode, ::System::Object* eventContent, ::Photon::Realtime::RaiseEventOptions* raiseEventOptions,
                                                           ::ExitGames::Client::Photon::SendOptions sendOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RaiseEventInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RaiseEventOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SendOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventCode, eventContent, raiseEventOptions, sendOptions);
}
inline bool Photon::Pun::PhotonNetwork::AllocateViewID(::Photon::Pun::PhotonView* view) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateViewID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, view);
}
inline bool Photon::Pun::PhotonNetwork::AllocateSceneViewID(::Photon::Pun::PhotonView* view) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateSceneViewID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, view);
}
inline bool Photon::Pun::PhotonNetwork::AllocateRoomViewID(::Photon::Pun::PhotonView* view) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateRoomViewID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, view);
}
inline int32_t Photon::Pun::PhotonNetwork::AllocateViewID(bool roomObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateViewID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, roomObject);
}
inline int32_t Photon::Pun::PhotonNetwork::AllocateViewID(int32_t ownerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AllocateViewID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ownerId);
}
/// @param group: uint8_t (default: static_cast<uint8_t>(0x0u))
/// @param data: ::ArrayW<::System::Object*,::Array<::System::Object*>*> (default: nullptr)
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::Instantiate(::StringW prefabName, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, uint8_t group,
                                                                                   ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, prefabName, position, rotation, group, data);
}
/// @param group: uint8_t (default: static_cast<uint8_t>(0x0u))
/// @param data: ::ArrayW<::System::Object*,::Array<::System::Object*>*> (default: nullptr)
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::InstantiateSceneObject(::StringW prefabName, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, uint8_t group,
                                                                                              ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "InstantiateSceneObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, prefabName, position, rotation, group, data);
}
/// @param group: uint8_t (default: static_cast<uint8_t>(0x0u))
/// @param data: ::ArrayW<::System::Object*,::Array<::System::Object*>*> (default: nullptr)
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::InstantiateRoomObject(::StringW prefabName, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, uint8_t group,
                                                                                             ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "InstantiateRoomObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, prefabName, position, rotation, group, data);
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::NetworkInstantiate(::ExitGames::Client::Photon::Hashtable* networkEvent, ::Photon::Realtime::Player* creator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NetworkInstantiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, networkEvent, creator);
}
/// @param roomObject: bool (default: false)
/// @param instantiateEvent: bool (default: false)
inline ::UnityW<::UnityEngine::GameObject> Photon::Pun::PhotonNetwork::NetworkInstantiate(::Photon::Pun::InstantiateParameters parameters, bool roomObject, bool instantiateEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NetworkInstantiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::InstantiateParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, parameters, roomObject, instantiateEvent);
}
/// @param roomObject: bool (default: false)
inline bool Photon::Pun::PhotonNetwork::SendInstantiate(::Photon::Pun::InstantiateParameters parameters, bool roomObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendInstantiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::InstantiateParameters>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, parameters, roomObject);
}
inline void Photon::Pun::PhotonNetwork::Destroy(::Photon::Pun::PhotonView* targetView) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetView);
}
inline void Photon::Pun::PhotonNetwork::Destroy(::UnityEngine::GameObject* targetGo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "Destroy", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetGo);
}
inline void Photon::Pun::PhotonNetwork::DestroyPlayerObjects(::Photon::Realtime::Player* targetPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyPlayerObjects", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetPlayer);
}
inline void Photon::Pun::PhotonNetwork::DestroyPlayerObjects(int32_t targetPlayerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyPlayerObjects",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetPlayerId);
}
inline void Photon::Pun::PhotonNetwork::DestroyAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::RemoveRPCs(::Photon::Realtime::Player* targetPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveRPCs", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetPlayer);
}
inline void Photon::Pun::PhotonNetwork::RemoveRPCs(::Photon::Pun::PhotonView* targetPhotonView) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveRPCs", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetPhotonView);
}
inline void Photon::Pun::PhotonNetwork::RPC(::Photon::Pun::PhotonView* view, ::StringW methodName, ::Photon::Pun::RpcTarget target, bool encrypt,
                                            ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::RpcTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, view, methodName, target, encrypt, parameters);
}
inline void Photon::Pun::PhotonNetwork::RPC(::Photon::Pun::PhotonView* view, ::StringW methodName, ::Photon::Realtime::Player* targetPlayer, bool encrypt,
                                            ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, view, methodName, targetPlayer, encrypt, parameters);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* Photon::Pun::PhotonNetwork::FindGameObjectsWithComponent(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "FindGameObjectsWithComponent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*, false>(nullptr, ___internal_method, type);
}
inline void Photon::Pun::PhotonNetwork::SetInterestGroups(uint8_t group, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetInterestGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group, enabled);
}
inline void Photon::Pun::PhotonNetwork::LoadLevel(int32_t levelNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LoadLevel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, levelNumber);
}
inline void Photon::Pun::PhotonNetwork::LoadLevel(::StringW levelName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LoadLevel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, levelName);
}
/// @param sendAuthCookie: bool (default: false)
inline bool Photon::Pun::PhotonNetwork::WebRpc(::StringW name, ::System::Object* parameters, bool sendAuthCookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "WebRpc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, parameters, sendAuthCookie);
}
inline void Photon::Pun::PhotonNetwork::SetupLogging() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetupLogging",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param reload: bool (default: false)
inline void Photon::Pun::PhotonNetwork::LoadOrCreateSettings(bool reload) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LoadOrCreateSettings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, reload);
}
inline ::ArrayW<::UnityW<::Photon::Pun::PhotonView>, ::Array<::UnityW<::Photon::Pun::PhotonView>>*> Photon::Pun::PhotonNetwork::get_PhotonViews() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PhotonViews",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Photon::Pun::PhotonView>, ::Array<::UnityW<::Photon::Pun::PhotonView>>*>, false>(nullptr, ___internal_method);
}
inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<int32_t, ::UnityW<::Photon::Pun::PhotonView>> Photon::Pun::PhotonNetwork::get_PhotonViewCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PhotonViewCollection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<int32_t, ::UnityW<::Photon::Pun::PhotonView>>, false>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::PhotonNetwork::get_ViewCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_ViewCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::add_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "add_OnOwnershipRequestEv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::remove_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "remove_OnOwnershipRequestEv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::add_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "add_OnOwnershipTransferedEv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::remove_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "remove_OnOwnershipTransferedEv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::add_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "add_OnOwnershipTransferFailedEv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::remove_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "remove_OnOwnershipTransferFailedEv", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::Photon::Pun::PhotonView>, ::Photon::Realtime::Player*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::PhotonNetwork::AddCallbackTarget(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AddCallbackTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, target);
}
inline void Photon::Pun::PhotonNetwork::RemoveCallbackTarget(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveCallbackTarget", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, target);
}
inline ::StringW Photon::Pun::PhotonNetwork::CallbacksToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CallbacksToString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Photon::Pun::IPunPrefabPool* Photon::Pun::PhotonNetwork::get_PrefabPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_PrefabPool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Pun::IPunPrefabPool*, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::set_PrefabPool(::Photon::Pun::IPunPrefabPool* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "set_PrefabPool", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::IPunPrefabPool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline float_t Photon::Pun::PhotonNetwork::get_LevelLoadingProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "get_LevelLoadingProgress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::LeftRoomCleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LeftRoomCleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::LocalCleanupAnythingInstantiated(bool destroyInstantiatedGameObjects) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LocalCleanupAnythingInstantiated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destroyInstantiatedGameObjects);
}
inline void Photon::Pun::PhotonNetwork::ResetPhotonViewsOnSerialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(),
                                                                             "ResetPhotonViewsOnSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::ExecuteRpc(::ExitGames::Client::Photon::Hashtable* rpcData, ::Photon::Realtime::Player* sender) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ExecuteRpc", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rpcData, sender);
}
inline bool Photon::Pun::PhotonNetwork::CheckTypeMatch(::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> methodParameters,
                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> callParameterTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CheckTypeMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, methodParameters, callParameterTypes);
}
inline void Photon::Pun::PhotonNetwork::DestroyPlayerObjects(int32_t playerId, bool localOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyPlayerObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerId, localOnly);
}
inline void Photon::Pun::PhotonNetwork::DestroyAll(bool localOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DestroyAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, localOnly);
}
inline void Photon::Pun::PhotonNetwork::RemoveInstantiatedGO(::UnityEngine::GameObject* go, bool localOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveInstantiatedGO", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, go, localOnly);
}
inline void Photon::Pun::PhotonNetwork::ServerCleanInstantiateAndDestroy(::Photon::Pun::PhotonView* photonView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "ServerCleanInstantiateAndDestroy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, photonView);
}
inline void Photon::Pun::PhotonNetwork::SendDestroyOfPlayer(int32_t actorNr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendDestroyOfPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actorNr);
}
inline void Photon::Pun::PhotonNetwork::SendDestroyOfAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendDestroyOfAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::OpRemoveFromServerInstantiationsOfPlayer(int32_t actorNr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpRemoveFromServerInstantiationsOfPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actorNr);
}
inline void Photon::Pun::PhotonNetwork::RequestOwnership(int32_t viewID, int32_t fromOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RequestOwnership", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewID, fromOwner);
}
inline void Photon::Pun::PhotonNetwork::TransferOwnership(int32_t viewID, int32_t playerID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "TransferOwnership", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewID, playerID);
}
/// @param targetActor: int32_t (default: static_cast<int32_t>(0xffffffff))
inline void Photon::Pun::PhotonNetwork::OwnershipUpdate(::ArrayW<int32_t, ::Array<int32_t>*> viewOwnerPairs, int32_t targetActor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OwnershipUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewOwnerPairs, targetActor);
}
inline bool Photon::Pun::PhotonNetwork::LocalCleanPhotonView(::Photon::Pun::PhotonView* view) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LocalCleanPhotonView", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, view);
}
inline ::UnityW<::Photon::Pun::PhotonView> Photon::Pun::PhotonNetwork::GetPhotonView(int32_t viewID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "GetPhotonView", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::PhotonView>, false>(nullptr, ___internal_method, viewID);
}
inline void Photon::Pun::PhotonNetwork::RegisterPhotonView(::Photon::Pun::PhotonView* netView) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RegisterPhotonView", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, netView);
}
inline void Photon::Pun::PhotonNetwork::OpCleanActorRpcBuffer(int32_t actorNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpCleanActorRpcBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actorNumber);
}
inline void Photon::Pun::PhotonNetwork::OpRemoveCompleteCacheOfPlayer(int32_t actorNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpRemoveCompleteCacheOfPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actorNumber);
}
inline void Photon::Pun::PhotonNetwork::OpRemoveCompleteCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpRemoveCompleteCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::RemoveCacheOfLeftPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveCacheOfLeftPlayers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::CleanRpcBufferIfMine(::Photon::Pun::PhotonView* view) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "CleanRpcBufferIfMine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, view);
}
inline void Photon::Pun::PhotonNetwork::OpCleanRpcBuffer(::Photon::Pun::PhotonView* view) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OpCleanRpcBuffer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, view);
}
inline void Photon::Pun::PhotonNetwork::RemoveRPCsInGroup(int32_t group) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveRPCsInGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group);
}
/// @param viewId: int32_t (default: static_cast<int32_t>(0x0))
/// @param methodName: ::StringW (default: nullptr)
/// @param callersActorNumbers: ::ArrayW<int32_t,::Array<int32_t>*> (default: nullptr)
inline bool Photon::Pun::PhotonNetwork::RemoveBufferedRPCs(int32_t viewId, ::StringW methodName, ::ArrayW<int32_t, ::Array<int32_t>*> callersActorNumbers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RemoveBufferedRPCs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, viewId, methodName, callersActorNumbers);
}
inline void Photon::Pun::PhotonNetwork::SetLevelPrefix(uint8_t prefix) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetLevelPrefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prefix);
}
inline void Photon::Pun::PhotonNetwork::RPC(::Photon::Pun::PhotonView* view, ::StringW methodName, ::Photon::Pun::RpcTarget target, ::Photon::Realtime::Player* player, bool encrypt,
                                            ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RPC", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::RpcTarget>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, view, methodName, target, player, encrypt, parameters);
}
inline void Photon::Pun::PhotonNetwork::SetInterestGroups(::ArrayW<uint8_t, ::Array<uint8_t>*> disableGroups, ::ArrayW<uint8_t, ::Array<uint8_t>*> enableGroups) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetInterestGroups", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, disableGroups, enableGroups);
}
inline void Photon::Pun::PhotonNetwork::SetSendingEnabled(uint8_t group, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetSendingEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group, enabled);
}
inline void Photon::Pun::PhotonNetwork::SetSendingEnabled(::ArrayW<uint8_t, ::Array<uint8_t>*> disableGroups, ::ArrayW<uint8_t, ::Array<uint8_t>*> enableGroups) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetSendingEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, disableGroups, enableGroups);
}
inline void Photon::Pun::PhotonNetwork::NewSceneLoaded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "NewSceneLoaded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::RunViewUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "RunViewUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::SendSerializeViewBatch(::Photon::Pun::__PhotonNetwork__SerializeViewBatch* batch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SendSerializeViewBatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::__PhotonNetwork__SerializeViewBatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, batch);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* Photon::Pun::PhotonNetwork::OnSerializeWrite(::Photon::Pun::PhotonView* view) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnSerializeWrite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::PhotonView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*, false>(nullptr, ___internal_method, view);
}
inline void Photon::Pun::PhotonNetwork::OnSerializeRead(::ArrayW<::System::Object*, ::Array<::System::Object*>*> data, ::Photon::Realtime::Player* sender, int32_t networkTime, int16_t correctPrefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnSerializeRead", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, sender, networkTime, correctPrefix);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* Photon::Pun::PhotonNetwork::DeltaCompressionWrite(::System::Collections::Generic::List_1<::System::Object*>* previousContent,
                                                                                                                    ::System::Collections::Generic::List_1<::System::Object*>* currentContent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DeltaCompressionWrite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*, false>(nullptr, ___internal_method, previousContent, currentContent);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Photon::Pun::PhotonNetwork::DeltaCompressionRead(::ArrayW<::System::Object*, ::Array<::System::Object*>*> lastOnSerializeDataReceived,
                                                                                                                 ::ArrayW<::System::Object*, ::Array<::System::Object*>*> incomingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "DeltaCompressionRead", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, lastOnSerializeDataReceived, incomingData);
}
inline bool Photon::Pun::PhotonNetwork::AlmostEquals(::System::Collections::Generic::IList_1<::System::Object*>* lastData, ::System::Collections::Generic::IList_1<::System::Object*>* currentContent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AlmostEquals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lastData, currentContent);
}
inline bool Photon::Pun::PhotonNetwork::AlmostEquals(::System::Object* one, ::System::Object* two) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "AlmostEquals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, one, two);
}
inline bool Photon::Pun::PhotonNetwork::GetMethod(::UnityEngine::MonoBehaviour* monob, ::StringW methodType, ByRef<::System::Reflection::MethodInfo*> mi) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "GetMethod", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::MethodInfo*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, monob, methodType, mi);
}
inline void Photon::Pun::PhotonNetwork::LoadLevelIfSynced() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "LoadLevelIfSynced",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::PhotonNetwork::SetLevelInPropsIfSynced(::System::Object* levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "SetLevelInPropsIfSynced", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, levelId);
}
inline void Photon::Pun::PhotonNetwork::OnEvent(::ExitGames::Client::Photon::EventData* photonEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, photonEvent);
}
inline void Photon::Pun::PhotonNetwork::OnOperation(::ExitGames::Client::Photon::OperationResponse* opResponse) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnOperation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, opResponse);
}
inline void Photon::Pun::PhotonNetwork::OnClientStateChanged(::Photon::Realtime::ClientState previousState, ::Photon::Realtime::ClientState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnClientStateChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ClientState>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ClientState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previousState, state);
}
inline void Photon::Pun::PhotonNetwork::OnRegionsPinged(::Photon::Realtime::RegionHandler* regionHandler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::PhotonNetwork*>::get(), "OnRegionsPinged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, regionHandler);
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonNetwork::PhotonNetwork() {}
