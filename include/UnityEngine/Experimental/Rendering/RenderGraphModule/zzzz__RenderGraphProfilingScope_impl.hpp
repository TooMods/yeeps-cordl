#pragma once
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphProfilingScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ProfilingSampler*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bc6414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc643c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope>::get(),
                                                 "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1bc6444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope>::get(), "Dispose",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::_ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                      ::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, sampler);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope>::get(),
                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::Dispose(bool disposing) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope>::get(), "Dispose",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Sampler", ty: "::UnityEngine::Rendering::ProfilingSampler*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "m_RenderGraph", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::RenderGraphProfilingScope(
    bool m_Disposed, ::UnityEngine::Rendering::ProfilingSampler* m_Sampler, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph) noexcept {
  this->m_Disposed = m_Disposed;
  this->m_Sampler = m_Sampler;
  this->m_RenderGraph = m_RenderGraph;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfilingScope::RenderGraphProfilingScope() {}
