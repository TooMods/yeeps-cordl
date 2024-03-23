#pragma once
#include "System/ComponentModel/zzzz__IRaiseItemChangedEvents_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IRaiseItemChangedEvents.get_RaisesItemChangedEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::IRaiseItemChangedEvents::*)()>(
    &::System::ComponentModel::IRaiseItemChangedEvents::get_RaisesItemChangedEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IRaiseItemChangedEvents*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IRaiseItemChangedEvents*>::get(), 0));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::IRaiseItemChangedEvents::get_RaisesItemChangedEvents() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IRaiseItemChangedEvents*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
