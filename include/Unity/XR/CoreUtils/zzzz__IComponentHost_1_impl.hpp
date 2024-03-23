#pragma once
#include "Unity/XR/CoreUtils/zzzz__IComponentHost_1_def.hpp"
template <typename THostType> inline ::ArrayW<THostType, ::Array<THostType>*> Unity::XR::CoreUtils::IComponentHost_1<THostType>::get_HostedComponents() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::IComponentHost_1<THostType>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<THostType, ::Array<THostType>*>, false>(this, ___internal_method);
}
