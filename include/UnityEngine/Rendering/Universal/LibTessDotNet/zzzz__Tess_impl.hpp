#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__WindingRule_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Tess_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__CombineCallback_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__ContourOrientation_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__ContourVertex_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Dict_1_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__ElementType_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__MeshUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Mesh_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PriorityQueue_1_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Tess_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__WindingRule_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad3618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__eUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eUp;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__eUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eUp;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_set__eUp(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eUp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>*&
UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__nodeUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeUp;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__nodeUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeUp;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_set__nodeUp(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeUp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__windingNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____windingNumber;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__windingNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____windingNumber;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_set__windingNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____windingNumber = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__inside() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inside;
}
constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__inside() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inside;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_set__inside(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inside = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__sentinel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentinel;
}
constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__sentinel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sentinel;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_set__sentinel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sentinel = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty;
}
constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_set__dirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dirty = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__fixUpperEdge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixUpperEdge;
}
constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_get__fixUpperEdge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixUpperEdge;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__cordl_internal_set__fixUpperEdge(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixUpperEdge = value;
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>());
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion::__Tess__ActiveRegion() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.RegionBelow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::RegionBelow)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2892dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "RegionBelow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.RegionAbove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::RegionAbove)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2892df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "RegionAbove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.EdgeLeq
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::EdgeLeq)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2892e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "EdgeLeq", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.DeleteRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::DeleteRegion)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2892f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "DeleteRegion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.FixUpperEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::FixUpperEdge)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2892f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "FixUpperEdge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.TopLeftRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::TopLeftRegion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2892fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "TopLeftRegion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.TopRightRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::TopRightRegion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2893074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "TopRightRegion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.AddRegionBelow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*,
                                                                 ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddRegionBelow)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28930c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddRegionBelow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.ComputeWinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ComputeWinding)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2893180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ComputeWinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.FinishRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::FinishRegion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28931d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "FinishRegion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.FinishLeftRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*,
                                                                 ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::FinishLeftRegions)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2893204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "FinishLeftRegions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.AddRightEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*,
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, bool)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddRightEdges)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2893320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddRightEdges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.SpliceMergeVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::SpliceMergeVertices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2893898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "SpliceMergeVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.VertexWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*,
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*, ByRef<float_t>, ByRef<float_t>)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::VertexWeights)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x28938b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "VertexWeights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.GetIntersectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*,
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*,
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::GetIntersectData)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x28939a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "GetIntersectData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.CheckForRightSplice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::CheckForRightSplice)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x28934dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "CheckForRightSplice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.CheckForLeftSplice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::CheckForLeftSplice)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2893c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "CheckForLeftSplice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.CheckForIntersect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::CheckForIntersect)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x2893d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "CheckForIntersect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.WalkDirtyRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::WalkDirtyRegions)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2893668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "WalkDirtyRegions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.ConnectRightVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ConnectRightVertex)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x289432c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ConnectRightVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.ConnectLeftDegenerate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ConnectLeftDegenerate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2894528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ConnectLeftDegenerate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.ConnectLeftVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ConnectLeftVertex)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x28946e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ConnectLeftVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.SweepEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::SweepEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2894620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "SweepEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.AddSentinel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddSentinel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2894900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddSentinel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.InitEdgeDict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::InitEdgeDict)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x28949f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "InitEdgeDict", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.DoneEdgeDict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::DoneEdgeDict)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2894ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "DoneEdgeDict", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.RemoveDegenerateEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::RemoveDegenerateEdges)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2894b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "RemoveDegenerateEdges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.InitPriorityQ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::InitPriorityQ)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2894c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "InitPriorityQ", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.DonePriorityQ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::DonePriorityQ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2894e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "DonePriorityQ", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.RemoveDegenerateFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::RemoveDegenerateFaces)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2894e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "RemoveDegenerateFaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.ComputeInterior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ComputeInterior)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2894f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "ComputeInterior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.get_Normal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_Normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2895030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "get_Normal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.set_Normal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::set_Normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x289503c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "set_Normal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.get_Vertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> (
        ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_Vertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2895048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "get_Vertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.get_VertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_VertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2895050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "get_VertexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.get_Elements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_Elements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2895058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "get_Elements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.get_ElementCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_ElementCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2895060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "get_ElementCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2895068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.ComputeNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3>)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ComputeNormal)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x289510c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ComputeNormal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.CheckOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::CheckOrientation)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2895724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "CheckOrientation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.ProjectPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ProjectPolygon)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2895820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "ProjectPolygon", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.TessellateMonoRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::TessellateMonoRegion)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2895af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "TessellateMonoRegion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.TessellateInterior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::TessellateInterior)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2895cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "TessellateInterior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.DiscardExterior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::DiscardExterior)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2895d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "DiscardExterior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.SetWindingNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::SetWindingNumber)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2895d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "SetWindingNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.GetNeighbourFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::GetNeighbourFace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2895e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "GetNeighbourFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.OutputPolymesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType, int32_t)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::OutputPolymesh)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x2895e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "OutputPolymesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.OutputContours
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::OutputContours)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2896290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                               "OutputContours", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.SignedArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::SignedArea)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28964a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "SignedArea", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.AddContour
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddContour)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2896534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddContour", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.AddContour
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>,
    ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddContour)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x289653c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddContour", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.Tessellate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType, int32_t)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::Tessellate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2896714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "Tessellate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess.Tessellate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType, int32_t,
    ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::Tessellate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x289671c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "Tessellate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh*& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__mesh(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normal;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normal;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__normal(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normal = value;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__sUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sUnit;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__sUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sUnit;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__sUnit(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sUnit = value;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__tUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tUnit;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__tUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tUnit;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__tUnit(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tUnit = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__bminX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bminX;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__bminX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bminX;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__bminX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bminX = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__bminY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bminY;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__bminY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bminY;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__bminY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bminY = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__bmaxX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bmaxX;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__bmaxX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bmaxX;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__bmaxX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bmaxX = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__bmaxY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bmaxY;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__bmaxY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bmaxY;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__bmaxY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bmaxY = value;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__windingRule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____windingRule;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__windingRule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____windingRule;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__windingRule(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____windingRule = value;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>*&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dict;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dict;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__dict(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>*&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__pq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pq;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__pq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pq;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__pq(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____event;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__event(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__combineCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineCallback;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__combineCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineCallback;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__combineCallback(::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combineCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertices;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertices;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__vertices(
    ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__vertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__vertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertexCount;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__vertexCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vertexCount = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__elements(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__elementCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get__elementCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementCount;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set__elementCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementCount = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_SUnitX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SUnitX;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_SUnitX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SUnitX;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set_SUnitX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SUnitX = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_SUnitY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SUnitY;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_SUnitY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SUnitY;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set_SUnitY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SUnitY = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_SentinelCoord() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SentinelCoord;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_SentinelCoord() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SentinelCoord;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set_SentinelCoord(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SentinelCoord = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_NoEmptyPolygons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NoEmptyPolygons;
}
constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_NoEmptyPolygons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NoEmptyPolygons;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set_NoEmptyPolygons(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NoEmptyPolygons = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_UsePooling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsePooling;
}
constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_get_UsePooling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsePooling;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::__cordl_internal_set_UsePooling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UsePooling = value;
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::RegionBelow(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "RegionBelow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, false>(this, ___internal_method, reg);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::RegionAbove(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "RegionAbove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, false>(this, ___internal_method, reg);
}
inline bool UnityEngine::Rendering::Universal::LibTessDotNet::Tess::EdgeLeq(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg1,
                                                                            ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "EdgeLeq", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reg1, reg2);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::DeleteRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "DeleteRegion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reg);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::FixUpperEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg,
                                                                                 ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* newEdge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "FixUpperEdge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reg, newEdge);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::TopLeftRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "TopLeftRegion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, false>(this, ___internal_method, reg);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::TopRightRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "TopRightRegion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, false>(this, ___internal_method, reg);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddRegionBelow(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regAbove,
                                                                       ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eNewUp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddRegionBelow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, false>(this, ___internal_method, regAbove, eNewUp);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ComputeWinding(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ComputeWinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reg);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::FinishRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "FinishRegion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reg);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::FinishLeftRegions(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regFirst,
                                                                          ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regLast) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "FinishLeftRegions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, false>(this, ___internal_method, regFirst, regLast);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddRightEdges(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp,
                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eFirst,
                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eLast,
                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eTopLeft, bool cleanUp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddRightEdges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regUp, eFirst, eLast, eTopLeft, cleanUp);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::SpliceMergeVertices(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* e1,
                                                                                        ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* e2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "SpliceMergeVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e1, e2);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::VertexWeights(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* isect,
                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* org,
                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* dst, ByRef<float_t> w0, ByRef<float_t> w1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "VertexWeights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isect, org, dst, w0, w1);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::GetIntersectData(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* isect,
                                                                                     ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* orgUp,
                                                                                     ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* dstUp,
                                                                                     ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* orgLo,
                                                                                     ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* dstLo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "GetIntersectData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isect, orgUp, dstUp, orgLo, dstLo);
}
inline bool UnityEngine::Rendering::Universal::LibTessDotNet::Tess::CheckForRightSplice(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "CheckForRightSplice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, regUp);
}
inline bool UnityEngine::Rendering::Universal::LibTessDotNet::Tess::CheckForLeftSplice(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "CheckForLeftSplice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, regUp);
}
inline bool UnityEngine::Rendering::Universal::LibTessDotNet::Tess::CheckForIntersect(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "CheckForIntersect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, regUp);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::WalkDirtyRegions(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "WalkDirtyRegions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regUp);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ConnectRightVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp,
                                                                                       ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eBottomLeft) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ConnectRightVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regUp, eBottomLeft);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ConnectLeftDegenerate(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp,
                                                                                          ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ConnectLeftDegenerate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regUp, vEvent);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ConnectLeftVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ConnectLeftVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vEvent);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::SweepEvent(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "SweepEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vEvent);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddSentinel(float_t smin, float_t smax, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddSentinel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, smin, smax, t);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::InitEdgeDict() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "InitEdgeDict", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::DoneEdgeDict() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "DoneEdgeDict", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::RemoveDegenerateEdges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "RemoveDegenerateEdges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::InitPriorityQ() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "InitPriorityQ", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::DonePriorityQ() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "DonePriorityQ", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::RemoveDegenerateFaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "RemoveDegenerateFaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ComputeInterior() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "ComputeInterior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_Normal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "get_Normal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::set_Normal(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "set_Normal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>
UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_Vertices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "get_Vertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>,
                                             false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_VertexCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "get_VertexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_Elements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "get_Elements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::LibTessDotNet::Tess::get_ElementCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "get_ElementCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess* UnityEngine::Rendering::Universal::LibTessDotNet::Tess::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>());
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ComputeNormal(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> norm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "ComputeNormal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, norm);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::CheckOrientation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "CheckOrientation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::ProjectPolygon() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "ProjectPolygon", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::TessellateMonoRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* face) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "TessellateMonoRegion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, face);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::TessellateInterior() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "TessellateInterior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::DiscardExterior() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "DiscardExterior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::SetWindingNumber(int32_t value, bool keepOnlyBoundary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "SetWindingNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, keepOnlyBoundary);
}
inline int32_t UnityEngine::Rendering::Universal::LibTessDotNet::Tess::GetNeighbourFace(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* edge) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "GetNeighbourFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, edge);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::OutputPolymesh(::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType elementType, int32_t polySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "OutputPolymesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementType, polySize);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::OutputContours() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(),
                                                                             "OutputContours", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::LibTessDotNet::Tess::SignedArea(
    ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "SignedArea", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, vertices);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddContour(
    ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddContour", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::AddContour(
    ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> vertices,
    ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation forceOrientation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "AddContour", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices, forceOrientation);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule windingRule,
                                                                               ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType elementType, int32_t polySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "Tessellate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, windingRule, elementType, polySize);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::Tess::Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule windingRule,
                                                                               ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType elementType, int32_t polySize,
                                                                               ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* combineCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*>::get(), "Tessellate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, windingRule, elementType, polySize, combineCallback);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess::Tess() {}
