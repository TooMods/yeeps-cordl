#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TypeExtensions_def.hpp"
#include "System/zzzz__Type_def.hpp"
/// @param inherit: bool (default: false)
template <typename TAttribute> inline TAttribute UnityEngine::XR::Interaction::Toolkit::Utilities::TypeExtensions::GetAttribute(::System::Type* type, bool inherit) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TypeExtensions*>::get(), "GetAttribute",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAttribute>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAttribute>::get() }));
  return ::cordl_internals::RunMethodRethrow<TAttribute, false>(nullptr, ___internal_method, type, inherit);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TypeExtensions::TypeExtensions() {}
