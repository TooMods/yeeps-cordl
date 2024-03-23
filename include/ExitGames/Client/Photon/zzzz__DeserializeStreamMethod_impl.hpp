#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeStreamMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::DeserializeStreamMethod::*)(::System::Object*, void*)>(
    &::ExitGames::Client::Photon::DeserializeStreamMethod::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2861d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeStreamMethod.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::ExitGames::Client::Photon::DeserializeStreamMethod::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::ExitGames::Client::Photon::DeserializeStreamMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2861e90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeStreamMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::ExitGames::Client::Photon::DeserializeStreamMethod::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::ExitGames::Client::Photon::DeserializeStreamMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2861ea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::DeserializeStreamMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ExitGames::Client::Photon::DeserializeStreamMethod::*)(::System::IAsyncResult*)>(
    &::ExitGames::Client::Photon::DeserializeStreamMethod::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2861f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(), 15));
    return ___internal_method;
  }
};
inline ::ExitGames::Client::Photon::DeserializeStreamMethod* ExitGames::Client::Photon::DeserializeStreamMethod::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::DeserializeStreamMethod*>(object, method));
}
inline void ExitGames::Client::Photon::DeserializeStreamMethod::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Object* ExitGames::Client::Photon::DeserializeStreamMethod::Invoke(::ExitGames::Client::Photon::StreamBuffer* inStream, int16_t length) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, inStream, length);
}
inline ::System::IAsyncResult* ExitGames::Client::Photon::DeserializeStreamMethod::BeginInvoke(::ExitGames::Client::Photon::StreamBuffer* inStream, int16_t length, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, inStream, length, callback, object);
}
inline ::System::Object* ExitGames::Client::Photon::DeserializeStreamMethod::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::DeserializeStreamMethod::DeserializeStreamMethod() {}
