#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__ContourVertex_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowUtility_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge.AssignVertexIndices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ShadowUtility__Edge::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::__ShadowUtility__Edge::AssignVertexIndices)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c58764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get(), "AssignVertexIndices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::__ShadowUtility__Edge::*)(
    ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge, ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge)>(&::UnityEngine::Rendering::Universal::__ShadowUtility__Edge::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c599f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::__ShadowUtility__Edge::*)(
    ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge)>(&::UnityEngine::Rendering::Universal::__ShadowUtility__Edge::CompareTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c58b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>"
constexpr UnityEngine::Rendering::Universal::__ShadowUtility__Edge::operator ::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*
UnityEngine::Rendering::Universal::__ShadowUtility__Edge::i___System__IComparable_1___UnityEngine__Rendering__Universal____ShadowUtility__Edge_() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::__ShadowUtility__Edge::AssignVertexIndices(int32_t vi0, int32_t vi1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get(), "AssignVertexIndices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vi0, vi1);
}
inline int32_t UnityEngine::Rendering::Universal::__ShadowUtility__Edge::Compare(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge a,
                                                                                 ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline int32_t UnityEngine::Rendering::Universal::__ShadowUtility__Edge::CompareTo(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge edgeToCompare) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, edgeToCompare);
}
// Ctor Parameters [CppParam { name: "vertexIndex0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexIndex1", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "tangent", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "compareReversed", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge::__ShadowUtility__Edge(int32_t vertexIndex0, int32_t vertexIndex1, ::UnityEngine::Vector4 tangent, bool compareReversed) noexcept {
  this->vertexIndex0 = vertexIndex0;
  this->vertexIndex1 = vertexIndex1;
  this->tangent = tangent;
  this->compareReversed = compareReversed;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge::__ShadowUtility__Edge() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ShadowUtility____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__ShadowUtility____c::*)()>(
    &::UnityEngine::Rendering::Universal::__ShadowUtility____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c59a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ShadowUtility____c._GenerateShadowMesh_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::__ShadowUtility____c::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::__ShadowUtility____c::_GenerateShadowMesh_b__9_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c59aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get(), "<GenerateShadowMesh>b__9_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ShadowUtility____c._GenerateShadowMesh_b__9_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::__ShadowUtility____c::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex)>(&::UnityEngine::Rendering::Universal::__ShadowUtility____c::_GenerateShadowMesh_b__9_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c59aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get(), "<GenerateShadowMesh>b__9_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__ShadowUtility____c._GenerateShadowMesh_b__9_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::Universal::__ShadowUtility____c::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex)>(&::UnityEngine::Rendering::Universal::__ShadowUtility____c::_GenerateShadowMesh_b__9_2)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c59ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get(), "<GenerateShadowMesh>b__9_2",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__ShadowUtility____c::setStaticF___9(::UnityEngine::Rendering::Universal::__ShadowUtility____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__ShadowUtility____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::__ShadowUtility____c* UnityEngine::Rendering::Universal::__ShadowUtility____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__ShadowUtility____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get>();
}
inline void UnityEngine::Rendering::Universal::__ShadowUtility____c::setStaticF___9__9_0(::System::Func_2<int32_t, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<int32_t, int32_t>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get>(
      std::forward<::System::Func_2<int32_t, int32_t>*>(value));
}
inline ::System::Func_2<int32_t, int32_t>* UnityEngine::Rendering::Universal::__ShadowUtility____c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<int32_t, int32_t>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get>();
}
inline void
UnityEngine::Rendering::Universal::__ShadowUtility____c::setStaticF___9__9_1(::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Vector3>*, "<>9__9_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Vector3>* UnityEngine::Rendering::Universal::__ShadowUtility____c::getStaticF___9__9_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Vector3>*, "<>9__9_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get>();
}
inline void
UnityEngine::Rendering::Universal::__ShadowUtility____c::setStaticF___9__9_2(::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Color>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Color>*, "<>9__9_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Color>*>(value));
}
inline ::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Color>* UnityEngine::Rendering::Universal::__ShadowUtility____c::getStaticF___9__9_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Color>*, "<>9__9_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::__ShadowUtility____c* UnityEngine::Rendering::Universal::__ShadowUtility____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>());
}
inline void UnityEngine::Rendering::Universal::__ShadowUtility____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::__ShadowUtility____c::_GenerateShadowMesh_b__9_0(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get(), "<GenerateShadowMesh>b__9_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, i);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::__ShadowUtility____c::_GenerateShadowMesh_b__9_1(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get(), "<GenerateShadowMesh>b__9_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, v);
}
inline ::UnityEngine::Color UnityEngine::Rendering::Universal::__ShadowUtility____c::_GenerateShadowMesh_b__9_2(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__ShadowUtility____c*>::get(), "<GenerateShadowMesh>b__9_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ShadowUtility____c::__ShadowUtility____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.CreateEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge (*)(
    int32_t, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::Universal::ShadowUtility::CreateEdge)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2c58544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "CreateEdge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.PopulateEdgeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<int32_t>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*)>(&::UnityEngine::Rendering::Universal::ShadowUtility::PopulateEdgeArray)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2c58778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "PopulateEdgeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.IsOutsideEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*)>(&::UnityEngine::Rendering::Universal::ShadowUtility::IsOutsideEdge)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2c58a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "IsOutsideEdge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.SortEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*)>(
    &::UnityEngine::Rendering::Universal::ShadowUtility::SortEdges)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c58b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "SortEdges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.CreateShadowTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*, ::System::Collections::Generic::List_1<int32_t>*,
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*)>(
    &::UnityEngine::Rendering::Universal::ShadowUtility::CreateShadowTriangles)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x2c58bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "CreateShadowTriangles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Color>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.InterpCustomVertexData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::ArrayW<float_t, ::Array<float_t>*>)>(
        &::UnityEngine::Rendering::Universal::ShadowUtility::InterpCustomVertexData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c58ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "InterpCustomVertexData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.InitializeTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::Rendering::Universal::ShadowUtility::InitializeTangents)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2c59020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "InitializeTangents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.ComputeBoundingSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ByRef<::UnityEngine::BoundingSphere>)>(
    &::UnityEngine::Rendering::Universal::ShadowUtility::ComputeBoundingSphere)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c59118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "ComputeBoundingSphere", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::BoundingSphere>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility.GenerateShadowMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BoundingSphere (*)(
    ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::Rendering::Universal::ShadowUtility::GenerateShadowMesh)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x2c591e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "GenerateShadowMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowUtility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowUtility::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c599ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge UnityEngine::Rendering::Universal::ShadowUtility::CreateEdge(int32_t triangleIndexA, int32_t triangleIndexB,
                                                                                                                               ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices,
                                                                                                                               ::System::Collections::Generic::List_1<int32_t>* triangles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "CreateEdge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge, false>(nullptr, ___internal_method, triangleIndexA, triangleIndexB, vertices, triangles);
}
inline void UnityEngine::Rendering::Universal::ShadowUtility::PopulateEdgeArray(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices,
                                                                                ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                                ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "PopulateEdgeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertices, triangles, edges);
}
inline bool UnityEngine::Rendering::Universal::ShadowUtility::IsOutsideEdge(int32_t edgeIndex,
                                                                            ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* edgesToProcess) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "IsOutsideEdge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, edgeIndex, edgesToProcess);
}
inline void UnityEngine::Rendering::Universal::ShadowUtility::SortEdges(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* edgesToProcess) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "SortEdges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, edgesToProcess);
}
inline void UnityEngine::Rendering::Universal::ShadowUtility::CreateShadowTriangles(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices,
                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors,
                                                                                    ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents,
                                                                                    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "CreateShadowTriangles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Color>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertices, colors, triangles, tangents, edges);
}
inline ::System::Object* UnityEngine::Rendering::Universal::ShadowUtility::InterpCustomVertexData(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 position,
                                                                                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data,
                                                                                                  ::ArrayW<float_t, ::Array<float_t>*> weights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "InterpCustomVertexData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, position, data, weights);
}
inline void UnityEngine::Rendering::Universal::ShadowUtility::InitializeTangents(int32_t tangentsToAdd, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "InitializeTangents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tangentsToAdd, tangents);
}
inline void UnityEngine::Rendering::Universal::ShadowUtility::ComputeBoundingSphere(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath,
                                                                                    ByRef<::UnityEngine::BoundingSphere> boundingSphere) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "ComputeBoundingSphere", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::BoundingSphere>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shapePath, boundingSphere);
}
inline ::UnityEngine::BoundingSphere UnityEngine::Rendering::Universal::ShadowUtility::GenerateShadowMesh(::UnityEngine::Mesh* mesh,
                                                                                                          ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(), "GenerateShadowMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere, false>(nullptr, ___internal_method, mesh, shapePath);
}
inline ::UnityEngine::Rendering::Universal::ShadowUtility* UnityEngine::Rendering::Universal::ShadowUtility::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ShadowUtility*>());
}
inline void UnityEngine::Rendering::Universal::ShadowUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowUtility*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowUtility::ShadowUtility() {}
