#pragma once
#include "GlobalNamespace/zzzz__tox_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__tox_def.hpp"
#include "GlobalNamespace/zzzz__tox_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__tox__PrintCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__tox__PrintCallback::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__tox__PrintCallback::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28ddd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__tox__PrintCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__tox__PrintCallback::*)(ByRefConst<::StringW>)>(
    &::GlobalNamespace::__tox__PrintCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28dde20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__tox__PrintCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__tox__PrintCallback::*)(ByRefConst<::StringW>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__tox__PrintCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28dde34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__tox__PrintCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__tox__PrintCallback::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__tox__PrintCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28dde54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__tox__PrintCallback* GlobalNamespace::__tox__PrintCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__tox__PrintCallback*>(object, method));
}
inline void GlobalNamespace::__tox__PrintCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__tox__PrintCallback::Invoke(ByRefConst<::StringW> arg1) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1);
}
inline ::System::IAsyncResult* GlobalNamespace::__tox__PrintCallback::BeginInvoke(ByRefConst<::StringW> arg1, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, arg1, callback, object);
}
inline void GlobalNamespace::__tox__PrintCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__tox__PrintCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__tox__PrintCallback::__tox__PrintCallback() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__tox__TOX_ERROR::__tox__TOX_ERROR(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__tox__TOX_ERROR::__tox__TOX_ERROR() {}
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_NO_ERROR{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_UNKNOWN_ERROR{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_INSTANCE{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_CONFIG{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_ACCOUNT_UUID{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_API_KEY{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_PLAYER_NAME{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_SESSION_NAME{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_AUDIO{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_SAMPLE_RATE{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_SAMPLES_SKIPPED{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_NO_SESSION_SET{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_UPLOAD_METADATA_FAILED{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_TENANT_PREFIX{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_PLAYER_ALIAS{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_SESSION_ALIAS{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_SESSION_DATA{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_ALREADY_IN_SESSION{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_NOT_IN_SESSION{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_SESSION_DATA_TYPE{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_PLAYER_DATA_TYPE{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::__tox__TOX_ERROR::TOX_BAD_PLAYER_DATA{ static_cast<int32_t>(0x15) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING::__tox__TOX_TRIAGE_SETTING(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING::__tox__TOX_TRIAGE_SETTING() {}
constexpr ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING GlobalNamespace::__tox__TOX_TRIAGE_SETTING::TOX_NONE{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING GlobalNamespace::__tox__TOX_TRIAGE_SETTING::TOX_LIGHT{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING GlobalNamespace::__tox__TOX_TRIAGE_SETTING::TOX_HEAVY{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE::__tox__TOX_PLAYER_DATA_TYPE(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE::__tox__TOX_PLAYER_DATA_TYPE() {}
constexpr ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE::TOX_PLAYER_LANGUAGE_PREFERENCE{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE::TOX_PLAYER_PLATFORM_INFO{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE::__tox__TOX_SESSION_DATA_TYPE(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE::__tox__TOX_SESSION_DATA_TYPE() {}
constexpr ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE::TOX_SESSION_TYPE{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE::TOX_SESSION_PASSTHROUGH_DATA{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "account_uuid", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "api_key", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "player_name_unique", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "verbose", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "disable_upload_after_delay", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "triage_setting", ty:
// "::GlobalNamespace::__tox__TOX_TRIAGE_SETTING", modifiers: "", def_value: Some("{}") }, CppParam { name: "obscure_names", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "single_tenant_prefix", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "enable_proximity_chat", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__tox__ToxConfig::__tox__ToxConfig(::StringW account_uuid, ::StringW api_key, ::StringW player_name_unique, int32_t verbose, int32_t disable_upload_after_delay,
                                                                ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING triage_setting, int32_t obscure_names, ::StringW single_tenant_prefix,
                                                                int32_t enable_proximity_chat) noexcept {
  this->account_uuid = account_uuid;
  this->api_key = api_key;
  this->player_name_unique = player_name_unique;
  this->verbose = verbose;
  this->disable_upload_after_delay = disable_upload_after_delay;
  this->triage_setting = triage_setting;
  this->obscure_names = obscure_names;
  this->single_tenant_prefix = single_tenant_prefix;
  this->enable_proximity_chat = enable_proximity_chat;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__tox__ToxConfig::__tox__ToxConfig() {}
// Ctor Parameters [CppParam { name: "tox_internal_ptr", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__tox__NativeToxInstance::__tox__NativeToxInstance(void* tox_internal_ptr) noexcept {
  this->tox_internal_ptr = tox_internal_ptr;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__tox__NativeToxInstance::__tox__NativeToxInstance() {}
//  Writing Method size for method: ::GlobalNamespace::tox.tox_global_init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)()>(&::GlobalNamespace::tox::tox_global_init)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28dc688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_global_init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_global_cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)()>(&::GlobalNamespace::tox::tox_global_cleanup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28dc6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_global_cleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_error_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::GlobalNamespace::__tox__TOX_ERROR)>(&::GlobalNamespace::tox::tox_error_name)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28dc760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_error_name", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__TOX_ERROR>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_create_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRef<::GlobalNamespace::__tox__ToxConfig>)>(&::GlobalNamespace::tox::tox_create_instance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x28dc7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_create_instance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__ToxConfig>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_destroy_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>)>(
    &::GlobalNamespace::tox::tox_destroy_instance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28dc8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_destroy_instance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_session_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::StringW)>(
    &::GlobalNamespace::tox::tox_set_session_name)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28dc948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_session_name", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_get_internal_player_uuid_raw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRef<void*>)>(
    &::GlobalNamespace::tox::tox_get_internal_player_uuid_raw)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28dc9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_internal_player_uuid_raw", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_player_alias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::StringW)>(
    &::GlobalNamespace::tox::tox_set_player_alias)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28dca74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_player_alias", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_get_internal_session_uuid_raw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRef<void*>)>(
    &::GlobalNamespace::tox::tox_get_internal_session_uuid_raw)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28dcb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_internal_session_uuid_raw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_session_alias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::StringW)>(
    &::GlobalNamespace::tox::tox_set_session_alias)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28dcba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_session_alias", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_session_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::StringW)>(
    &::GlobalNamespace::tox::tox_add_session_data)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28dcc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_session_data", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_proximity_chat_player_can_hear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>, uint32_t)>(&::GlobalNamespace::tox::tox_set_proximity_chat_player_can_hear)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28dcce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_proximity_chat_player_can_hear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_proximity_chat_can_hear_player
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>, uint32_t)>(&::GlobalNamespace::tox::tox_set_proximity_chat_can_hear_player)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28dce4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_proximity_chat_can_hear_player", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_global_muted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, int32_t)>(
    &::GlobalNamespace::tox::tox_set_global_muted)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28dcfb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_global_muted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_player_muted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::StringW, int32_t)>(
    &::GlobalNamespace::tox::tox_set_player_muted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28dd038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_player_muted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_players_muted_at_join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>, uint32_t)>(&::GlobalNamespace::tox::tox_set_players_muted_at_join)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28dd0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_players_muted_at_join", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_audio_float
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRefConst<::ArrayW<float_t, ::Array<float_t>*>>, uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::tox::tox_add_audio_float)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28dd24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_float", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<float_t, ::Array<float_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_audio_float_raw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, void*, uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::tox::tox_add_audio_float_raw)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28dd304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_float_raw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_audio_short_raw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, void*, uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::tox::tox_add_audio_short_raw)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28dd3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_short_raw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_audio_short
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>>, uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::tox::tox_add_audio_short)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28dd464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_short", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_audio_nonrealtime_float
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRefConst<::ArrayW<float_t, ::Array<float_t>*>>, uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::tox::tox_add_audio_nonrealtime_float)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28dd51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_nonrealtime_float", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<float_t, ::Array<float_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_audio_nonrealtime_short
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>>, uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::tox::tox_add_audio_nonrealtime_short)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28dd5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_nonrealtime_short", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_single_tenant_prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::StringW)>(
    &::GlobalNamespace::tox::tox_set_single_tenant_prefix)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x28dd68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_single_tenant_prefix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_log_info_callback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(::GlobalNamespace::__tox__PrintCallback*)>(
    &::GlobalNamespace::tox::tox_set_log_info_callback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28dd730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_log_info_callback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__PrintCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_set_log_error_callback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(::GlobalNamespace::__tox__PrintCallback*)>(
    &::GlobalNamespace::tox::tox_set_log_error_callback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28dd7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_log_error_callback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__PrintCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_get_version_raw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::GlobalNamespace::tox::tox_get_version_raw)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28dd838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_version_raw",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_join_session
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::StringW)>(
    &::GlobalNamespace::tox::tox_join_session)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28dd8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_join_session", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_leave_session
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>)>(
    &::GlobalNamespace::tox::tox_leave_session)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28dd944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_leave_session", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_structured_session_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE, ::StringW)>(&::GlobalNamespace::tox::tox_add_structured_session_data)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28dd9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_structured_session_data", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_add_structured_player_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__tox__TOX_ERROR (*)(
    ByRef<::GlobalNamespace::__tox__NativeToxInstance>, ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE, ::StringW)>(&::GlobalNamespace::tox::tox_add_structured_player_data)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28dda78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_structured_player_data", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::tox::tox_get_version)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28ddb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_get_internal_session_uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>)>(
    &::GlobalNamespace::tox::tox_get_internal_session_uuid)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x28ddb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_internal_session_uuid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox.tox_get_internal_player_uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::GlobalNamespace::__tox__NativeToxInstance>)>(
    &::GlobalNamespace::tox::tox_get_internal_player_uuid)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x28ddc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_internal_player_uuid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::tox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::tox::*)()>(&::GlobalNamespace::tox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28ddd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_global_init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_global_init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_global_cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_global_cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method);
}
inline void* GlobalNamespace::tox::tox_error_name(::GlobalNamespace::__tox__TOX_ERROR error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_error_name", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__TOX_ERROR>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, error);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_create_instance(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                     ByRef<::GlobalNamespace::__tox__ToxConfig> tox_config_ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_create_instance", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__ToxConfig>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, tox_config_ptr);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_destroy_instance(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_destroy_instance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_session_name(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW session_name_unique) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_session_name", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, session_name_unique);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_get_internal_player_uuid_raw(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                                  ByRef<void*> internal_player_uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_internal_player_uuid_raw", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, internal_player_uuid);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_player_alias(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW player_alias) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_player_alias", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, player_alias);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_get_internal_session_uuid_raw(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                                   ByRef<void*> internal_session_uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_internal_session_uuid_raw", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, internal_session_uuid);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_session_alias(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW session_alias) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_session_alias", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, session_alias);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_session_data(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW session_data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_session_data", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, session_data);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_proximity_chat_player_can_hear(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                                        ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>> players, uint32_t num_players) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_proximity_chat_player_can_hear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, players, num_players);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_proximity_chat_can_hear_player(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                                        ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>> players, uint32_t num_players) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_proximity_chat_can_hear_player", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, players, num_players);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_global_muted(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, int32_t muted) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_global_muted", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, muted);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_player_muted(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW player, int32_t muted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_player_muted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, player, muted);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_players_muted_at_join(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                               ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>> players, uint32_t num_players) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_players_muted_at_join", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, players, num_players);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_audio_float(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                     ByRefConst<::ArrayW<float_t, ::Array<float_t>*>> audio, uint32_t num_samples, uint32_t sample_rate,
                                                                                     uint32_t num_channels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_float", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<float_t, ::Array<float_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, audio, num_samples, sample_rate, num_channels);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_audio_float_raw(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, void* audio, uint32_t num_samples,
                                                                                         uint32_t sample_rate, uint32_t num_channels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_float_raw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, audio, num_samples, sample_rate, num_channels);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_audio_short_raw(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, void* audio, uint32_t num_samples,
                                                                                         uint32_t sample_rate, uint32_t num_channels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_short_raw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, audio, num_samples, sample_rate, num_channels);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_audio_short(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                     ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>> audio, uint32_t num_samples, uint32_t sample_rate,
                                                                                     uint32_t num_channels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_short", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, audio, num_samples, sample_rate, num_channels);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_audio_nonrealtime_float(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                                 ByRefConst<::ArrayW<float_t, ::Array<float_t>*>> audio, uint32_t num_samples, uint32_t sample_rate,
                                                                                                 uint32_t num_channels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_nonrealtime_float", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<float_t, ::Array<float_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, audio, num_samples, sample_rate, num_channels);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_audio_nonrealtime_short(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                                 ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>> audio, uint32_t num_samples, uint32_t sample_rate,
                                                                                                 uint32_t num_channels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_audio_nonrealtime_short", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRefConst<::ArrayW<int16_t, ::Array<int16_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, audio, num_samples, sample_rate, num_channels);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_single_tenant_prefix(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_single_tenant_prefix", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, prefix);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_log_info_callback(::GlobalNamespace::__tox__PrintCallback* log_info_callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_log_info_callback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__PrintCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, log_info_callback);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_set_log_error_callback(::GlobalNamespace::__tox__PrintCallback* log_error_callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_set_log_error_callback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__PrintCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, log_error_callback);
}
inline void* GlobalNamespace::tox::tox_get_version_raw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_version_raw",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_join_session(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr, ::StringW session_name_unique) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_join_session", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, session_name_unique);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_leave_session(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_leave_session", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_structured_session_data(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                                 ::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE data_type, ::StringW session_data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_structured_session_data", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__TOX_SESSION_DATA_TYPE>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, data_type, session_data);
}
inline ::GlobalNamespace::__tox__TOX_ERROR GlobalNamespace::tox::tox_add_structured_player_data(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr,
                                                                                                ::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE data_type, ::StringW player_data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_add_structured_player_data", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__tox__TOX_PLAYER_DATA_TYPE>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__tox__TOX_ERROR, false>(nullptr, ___internal_method, tox_instance_ptr, data_type, player_data);
}
inline ::StringW GlobalNamespace::tox::tox_get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::tox::tox_get_internal_session_uuid(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_internal_session_uuid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, tox_instance_ptr);
}
inline ::StringW GlobalNamespace::tox::tox_get_internal_player_uuid(ByRef<::GlobalNamespace::__tox__NativeToxInstance> tox_instance_ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), "tox_get_internal_player_uuid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__tox__NativeToxInstance>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, tox_instance_ptr);
}
inline ::GlobalNamespace::tox* GlobalNamespace::tox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::tox*>());
}
inline void GlobalNamespace::tox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::tox*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::tox::tox() {}
