#pragma once
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::MeshFilter.DontStripMeshFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::MeshFilter::*)()>(&::UnityEngine::MeshFilter::DontStripMeshFilter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27f2b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshFilter*>::get(), "DontStripMeshFilter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshFilter.get_sharedMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::MeshFilter::*)()>(&::UnityEngine::MeshFilter::get_sharedMesh)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27f2b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshFilter*>::get(), "get_sharedMesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshFilter.set_sharedMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::MeshFilter::*)(::UnityEngine::Mesh*)>(&::UnityEngine::MeshFilter::set_sharedMesh)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27f2b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshFilter*>::get(), "set_sharedMesh", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MeshFilter.set_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::MeshFilter::*)(::UnityEngine::Mesh*)>(&::UnityEngine::MeshFilter::set_mesh)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27f2b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshFilter*>::get(), "set_mesh", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::MeshFilter::DontStripMeshFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshFilter*>::get(), "DontStripMeshFilter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::MeshFilter::get_sharedMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshFilter*>::get(), "get_sharedMesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline void UnityEngine::MeshFilter::set_sharedMesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshFilter*>::get(), "set_sharedMesh", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::MeshFilter::set_mesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshFilter*>::get(), "set_mesh", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::MeshFilter::MeshFilter() {}
