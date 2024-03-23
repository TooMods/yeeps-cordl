#pragma once
#include "UnityEngine/Profiling/zzzz__Sampler_impl.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::CustomSampler::*)()>(&::UnityEngine::Profiling::CustomSampler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a877a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::CustomSampler::*)(void*)>(&::UnityEngine::Profiling::CustomSampler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a87800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::CustomSampler.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Profiling::CustomSampler* (*)(::StringW, bool)>(&::UnityEngine::Profiling::CustomSampler::Create)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2a8786c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Profiling::CustomSampler::setStaticF_s_InvalidCustomSampler(::UnityEngine::Profiling::CustomSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Profiling::CustomSampler*, "s_InvalidCustomSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get>(
      std::forward<::UnityEngine::Profiling::CustomSampler*>(value));
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::getStaticF_s_InvalidCustomSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Profiling::CustomSampler*, "s_InvalidCustomSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get>();
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Profiling::CustomSampler*>());
}
inline void UnityEngine::Profiling::CustomSampler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::New_ctor(void* ptr) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Profiling::CustomSampler*>(ptr));
}
inline void UnityEngine::Profiling::CustomSampler::_ctor(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
/// @param collectGpuData: bool (default: false)
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Profiling::CustomSampler::Create(::StringW name, bool collectGpuData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::CustomSampler*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Profiling::CustomSampler*, false>(nullptr, ___internal_method, name, collectGpuData);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::CustomSampler::CustomSampler() {}
