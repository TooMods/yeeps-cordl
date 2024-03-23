#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderFunc_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
template <typename PassData>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*>(object, method));
}
template <typename PassData> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename PassData>
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>::Invoke(PassData data,
                                                                                                    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, renderGraphContext);
}
template <typename PassData>
inline ::System::IAsyncResult* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>::BeginInvoke(
    PassData data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, data, renderGraphContext, callback, object);
}
template <typename PassData> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
template <typename PassData> constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>::RenderFunc_1() {}
