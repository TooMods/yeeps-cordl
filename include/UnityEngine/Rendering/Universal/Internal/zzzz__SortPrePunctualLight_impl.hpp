#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__SortPrePunctualLight_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredTiler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::*)(
    ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight, ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight)>(
    &::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::Compare)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2adfe50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2adbe18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>"
constexpr UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::operator ::System::Collections::Generic::IComparer_1<
    ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>* UnityEngine::Rendering::Universal::Internal::
    SortPrePunctualLight::i___System__Collections__Generic__IComparer_1___UnityEngine__Rendering__Universal__Internal____DeferredTiler__PrePunctualLight_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>*>(static_cast<void*>(this));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::Compare(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight a,
                                                                                          ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight* UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight*>());
}
inline void UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight::SortPrePunctualLight() {}
