#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__ExporterFunc_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonWriter_def.hpp"
//  Writing Method size for method: ::ThirdParty::Json::LitJson::ExporterFunc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::ExporterFunc::*)(::System::Object*, void*)>(
    &::ThirdParty::Json::LitJson::ExporterFunc::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x14a5408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::ExporterFunc.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::ExporterFunc::*)(::System::Object*, ::ThirdParty::Json::LitJson::JsonWriter*)>(
    &::ThirdParty::Json::LitJson::ExporterFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x14a5538;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::ExporterFunc.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::ThirdParty::Json::LitJson::ExporterFunc::*)(::System::Object*, ::ThirdParty::Json::LitJson::JsonWriter*, ::System::AsyncCallback*, ::System::Object*)>(
        &::ThirdParty::Json::LitJson::ExporterFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x14a554c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::Json::LitJson::ExporterFunc.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::Json::LitJson::ExporterFunc::*)(::System::IAsyncResult*)>(
    &::ThirdParty::Json::LitJson::ExporterFunc::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14a5574;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(), 15));
    return ___internal_method;
  }
};
inline ::ThirdParty::Json::LitJson::ExporterFunc* ThirdParty::Json::LitJson::ExporterFunc::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::ExporterFunc*>(object, method));
}
inline void ThirdParty::Json::LitJson::ExporterFunc::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void ThirdParty::Json::LitJson::ExporterFunc::Invoke(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, writer);
}
inline ::System::IAsyncResult* ThirdParty::Json::LitJson::ExporterFunc::BeginInvoke(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer, ::System::AsyncCallback* callback,
                                                                                    ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, obj, writer, callback, object);
}
inline void ThirdParty::Json::LitJson::ExporterFunc::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ExporterFunc*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::ExporterFunc::ExporterFunc() {}
