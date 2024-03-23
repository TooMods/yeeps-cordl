#pragma once
#include "Unity/Services/Core/Internal/zzzz__IComponentRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::IComponentRegistry.ResetProvidedComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::IComponentRegistry::*)(
    ::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*)>(&::Unity::Services::Core::Internal::IComponentRegistry::ResetProvidedComponents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IComponentRegistry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IComponentRegistry*>::get(), 2));
    return ___internal_method;
  }
};
template <typename TComponent> inline void Unity::Services::Core::Internal::IComponentRegistry::RegisterServiceComponent(TComponent component) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IComponentRegistry*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component);
}
template <typename TComponent> inline TComponent Unity::Services::Core::Internal::IComponentRegistry::GetServiceComponent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IComponentRegistry*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<TComponent, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::IComponentRegistry::ResetProvidedComponents(
    ::System::Collections::Generic::IDictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentTypeHashToInstance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IComponentRegistry*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentTypeHashToInstance);
}
