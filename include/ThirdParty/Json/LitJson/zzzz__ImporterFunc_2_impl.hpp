#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ThirdParty/Json/LitJson/zzzz__ImporterFunc_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TJson, typename TValue>
inline ::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>* ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>*>(object, method));
}
template <typename TJson, typename TValue> inline void ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TJson, typename TValue> inline TValue ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>::Invoke(TJson input) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, input);
}
template <typename TJson, typename TValue>
inline ::System::IAsyncResult* ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>::BeginInvoke(TJson input, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, input, callback, object);
}
template <typename TJson, typename TValue> inline TValue ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename TJson, typename TValue> constexpr ::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>::ImporterFunc_2() {}
