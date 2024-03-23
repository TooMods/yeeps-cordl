#pragma once
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__FallbackComposite_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__FallbackComposite_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>"
template <typename TValue>
constexpr UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::__FallbackComposite_1__QuaternionCompositeComparer<TValue>::operator ::System::Collections::Generic::IComparer_1<
    ::UnityEngine::Quaternion>*() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>"
template <typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>*
UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::__FallbackComposite_1__QuaternionCompositeComparer<TValue>::i___System__Collections__Generic__IComparer_1___UnityEngine__Quaternion_() {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TValue>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::__FallbackComposite_1__QuaternionCompositeComparer<TValue>::Compare(::UnityEngine::Quaternion x,
                                                                                                                                              ::UnityEngine::Quaternion y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::__FallbackComposite_1__QuaternionCompositeComparer<TValue>>::get(), "Compare",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
// Ctor Parameters []
template <typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::__FallbackComposite_1__QuaternionCompositeComparer<TValue>::__FallbackComposite_1__QuaternionCompositeComparer() {}
template <typename TValue>
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<TValue>* UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<TValue>*>());
}
template <typename TValue> inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<TValue>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<TValue>::FallbackComposite_1() {}
