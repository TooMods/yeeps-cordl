#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__IMarshaller_2_def.hpp"
template <typename T, typename R> inline T Amazon::Runtime::Internal::Transform::IMarshaller_2<T, R>::Marshall(R input) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::IMarshaller_2<T, R>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, input);
}
