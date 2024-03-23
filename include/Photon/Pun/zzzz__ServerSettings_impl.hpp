#pragma once
#include "Photon/Pun/zzzz__PunLogLevel_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Photon/Pun/zzzz__ServerSettings_def.hpp"
#include "Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Photon::Pun::ServerSettings.UseCloud
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::ServerSettings::*)(::StringW, ::StringW)>(&::Photon::Pun::ServerSettings::UseCloud)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26032b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), "UseCloud", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings.IsAppId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Photon::Pun::ServerSettings::IsAppId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26032f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), "IsAppId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings.get_BestRegionSummaryInPreferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Photon::Pun::ServerSettings::get_BestRegionSummaryInPreferences)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2603398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), "get_BestRegionSummaryInPreferences",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings.ResetBestRegionCodeInPreferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Photon::Pun::ServerSettings::ResetBestRegionCodeInPreferences)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26033e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), "ResetBestRegionCodeInPreferences",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Pun::ServerSettings::*)()>(&::Photon::Pun::ServerSettings::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x260343c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::ServerSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::ServerSettings::*)()>(&::Photon::Pun::ServerSettings::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26034a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::AppSettings*& Photon::Pun::ServerSettings::__cordl_internal_get_AppSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppSettings;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::AppSettings*> const& Photon::Pun::ServerSettings::__cordl_internal_get_AppSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppSettings;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_AppSettings(::Photon::Realtime::AppSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AppSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Pun::ServerSettings::__cordl_internal_get_DevRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DevRegion;
}
constexpr ::StringW const& Photon::Pun::ServerSettings::__cordl_internal_get_DevRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DevRegion;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_DevRegion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DevRegion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Pun::PunLogLevel& Photon::Pun::ServerSettings::__cordl_internal_get_PunLogging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PunLogging;
}
constexpr ::Photon::Pun::PunLogLevel const& Photon::Pun::ServerSettings::__cordl_internal_get_PunLogging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PunLogging;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_PunLogging(::Photon::Pun::PunLogLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PunLogging = value;
}
constexpr bool& Photon::Pun::ServerSettings::__cordl_internal_get_EnableSupportLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableSupportLogger;
}
constexpr bool const& Photon::Pun::ServerSettings::__cordl_internal_get_EnableSupportLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableSupportLogger;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_EnableSupportLogger(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EnableSupportLogger = value;
}
constexpr bool& Photon::Pun::ServerSettings::__cordl_internal_get_RunInBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RunInBackground;
}
constexpr bool const& Photon::Pun::ServerSettings::__cordl_internal_get_RunInBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RunInBackground;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_RunInBackground(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RunInBackground = value;
}
constexpr bool& Photon::Pun::ServerSettings::__cordl_internal_get_StartInOfflineMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartInOfflineMode;
}
constexpr bool const& Photon::Pun::ServerSettings::__cordl_internal_get_StartInOfflineMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartInOfflineMode;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_StartInOfflineMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartInOfflineMode = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Photon::Pun::ServerSettings::__cordl_internal_get_RpcList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RpcList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& Photon::Pun::ServerSettings::__cordl_internal_get_RpcList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RpcList;
}
constexpr void Photon::Pun::ServerSettings::__cordl_internal_set_RpcList(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RpcList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param code: ::StringW (default: u"")
inline void Photon::Pun::ServerSettings::UseCloud(::StringW cloudAppid, ::StringW code) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), "UseCloud", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cloudAppid, code);
}
inline bool Photon::Pun::ServerSettings::IsAppId(::StringW val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), "IsAppId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, val);
}
inline ::StringW Photon::Pun::ServerSettings::get_BestRegionSummaryInPreferences() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), "get_BestRegionSummaryInPreferences",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::ServerSettings::ResetBestRegionCodeInPreferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(),
                                                                             "ResetBestRegionCodeInPreferences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW Photon::Pun::ServerSettings::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Photon::Pun::ServerSettings* Photon::Pun::ServerSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::ServerSettings*>());
}
inline void Photon::Pun::ServerSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::ServerSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::ServerSettings::ServerSettings() {}
