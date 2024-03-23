#pragma once
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PQHandle_def.hpp"
inline void UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle::setStaticF_Invalid(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Invalid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<int32_t, "Invalid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle>::get>();
}
// Ctor Parameters [CppParam { name: "_handle", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle::PQHandle(int32_t _handle) noexcept {
  this->_handle = _handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle::PQHandle() {}
