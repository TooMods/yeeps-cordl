#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Profiler_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetRuntimeMemorySizeLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::UnityEngine::Object*)>(&::UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a87568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "GetRuntimeMemorySizeLong", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong(::UnityEngine::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "GetRuntimeMemorySizeLong", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Profiler::Profiler() {}
