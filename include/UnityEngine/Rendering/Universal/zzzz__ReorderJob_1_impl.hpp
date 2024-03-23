#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReorderJob_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
template <typename T> constexpr UnityEngine::Rendering::Universal::ReorderJob_1<T>::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
template <typename T> constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::ReorderJob_1<T>::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void UnityEngine::Rendering::Universal::ReorderJob_1<T>::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ReorderJob_1<T>>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "input", ty:
// "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "output", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Rendering::Universal::ReorderJob_1<T>::ReorderJob_1(::Unity::Collections::NativeArray_1<int32_t> indices, ::Unity::Collections::NativeArray_1<T> input,
                                                                             ::Unity::Collections::NativeArray_1<T> output) noexcept {
  this->indices = indices;
  this->input = input;
  this->output = output;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Universal::ReorderJob_1<T>::ReorderJob_1() {}
