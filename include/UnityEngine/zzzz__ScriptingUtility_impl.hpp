#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptingUtility_def.hpp"
#include "UnityEngine/zzzz__ScriptingUtility_def.hpp"
// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ScriptingUtility__TestClass::__ScriptingUtility__TestClass(int32_t value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ScriptingUtility__TestClass::__ScriptingUtility__TestClass() {}
//  Writing Method size for method: ::UnityEngine::ScriptingUtility.IsManagedCodeWorking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::ScriptingUtility::IsManagedCodeWorking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283fc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScriptingUtility*>::get(), "IsManagedCodeWorking",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::ScriptingUtility::IsManagedCodeWorking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScriptingUtility*>::get(), "IsManagedCodeWorking",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScriptingUtility::ScriptingUtility() {}
