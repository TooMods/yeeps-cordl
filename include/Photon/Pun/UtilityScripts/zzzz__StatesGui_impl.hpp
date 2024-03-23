#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__StatesGui_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::StatesGui.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::StatesGui::*)()>(&::Photon::Pun::UtilityScripts::StatesGui::Awake)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1ec16bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::StatesGui.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::StatesGui::*)()>(&::Photon::Pun::UtilityScripts::StatesGui::OnDisable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1ec1828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::StatesGui.OnGUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::StatesGui::*)()>(&::Photon::Pun::UtilityScripts::StatesGui::OnGUI)> {
  constexpr static std::size_t size = 0x11fc;
  constexpr static std::size_t addrs = 0x1ec18c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), "OnGUI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::StatesGui.PlayerToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Pun::UtilityScripts::StatesGui::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::UtilityScripts::StatesGui::PlayerToString)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x1ec2abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), "PlayerToString", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::StatesGui._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::StatesGui::*)()>(&::Photon::Pun::UtilityScripts::StatesGui::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1ec2e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rect& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_GuiOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GuiOffset;
}
constexpr ::UnityEngine::Rect const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_GuiOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GuiOffset;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_GuiOffset(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GuiOffset = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_DontDestroy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DontDestroy;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_DontDestroy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DontDestroy;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_DontDestroy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DontDestroy = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_ServerTimestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ServerTimestamp;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_ServerTimestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ServerTimestamp;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_ServerTimestamp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ServerTimestamp = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_DetailedConnection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DetailedConnection;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_DetailedConnection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DetailedConnection;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_DetailedConnection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DetailedConnection = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_Server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Server;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_Server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Server;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_Server(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Server = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_AppVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppVersion;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_AppVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppVersion;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_AppVersion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AppVersion = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_UserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_UserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_UserId(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserId = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_Room() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Room;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_Room() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Room;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_Room(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Room = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_RoomProps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomProps;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_RoomProps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomProps;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_RoomProps(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RoomProps = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_EventsIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventsIn;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_EventsIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventsIn;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_EventsIn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EventsIn = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_LocalPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalPlayer;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_LocalPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalPlayer;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_LocalPlayer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LocalPlayer = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_PlayerProps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlayerProps;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_PlayerProps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlayerProps;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_PlayerProps(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PlayerProps = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_Others() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Others;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_Others() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Others;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_Others(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Others = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_Buttons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buttons;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_Buttons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buttons;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_Buttons(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Buttons = value;
}
constexpr bool& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_ExpectedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedUsers;
}
constexpr bool const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_ExpectedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedUsers;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_ExpectedUsers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpectedUsers = value;
}
constexpr ::UnityEngine::Rect& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_GuiRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GuiRect;
}
constexpr ::UnityEngine::Rect const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_GuiRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GuiRect;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_GuiRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GuiRect = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_native_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_width;
}
constexpr float_t const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_native_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_width;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_native_width(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___native_width = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_native_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_height;
}
constexpr float_t const& Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_get_native_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_height;
}
constexpr void Photon::Pun::UtilityScripts::StatesGui::__cordl_internal_set_native_height(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___native_height = value;
}
inline void Photon::Pun::UtilityScripts::StatesGui::setStaticF_Instance(::UnityW<::Photon::Pun::UtilityScripts::StatesGui> value) {
  ::cordl_internals::setStaticField<::UnityW<::Photon::Pun::UtilityScripts::StatesGui>, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get>(
      std::forward<::UnityW<::Photon::Pun::UtilityScripts::StatesGui>>(value));
}
inline ::UnityW<::Photon::Pun::UtilityScripts::StatesGui> Photon::Pun::UtilityScripts::StatesGui::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::UnityW<::Photon::Pun::UtilityScripts::StatesGui>, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get>();
}
inline void Photon::Pun::UtilityScripts::StatesGui::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::StatesGui::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::StatesGui::OnGUI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), "OnGUI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Photon::Pun::UtilityScripts::StatesGui::PlayerToString(::Photon::Realtime::Player* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), "PlayerToString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, player);
}
inline ::Photon::Pun::UtilityScripts::StatesGui* Photon::Pun::UtilityScripts::StatesGui::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::StatesGui*>());
}
inline void Photon::Pun::UtilityScripts::StatesGui::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::StatesGui*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::StatesGui::StatesGui() {}
