#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__ContainerFilterService_def.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ContainerFilterService._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ContainerFilterService::*)()>(
    &::System::ComponentModel::ContainerFilterService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1aed914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ContainerFilterService*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ContainerFilterService.FilterComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ComponentCollection* (
    ::System::ComponentModel::ContainerFilterService::*)(::System::ComponentModel::ComponentCollection*)>(&::System::ComponentModel::ContainerFilterService::FilterComponents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1aed91c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ContainerFilterService*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ContainerFilterService*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::ContainerFilterService* System::ComponentModel::ContainerFilterService::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ContainerFilterService*>());
}
inline void System::ComponentModel::ContainerFilterService::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ContainerFilterService*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::ComponentCollection* System::ComponentModel::ContainerFilterService::FilterComponents(::System::ComponentModel::ComponentCollection* components) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ContainerFilterService*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ComponentCollection*, false>(this, ___internal_method, components);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ContainerFilterService::ContainerFilterService() {}
