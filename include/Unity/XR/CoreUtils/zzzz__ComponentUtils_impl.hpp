#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ComponentUtils_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
template <typename T> inline T Unity::XR::CoreUtils::ComponentUtils::GetOrAddIf(::UnityEngine::GameObject* gameObject, bool add) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ComponentUtils*>::get(), "GetOrAddIf",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, gameObject, add);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ComponentUtils::ComponentUtils() {}
