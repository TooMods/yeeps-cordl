#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUIStateObjects_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIStateObjects.GetStateObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, int32_t)>(&::UnityEngine::GUIStateObjects::GetStateObject)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2014d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIStateObjects*>::get(), "GetStateObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::GUIStateObjects::setStaticF_s_StateCache(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Object*>*, "s_StateCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIStateObjects*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Object*>* UnityEngine::GUIStateObjects::getStaticF_s_StateCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Object*>*, "s_StateCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIStateObjects*>::get>();
}
inline ::System::Object* UnityEngine::GUIStateObjects::GetStateObject(::System::Type* t, int32_t controlID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIStateObjects*>::get(), "GetStateObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, t, controlID);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIStateObjects::GUIStateObjects() {}
