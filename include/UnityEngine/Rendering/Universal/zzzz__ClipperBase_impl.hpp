#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ClipperBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntRect_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LocalMinima_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__OutPt_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__OutRec_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PolyType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Scanbeam_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TEdge_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.near_zero
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(double_t)>(&::UnityEngine::Rendering::Universal::ClipperBase::near_zero)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1e22184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "near_zero",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.get_PreserveCollinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)()>(
    &::UnityEngine::Rendering::Universal::ClipperBase::get_PreserveCollinear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e221ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                               "get_PreserveCollinear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.set_PreserveCollinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::set_PreserveCollinear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1e221b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "set_PreserveCollinear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.Swap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(ByRef<int64_t>, ByRef<int64_t>)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::Swap)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1e221c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "Swap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.IsHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::IsHorizontal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1e221d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "IsHorizontal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.PointIsVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::OutPt*)>(&::UnityEngine::Rendering::Universal::ClipperBase::PointIsVertex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1e221f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PointIsVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.PointOnLineSegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, bool)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::PointOnLineSegment)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1e22244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PointOnLineSegment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.PointOnPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::OutPt*, bool)>(&::UnityEngine::Rendering::Universal::ClipperBase::PointOnPolygon)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1e223ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PointOnPolygon", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.SlopesEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, bool)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::SlopesEqual)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1e22478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SlopesEqual", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.SlopesEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, bool)>(
        &::UnityEngine::Rendering::Universal::ClipperBase::SlopesEqual)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1e224fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SlopesEqual", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.SlopesEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint,
                                                                                           ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, bool)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::SlopesEqual)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1e225ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SlopesEqual", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)()>(
    &::UnityEngine::Rendering::Universal::ClipperBase::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1e22678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)()>(
    &::UnityEngine::Rendering::Universal::ClipperBase::Clear)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1e22700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.DisposeLocalMinimaList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)()>(
    &::UnityEngine::Rendering::Universal::ClipperBase::DisposeLocalMinimaList)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1e2287c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                               "DisposeLocalMinimaList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.RangeTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(::UnityEngine::Rendering::Universal::IntPoint, ByRef<bool>)>(&::UnityEngine::Rendering::Universal::ClipperBase::RangeTest)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1e22898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "RangeTest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.InitEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::InitEdge)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1e22998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "InitEdge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.InitEdge2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::PolyType)>(&::UnityEngine::Rendering::Universal::ClipperBase::InitEdge2)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1e229c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "InitEdge2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.FindNextLocMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TEdge* (
    ::UnityEngine::Rendering::Universal::ClipperBase::*)(::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::ClipperBase::FindNextLocMin)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1e22a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "FindNextLocMin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.ProcessBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TEdge* (
    ::UnityEngine::Rendering::Universal::ClipperBase::*)(::UnityEngine::Rendering::Universal::TEdge*, bool)>(&::UnityEngine::Rendering::Universal::ClipperBase::ProcessBound)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1e22b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "ProcessBound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.AddPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*, ::UnityEngine::Rendering::Universal::PolyType, bool)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::AddPath)> {
  constexpr static std::size_t size = 0xb00;
  constexpr static std::size_t addrs = 0x1e23000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "AddPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.AddPaths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*, ::UnityEngine::Rendering::Universal::PolyType, bool)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::AddPaths)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1e23bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "AddPaths", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.Pt2IsBetweenPt1AndPt3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint, ::UnityEngine::Rendering::Universal::IntPoint)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::Pt2IsBetweenPt1AndPt3)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1e23b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "Pt2IsBetweenPt1AndPt3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.RemoveEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TEdge* (
    ::UnityEngine::Rendering::Universal::ClipperBase::*)(::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::ClipperBase::RemoveEdge)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1e23b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "RemoveEdge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.SetDx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::SetDx)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1e22a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SetDx", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.InsertLocalMinima
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(::UnityEngine::Rendering::Universal::LocalMinima*)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::InsertLocalMinima)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1e22f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "InsertLocalMinima", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LocalMinima*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.PopLocalMinima
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    int64_t, ByRef<::UnityEngine::Rendering::Universal::LocalMinima*>)>(&::UnityEngine::Rendering::Universal::ClipperBase::PopLocalMinima)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1e23c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PopLocalMinima", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LocalMinima*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.ReverseHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::ReverseHorizontal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e22fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "ReverseHorizontal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)()>(
    &::UnityEngine::Rendering::Universal::ClipperBase::Reset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1e23cb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::IntRect (*)(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*)>(&::UnityEngine::Rendering::Universal::ClipperBase::GetBounds)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x1e23e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.InsertScanbeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(int64_t)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::InsertScanbeam)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1e23d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "InsertScanbeam",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.PopScanbeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)(ByRef<int64_t>)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::PopScanbeam)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1e2411c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PopScanbeam",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.LocalMinimaPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ClipperBase::*)()>(
    &::UnityEngine::Rendering::Universal::ClipperBase::LocalMinimaPending)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1e24148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                               "LocalMinimaPending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.CreateOutRec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::OutRec* (::UnityEngine::Rendering::Universal::ClipperBase::*)()>(
    &::UnityEngine::Rendering::Universal::ClipperBase::CreateOutRec)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1e24158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                               "CreateOutRec", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.DisposeOutRec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::DisposeOutRec)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1e24260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "DisposeOutRec",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.UpdateEdgeIntoAEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(ByRef<::UnityEngine::Rendering::Universal::TEdge*>)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::UpdateEdgeIntoAEL)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1e242ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "UpdateEdgeIntoAEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::TEdge*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.SwapPositionsInAEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(
    ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*)>(&::UnityEngine::Rendering::Universal::ClipperBase::SwapPositionsInAEL)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1e243ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SwapPositionsInAEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperBase.DeleteFromAEL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperBase::*)(::UnityEngine::Rendering::Universal::TEdge*)>(
    &::UnityEngine::Rendering::Universal::ClipperBase::DeleteFromAEL)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1e244c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "DeleteFromAEL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::LocalMinima*& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_MinimaList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimaList;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LocalMinima*> const& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_MinimaList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinimaList;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set_m_MinimaList(::UnityEngine::Rendering::Universal::LocalMinima* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MinimaList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LocalMinima*& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_CurrentLM() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentLM;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LocalMinima*> const& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_CurrentLM() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentLM;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set_m_CurrentLM(::UnityEngine::Rendering::Universal::LocalMinima* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentLM)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::TEdge*>*>*&
UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_edges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_edges;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::TEdge*>*>*> const&
UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_edges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_edges;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set_m_edges(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::TEdge*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_edges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Scanbeam*& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_Scanbeam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scanbeam;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Scanbeam*> const& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_Scanbeam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scanbeam;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set_m_Scanbeam(::UnityEngine::Rendering::Universal::Scanbeam* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Scanbeam)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OutRec*>*& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_PolyOuts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PolyOuts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OutRec*>*> const&
UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_PolyOuts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PolyOuts;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set_m_PolyOuts(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OutRec*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PolyOuts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::TEdge*& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_ActiveEdges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveEdges;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_ActiveEdges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveEdges;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set_m_ActiveEdges(::UnityEngine::Rendering::Universal::TEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveEdges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_UseFullRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFullRange;
}
constexpr bool const& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_UseFullRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFullRange;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set_m_UseFullRange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseFullRange = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_HasOpenPaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasOpenPaths;
}
constexpr bool const& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get_m_HasOpenPaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasOpenPaths;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set_m_HasOpenPaths(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasOpenPaths = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get__PreserveCollinear_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PreserveCollinear_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_get__PreserveCollinear_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PreserveCollinear_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ClipperBase::__cordl_internal_set__PreserveCollinear_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PreserveCollinear_k__BackingField = value;
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::near_zero(double_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "near_zero",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, val);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::get_PreserveCollinear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                             "get_PreserveCollinear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::set_PreserveCollinear(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "set_PreserveCollinear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::Swap(ByRef<int64_t> val1, ByRef<int64_t> val2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "Swap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val1, val2);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::IsHorizontal(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "IsHorizontal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, e);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::PointIsVertex(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::OutPt* pp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PointIsVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pt, pp);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::PointOnLineSegment(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::IntPoint linePt1,
                                                                               ::UnityEngine::Rendering::Universal::IntPoint linePt2, bool UseFullRange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PointOnLineSegment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pt, linePt1, linePt2, UseFullRange);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::PointOnPolygon(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::OutPt* pp, bool UseFullRange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PointOnPolygon", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::OutPt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pt, pp, UseFullRange);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::SlopesEqual(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2, bool UseFullRange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SlopesEqual", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, e1, e2, UseFullRange);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::SlopesEqual(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2,
                                                                        ::UnityEngine::Rendering::Universal::IntPoint pt3, bool UseFullRange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SlopesEqual", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pt1, pt2, pt3, UseFullRange);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::SlopesEqual(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2,
                                                                        ::UnityEngine::Rendering::Universal::IntPoint pt3, ::UnityEngine::Rendering::Universal::IntPoint pt4, bool UseFullRange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SlopesEqual", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pt1, pt2, pt3, pt4, UseFullRange);
}
inline ::UnityEngine::Rendering::Universal::ClipperBase* UnityEngine::Rendering::Universal::ClipperBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ClipperBase*>());
}
inline void UnityEngine::Rendering::Universal::ClipperBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::DisposeLocalMinimaList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                             "DisposeLocalMinimaList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::RangeTest(::UnityEngine::Rendering::Universal::IntPoint Pt, ByRef<bool> useFullRange) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "RangeTest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Pt, useFullRange);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::InitEdge(::UnityEngine::Rendering::Universal::TEdge* e, ::UnityEngine::Rendering::Universal::TEdge* eNext,
                                                                     ::UnityEngine::Rendering::Universal::TEdge* ePrev, ::UnityEngine::Rendering::Universal::IntPoint pt) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "InitEdge", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, eNext, ePrev, pt);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::InitEdge2(::UnityEngine::Rendering::Universal::TEdge* e, ::UnityEngine::Rendering::Universal::PolyType polyType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "InitEdge2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, polyType);
}
inline ::UnityEngine::Rendering::Universal::TEdge* UnityEngine::Rendering::Universal::ClipperBase::FindNextLocMin(::UnityEngine::Rendering::Universal::TEdge* E) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "FindNextLocMin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TEdge*, false>(this, ___internal_method, E);
}
inline ::UnityEngine::Rendering::Universal::TEdge* UnityEngine::Rendering::Universal::ClipperBase::ProcessBound(::UnityEngine::Rendering::Universal::TEdge* E, bool LeftBoundIsForward) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "ProcessBound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TEdge*, false>(this, ___internal_method, E, LeftBoundIsForward);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::AddPath(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* pg,
                                                                    ::UnityEngine::Rendering::Universal::PolyType polyType, bool Closed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "AddPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pg, polyType, Closed);
}
inline bool
UnityEngine::Rendering::Universal::ClipperBase::AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* ppg,
                                                         ::UnityEngine::Rendering::Universal::PolyType polyType, bool closed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "AddPaths", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PolyType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ppg, polyType, closed);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::Pt2IsBetweenPt1AndPt3(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2,
                                                                                  ::UnityEngine::Rendering::Universal::IntPoint pt3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "Pt2IsBetweenPt1AndPt3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntPoint>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pt1, pt2, pt3);
}
inline ::UnityEngine::Rendering::Universal::TEdge* UnityEngine::Rendering::Universal::ClipperBase::RemoveEdge(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "RemoveEdge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TEdge*, false>(this, ___internal_method, e);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::SetDx(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SetDx", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::InsertLocalMinima(::UnityEngine::Rendering::Universal::LocalMinima* newLm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "InsertLocalMinima", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LocalMinima*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLm);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::PopLocalMinima(int64_t Y, ByRef<::UnityEngine::Rendering::Universal::LocalMinima*> current) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PopLocalMinima", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LocalMinima*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, Y, current);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::ReverseHorizontal(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "ReverseHorizontal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::IntRect
UnityEngine::Rendering::Universal::ClipperBase::GetBounds(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* paths) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "GetBounds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::IntRect, false>(nullptr, ___internal_method, paths);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::InsertScanbeam(int64_t Y) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "InsertScanbeam",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Y);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::PopScanbeam(ByRef<int64_t> Y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "PopScanbeam",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, Y);
}
inline bool UnityEngine::Rendering::Universal::ClipperBase::LocalMinimaPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                             "LocalMinimaPending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::OutRec* UnityEngine::Rendering::Universal::ClipperBase::CreateOutRec() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(),
                                                                             "CreateOutRec", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::OutRec*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::DisposeOutRec(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "DisposeOutRec",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::UpdateEdgeIntoAEL(ByRef<::UnityEngine::Rendering::Universal::TEdge*> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "UpdateEdgeIntoAEL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::TEdge*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::SwapPositionsInAEL(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "SwapPositionsInAEL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edge1, edge2);
}
inline void UnityEngine::Rendering::Universal::ClipperBase::DeleteFromAEL(::UnityEngine::Rendering::Universal::TEdge* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperBase*>::get(), "DeleteFromAEL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ClipperBase::ClipperBase() {}
