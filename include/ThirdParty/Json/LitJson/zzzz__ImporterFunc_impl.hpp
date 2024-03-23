#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__ImporterFunc_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ThirdParty::Json::LitJson::ImporterFunc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::ImporterFunc::*)(::System::Object*, void*)>(
    &::ThirdParty::Json::LitJson::ImporterFunc::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x14a5580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::ImporterFunc.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ThirdParty::Json::LitJson::ImporterFunc::*)(::System::Object*)>(
    &::ThirdParty::Json::LitJson::ImporterFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x14a56ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::ImporterFunc.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::ThirdParty::Json::LitJson::ImporterFunc::*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::ThirdParty::Json::LitJson::ImporterFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14a56c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::ImporterFunc.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ThirdParty::Json::LitJson::ImporterFunc::*)(::System::IAsyncResult*)>(
    &::ThirdParty::Json::LitJson::ImporterFunc::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14a56e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(), 15));
    return ___internal_method;
  }
};
inline ::ThirdParty::Json::LitJson::ImporterFunc* ThirdParty::Json::LitJson::ImporterFunc::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::ImporterFunc*>(object, method));
}
inline void ThirdParty::Json::LitJson::ImporterFunc::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Object* ThirdParty::Json::LitJson::ImporterFunc::Invoke(::System::Object* input) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, input);
}
inline ::System::IAsyncResult* ThirdParty::Json::LitJson::ImporterFunc::BeginInvoke(::System::Object* input, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, input, callback, object);
}
inline ::System::Object* ThirdParty::Json::LitJson::ImporterFunc::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::ImporterFunc::ImporterFunc() {}
