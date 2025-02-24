#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__WrapperFactory_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__IJsonWrapper_def.hpp"
//  Writing Method size for method: ::ThirdParty::Json::LitJson::WrapperFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::WrapperFactory::*)(::System::Object*, void*)>(
    &::ThirdParty::Json::LitJson::WrapperFactory::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x14a56ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::WrapperFactory.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::Json::LitJson::IJsonWrapper* (::ThirdParty::Json::LitJson::WrapperFactory::*)()>(
    &::ThirdParty::Json::LitJson::WrapperFactory::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x14a57a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::WrapperFactory.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::ThirdParty::Json::LitJson::WrapperFactory::*)(::System::AsyncCallback*, ::System::Object*)>(&::ThirdParty::Json::LitJson::WrapperFactory::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14a57bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::WrapperFactory.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::Json::LitJson::IJsonWrapper* (::ThirdParty::Json::LitJson::WrapperFactory::*)(::System::IAsyncResult*)>(
    &::ThirdParty::Json::LitJson::WrapperFactory::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14a57dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(), 15));
    return ___internal_method;
  }
};
inline ::ThirdParty::Json::LitJson::WrapperFactory* ThirdParty::Json::LitJson::WrapperFactory::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::WrapperFactory*>(object, method));
}
inline void ThirdParty::Json::LitJson::WrapperFactory::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::ThirdParty::Json::LitJson::IJsonWrapper* ThirdParty::Json::LitJson::WrapperFactory::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::Json::LitJson::IJsonWrapper*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* ThirdParty::Json::LitJson::WrapperFactory::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::ThirdParty::Json::LitJson::IJsonWrapper* ThirdParty::Json::LitJson::WrapperFactory::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::WrapperFactory*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::Json::LitJson::IJsonWrapper*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::WrapperFactory::WrapperFactory() {}
